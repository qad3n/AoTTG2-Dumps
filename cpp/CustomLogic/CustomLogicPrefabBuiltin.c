// Type: CustomLogic.CustomLogicPrefabBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrefabBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPrefabBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x412d950

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  uint in_EAX;
  uint uVar4;
  uint32_t uVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar8;
  il2cpp_array_size_t iVar9;
  System_String_o *pSVar10;
  System_String_o *str2;
  System_Exception_o *pSVar11;
  undefined8 uVar12;
  System_ArgumentException_o *__this;
  System_Func_T__object__o *pSVar13;
  System_Action_T__object__o *pSVar14;
  System_Func_T__object____object__o *function;
  MethodInfo *in_RCX;
  System_Exception_o **ppSVar15;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  System_Exception_o *pSStack_40;
  System_Exception_o *pSStack_38;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057aca73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrefabBuiltin);
    g_data_057aca73 = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if (args == (System_Object_array *)0x0) {
    iVar9 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar9 = args->max_length;
    if (iVar9 == 0) {
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPrefabBuiltin);
      CustomLogic_CustomLogicPrefabBuiltin___ctor(pCVar8,method);
      return pCVar8;
    }
    if ((int)iVar9 == 2) {
      pIVar2 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,MethodInfo_String_ConvertTo_String);
      if ((int)args->max_length < 2) {
        uVar4 = 0;
      }
      else {
        pIVar2 = args->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPrefabBuiltin);
      CustomLogic_CustomLogicPrefabBuiltin___ctor_402cfa0(pCVar8,pSVar7,uVar4 & 0xff,in_RCX);
      return pCVar8;
    }
  }
  uStack_28 = CONCAT44((int)iVar9,(uint)uStack_28);
  pSVar7 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPrefabBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar11 = (System_Exception_o *)System_String__Concat_3af7150(pSVar10,pSVar7,str2,(MethodInfo *)0x0);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)pSVar11,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPrefabBuiltin_CreateInstance);
  pSStack_40 = (System_Exception_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar15 = &pSStack_40;
  pSStack_38 = pSVar11;
  if (g_data_057aca74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Asset");
    il2cpp_runtime_helper_023445d0(&"Scale");
    il2cpp_runtime_helper_023445d0(&"CollideMode");
    il2cpp_runtime_helper_023445d0(&"AssetType");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Visible");
    il2cpp_runtime_helper_023445d0(&"Active");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    il2cpp_runtime_helper_023445d0(&"Static");
    il2cpp_runtime_helper_023445d0(&"CollideWith");
    il2cpp_runtime_helper_023445d0(&"ClearComponents");
    il2cpp_runtime_helper_023445d0(&"PhysicsMaterial");
    g_data_057aca74 = '\x01';
  }
  uVar5 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)__this,(MethodInfo *)0x0);
  if (uVar5 < 0x28528e12) {
    if (uVar5 < 0x18a43c5c) {
      if (uVar5 == 0x232777f) {
        bVar6 = System_String__op_Equality((System_String_o *)__this,"Rotation",(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_40 = pSStack_38;
          if (g_data_057aca7c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Rotation_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
            g_data_057aca7c = '\x01';
          }
          pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor();
          pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return pCVar8;
        }
      }
      else if (uVar5 == 0xfe07306) {
        bVar6 = System_String__op_Equality((System_String_o *)__this,"Name",(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_40 = pSStack_38;
          if (g_data_057aca7a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Name_g____setter_7_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
            g_data_057aca7a = '\x01';
          }
          pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor();
          pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return pCVar8;
        }
      }
      else if ((uVar5 == 0x18a43c5b) &&
              (bVar6 = System_String__op_Equality((System_String_o *)__this,"Static",(MethodInfo *)0x0),
              (char)bVar6 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = pSStack_38;
        if (g_data_057aca78 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Static_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Static_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca78 = '\x01';
        }
        pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return pCVar8;
      }
    }
    else if (uVar5 == 0x1f89134f) {
      bVar6 = System_String__op_Equality((System_String_o *)__this,"Active",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = pSStack_38;
        if (g_data_057aca77 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Active_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Active_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca77 = '\x01';
        }
        pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return pCVar8;
      }
    }
    else if (uVar5 == 0x23922d03) {
      bVar6 = System_String__op_Equality((System_String_o *)__this,"AssetType",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar15 = (System_Exception_o **)&uStack_28;
          pSVar11 = pSStack_38;
        }
        else {
          ppSVar15 = (System_Exception_o **)&uStack_28;
          pSVar11 = pSStack_38;
        }
        goto CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType;
      }
    }
    else if ((uVar5 == 0x28528e11) &&
            (bVar6 = System_String__op_Equality((System_String_o *)__this,"Scale",(MethodInfo *)0x0),
            (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = pSStack_38;
      if (g_data_057aca7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_10_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca7d = '\x01';
      }
      pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return pCVar8;
    }
  }
  else if (uVar5 < 0x6f79efb7) {
    if (uVar5 == 0x384cf68a) {
      bVar6 = System_String__op_Equality((System_String_o *)__this,"CollideMode",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = pSStack_38;
        if (g_data_057aca7e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideMode_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideMode_g____setter_11);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca7e = '\x01';
        }
        pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return pCVar8;
      }
    }
    else if (uVar5 == 0x592a4941) {
      bVar6 = System_String__op_Equality((System_String_o *)__this,"Visible",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = pSStack_38;
        if (g_data_057aca79 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Visible_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Visible_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca79 = '\x01';
        }
        pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return pCVar8;
      }
    }
    else if ((uVar5 == 0x6f79efb6) &&
            (bVar6 = System_String__op_Equality((System_String_o *)__this,"ClearComponents",(MethodInfo *)0x0),
            (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = pSStack_38;
      if (g_data_057aca81 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearComponents_b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca81 = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,function);
      }
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar8,function,MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
      return pCVar8;
    }
  }
  else if (uVar5 < 0x94e7d8c2) {
    if (uVar5 == 0x829f123b) {
      bVar6 = System_String__op_Equality((System_String_o *)__this,"Asset",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = pSStack_38;
        if (g_data_057aca76 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Asset_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Asset_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca76 = '\x01';
        }
        pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return pCVar8;
      }
    }
    else if ((uVar5 == 0x94e7d8c1) &&
            (bVar6 = System_String__op_Equality((System_String_o *)__this,"CollideWith",(MethodInfo *)0x0),
            (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = pSStack_38;
      if (g_data_057aca7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideWith_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideWith_g____setter_12);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca7f = '\x01';
      }
      pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return pCVar8;
    }
  }
  else if (uVar5 == 0xa3dd2697) {
    bVar6 = System_String__op_Equality((System_String_o *)__this,"PhysicsMaterial",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = pSStack_38;
      if (g_data_057aca80 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PhysicsMaterial_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PhysicsMaterial_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca80 = '\x01';
      }
      pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return pCVar8;
    }
  }
  else if ((uVar5 == 0xe27f342a) &&
          (bVar6 = System_String__op_Equality((System_String_o *)__this,"Position",(MethodInfo *)0x0),
          (char)bVar6 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = pSStack_38;
    if (g_data_057aca7b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_8_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Position_g____setter_8_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      g_data_057aca7b = '\x01';
    }
    pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    System_Func_object__object____ctor();
    pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    System_Action_object__object____ctor();
    pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    return pCVar8;
  }
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPrefabBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(pSVar7,(System_String_o *)__this,pSVar10,(MethodInfo *)0x0);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar12);
  System_Exception___ctor_3cf6120(pSVar11,unaff_R14,(MethodInfo *)0x0);
  uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar11,uVar12);
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType:
  *(undefined8 *)((long)ppSVar15 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar15 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)ppSVar15 + -0x18) = pSVar11;
  if (g_data_057aca75 == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e0ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e0d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AssetType_g____getter_2);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e0e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__AssetType_g____setter_2_1);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e0ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e0fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e106;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca75 = '\x01';
  }
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e11c;
  pSVar13 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e135;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e144;
  pSVar14 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e15d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e16c;
  pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412e187;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar13,pSVar14,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return pCVar8;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x412fa10

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x412fa80

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearComponents>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0 (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPrefabBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x412fa90

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0
          (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPrefabBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Controllers_BaseTitanAIController_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  SimpleJSONFixed_JSONNode_c *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_06;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_07;
  undefined1 uVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  undefined4 extraout_var_16;
  undefined4 extraout_var_17;
  undefined4 extraout_var_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  undefined4 extraout_var_21;
  undefined4 extraout_var_22;
  Il2CppObject *extraout_RAX_00;
  UnityEngine_Transform_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_08;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  undefined4 extraout_var_25;
  Il2CppObject *extraout_RAX_01;
  Il2CppRGCTXData *pIVar10;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  long *plVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_09;
  undefined1 extraout_DL;
  long extraout_RDX;
  Il2CppClass *pIVar14;
  CustomLogic_CustomLogicCharacterBuiltin_c *pCVar15;
  CustomLogic_CustomLogicCharacterBuiltin_c *pCVar16;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar17;
  long lVar18;
  Characters_BaseCharacter_o *pCVar19;
  Characters_BaseCharacter_o *pCVar20;
  Il2CppClass *pIVar21;
  float fVar22;
  undefined4 uVar23;
  uint uVar24;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar25;
  undefined8 in_stack_fffffffffffffb08;
  Il2CppClass *in_stack_fffffffffffffb10;
  undefined4 in_stack_fffffffffffffb18;
  float in_stack_fffffffffffffb1c;
  undefined8 in_stack_fffffffffffffb20;
  Il2CppRGCTXData *pIVar26;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar27;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar28;
  Il2CppRGCTXData *pIVar29;
  char *in_stack_fffffffffffffb40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar30;
  undefined1 auStack_4b0 [24];
  _union_233085 _Stack_498;
  Il2CppClass *pIStack_490;
  Il2CppType *pIStack_488;
  System_Collections_Generic_List_T__o *pSStack_480;
  _union_13 _Stack_478;
  _union_14 _Stack_470;
  undefined1 auStack_468 [80];
  undefined1 auStack_418 [88];
  float fStack_350;
  float fStack_34c;
  
  if (__c != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAIController);
    g_data_057aca90 = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)__c,
             (MethodInfo *)0x0);
  pCVar17 = (CustomLogic_CustomLogicCharacterBuiltin_o *)((long)__this + 0x38);
  ((CustomLogic_CustomLogicCharacterBuiltin_o *)((long)__this + 0x38))->klass =
       (CustomLogic_CustomLogicCharacterBuiltin_c *)__c;
  pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)__c;
  il2cpp_runtime_helper_022b4080();
  if ((CustomLogic_CustomLogicCharacterBuiltin_c *)__c != (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0) {
    pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__c,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAIController);
    ((CustomLogic_CustomLogicCharacterBuiltin_o *)((long)__this + 0x38))->monitor = pIVar8;
    pIVar8 = (Il2CppObject *)
             il2cpp_runtime_helper_022b4080(&((CustomLogic_CustomLogicCharacterBuiltin_o *)((long)__this + 0x38))->monitor
                                ,pIVar8);
    return pIVar8;
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (pCVar17[1].klass != (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0) {
    return pIVar8;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (pCVar17[1].klass != (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar17[1].klass,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
    }
    if ((Characters_BaseTitan_o *)pCVar17[1].klass != (Characters_BaseTitan_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar17[1].klass,fVar22,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  lVar18 = 0;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar18 + 0x38) != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)(lVar18 + 0x38);
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_00,bVar7);
    }
    pIVar8 = *(Il2CppObject **)(lVar18 + 0x38);
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x17].klass = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar19->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_01,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)((long)&pIVar8[0x17].klass + 4) = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)((long)&pIVar8[0x17].monitor + 4) = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar19->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x17].monitor = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x18].monitor = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar19->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)((long)&pIVar8[0x18].klass + 4) = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x18].klass = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar19->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x12].monitor = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)((long)&pIVar8[0x12].monitor + 4) = uVar23;
      return pIVar8;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar19->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x13].klass = uVar23;
      return pIVar8;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)CONCAT44(extraout_var_10,bVar7);
    uVar23 = 0;
    if (((char)bVar7 == '\0') ||
       ((pSVar13 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft,
        pSVar13 != (System_String_o *)0x0 &&
        ((*(char *)&pSVar13[5].klass == '\0' ||
         (pSVar13 = (pCVar20->fields).RichTextName, pSVar13 != (System_String_o *)0x0)))))) {
      return (Il2CppObject *)pSVar13;
    }
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90(uVar23);
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pSVar13 != (System_String_o *)0x0) {
        if ((*(float *)&pSVar13[2].monitor != fVar22) || (NAN(*(float *)&pSVar13[2].monitor) || NAN(fVar22)))
        {
          *(float *)&pSVar13[2].monitor = fVar22;
          pSVar13[7].fields._stringLength = 0;
        }
        return pIVar8;
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)CONCAT44(extraout_var_12,bVar7);
    uVar23 = 0;
    if (((char)bVar7 == '\0') ||
       ((pSVar13 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft,
        pSVar13 != (System_String_o *)0x0 &&
        ((*(char *)&pSVar13[5].klass == '\0' ||
         (pSVar13 = (pCVar20->fields).RichTextName, pSVar13 != (System_String_o *)0x0)))))) {
      return (Il2CppObject *)pSVar13;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90(uVar23);
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        *(undefined4 *)((long)&pSVar13[3].klass + 4) = uVar23;
        return (Il2CppObject *)pSVar13;
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)CONCAT44(extraout_var_14,bVar7);
    uVar23 = 0;
    if (((char)bVar7 == '\0') ||
       ((pSVar13 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft,
        pSVar13 != (System_String_o *)0x0 &&
        ((*(char *)&pSVar13[5].klass == '\0' ||
         (pSVar13 = (pCVar20->fields).RichTextName, pSVar13 != (System_String_o *)0x0)))))) {
      return (Il2CppObject *)pSVar13;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90(uVar23);
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        *(undefined4 *)&pSVar13[3].monitor = uVar23;
        return (Il2CppObject *)pSVar13;
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)CONCAT44(extraout_var_16,bVar7);
    uVar23 = 0;
    if (((char)bVar7 == '\0') ||
       ((pSVar13 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft,
        pSVar13 != (System_String_o *)0x0 &&
        ((*(char *)&pSVar13[5].klass == '\0' ||
         (pSVar13 = (pCVar20->fields).RichTextName, pSVar13 != (System_String_o *)0x0)))))) {
      return (Il2CppObject *)pSVar13;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90(uVar23);
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        *(undefined4 *)&pSVar13[3].klass = uVar23;
        return (Il2CppObject *)pSVar13;
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)CONCAT44(extraout_var_18,bVar7);
    uVar23 = 0;
    if (((char)bVar7 == '\0') ||
       ((pSVar13 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft,
        pSVar13 != (System_String_o *)0x0 &&
        ((*(char *)&pSVar13[5].klass == '\0' ||
         (pSVar13 = (pCVar20->fields).RichTextName, pSVar13 != (System_String_o *)0x0)))))) {
      return (Il2CppObject *)pSVar13;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90(uVar23);
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        *(undefined4 *)((long)&pSVar13[3].monitor + 4) = uVar23;
        return (Il2CppObject *)pSVar13;
      }
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)((long)&pIVar8[0x15].monitor + 4) = uVar23;
      return pIVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)0x0;
    }
    lVar18 = *(long *)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (lVar18 != 0) {
      if (*(char *)(lVar18 + 0x78) == '\0') {
        return (Il2CppObject *)0x0;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        return (Il2CppObject *)(ulong)(*(char *)((long)&pSVar13[9].monitor + 5) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    uVar6 = SUB81(pCVar15,0);
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pSVar13 = (pCVar20->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        *(undefined1 *)((long)&pSVar13[9].monitor + 5) = uVar6;
        return (Il2CppObject *)pSVar13;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)0x0;
    }
    lVar18 = *(long *)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (lVar18 != 0) {
      if (*(char *)(lVar18 + 0x78) == '\0') {
        return (Il2CppObject *)0x0;
      }
      pSVar13 = (pCVar19->fields).RichTextName;
      if (pSVar13 != (System_String_o *)0x0) {
        return (Il2CppObject *)(ulong)(*(char *)((long)&pSVar13[9].monitor + 4) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  pCVar16 = pCVar15;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar16 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_22,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      pCVar3 = (Controllers_BaseTitanAIController_o *)(pCVar20->fields).RichTextName;
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pCVar3 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__set_AIEnabled(pCVar3,(uint)pCVar15 & 0xff,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057aca91 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca91 = '\x01';
  }
  lVar18 = *(long *)&(pCVar19->fields)._disableKinematicTimeLeft;
  if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0xf8), lVar18 != 0)) &&
     (pCVar20 = *(Characters_BaseCharacter_o **)(lVar18 + 0x68), pCVar20 != (Characters_BaseCharacter_o *)0x0)
     ) {
    pCVar16 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar20,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar25 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      __this_08 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_08,UVar25,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_08;
    }
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pCVar20->fields)._disableKinematicTimeLeft != 0) {
    return pIVar8;
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pCVar16 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar8[0x28].klass = uVar23;
      return pIVar8;
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields)._disableKinematicTimeLeft;
  pCVar15 = pCVar16;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pCVar15 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_24,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar19->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[6].monitor != '\0') {
        return pIVar8;
      }
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      if (pCVar16 != (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0) {
        pSVar13 = (pCVar19->fields).RichTextName;
        pCVar20 = (Characters_BaseCharacter_o *)0x0;
        if (pSVar13 != (System_String_o *)0x0) {
          fVar22 = (float)(pCVar16->_1).this_arg.bits;
          *(void **)((long)&pSVar13[4].monitor + 4) = (pCVar16->_1).this_arg.data;
          *(float *)&pSVar13[4].fields._firstChar = fVar22;
          *(undefined1 *)((long)&pSVar13[5].klass + 4) = 1;
          *(undefined4 *)&pSVar13[5].monitor = uVar23;
          *(undefined1 *)((long)&pSVar13[5].monitor + 4) = extraout_DL;
          *(undefined1 *)&pSVar13[5].fields._firstChar = 0;
          return pIVar8;
        }
      }
    }
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar14 = *(Il2CppClass **)&(pCVar20->fields)._disableKinematicTimeLeft;
  pCVar16 = pCVar15;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pCVar16 = (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pIVar14,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields)._disableKinematicTimeLeft;
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[6].monitor != '\0') {
        return pIVar8;
      }
      if (*(char *)&pIVar8[7].monitor == '\0') {
        return pIVar8;
      }
      if (pCVar15 != (CustomLogic_CustomLogicCharacterBuiltin_c *)0x0) {
        pCVar3 = (Controllers_BaseTitanAIController_o *)(pCVar20->fields).RichTextName;
        pIVar14 = (Il2CppClass *)0x0;
        if (pCVar3 != (Controllers_BaseTitanAIController_o *)0x0) {
          Controllers_BaseTitanAIController__MoveToExact
                    (pCVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar15->_1).this_arg,
                     fVar22,1.0,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MoveToExactCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass67_0);
    g_data_057aca92 = '\x01';
  }
  pIVar10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass67_0);
  pIVar29 = pIVar10;
  System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
  if (pIVar10 != (Il2CppRGCTXData *)0x0) {
    pIVar10[2].method = (MethodInfo *)pCVar16;
    il2cpp_runtime_helper_022b4080(pIVar10 + 2,pCVar16);
    pIVar10[3].klass = pIVar14;
    il2cpp_runtime_helper_022b4080(pIVar10 + 3);
    pIVar29 = *(Il2CppRGCTXData **)&(pIVar14->_1).this_arg.bits;
    if (pIVar29 != (Il2CppRGCTXData *)0x0) {
      bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pIVar29,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar7);
      }
      pIVar8 = *(Il2CppObject **)&(pIVar14->_1).this_arg.bits;
      if (pIVar8 != (Il2CppObject *)0x0) {
        if (*(char *)&pIVar8[6].monitor != '\0') {
          return pIVar8;
        }
        if (*(char *)&pIVar8[7].monitor == '\0') {
          return pIVar8;
        }
        pIVar14 = (pIVar14->_1).element_class;
        pIVar10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
        pIVar29 = pIVar10;
        System_Action___ctor();
        if ((extraout_RDX != 0) && (pIVar14 != (Il2CppClass *)0x0)) {
          fVar22 = *(float *)(extraout_RDX + 0x38);
          uVar2 = *(undefined8 *)(extraout_RDX + 0x30);
          *(undefined8 *)((long)&(pIVar14->_1).typeMetadataHandle + 4) = uVar2;
          *(float *)((long)&(pIVar14->_1).interopData + 4) = fVar22;
          *(undefined1 *)((long)&(pIVar14->_1).klass + 4) = 1;
          *(undefined4 *)&(pIVar14->_1).fields = uVar23;
          *(undefined1 *)((long)&(pIVar14->_1).fields + 4) = 1;
          *(undefined1 *)((long)&(pIVar14->_1).events + 4) = 1;
          lVar18 = *(long *)&(pIVar14->_1).byval_arg.bits;
          pIVar21 = pIVar14;
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x70) != 0)) {
            pUVar9 = *(UnityEngine_Transform_o **)(*(long *)(lVar18 + 0x70) + 0x10);
            pIVar21 = (Il2CppClass *)0x0;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              fVar1 = *(float *)(lVar18 + 0x174);
              UVar25 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              fStack_350 = (float)uVar2;
              fStack_34c = (float)((ulong)uVar2 >> 0x20);
              fStack_350 = UVar25.fields.x - fStack_350;
              fStack_34c = UVar25.fields.y - fStack_34c;
              fVar22 = UVar25.fields.z - fVar22;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar22 = fVar22 * fVar22 + fStack_34c * fStack_34c + fStack_350 * fStack_350;
              if (fVar22 < 0.0) {
                fVar22 = sqrtf(fVar22);
              }
              else {
                fVar22 = SQRT(fVar22);
              }
              *(float *)&(pIVar14->_1).events = fVar1 * fVar22 + in_XMM1_Da;
              (pIVar14->_1).properties = pIVar10;
              pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&(pIVar14->_1).properties,pIVar10);
              return pIVar8;
            }
          }
          il2cpp_runtime_helper_022b2c90(pIVar21,pIVar10,0);
          *(undefined1 *)((long)&(pIVar21->_1).klass + 4) = 0;
          if (*(int *)&(pIVar21->_1).this_arg.data == 7) {
            *(undefined4 *)&(pIVar21->_1).this_arg.data = 0;
            lVar18 = *(long *)&(pIVar21->_1).byval_arg.bits;
            if (lVar18 == 0) {
              pIVar14 = pIVar21;
              uVar23 = il2cpp_runtime_helper_022b2c90();
              *(undefined4 *)&(pIVar14->_1).this_arg.data = 0;
              lVar18 = *(long *)&(pIVar14->_1).byval_arg.bits;
              if (lVar18 != 0) {
                *(undefined1 *)(lVar18 + 0xcc) = 0;
                *(undefined1 *)(lVar18 + 0x10a) = 0;
                UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
                *(undefined4 *)&(pIVar14->_1).this_arg.data = 7;
                *(undefined4 *)&(pIVar14->_1).interfaceOffsets = uVar23;
                return extraout_RAX_03;
              }
              il2cpp_runtime_helper_022b2c90();
              auStack_418._72_8_ = pIVar21;
              if (g_data_057adccd == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Characters_TitanAttackInfo_ge);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
                il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                il2cpp_runtime_helper_023445d0(&"FocusTime");
                il2cpp_runtime_helper_023445d0(&"FarAttackMaxRange");
                il2cpp_runtime_helper_023445d0(&"IsRun");
                il2cpp_runtime_helper_023445d0(&"FarAttackMinRange");
                il2cpp_runtime_helper_023445d0(&"AttackWait");
                il2cpp_runtime_helper_023445d0(&"DetectRange");
                il2cpp_runtime_helper_023445d0(&"Attacks");
                il2cpp_runtime_helper_023445d0(&"TurnAngle");
                il2cpp_runtime_helper_023445d0(&"ChaseAngleTimeMax");
                il2cpp_runtime_helper_023445d0(&"Type");
                il2cpp_runtime_helper_023445d0(&"FocusRange");
                il2cpp_runtime_helper_023445d0(&"ChaseAngleMinRange");
                il2cpp_runtime_helper_023445d0(&"CloseAttackRange");
                il2cpp_runtime_helper_023445d0(&"*");
                il2cpp_runtime_helper_023445d0(&"IsTurn");
                il2cpp_runtime_helper_023445d0(&"FarAttackCooldown");
                il2cpp_runtime_helper_023445d0(&"ChaseAngleTimeMin");
                g_data_057adccd = '\x01';
              }
              auStack_468._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
              auStack_468._56_8_ = (Il2CppRGCTXData *)0x0;
              auStack_468._32_8_ = (Il2CppClass *)0x0;
              auStack_468._40_8_ = (Il2CppType *)0x0;
              auStack_468._16_8_ = (Il2CppRGCTXData *)0x0;
              auStack_468._24_8_ = (Il2CppObject *)0x0;
              auStack_468._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_468._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_468._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
              auStack_418._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
              auStack_418._56_8_ = (Il2CppRGCTXData *)0x0;
              auStack_418._32_8_ = (Il2CppClass *)0x0;
              auStack_418._40_8_ = (Il2CppType *)0x0;
              auStack_418._16_8_ = (Il2CppRGCTXData *)0x0;
              auStack_418._24_8_ = (Il2CppObject *)0x0;
              auStack_418._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_418._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_418._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
              pSVar27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              pSVar28 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              pIVar29 = (Il2CppRGCTXData *)0x0;
              if ((pIVar10 != (Il2CppRGCTXData *)0x0) &&
                 (plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                              (pIVar10,"DetectRange",pIVar10->klass->vtable[7].method),
                 plVar11 != (long *)0x0)) {
                uVar24 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                (pIVar14->_1).this_arg.bits = uVar24;
                plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                            (pIVar10,"CloseAttackRange",pIVar10->klass->vtable[7].method);
                if (plVar11 != (long *)0x0) {
                  uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                  *(undefined4 *)&(pIVar14->_1).this_arg.field_0xc = uVar23;
                  plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                              (pIVar10,"FarAttackMinRange",pIVar10->klass->vtable[7].method);
                  if (plVar11 != (long *)0x0) {
                    uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                    *(undefined4 *)&(pIVar14->_1).element_class = uVar23;
                    plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                (pIVar10,"FarAttackMaxRange",pIVar10->klass->vtable[7].method);
                    if (plVar11 != (long *)0x0) {
                      uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                      *(undefined4 *)((long)&(pIVar14->_1).element_class + 4) = uVar23;
                      plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                  (pIVar10,"FarAttackCooldown",pIVar10->klass->vtable[7].method);
                      if (plVar11 != (long *)0x0) {
                        uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                        *(undefined4 *)&(pIVar14->_1).castClass = uVar23;
                        plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                    (pIVar10,"FocusRange",pIVar10->klass->vtable[7].method);
                        if (plVar11 != (long *)0x0) {
                          uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                          *(undefined4 *)((long)&(pIVar14->_1).castClass + 4) = uVar23;
                          plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                      (pIVar10,"FocusTime",pIVar10->klass->vtable[7].method);
                          if (plVar11 != (long *)0x0) {
                            uVar23 = (**(code **)(*plVar11 + 0x388))
                                               (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                            *(undefined4 *)&(pIVar14->_1).declaringType = uVar23;
                            plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                        (pIVar10,"AttackWait",pIVar10->klass->vtable[7].method
                                                        );
                            if (plVar11 != (long *)0x0) {
                              uVar23 = (**(code **)(*plVar11 + 0x388))
                                                 (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                              *(undefined4 *)((long)&(pIVar14->_1).declaringType + 4) = uVar23;
                              plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                          (pIVar10,"ChaseAngleTimeMin",
                                                           pIVar10->klass->vtable[7].method);
                              if (plVar11 != (long *)0x0) {
                                uVar23 = (**(code **)(*plVar11 + 0x388))
                                                   (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                                *(undefined4 *)&(pIVar14->_1).parent = uVar23;
                                plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                            (pIVar10,"ChaseAngleTimeMax",
                                                             pIVar10->klass->vtable[7].method);
                                if (plVar11 != (long *)0x0) {
                                  uVar23 = (**(code **)(*plVar11 + 0x388))
                                                     (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                                  *(undefined4 *)((long)&(pIVar14->_1).parent + 4) = uVar23;
                                  plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                              (pIVar10,"ChaseAngleMinRange",
                                                               pIVar10->klass->vtable[7].method);
                                  if (plVar11 != (long *)0x0) {
                                    uVar23 = (**(code **)(*plVar11 + 0x388))
                                                       (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                                    *(undefined4 *)&(pIVar14->_1).generic_class = uVar23;
                                    plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                                (pIVar10,"IsRun",
                                                                 pIVar10->klass->vtable[7].method);
                                    if (plVar11 != (long *)0x0) {
                                      uVar6 = (**(code **)(*plVar11 + 0x3a8))
                                                        (plVar11,*(undefined8 *)(*plVar11 + 0x3b0));
                                      *(undefined1 *)((long)&(pIVar14->_1).generic_class + 4) = uVar6;
                                      plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                                  (pIVar10,"IsTurn",
                                                                   pIVar10->klass->vtable[7].method);
                                      if (plVar11 != (long *)0x0) {
                                        uVar6 = (**(code **)(*plVar11 + 0x3a8))
                                                          (plVar11,*(undefined8 *)(*plVar11 + 0x3b0));
                                        *(undefined1 *)((long)&(pIVar14->_1).generic_class + 5) = uVar6;
                                        plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                                    (pIVar10,"TurnAngle",
                                                                     pIVar10->klass->vtable[7].method);
                                        if (plVar11 != (long *)0x0) {
                                          uVar23 = (**(code **)(*plVar11 + 0x388))
                                                             (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                                          *(undefined4 *)&(pIVar14->_1).typeMetadataHandle = uVar23;
                                          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o
                                                     **)(*(long *)(TypeInfo_CharacterData + 0xb8) + 0x10);
                                          plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                                      (pIVar10,"Type",
                                                                       pIVar10->klass->vtable[7].method);
                                          in_stack_fffffffffffffb10 = pIVar14;
                                          if ((plVar11 != (long *)0x0) &&
                                             (pIVar8 = (Il2CppObject *)
                                                       (**(code **)(*plVar11 + 0x1c8))
                                                                 (plVar11,*(undefined8 *)(*plVar11 + 0x1d0)),
                                             pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                            pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                               (pSVar4,pIVar8,MethodInfo_Dictionary_2_System_String_Characters_TitanAttackInfo_ge);
                                            pSVar30 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c
                                                       *)&(pIVar14->_1).implementedInterfaces;
                                            (pIVar14->_1).implementedInterfaces = &pIVar8->klass;
                                            il2cpp_runtime_helper_022b4080(pSVar30,pIVar8);
                                            pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                                                      (*pIVar10->klass->vtable[7].methodPtr)
                                                                (pIVar10,"Attacks",
                                                                 pIVar10->klass->vtable[7].method);
                                            if (pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                              SimpleJSONFixed_JSONNode__get_Keys
                                                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                         auStack_4b0,pSVar12,(MethodInfo *)0x0);
                                              auStack_418._64_8_ = _Stack_470;
                                              auStack_418._48_8_ = pSStack_480;
                                              auStack_418._56_8_ = _Stack_478;
                                              auStack_418._32_8_ = pIStack_490;
                                              auStack_418._40_8_ = pIStack_488;
                                              auStack_418._16_8_ = auStack_4b0._16_8_;
                                              auStack_418._24_8_ = _Stack_498;
                                              auStack_418._0_8_ = auStack_4b0._0_8_;
                                              auStack_418._8_8_ = auStack_4b0._8_8_;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary
                                                   = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                     in_stack_fffffffffffffb10;
                                              __this_04.fields.m_Enumerator.fields._0_8_ =
                                                   in_stack_fffffffffffffb08;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._version =
                                                   in_stack_fffffffffffffb18;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._index =
                                                   (int32_t)in_stack_fffffffffffffb1c;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._current.
                                              fields.key = (Il2CppObject *)in_stack_fffffffffffffb20;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._current.
                                              fields.value = (Il2CppObject *)pSVar27;
                                              __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                                                   pSVar28;
                                              __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                                                   (System_Collections_Generic_List_T__o *)pIVar29;
                                              __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                                   in_stack_fffffffffffffb40;
                                              __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
                                                   (SimpleJSONFixed_JSONNode_o *)pSVar30;
                                              SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                                                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                         auStack_4b0,__this_04,(MethodInfo *)auStack_418);
                                              auStack_468._64_8_ = _Stack_470;
                                              auStack_468._48_8_ = pSStack_480;
                                              auStack_468._56_8_ = _Stack_478;
                                              auStack_468._32_8_ = pIStack_490;
                                              auStack_468._40_8_ = pIStack_488;
                                              auStack_468._16_8_ = auStack_4b0._16_8_;
                                              auStack_468._24_8_ = _Stack_498;
                                              auStack_468._0_8_ = auStack_4b0._0_8_;
                                              auStack_468._8_8_ = auStack_4b0._8_8_;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary
                                                   = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                     in_stack_fffffffffffffb10;
                                              __this_05.fields.m_Enumerator.fields._0_8_ =
                                                   in_stack_fffffffffffffb08;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._version =
                                                   in_stack_fffffffffffffb18;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._index =
                                                   (int32_t)in_stack_fffffffffffffb1c;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._current.
                                              fields.key = (Il2CppObject *)in_stack_fffffffffffffb20;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._current.
                                              fields.value = (Il2CppObject *)pSVar27;
                                              __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                                                   pSVar28;
                                              __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
                                                   (System_Collections_Generic_List_T__o *)pIVar29;
                                              __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                                   in_stack_fffffffffffffb40;
                                              __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
                                                   (SimpleJSONFixed_JSONNode_o *)pSVar30;
                                              bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                                (__this_05,(MethodInfo *)auStack_468);
                                              if ((char)bVar7 != '\0') {
                                                pIVar26 = pIVar10;
                                                do {
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields.
                                                  _dictionary = (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )in_stack_fffffffffffffb10;
                                                  __this_07.fields.m_Enumerator.fields._0_8_ =
                                                       in_stack_fffffffffffffb08;
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields.
                                                  _version = in_stack_fffffffffffffb18;
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields._index
                                                       = (int32_t)in_stack_fffffffffffffb1c;
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields.
                                                  _current.fields.key = (Il2CppObject *)pIVar26;
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields.
                                                  _current.fields.value = (Il2CppObject *)pSVar27;
                                                  __this_07.fields.m_Enumerator.fields.m_Object.fields._32_8_
                                                       = pSVar28;
                                                  __this_07.fields.m_Enumerator.fields.m_Array.fields._list =
                                                       (System_Collections_Generic_List_T__o *)pIVar29;
                                                  __this_07.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                                       in_stack_fffffffffffffb40;
                                                  __this_07.fields.m_Enumerator.fields.m_Array.fields._current
                                                       = (SimpleJSONFixed_JSONNode_o *)pSVar30;
                                                  pSVar13 = 
                                                       SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                                                 (__this_07,(MethodInfo *)auStack_468);
                                                  plVar11 = (long *)(*pIVar10->klass->vtable[7].methodPtr)
                                                                              (pIVar10,"Attacks",
                                                                               pIVar10->klass->vtable[7].
                                                                               method);
                                                  if (plVar11 == (long *)0x0) goto label_0428c634;
                                                  pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                                                            (**(code **)(*plVar11 + 0x1a8))
                                                                      (plVar11,pSVar13,
                                                                       *(undefined8 *)(*plVar11 + 0x1b0));
                                                  pIVar14 = in_stack_fffffffffffffb10;
                                                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                    pIVar14 = in_stack_fffffffffffffb10;
                                                  }
                                                  in_stack_fffffffffffffb1c =
                                                       SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0
                                                                 (pSVar12,(MethodInfo *)0x0);
                                                  in_stack_fffffffffffffb10 = pIVar14;
                                                  if (pSVar13 == (System_String_o *)0x0) goto label_0428c634;
                                                  bVar7 = System_String__EndsWith
                                                                    (pSVar13,"*",(MethodInfo *)0x0);
                                                  in_stack_fffffffffffffb10 = pIVar14;
                                                  if ((char)bVar7 == '\0') {
                                                    pSVar5 = (pIVar14->_1).methods;
                                                    if (pSVar5 == (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )0x0) goto label_0428c634;
                                                    System_Collections_Generic_Dictionary_object__float___Add
                                                              (pSVar5,(Il2CppObject *)pSVar13,
                                                               in_stack_fffffffffffffb1c,MethodInfo_Void_Add);
                                                  }
                                                  else {
                                                    pSVar13 = System_String__Substring_3af8da0
                                                                        (pSVar13,0,
                                                                         (pSVar13->fields)._stringLength + -1,
                                                                         (MethodInfo *)0x0);
                                                    __this_00 = (pSVar30->_1).image;
                                                    if ((__this_00 == (SimpleJSONFixed_JSONNode_c *)0x0) ||
                                                       (__this_09 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_00,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha),
                                                       __this_09 ==
                                                       (
                                                       System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                                       *)0x0)) goto label_0428c634;
                                                    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                                                              ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)auStack_4b0,__this_09,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                                                    pSVar27 = (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )auStack_4b0._0_8_;
                                                    pSVar28 = (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )auStack_4b0._8_8_;
                                                    pIVar29 = (Il2CppRGCTXData *)auStack_4b0._16_8_;
                                                    while (pIVar10 = pIVar29,
                                                          __this_02.fields._8_8_ = in_stack_fffffffffffffb10,
                                                          __this_02.fields._dictionary =
                                                               (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )in_stack_fffffffffffffb08,
                                                       __this_02.fields._currentKey._0_4_ =
                                                            in_stack_fffffffffffffb18,
                                                       __this_02.fields._currentKey._4_4_ =
                                                            in_stack_fffffffffffffb1c,
                                                       bVar7 = 
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                                                 (__this_02,
                                                                  (MethodInfo_3251B20 *)
                                                                  &stack0xfffffffffffffb28),
                                                       (char)bVar7 != '\0') {
                                                      if (pIVar10 == (Il2CppRGCTXData *)0x0) {
                                                        il2cpp_runtime_helper_022b2c90();
                                                        goto label_0428c634;
                                                      }
                                                      pIVar29 = pIVar10;
                                                      bVar7 = System_String__StartsWith
                                                                        ((System_String_o *)pIVar10,pSVar13,
                                                                         (MethodInfo *)0x0);
                                                      if ((char)bVar7 != '\0') {
                                                        pSVar5 = (pIVar14->_1).methods;
                                                        if (pSVar5 == (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )0x0) {
                                                         il2cpp_runtime_helper_022b2c90();
                                                         goto label_0428c634;
                                                       }
                                                       System_Collections_Generic_Dictionary_object__float___Add
                                                                 (pSVar5,(Il2CppObject *)pIVar10,
                                                                  in_stack_fffffffffffffb1c,MethodInfo_Void_Add);
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(pIVar14->_1).nestedTypes;
                                                       if (pSVar4 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         il2cpp_runtime_helper_022b2c90();
                                                         goto label_0428c634;
                                                       }
                                                       System_Collections_Generic_Dictionary_object__object___Add
                                                                 (pSVar4,(Il2CppObject *)pIVar10,
                                                                  (Il2CppObject *)pSVar13,MethodInfo_Void_Add);
                                                      }
                                                    }
                                                    __this_01.fields._8_8_ = in_stack_fffffffffffffb10;
                                                    __this_01.fields._dictionary =
                                                         (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )in_stack_fffffffffffffb08;
                                                    __this_01.fields._currentKey._0_4_ =
                                                         in_stack_fffffffffffffb18;
                                                    __this_01.fields._currentKey._4_4_ =
                                                         in_stack_fffffffffffffb1c;
                                                    pIVar29 = pIVar10;
                                                    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                                                              (__this_01,
                                                               (MethodInfo_3251B10 *)&stack0xfffffffffffffb28)
                                                    ;
                                                    pIVar10 = pIVar26;
                                                    pIVar26 = pIVar10;
                                                  }
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                                  _dictionary = (
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )in_stack_fffffffffffffb10;
                                                  __this_06.fields.m_Enumerator.fields._0_8_ =
                                                       in_stack_fffffffffffffb08;
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                                  _version = in_stack_fffffffffffffb18;
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields._index
                                                       = (int32_t)in_stack_fffffffffffffb1c;
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                                  _current.fields.key = (Il2CppObject *)pIVar26;
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                                  _current.fields.value = (Il2CppObject *)pSVar27;
                                                  __this_06.fields.m_Enumerator.fields.m_Object.fields._32_8_
                                                       = pSVar28;
                                                  __this_06.fields.m_Enumerator.fields.m_Array.fields._list =
                                                       (System_Collections_Generic_List_T__o *)pIVar29;
                                                  __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                                       in_stack_fffffffffffffb40;
                                                  __this_06.fields.m_Enumerator.fields.m_Array.fields._current
                                                       = (SimpleJSONFixed_JSONNode_o *)pSVar30;
                                                  bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                                    (__this_06,(MethodInfo *)auStack_468);
                                                } while ((char)bVar7 != '\0');
                                              }
                                              uVar24 = *(uint *)((long)&(pIVar14->_1).declaringType + 4);
                                              (pIVar14->_2).cctor_started = uVar24;
                                              return (Il2CppObject *)(ulong)uVar24;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
label_0428c634:
              il2cpp_runtime_helper_022b2c90();
              __this_03.fields._8_8_ = in_stack_fffffffffffffb10;
              __this_03.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffb08;
              __this_03.fields._currentKey._0_4_ = in_stack_fffffffffffffb18;
              __this_03.fields._currentKey._4_4_ = in_stack_fffffffffffffb1c;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_03,(MethodInfo_3251B10 *)&stack0xfffffffffffffb28);
              _Unwind_Resume(pIVar10);
            }
            *(undefined1 *)(lVar18 + 0xcc) = 0;
            *(undefined1 *)(lVar18 + 0x10a) = 0;
            fVar22 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
            *(float *)&(pIVar21->_1).interfaceOffsets = fVar22;
          }
          (pIVar21->_2).typeHierarchy = (Il2CppClass **)0x0;
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&pIVar21->_2,0);
          return pIVar8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar29,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x412daf0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057aca74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Asset");
    il2cpp_runtime_helper_023445d0(&"Scale");
    il2cpp_runtime_helper_023445d0(&"CollideMode");
    il2cpp_runtime_helper_023445d0(&"AssetType");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Visible");
    il2cpp_runtime_helper_023445d0(&"Active");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    il2cpp_runtime_helper_023445d0(&"Static");
    il2cpp_runtime_helper_023445d0(&"CollideWith");
    il2cpp_runtime_helper_023445d0(&"ClearComponents");
    il2cpp_runtime_helper_023445d0(&"PhysicsMaterial");
    g_data_057aca74 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x28528e12) {
    if (uVar3 < 0x18a43c5c) {
      if (uVar3 == 0x232777f) {
        bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca7c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Rotation_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
            g_data_057aca7c = '\x01';
          }
          pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xfe07306) {
        bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca7a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Name_g____setter_7_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
            g_data_057aca7a = '\x01';
          }
          pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x18a43c5b) &&
              (bVar4 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca78 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Static_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Static_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca78 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x1f89134f) {
      bVar4 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca77 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Active_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Active_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca77 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x23922d03) {
      bVar4 = System_String__op_Equality(name,"AssetType",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType;
      }
    }
    else if ((uVar3 == 0x28528e11) &&
            (bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_10_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca7d = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x6f79efb7) {
    if (uVar3 == 0x384cf68a) {
      bVar4 = System_String__op_Equality(name,"CollideMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca7e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideMode_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideMode_g____setter_11);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca7e = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x592a4941) {
      bVar4 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca79 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Visible_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Visible_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca79 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x6f79efb6) &&
            (bVar4 = System_String__op_Equality(name,"ClearComponents",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca81 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearComponents_b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca81 = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this;
    }
  }
  else if (uVar3 < 0x94e7d8c2) {
    if (uVar3 == 0x829f123b) {
      bVar4 = System_String__op_Equality(name,"Asset",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca76 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Asset_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Asset_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
          g_data_057aca76 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x94e7d8c1) &&
            (bVar4 = System_String__op_Equality(name,"CollideWith",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideWith_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideWith_g____setter_12);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca7f = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xa3dd2697) {
    bVar4 = System_String__op_Equality(name,"PhysicsMaterial",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca80 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PhysicsMaterial_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PhysicsMaterial_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
        g_data_057aca80 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe27f342a) &&
          (bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aca7b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_8_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Position_g____setter_8_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
      g_data_057aca7b = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    System_Func_object__object____ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    System_Action_object__object____ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPrefabBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057aca75 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e0ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e0d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AssetType_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e0e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__AssetType_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e0ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e0fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e106;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca75 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e11c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e135;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e144;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e15d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e16c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412e187;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__AssetType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType (const MethodInfo* method);
// 0x412e0b0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AssetType_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__AssetType_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca75 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Asset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset (const MethodInfo* method);
// 0x412e190

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Asset_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Asset_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca76 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x412e270

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Active_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Active_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca77 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x412e350

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Static_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Static_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca78 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x412e430

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Visible_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Visible_g____setter_6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca79 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x412e510

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Name_g____setter_7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x412e5f0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Position_g____setter_8_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x412e6d0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Rotation_g____setter_9_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x412e7b0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_10_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode (const MethodInfo* method);
// 0x412e890

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideMode_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideMode_g____setter_11);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideWith
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith (const MethodInfo* method);
// 0x412e970

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CollideWith_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CollideWith_g____setter_12);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__PhysicsMaterial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial (const MethodInfo* method);
// 0x412ea50

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PhysicsMaterial_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PhysicsMaterial_g____sette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object);
    g_data_057aca80 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPrefabBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreateMethodBinding__ClearComponents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents (const MethodInfo* method);
// 0x412eb30

CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (g_data_057aca81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearComponents_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca81 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPrefabBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x412ec80

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppType **ppIVar3;
  Il2CppType *pIVar4;
  void *pvVar5;
  long *plVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_Fields UVar8;
  bool_conflict bVar9;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar10;
  undefined8 uVar11;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar12;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar13;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar14;
  Il2CppObject *pIVar15;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  MethodInfo_33E0570 *obj;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar19;
  long lVar20;
  long lVar21;
  System_Collections_Generic_HashSet_object__o *pSVar22;
  MethodInfo_33E0570 *pMVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar24 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_1d0 [10];
  undefined1 auStack_180 [12];
  float fStack_174;
  undefined1 auStack_170 [16];
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_160;
  undefined8 uStack_158;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_150;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_110;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_108;
  float fStack_f4;
  undefined1 auStack_f0 [16];
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_e0;
  undefined8 uStack_d8;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_d0;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_b0;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_90;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo_33E0570 *pMStack_70;
  System_Collections_Generic_IEqualityComparer_T__c *pSStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057aca82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Asset");
    il2cpp_runtime_helper_023445d0(&"Scale");
    il2cpp_runtime_helper_023445d0(&"CollideMode");
    il2cpp_runtime_helper_023445d0(&"AssetType");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Visible");
    il2cpp_runtime_helper_023445d0(&"PersistsOwnership");
    il2cpp_runtime_helper_023445d0(&"Active");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    il2cpp_runtime_helper_023445d0(&"Static");
    il2cpp_runtime_helper_023445d0(&"CollideWith");
    il2cpp_runtime_helper_023445d0(&"ClearComponents");
    il2cpp_runtime_helper_023445d0(&"PhysicsMaterial");
    g_data_057aca82 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar22 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"PersistsOwnership",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AssetType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Asset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Active",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Static",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Visible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CollideMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CollideWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PhysicsMaterial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ClearComponents",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar22 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     ((pSVar22->fields)._comparer != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)) {
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  if (g_data_057aca83 == '\0') {
    uStack_40 = 0x412ef3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x412ef4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca83 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x412ef6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x412ef7c;
  pSVar16 = MethodInfo_String_ConvertTo_String;
  pMVar23 = obj;
  pSVar10 = (System_Collections_Generic_IEqualityComparer_T__c *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pSVar22 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (pSVar2 = (pSVar22->fields)._comparer, pMVar23 = (MethodInfo_33E0570 *)0x0,
     pSVar2 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)) {
    pSVar2[1].klass = pSVar10;
    uStack_40 = 0x412ef9a;
    il2cpp_runtime_helper_022b4080(pSVar2 + 1);
    pSVar2 = (pSVar22->fields)._comparer;
    pMVar23 = (MethodInfo_33E0570 *)0x0;
    pSVar16 = pSVar10;
    if (pSVar2 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
      pSVar10 = pSVar2->klass;
      pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)pSVar10->vtable[8].method;
      uStack_40 = 0x412efb3;
      uVar11 = (*pSVar10->vtable[8].methodPtr)();
      pSVar2 = (pSVar22->fields)._comparer;
      pMVar23 = (MethodInfo_33E0570 *)0x0;
      if (pSVar2 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
        pSVar16 = pSVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = pSVar16->vtable[9].methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)(pSVar2,uVar11,pSVar16->vtable[9].method,pSVar16,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  uStack_40 = 0x412efdf;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar23 != (MethodInfo_33E0570 *)0x0) && (pMVar23->parameters != (Il2CppType **)0x0)) {
    return;
  }
  pMStack_48 = (MethodInfo_33E0570 *)0x412effa;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSStack_50 = pSVar22;
  pMStack_48 = obj;
  if (g_data_057aca84 == '\0') {
    uStack_60 = 0x412f01f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_60 = 0x412f02b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x412f04a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x412f05c;
  pSVar10 = MethodInfo_String_ConvertTo_String;
  pSVar19 = pSVar16;
  pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pSVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar23 != (MethodInfo_33E0570 *)0x0) &&
     (ppIVar3 = pMVar23->parameters, pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0,
     ppIVar3 != (Il2CppType **)0x0)) {
    ppIVar3[3] = (Il2CppType *)pSVar12;
    uStack_60 = 0x412f07a;
    il2cpp_runtime_helper_022b4080(ppIVar3 + 3);
    pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    pSVar10 = pSVar12;
    if (pMVar23->parameters != (Il2CppType **)0x0) {
      pIVar4 = *pMVar23->parameters;
      pSVar10 = pIVar4[0x1c].data;
      uStack_60 = 0x412f093;
      uVar11 = (**(code **)&pIVar4[0x1b].bits)();
      ppIVar3 = pMVar23->parameters;
      pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      if (ppIVar3 != (Il2CppType **)0x0) {
        pIVar4 = *ppIVar3;
        (**(code **)&pIVar4[0x1c].bits)(ppIVar3,uVar11,pIVar4[0x1d].data,pIVar4,*(code **)&pIVar4[0x1c].bits);
        return;
      }
    }
  }
  uStack_60 = 0x412f0bf;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (pvVar5 = (pSVar19->_1).this_arg.data, pvVar5 != (void *)0x0)) {
    uStack_60 = CONCAT17(*(undefined1 *)((long)pvVar5 + 0x28),(undefined7)uStack_60);
    pSStack_68 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f0eb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  pSStack_68 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f0f2;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar23;
  pSStack_68 = pSVar16;
  if (g_data_057aca85 == '\0') {
    uStack_80 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_80 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x412f15c;
  pSVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pSVar12 = pSVar10;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pSVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (plVar6 = (pSVar19->_1).this_arg.data, pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , plVar6 != (long *)0x0)) {
    *(char *)(plVar6 + 5) = (char)bVar9;
    pSVar16 = *(System_Collections_Generic_IEqualityComparer_T__c **)(*plVar6 + 0x1c0);
    uStack_80 = 0x412f17d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = (pSVar19->_1).this_arg.data;
    pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      (**(code **)(lVar20 + 0x1c8))
                (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return;
    }
  }
  uStack_80 = 0x412f1a9;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar12 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (pvVar5 = (pSVar12->_1).this_arg.data, pvVar5 != (void *)0x0)) {
    uStack_80 = CONCAT17(*(undefined1 *)((long)pvVar5 + 0x29),(undefined7)uStack_80);
    pSStack_88 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f1db;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
    return;
  }
  pSStack_88 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f1e2;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pSStack_90 = pSVar19;
  pSStack_88 = pSVar10;
  if (g_data_057aca86 == '\0') {
    uStack_a0 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_a0 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x412f24c;
  pSVar10 = MethodInfo_Boolean_ConvertTo_Boolean;
  pSVar19 = pSVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pSVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pSVar12 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (plVar6 = (pSVar12->_1).this_arg.data, pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x29) = (char)bVar9;
    pSVar10 = *(System_Collections_Generic_IEqualityComparer_T__c **)(*plVar6 + 0x1c0);
    uStack_a0 = 0x412f26d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = (pSVar12->_1).this_arg.data;
    pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      (**(code **)(lVar20 + 0x1c8))
                (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return;
    }
  }
  uStack_a0 = 0x412f299;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (pvVar5 = (pSVar19->_1).this_arg.data, pvVar5 != (void *)0x0)) {
    uStack_a0 = CONCAT17(*(undefined1 *)((long)pvVar5 + 0x2a),(undefined7)uStack_a0);
    pSStack_a8 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f2cb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a0 + 7);
    return;
  }
  pSStack_a8 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f2d2;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  pSStack_b0 = pSVar12;
  pSStack_a8 = pSVar16;
  if (g_data_057aca87 == '\0') {
    uStack_c0 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_c0 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c0 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c0 = 0x412f33c;
  pSVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pSVar12 = pSVar10;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pSVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (plVar6 = (pSVar19->_1).this_arg.data, pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x2a) = (char)bVar9;
    pSVar16 = *(System_Collections_Generic_IEqualityComparer_T__c **)(*plVar6 + 0x1c0);
    uStack_c0 = 0x412f35d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = (pSVar19->_1).this_arg.data;
    pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      (**(code **)(lVar20 + 0x1c8))
                (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return;
    }
  }
  uStack_c0 = 0x412f389;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar12 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     ((pSVar12->_1).this_arg.data != (void *)0x0)) {
    return;
  }
  pSStack_c8 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f3aa;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pSStack_d0 = pSVar19;
  pSStack_c8 = pSVar10;
  if (g_data_057aca88 == '\0') {
    pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f40c;
  pSVar10 = MethodInfo_String_ConvertTo_String;
  pSVar19 = pSVar16;
  pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pSVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pSVar12 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
     (pvVar5 = (pSVar12->_1).this_arg.data, pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , pvVar5 != (void *)0x0)) {
    *(System_Collections_Generic_IEqualityComparer_T__c **)((long)pvVar5 + 0x30) = pSVar13;
    pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f42a;
    il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x30);
    plVar6 = (pSVar12->_1).this_arg.data;
    pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    pSVar10 = pSVar13;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pSVar10 = *(System_Collections_Generic_IEqualityComparer_T__c **)(lVar20 + 0x1c0);
      pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f443;
      uVar11 = (**(code **)(lVar20 + 0x1b8))();
      plVar6 = (pSVar12->_1).this_arg.data;
      pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  pSStack_e0 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar19;
  pSStack_e0 = pSVar12;
  if (pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
    if (g_data_057aca6e == '\0') {
      pSStack_108 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar7 = (pSVar19->_1).this_arg.data;
    pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    pSVar12 = pSVar19;
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      pSStack_108 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f4a9;
      UVar25 = Map_MapScriptBaseObject__GetPosition(pMVar7,(MethodInfo *)0x0);
      fStack_f4 = UVar25.fields.z;
      auStack_f0._8_4_ = extraout_XMM0_Dc_01;
      auStack_f0._0_8_ = UVar25.fields._0_8_;
      auStack_f0._12_4_ = extraout_XMM0_Dd_01;
      pSStack_108 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f4c3;
      pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar24 = auStack_f0;
      pSStack_108 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f4db;
      value_01.fields.z = fStack_f4;
      value_01.fields.x = (float)auStack_f0._0_4_;
      value_01.fields.y = (float)auStack_f0._4_4_;
      auStack_f0 = auVar24;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_108 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f4e9;
  auStack_120._8_8_ = il2cpp_runtime_helper_022b2c90();
  pSStack_110 = pSVar12;
  pSStack_108 = pSVar16;
  if (g_data_057aca89 == '\0') {
    auStack_120._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_120._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_120._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_120._0_8_ = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f54c;
  pSVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pSVar19 = pSVar10;
  pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pSVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pSVar13 == (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
    auStack_120._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pSVar12 = pSVar19;
    auStack_120._0_8_ = pSVar13;
    if (pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
      if (g_data_057aca6f == '\0') {
        pSStack_148 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar7 = (pSVar19->_1).this_arg.data;
      pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      pSVar13 = pSVar19;
      if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
        pSStack_148 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f5a9;
        UVar25 = Map_MapScriptBaseObject__GetRotation(pMVar7,(MethodInfo *)0x0);
        auStack_130._8_4_ = extraout_XMM0_Dc_02;
        auStack_130._0_8_ = UVar25.fields._0_8_;
        auStack_130._12_4_ = extraout_XMM0_Dd_02;
        pSStack_148 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f5c3;
        uStack_138._4_4_ = UVar25.fields.z;
        pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar24 = auStack_130;
        pSStack_148 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f5db;
        value_02.fields.z = uStack_138._4_4_;
        value_02.fields.x = (float)auStack_130._0_4_;
        value_02.fields.y = (float)auStack_130._4_4_;
        auStack_130 = auVar24;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pSStack_148 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f5e9;
    uStack_158 = il2cpp_runtime_helper_022b2c90();
    pSStack_150 = pSVar13;
    pSStack_148 = pSVar10;
    if (g_data_057aca8a == '\0') {
      pSStack_160 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pSStack_160 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_160 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_160 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f64c;
    pSVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pSVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pSVar12 == (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
      pSStack_160 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pSVar13 = pSVar12;
      pSVar19 = pSVar16;
      pSStack_160 = pSVar12;
      if (pSVar16 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar7 = (pSVar16->_1).this_arg.data;
        pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
        pSVar13 = pSVar16;
        if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar25 = Map_MapScriptBaseObject__GetScale(pMVar7,(MethodInfo *)0x0);
          fStack_174 = UVar25.fields.z;
          auStack_170._8_4_ = extraout_XMM0_Dc_03;
          auStack_170._0_8_ = UVar25.fields._0_8_;
          auStack_170._12_4_ = extraout_XMM0_Dd_03;
          pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar24 = auStack_170;
          UVar25.fields.z = fStack_174;
          UVar25.fields.x = (float)auStack_170._0_4_;
          UVar25.fields.y = (float)auStack_170._4_4_;
          auStack_170 = auVar24;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,UVar25,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pSVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pSVar19 == (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pSVar10 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           ((pSVar10->_1).this_arg.data != (void *)0x0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar19 = MethodInfo_String_ConvertTo_String;
        pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pSVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pSVar10 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           (pvVar5 = (pSVar10->_1).this_arg.data,
           pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0, pvVar5 != (void *)0x0)) {
          *(System_Collections_Generic_IEqualityComparer_T__c **)((long)pvVar5 + 0x60) = pSVar12;
          il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x60);
          plVar6 = (pSVar10->_1).this_arg.data;
          pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
          pSVar19 = pSVar12;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pSVar19 = *(System_Collections_Generic_IEqualityComparer_T__c **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = (pSVar10->_1).this_arg.data;
            pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              (**(code **)(lVar20 + 0x1c8))
                        (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pSVar16 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           ((pSVar16->_1).this_arg.data != (void *)0x0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = MethodInfo_String_ConvertTo_String;
        pSVar12 = (System_Collections_Generic_IEqualityComparer_T__c *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pSVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pSVar16 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           (pvVar5 = (pSVar16->_1).this_arg.data,
           pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0, pvVar5 != (void *)0x0)) {
          *(System_Collections_Generic_IEqualityComparer_T__c **)((long)pvVar5 + 0x68) = pSVar12;
          il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x68);
          plVar6 = (pSVar16->_1).this_arg.data;
          pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
          pSVar10 = pSVar12;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pSVar10 = *(System_Collections_Generic_IEqualityComparer_T__c **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = (pSVar16->_1).this_arg.data;
            pSVar19 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              (**(code **)(lVar20 + 0x1c8))
                        (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           ((pSVar19->_1).this_arg.data != (void *)0x0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pSVar10,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) &&
           (pvVar5 = (pSVar19->_1).this_arg.data, pvVar5 != (void *)0x0)) {
          *(Il2CppObject **)((long)pvVar5 + 0x70) = pIVar15;
          il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x70);
          plVar6 = (pSVar19->_1).this_arg.data;
          if (plVar6 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar6 + 0x1b8))();
            plVar6 = (pSVar19->_1).this_arg.data;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              (**(code **)(lVar20 + 0x1c8))
                        (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar15,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar15;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar15);
        return;
      }
      puVar18 = auStack_180;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar17 = auStack_140;
    pSVar16 = pSStack_150;
  }
  else {
    pSStack_108 = pSStack_110;
    pSVar10 = pSStack_110;
    pSVar16 = pSVar13;
    if ((pIVar15 != (Il2CppObject *)0x0) &&
       (pMVar7 = (pSVar13->_1).this_arg.data,
       pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0, pSVar10 = pSVar13,
       pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar15 + 3;
      pIVar15 = (Il2CppObject *)0x0;
      pSStack_110 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar7,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar6 = (pSVar13->_1).this_arg.data;
      pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar15 = *(Il2CppObject **)(lVar20 + 0x1c0);
        pSStack_110 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412d52c;
        uVar11 = (**(code **)(lVar20 + 0x1b8))();
        plVar6 = (pSVar13->_1).this_arg.data;
        pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar20 = *plVar6;
          (**(code **)(lVar20 + 0x1c8))
                    (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
          return;
        }
      }
    }
    pSStack_110 = (System_Collections_Generic_IEqualityComparer_T__c *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = auStack_130;
    pSStack_110 = pSVar10;
    if (g_data_057aca6f == '\0') {
      uStack_138 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pSVar12 = (pSVar16->_1).this_arg.data;
    if (pSVar12 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
      uStack_138 = 0x412d594;
      UVar25 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)pSVar12,(MethodInfo *)0x0);
      auStack_120._8_4_ = extraout_XMM0_Dc;
      auStack_120._0_8_ = UVar25.fields._0_8_;
      auStack_120._12_4_ = extraout_XMM0_Dd;
      uStack_138 = 0x412d5ae;
      auStack_130._12_4_ = UVar25.fields.z;
      pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar24 = auStack_120;
      uStack_138 = 0x412d5c6;
      value.fields.z = (float)auStack_130._12_4_;
      value.fields.x = (float)auStack_120._0_4_;
      value.fields.y = (float)auStack_120._4_4_;
      auStack_120 = auVar24;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value,(MethodInfo *)0x0);
      return;
    }
    uStack_138 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(System_Collections_Generic_IEqualityComparer_T__c **)(puVar17 + -8) = pSVar16;
  pSVar13 = pSVar12;
  if ((pIVar15 != (Il2CppObject *)0x0) &&
     (pMVar7 = (pSVar12->_1).this_arg.data, pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , pSVar16 = pSVar12, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar15 + 3);
    pIVar15 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar17 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar7,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = (pSVar12->_1).this_arg.data;
    pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar15 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar17 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar6 = (pSVar12->_1).this_arg.data;
      pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar17 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_IEqualityComparer_T__c **)(puVar17 + -0x10) = pSVar16;
  puVar18 = puVar17 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pSVar19 = (pSVar13->_1).this_arg.data;
  if (pSVar19 != (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d684;
    UVar25 = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)pSVar19,(MethodInfo *)0x0);
    auVar24._8_4_ = extraout_XMM0_Dc_00;
    auVar24._0_8_ = UVar25.fields._0_8_;
    auVar24._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar17 + -0x20) = auVar24;
    *(float *)(puVar17 + -0x24) = UVar25.fields.z;
    *(undefined8 *)(puVar17 + -0x38) = 0x412d69e;
    pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar17 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar17 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar17 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar17 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(System_Collections_Generic_IEqualityComparer_T__c **)(puVar18 + -8) = pSVar13;
  pSVar16 = pSVar19;
  if ((pIVar15 != (Il2CppObject *)0x0) &&
     (pMVar7 = (pSVar19->_1).this_arg.data, pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0
     , pSVar13 = pSVar19, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar15 + 3);
    pIVar15 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar7,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = (pSVar19->_1).this_arg.data;
    pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar15 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar6 = (pSVar19->_1).this_arg.data;
      pSVar16 = (System_Collections_Generic_IEqualityComparer_T__c *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x10) = uVar11;
  if ((pSVar16->_1).this_arg.data != (void *)0x0) {
    return;
  }
  *(undefined8 *)(puVar18 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_IEqualityComparer_T__c **)(puVar18 + -0x18) = pSVar13;
  pvVar5 = (pSVar16->_1).this_arg.data;
  if (pvVar5 != (void *)0x0) {
    *(Il2CppObject **)((long)pvVar5 + 0x60) = pIVar15;
    *(undefined8 *)(puVar18 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x60);
    plVar6 = (pSVar16->_1).this_arg.data;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar15 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar6 = (pSVar16->_1).this_arg.data;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x20) = uVar11;
  if (*(long *)(lVar20 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar18 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_IEqualityComparer_T__c **)(puVar18 + -0x28) = pSVar16;
  lVar21 = *(long *)(lVar20 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x68) = pIVar15;
    *(undefined8 *)(puVar18 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
    if (*(long **)(lVar20 + 0x30) != (long *)0x0) {
      lVar21 = **(long **)(lVar20 + 0x30);
      pIVar15 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)(lVar20 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar18 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x30) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar21 + 0x30);
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x70) = pIVar15;
    *(undefined8 *)(puVar18 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
    plVar6 = *(long **)(lVar21 + 0x30);
    if (plVar6 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar6 + 0x1c0);
      vtableDispatch = *(code **)(*plVar6 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar6,uVar11);
      plVar6 = *(long **)(lVar21 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        (**(code **)(lVar20 + 0x1c8))
                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x40) = 0x412d8b9;
  auVar24 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar24._0_8_;
  plVar6 = *(long **)(lVar20 + 0x30);
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x1b8);
    (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x1c0),auVar24._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar18 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar18 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412ef00

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppType **ppIVar4;
  Il2CppType *pIVar5;
  long *plVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_Fields UVar8;
  bool_conflict bVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  undefined8 uVar11;
  Il2CppObject *pIVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  long lVar20;
  long lVar21;
  MethodInfo *pMVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_1b8 [10];
  undefined1 auStack_168 [12];
  float fStack_15c;
  undefined1 auStack_158 [16];
  Map_MapScriptBaseObject_o *pMStack_148;
  undefined8 uStack_140;
  Map_MapScriptBaseObject_o *pMStack_138;
  Map_MapScriptBaseObject_o *pMStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  Map_MapScriptBaseObject_o *pMStack_f8;
  Map_MapScriptBaseObject_o *pMStack_f0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  Map_MapScriptBaseObject_o *pMStack_c8;
  undefined8 uStack_c0;
  Map_MapScriptBaseObject_o *pMStack_b8;
  Map_MapScriptBaseObject_o *pMStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  Map_MapScriptBaseObject_o *pMStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  Map_MapScriptBaseObject_o *pMStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar2->fields).Type;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca83 == '\0') {
    uStack_28 = 0x412ef3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x412ef4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca83 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x412ef6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x412ef7c;
  pMVar16 = MethodInfo_String_ConvertTo_String;
  pMVar22 = method;
  pMVar10 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar22 = (MethodInfo *)0x0, pMVar2 != (Map_MapScriptSceneObject_o *)0x0))
  {
    (pMVar2->fields).Type = (System_String_o *)pMVar10;
    uStack_28 = 0x412ef9a;
    il2cpp_runtime_helper_022b4080(&pMVar2->fields);
    pMVar2 = (__i->fields).Value;
    pMVar22 = (MethodInfo *)0x0;
    pMVar16 = pMVar10;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      pMVar16 = (Map_MapScriptBaseObject_o *)(pMVar3->vtable)._8_Serialize.method;
      uStack_28 = 0x412efb3;
      uVar11 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__i->fields).Value;
      pMVar22 = (MethodInfo *)0x0;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        pIVar12 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (pMVar2,uVar11,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                             UNRECOVERED_JUMPTABLE_00);
        return pIVar12;
      }
    }
  }
  uStack_28 = 0x412efdf;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (MethodInfo *)0x0) && (pMVar22->parameters != (Il2CppType **)0x0)) {
    return (Il2CppObject *)pMVar22->parameters[3];
  }
  pMStack_30 = (MethodInfo *)0x412effa;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057aca84 == '\0') {
    uStack_48 = 0x412f01f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_48 = 0x412f02b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x412f04a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x412f05c;
  pMVar10 = MethodInfo_String_ConvertTo_String;
  pMVar19 = pMVar16;
  pMVar13 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar22 != (MethodInfo *)0x0) &&
     (ppIVar4 = pMVar22->parameters, pMVar19 = (Map_MapScriptBaseObject_o *)0x0, ppIVar4 != (Il2CppType **)0x0
     )) {
    ppIVar4[3] = (Il2CppType *)pMVar13;
    uStack_48 = 0x412f07a;
    il2cpp_runtime_helper_022b4080(ppIVar4 + 3);
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar10 = pMVar13;
    if (pMVar22->parameters != (Il2CppType **)0x0) {
      pIVar5 = *pMVar22->parameters;
      pMVar10 = pIVar5[0x1c].data;
      uStack_48 = 0x412f093;
      uVar11 = (**(code **)&pIVar5[0x1b].bits)();
      ppIVar4 = pMVar22->parameters;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (ppIVar4 != (Il2CppType **)0x0) {
        pIVar5 = *ppIVar4;
        pIVar12 = (Il2CppObject *)
                  (**(code **)&pIVar5[0x1c].bits)
                            (ppIVar4,uVar11,pIVar5[0x1d].data,pIVar5,*(code **)&pIVar5[0x1c].bits);
        return pIVar12;
      }
    }
  }
  uStack_48 = 0x412f0bf;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
    uStack_48 = CONCAT17(*(undefined1 *)(lVar20 + 0x28),(undefined7)uStack_48);
    pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f0eb;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar12;
  }
  pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f0f2;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar22;
  pMStack_50 = pMVar16;
  if (g_data_057aca85 == '\0') {
    uStack_68 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_68 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x412f15c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar13 = pMVar10;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar19->fields).Visible, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)(plVar6 + 5) = (char)bVar9;
    pMVar16 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_68 = 0x412f17d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar19->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar12;
    }
  }
  uStack_68 = 0x412f1a9;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar13->fields).Visible, lVar20 != 0)) {
    uStack_68 = CONCAT17(*(undefined1 *)(lVar20 + 0x29),(undefined7)uStack_68);
    pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f1db;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar12;
  }
  pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f1e2;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar19;
  pMStack_70 = pMVar10;
  if (g_data_057aca86 == '\0') {
    uStack_88 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_88 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x412f24c;
  pMVar10 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar19 = pMVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar13->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x29) = (char)bVar9;
    pMVar10 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_88 = 0x412f26d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar13->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar12;
    }
  }
  uStack_88 = 0x412f299;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
    uStack_88 = CONCAT17(*(undefined1 *)(lVar20 + 0x2a),(undefined7)uStack_88);
    pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_88 + 7);
    return pIVar12;
  }
  pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pMStack_98 = pMVar13;
  pMStack_90 = pMVar16;
  if (g_data_057aca87 == '\0') {
    uStack_a8 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_a8 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a8 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x412f33c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar13 = pMVar10;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar19->fields).Visible, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x2a) = (char)bVar9;
    pMVar16 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_a8 = 0x412f35d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar19->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar12;
    }
  }
  uStack_a8 = 0x412f389;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar13->fields).Visible, lVar20 != 0)) {
    return *(Il2CppObject **)(lVar20 + 0x30);
  }
  pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar19;
  pMStack_b0 = pMVar10;
  if (g_data_057aca88 == '\0') {
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar10 = MethodInfo_String_ConvertTo_String;
  pMVar19 = pMVar16;
  pMVar14 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar13->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0, lVar20 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar20 + 0x30) = pMVar14;
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x30);
    plVar6 = *(long **)&(pMVar13->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar10 = pMVar14;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pMVar10 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar11 = (**(code **)(lVar20 + 0x1b8))();
      plVar6 = *(long **)&(pMVar13->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar19;
  pMStack_c8 = pMVar13;
  if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar13 = pMVar19;
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar24 = Map_MapScriptBaseObject__GetPosition(pMVar7,(MethodInfo *)0x0);
      fStack_dc = UVar24.fields.z;
      auStack_d8._8_4_ = extraout_XMM0_Dc_01;
      auStack_d8._0_8_ = UVar24.fields._0_8_;
      auStack_d8._12_4_ = extraout_XMM0_Dd_01;
      pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_d8;
      pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_dc;
      value_01.fields.x = (float)auStack_d8._0_4_;
      value_01.fields.y = (float)auStack_d8._4_4_;
      auStack_d8 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar15;
    }
  }
  pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_108._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_f8 = pMVar13;
  pMStack_f0 = pMVar16;
  if (g_data_057aca89 == '\0') {
    auStack_108._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_108._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_108._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_108._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar19 = pMVar10;
  pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_108._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar13 = pMVar19;
    auStack_108._0_8_ = pMVar14;
    if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_130 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar14 = pMVar19;
      if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_130 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar7,(MethodInfo *)0x0);
        auStack_118._8_4_ = extraout_XMM0_Dc_02;
        auStack_118._0_8_ = UVar24.fields._0_8_;
        auStack_118._12_4_ = extraout_XMM0_Dd_02;
        pMStack_130 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_120._4_4_ = UVar24.fields.z;
        pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar23 = auStack_118;
        pMStack_130 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_120._4_4_;
        value_02.fields.x = (float)auStack_118._0_4_;
        value_02.fields.y = (float)auStack_118._4_4_;
        auStack_118 = auVar23;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar15;
      }
    }
    pMStack_130 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_140 = il2cpp_runtime_helper_022b2c90();
    pMStack_138 = pMVar14;
    pMStack_130 = pMVar10;
    if (g_data_057aca8a == '\0') {
      pMStack_148 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_148 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_148 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_148 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar13 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_148 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = pMVar13;
      pMVar19 = pMVar16;
      pMStack_148 = pMVar13;
      if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar14 = pMVar16;
        if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar24 = Map_MapScriptBaseObject__GetScale(pMVar13,(MethodInfo *)0x0);
          fStack_15c = UVar24.fields.z;
          auStack_158._8_4_ = extraout_XMM0_Dc_03;
          auStack_158._0_8_ = UVar24.fields._0_8_;
          auStack_158._12_4_ = extraout_XMM0_Dd_03;
          pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar23 = auStack_158;
          UVar24.fields.z = fStack_15c;
          UVar24.fields.x = (float)auStack_158._0_4_;
          UVar24.fields.y = (float)auStack_158._4_4_;
          auStack_158 = auVar23;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,UVar24,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar15;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar19 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar10->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar19 = MethodInfo_String_ConvertTo_String;
        pMVar13 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar10->fields).Visible, pMVar16 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x60) = pMVar13;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
          plVar6 = *(long **)&(pMVar10->fields).Visible;
          pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar19 = pMVar13;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar10->fields).Visible;
            pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar10 = MethodInfo_String_ConvertTo_String;
        pMVar13 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x68) = pMVar13;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x68);
          plVar6 = *(long **)&(pMVar16->fields).Visible;
          pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar10 = pMVar13;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar10 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar16->fields).Visible;
            pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
          *(Il2CppObject **)(lVar20 + 0x70) = pIVar12;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
          plVar6 = *(long **)&(pMVar19->fields).Visible;
          if (plVar6 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar6 + 0x1b8))();
            plVar6 = *(long **)&(pMVar19->fields).Visible;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar12,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar12;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar12);
        return pIVar12;
      }
      puVar18 = auStack_168;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar17 = auStack_128;
    pMVar16 = pMStack_138;
  }
  else {
    pMStack_f0 = pMStack_f8;
    pMVar10 = pMStack_f8;
    pMVar16 = pMVar14;
    if ((pIVar12 != (Il2CppObject *)0x0) &&
       (pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
       pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar10 = pMVar14,
       pMVar19 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar12 + 3;
      pIVar12 = (Il2CppObject *)0x0;
      pMStack_f8 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar19,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar6 = *(long **)&(pMVar14->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
        pMStack_f8 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar11 = (**(code **)(lVar20 + 0x1b8))();
        plVar6 = *(long **)&(pMVar14->fields).Visible;
        pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar20 = *plVar6;
          pIVar12 = (Il2CppObject *)
                    (**(code **)(lVar20 + 0x1c8))
                              (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8)
                              );
          return pIVar12;
        }
      }
    }
    pMStack_f8 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = auStack_118;
    pMStack_f8 = pMVar10;
    if (g_data_057aca6f == '\0') {
      uStack_120 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
    if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_120 = 0x412d594;
      UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar13,(MethodInfo *)0x0);
      auStack_108._8_4_ = extraout_XMM0_Dc;
      auStack_108._0_8_ = UVar24.fields._0_8_;
      auStack_108._12_4_ = extraout_XMM0_Dd;
      uStack_120 = 0x412d5ae;
      auStack_118._12_4_ = UVar24.fields.z;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_108;
      uStack_120 = 0x412d5c6;
      value.fields.z = (float)auStack_118._12_4_;
      value.fields.x = (float)auStack_108._0_4_;
      value.fields.y = (float)auStack_108._4_4_;
      auStack_108 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar15;
    }
    uStack_120 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar17 + -8) = pMVar16;
  pMVar14 = pMVar13;
  if ((pIVar12 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar13,
     pMVar10 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar12 + 3);
    pIVar12 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar17 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar10,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar13->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar17 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar13->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  *(undefined8 *)(puVar17 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar17 + -0x10) = pMVar16;
  puVar18 = puVar17 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d684;
    UVar24 = Map_MapScriptBaseObject__GetScale(pMVar19,(MethodInfo *)0x0);
    auVar23._8_4_ = extraout_XMM0_Dc_00;
    auVar23._0_8_ = UVar24.fields._0_8_;
    auVar23._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar17 + -0x20) = auVar23;
    *(float *)(puVar17 + -0x24) = UVar24.fields.z;
    *(undefined8 *)(puVar17 + -0x38) = 0x412d69e;
    pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar17 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar17 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar17 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar15;
  }
  *(undefined8 *)(puVar17 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar18 + -8) = pMVar14;
  pMVar16 = pMVar19;
  if ((pIVar12 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar19,
     pMVar10 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar12 + 3);
    pIVar12 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar10,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar19->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar19->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x10) = uVar11;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    return *(Il2CppObject **)(lVar20 + 0x60);
  }
  *(undefined8 *)(puVar18 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x18) = pMVar14;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x60) = pIVar12;
    *(undefined8 *)(puVar18 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
    plVar6 = *(long **)&(pMVar16->fields).Visible;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar16->fields).Visible;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x20) = uVar11;
  if (*(long *)(lVar20 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar20 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar18 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x28) = pMVar16;
  lVar21 = *(long *)(lVar20 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x68) = pIVar12;
    *(undefined8 *)(puVar18 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
    if (*(long **)(lVar20 + 0x30) != (long *)0x0) {
      lVar21 = **(long **)(lVar20 + 0x30);
      pIVar12 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)(lVar20 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar18 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x30) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar21 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar21 + 0x30);
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x70) = pIVar12;
    *(undefined8 *)(puVar18 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
    plVar6 = *(long **)(lVar21 + 0x30);
    if (plVar6 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar6 + 0x1c0);
      vtableDispatch = *(code **)(*plVar6 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar6,uVar11);
      plVar6 = *(long **)(lVar21 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x40) = 0x412d8b9;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar23._0_8_;
  plVar6 = *(long **)(lVar20 + 0x30);
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x1b8);
    pIVar12 = (Il2CppObject *)
              (*vtableDispatch)
                        (plVar6,*(undefined8 *)(*plVar6 + 0x1c0),auVar23._8_8_,vtableDispatch);
    return pIVar12;
  }
  *(undefined8 *)(puVar18 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar18 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412ef20

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  long lVar2;
  Map_MapScriptSceneObject_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar5;
  void *pvVar6;
  long *plVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  long lVar9;
  long lVar10;
  UnityEngine_Vector3_Fields UVar11;
  bool_conflict bVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  undefined8 uVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar17;
  Il2CppObject *pIVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  Map_MapScriptBaseObject_o *pMVar22;
  long lVar23;
  long lVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar25 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_1b0 [10];
  undefined1 auStack_160 [12];
  float fStack_154;
  undefined1 auStack_150 [16];
  Map_MapScriptBaseObject_o *pMStack_140;
  undefined8 uStack_138;
  Map_MapScriptBaseObject_o *pMStack_130;
  Map_MapScriptBaseObject_o *pMStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  Map_MapScriptBaseObject_o *pMStack_f0;
  Map_MapScriptBaseObject_o *pMStack_e8;
  float fStack_d4;
  undefined1 auStack_d0 [16];
  Map_MapScriptBaseObject_o *pMStack_c0;
  undefined8 uStack_b8;
  Map_MapScriptBaseObject_o *pMStack_b0;
  Map_MapScriptBaseObject_o *pMStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  Map_MapScriptBaseObject_o *pMStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  Map_MapScriptBaseObject_o *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  Map_MapScriptBaseObject_o *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057aca83 == '\0') {
    uStack_20 = 0x412ef3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x412ef4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca83 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x412ef6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x412ef7c;
  pMVar19 = MethodInfo_String_ConvertTo_String;
  pIVar18 = __v;
  pMVar13 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar3 = (__i->fields).Value, pIVar18 = (Il2CppObject *)0x0, pMVar3 != (Map_MapScriptSceneObject_o *)0x0
     )) {
    (pMVar3->fields).Type = (System_String_o *)pMVar13;
    uStack_20 = 0x412ef9a;
    il2cpp_runtime_helper_022b4080(&pMVar3->fields);
    pMVar3 = (__i->fields).Value;
    pIVar18 = (Il2CppObject *)0x0;
    pMVar19 = pMVar13;
    if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar3->klass;
      pMVar19 = (Map_MapScriptBaseObject_o *)(pMVar4->vtable)._8_Serialize.method;
      uStack_20 = 0x412efb3;
      uVar14 = (*(pMVar4->vtable)._8_Serialize.methodPtr)();
      pMVar3 = (__i->fields).Value;
      pIVar18 = (Il2CppObject *)0x0;
      if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar4 = pMVar3->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar3,uVar14,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  uStack_20 = 0x412efdf;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar18 != (Il2CppObject *)0x0) && (pIVar18[3].klass != (Il2CppClass *)0x0)) {
    return;
  }
  pIStack_28 = (Il2CppObject *)0x412effa;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057aca84 == '\0') {
    uStack_40 = 0x412f01f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x412f02b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x412f04a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x412f05c;
  pMVar13 = MethodInfo_String_ConvertTo_String;
  pMVar22 = pMVar19;
  pMVar15 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pIVar18 != (Il2CppObject *)0x0) &&
     (pIVar5 = pIVar18[3].klass, pMVar22 = (Map_MapScriptBaseObject_o *)0x0, pIVar5 != (Il2CppClass *)0x0)) {
    (pIVar5->_1).namespaze = (char *)pMVar15;
    uStack_40 = 0x412f07a;
    il2cpp_runtime_helper_022b4080(&(pIVar5->_1).namespaze);
    pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar13 = pMVar15;
    if (pIVar18[3].klass != (Il2CppClass *)0x0) {
      pvVar6 = ((pIVar18[3].klass)->_1).image;
      pMVar13 = *(Map_MapScriptBaseObject_o **)((long)pvVar6 + 0x1c0);
      uStack_40 = 0x412f093;
      uVar14 = (**(code **)((long)pvVar6 + 0x1b8))();
      pIVar5 = pIVar18[3].klass;
      pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
      if (pIVar5 != (Il2CppClass *)0x0) {
        pvVar6 = (pIVar5->_1).image;
        (**(code **)((long)pvVar6 + 0x1c8))
                  (pIVar5,uVar14,*(undefined8 *)((long)pvVar6 + 0x1d0),pvVar6,*(code **)((long)pvVar6 + 0x1c8)
                  );
        return;
      }
    }
  }
  uStack_40 = 0x412f0bf;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar22->fields).Visible, lVar23 != 0)) {
    uStack_40 = CONCAT17(*(undefined1 *)(lVar23 + 0x28),(undefined7)uStack_40);
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f0eb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f0f2;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar18;
  pMStack_48 = pMVar19;
  if (g_data_057aca85 == '\0') {
    uStack_60 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_60 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x412f15c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar15 = pMVar13;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar13,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar22->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)(plVar7 + 5) = (char)bVar12;
    pMVar19 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_60 = 0x412f17d;
    uVar14 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar22->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_60 = 0x412f1a9;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar15->fields).Visible, lVar23 != 0)) {
    uStack_60 = CONCAT17(*(undefined1 *)(lVar23 + 0x29),(undefined7)uStack_60);
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f1db;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f1e2;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar22;
  pMStack_68 = pMVar13;
  if (g_data_057aca86 == '\0') {
    uStack_80 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_80 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x412f24c;
  pMVar13 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar22 = pMVar19;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar15->fields).Visible, pMVar22 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)((long)plVar7 + 0x29) = (char)bVar12;
    pMVar13 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_80 = 0x412f26d;
    uVar14 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar15->fields).Visible;
    pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_80 = 0x412f299;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar22->fields).Visible, lVar23 != 0)) {
    uStack_80 = CONCAT17(*(undefined1 *)(lVar23 + 0x2a),(undefined7)uStack_80);
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
    return;
  }
  pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pMStack_90 = pMVar15;
  pMStack_88 = pMVar19;
  if (g_data_057aca87 == '\0') {
    uStack_a0 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_a0 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x412f33c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar15 = pMVar13;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar13,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar22->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)((long)plVar7 + 0x2a) = (char)bVar12;
    pMVar19 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_a0 = 0x412f35d;
    uVar14 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar22->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_a0 = 0x412f389;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23._0_4_ = (pMVar15->fields).Visible, lVar23._4_4_ = (pMVar15->fields).Networked, lVar23 != 0)) {
    return;
  }
  pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  pMStack_b0 = pMVar22;
  pMStack_a8 = pMVar13;
  if (g_data_057aca88 == '\0') {
    pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar13 = MethodInfo_String_ConvertTo_String;
  pMVar22 = pMVar19;
  pMVar16 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar15->fields).Visible, pMVar22 = (Map_MapScriptBaseObject_o *)0x0, lVar23 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar23 + 0x30) = pMVar16;
    pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x30);
    plVar7 = *(long **)&(pMVar15->fields).Visible;
    pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar13 = pMVar16;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pMVar13 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
      pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar14 = (**(code **)(lVar23 + 0x1b8))();
      plVar7 = *(long **)&(pMVar15->fields).Visible;
      pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar22;
  pMStack_c0 = pMVar15;
  if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar15 = pMVar22;
    if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar26 = Map_MapScriptBaseObject__GetPosition(pMVar8,(MethodInfo *)0x0);
      fStack_d4 = UVar26.fields.z;
      auStack_d0._8_4_ = extraout_XMM0_Dc_01;
      auStack_d0._0_8_ = UVar26.fields._0_8_;
      auStack_d0._12_4_ = extraout_XMM0_Dd_01;
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_d0;
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_d4;
      value_01.fields.x = (float)auStack_d0._0_4_;
      value_01.fields.y = (float)auStack_d0._4_4_;
      auStack_d0 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar17,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_100._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_f0 = pMVar15;
  pMStack_e8 = pMVar19;
  if (g_data_057aca89 == '\0') {
    auStack_100._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_100._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_100._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_100._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar22 = pMVar13;
  pIVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar16 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_100._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar15 = pMVar22;
    auStack_100._0_8_ = pMVar16;
    if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar16 = pMVar22;
      if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar8,(MethodInfo *)0x0);
        auStack_110._8_4_ = extraout_XMM0_Dc_02;
        auStack_110._0_8_ = UVar26.fields._0_8_;
        auStack_110._12_4_ = extraout_XMM0_Dd_02;
        pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_118._4_4_ = UVar26.fields.z;
        pCVar17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar25 = auStack_110;
        pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_118._4_4_;
        value_02.fields.x = (float)auStack_110._0_4_;
        value_02.fields.y = (float)auStack_110._4_4_;
        auStack_110 = auVar25;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar17,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_138 = il2cpp_runtime_helper_022b2c90();
    pMStack_130 = pMVar16;
    pMStack_128 = pMVar13;
    if (g_data_057aca8a == '\0') {
      pMStack_140 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_140 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_140 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_140 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar15 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_140 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar16 = pMVar15;
      pMVar22 = pMVar19;
      pMStack_140 = pMVar15;
      if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
        pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar16 = pMVar19;
        if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar26 = Map_MapScriptBaseObject__GetScale(pMVar15,(MethodInfo *)0x0);
          fStack_154 = UVar26.fields.z;
          auStack_150._8_4_ = extraout_XMM0_Dc_03;
          auStack_150._0_8_ = UVar26.fields._0_8_;
          auStack_150._12_4_ = extraout_XMM0_Dd_03;
          pCVar17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar25 = auStack_150;
          UVar26.fields.z = fStack_154;
          UVar26.fields.x = (float)auStack_150._0_4_;
          UVar26.fields.y = (float)auStack_150._4_4_;
          auStack_150 = auVar25;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar17,UVar26,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar22 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar24._0_4_ = (pMVar13->fields).Visible, lVar24._4_4_ = (pMVar13->fields).Networked, lVar24 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar22 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar13->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x60) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
          plVar7 = *(long **)&(pMVar13->fields).Visible;
          pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar22 = pMVar15;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar22 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar14 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar13->fields).Visible;
            pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar9._0_4_ = (pMVar19->fields).Visible, lVar9._4_4_ = (pMVar19->fields).Networked, lVar9 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar13 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar22,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar19->fields).Visible, pMVar22 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x68) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x68);
          plVar7 = *(long **)&(pMVar19->fields).Visible;
          pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar13 = pMVar15;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar13 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar14 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar19->fields).Visible;
            pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar10._0_4_ = (pMVar22->fields).Visible, lVar10._4_4_ = (pMVar22->fields).Networked, lVar10 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar22->fields).Visible, lVar23 != 0)) {
          *(Il2CppObject **)(lVar23 + 0x70) = pIVar18;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
          plVar7 = *(long **)&(pMVar22->fields).Visible;
          if (plVar7 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar7 + 0x1b8))();
            plVar7 = *(long **)&(pMVar22->fields).Visible;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar18,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar18;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar18);
        return;
      }
      puVar21 = auStack_160;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar20 = auStack_120;
    pMVar19 = pMStack_130;
  }
  else {
    pMStack_e8 = pMStack_f0;
    pMVar13 = pMStack_f0;
    pMVar19 = pMVar16;
    if ((pIVar18 != (Il2CppObject *)0x0) &&
       (pMVar22 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
       pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar16,
       pMVar22 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar18 + 3;
      pIVar18 = (Il2CppObject *)0x0;
      pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar22,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar7 = *(long **)&(pMVar16->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        pIVar18 = *(Il2CppObject **)(lVar23 + 0x1c0);
        pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar14 = (**(code **)(lVar23 + 0x1b8))();
        plVar7 = *(long **)&(pMVar16->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar7 != (long *)0x0) {
          lVar23 = *plVar7;
          (**(code **)(lVar23 + 0x1c8))
                    (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
          return;
        }
      }
    }
    pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar20 = auStack_110;
    pMStack_f0 = pMVar13;
    if (g_data_057aca6f == '\0') {
      uStack_118 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_118 = 0x412d594;
      UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar15,(MethodInfo *)0x0);
      auStack_100._8_4_ = extraout_XMM0_Dc;
      auStack_100._0_8_ = UVar26.fields._0_8_;
      auStack_100._12_4_ = extraout_XMM0_Dd;
      uStack_118 = 0x412d5ae;
      auStack_110._12_4_ = UVar26.fields.z;
      pCVar17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_100;
      uStack_118 = 0x412d5c6;
      value.fields.z = (float)auStack_110._12_4_;
      value.fields.x = (float)auStack_100._0_4_;
      value.fields.y = (float)auStack_100._4_4_;
      auStack_100 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar17,value,(MethodInfo *)0x0);
      return;
    }
    uStack_118 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar20 + -8) = pMVar19;
  pMVar16 = pMVar15;
  if ((pIVar18 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar19 = pMVar15,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar18 + 3);
    pIVar18 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar20 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar13,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar15->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar18 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar20 + -0x10) = 0x412d61c;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar15->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar20 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar20 + -0x10) = pMVar19;
  puVar21 = puVar20 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar20 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar22 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
  if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar20 + -0x38) = 0x412d684;
    UVar26 = Map_MapScriptBaseObject__GetScale(pMVar22,(MethodInfo *)0x0);
    auVar25._8_4_ = extraout_XMM0_Dc_00;
    auVar25._0_8_ = UVar26.fields._0_8_;
    auVar25._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar20 + -0x20) = auVar25;
    *(float *)(puVar20 + -0x24) = UVar26.fields.z;
    *(undefined8 *)(puVar20 + -0x38) = 0x412d69e;
    pCVar17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar20 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar20 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar20 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar17,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar20 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar21 + -8) = pMVar16;
  pMVar19 = pMVar22;
  if ((pIVar18 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible,
     pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar22,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar18 + 3);
    pIVar18 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar21 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar13,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar22->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar18 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x10) = 0x412d70c;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar22->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar21 + -0x10) = 0x412d732;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x10) = uVar14;
  lVar2._0_4_ = (pMVar19->fields).Visible;
  lVar2._4_4_ = (pMVar19->fields).Networked;
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x18) = pMVar16;
  lVar23 = *(long *)&(pMVar19->fields).Visible;
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x60) = pIVar18;
    *(undefined8 *)(puVar21 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
    plVar7 = *(long **)&(pMVar19->fields).Visible;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar18 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x20) = 0x412d793;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar19->fields).Visible;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar21 + -0x20) = 0x412d7b9;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x20) = uVar14;
  if (*(long *)(lVar23 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x28) = pMVar19;
  lVar24 = *(long *)(lVar23 + 0x30);
  if (lVar24 != 0) {
    *(Il2CppObject **)(lVar24 + 0x68) = pIVar18;
    *(undefined8 *)(puVar21 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x68);
    if (*(long **)(lVar23 + 0x30) != (long *)0x0) {
      lVar24 = **(long **)(lVar23 + 0x30);
      pIVar18 = *(Il2CppObject **)(lVar24 + 0x1c0);
      vtableDispatch = *(code **)(lVar24 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x30) = 0x412d813;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)(lVar23 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar24 = 0;
  *(undefined8 *)(puVar21 + -0x30) = 0x412d839;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x30) = uVar14;
  if (*(long *)(lVar24 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar21 + -0x38) = lVar23;
  lVar23 = *(long *)(lVar24 + 0x30);
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x70) = pIVar18;
    *(undefined8 *)(puVar21 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
    plVar7 = *(long **)(lVar24 + 0x30);
    if (plVar7 != (long *)0x0) {
      uVar14 = *(undefined8 *)(*plVar7 + 0x1c0);
      vtableDispatch = *(code **)(*plVar7 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x40) = 0x412d893;
      uVar14 = (*vtableDispatch)(plVar7,uVar14);
      plVar7 = *(long **)(lVar24 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar21 + -0x40) = 0x412d8b9;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar21 + -0x40) = auVar25._0_8_;
  plVar7 = *(long **)(lVar23 + 0x30);
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x1b8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1c0),auVar25._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar21 + -0x48) = 0x412d8e3;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x48) = uVar14;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar21 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412efe0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppType **ppIVar4;
  Il2CppType *pIVar5;
  long *plVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_Fields UVar8;
  bool_conflict bVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  undefined8 uVar11;
  Il2CppObject *pIVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  MethodInfo *pMVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_198 [10];
  undefined1 auStack_148 [12];
  float fStack_13c;
  undefined1 auStack_138 [16];
  Map_MapScriptBaseObject_o *pMStack_128;
  undefined8 uStack_120;
  Map_MapScriptBaseObject_o *pMStack_118;
  Map_MapScriptBaseObject_o *pMStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  Map_MapScriptBaseObject_o *pMStack_d8;
  Map_MapScriptBaseObject_o *pMStack_d0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  Map_MapScriptBaseObject_o *pMStack_a8;
  undefined8 uStack_a0;
  Map_MapScriptBaseObject_o *pMStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  Map_MapScriptBaseObject_o *pMStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar2->fields).Asset;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca84 == '\0') {
    uStack_28 = 0x412f01f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x412f02b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x412f04a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x412f05c;
  pMVar16 = MethodInfo_String_ConvertTo_String;
  pMVar22 = method;
  pMVar10 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar22 = (MethodInfo *)0x0, pMVar2 != (Map_MapScriptSceneObject_o *)0x0))
  {
    (pMVar2->fields).Asset = (System_String_o *)pMVar10;
    uStack_28 = 0x412f07a;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).Asset);
    pMVar2 = (__i->fields).Value;
    pMVar22 = (MethodInfo *)0x0;
    pMVar16 = pMVar10;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      pMVar16 = (Map_MapScriptBaseObject_o *)(pMVar3->vtable)._8_Serialize.method;
      uStack_28 = 0x412f093;
      uVar11 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__i->fields).Value;
      pMVar22 = (MethodInfo *)0x0;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        pIVar12 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (pMVar2,uVar11,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                             UNRECOVERED_JUMPTABLE_00);
        return pIVar12;
      }
    }
  }
  uStack_28 = 0x412f0bf;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (MethodInfo *)0x0) && (pMVar22->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT17(*(undefined1 *)(pMVar22->parameters + 5),(undefined7)uStack_28);
    pMStack_30 = (MethodInfo *)0x412f0eb;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar12;
  }
  pMStack_30 = (MethodInfo *)0x412f0f2;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057aca85 == '\0') {
    uStack_48 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_48 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x412f15c;
  pMVar10 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar17 = pMVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (MethodInfo *)0x0) &&
     (ppIVar4 = pMVar22->parameters, pMVar17 = (Map_MapScriptBaseObject_o *)0x0, ppIVar4 != (Il2CppType **)0x0
     )) {
    *(char *)(ppIVar4 + 5) = (char)bVar9;
    pMVar10 = (*ppIVar4)[0x1c].data;
    uStack_48 = 0x412f17d;
    uVar11 = (**(code **)&(*ppIVar4)[0x1b].bits)();
    ppIVar4 = pMVar22->parameters;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (ppIVar4 != (Il2CppType **)0x0) {
      pIVar5 = *ppIVar4;
      pIVar12 = (Il2CppObject *)
                (**(code **)&pIVar5[0x1c].bits)
                          (ppIVar4,uVar11,pIVar5[0x1d].data,pIVar5,*(code **)&pIVar5[0x1c].bits);
      return pIVar12;
    }
  }
  uStack_48 = 0x412f1a9;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
    uStack_48 = CONCAT17(*(undefined1 *)(lVar20 + 0x29),(undefined7)uStack_48);
    pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f1db;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar12;
  }
  pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f1e2;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar22;
  pMStack_50 = pMVar16;
  if (g_data_057aca86 == '\0') {
    uStack_68 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_68 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x412f24c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar15 = pMVar10;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar17->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x29) = (char)bVar9;
    pMVar16 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_68 = 0x412f26d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar17->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar12;
    }
  }
  uStack_68 = 0x412f299;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar15->fields).Visible, lVar20 != 0)) {
    uStack_68 = CONCAT17(*(undefined1 *)(lVar20 + 0x2a),(undefined7)uStack_68);
    pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar12;
  }
  pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar17;
  pMStack_70 = pMVar10;
  if (g_data_057aca87 == '\0') {
    uStack_88 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_88 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x412f33c;
  pMVar10 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar17 = pMVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar15->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x2a) = (char)bVar9;
    pMVar10 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_88 = 0x412f35d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar15->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar12;
    }
  }
  uStack_88 = 0x412f389;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
    return *(Il2CppObject **)(lVar20 + 0x30);
  }
  pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pMStack_98 = pMVar15;
  pMStack_90 = pMVar16;
  if (g_data_057aca88 == '\0') {
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar16 = MethodInfo_String_ConvertTo_String;
  pMVar15 = pMVar10;
  pMVar13 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar17->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0, lVar20 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar20 + 0x30) = pMVar13;
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x30);
    plVar6 = *(long **)&(pMVar17->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar16 = pMVar13;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar11 = (**(code **)(lVar20 + 0x1b8))();
      plVar6 = *(long **)&(pMVar17->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar15;
  pMStack_a8 = pMVar17;
  if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar17 = pMVar15;
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar24 = Map_MapScriptBaseObject__GetPosition(pMVar7,(MethodInfo *)0x0);
      fStack_bc = UVar24.fields.z;
      auStack_b8._8_4_ = extraout_XMM0_Dc_01;
      auStack_b8._0_8_ = UVar24.fields._0_8_;
      auStack_b8._12_4_ = extraout_XMM0_Dd_01;
      pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_b8;
      pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_bc;
      value_01.fields.x = (float)auStack_b8._0_4_;
      value_01.fields.y = (float)auStack_b8._4_4_;
      auStack_b8 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar14;
    }
  }
  pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_e8._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_d8 = pMVar17;
  pMStack_d0 = pMVar10;
  if (g_data_057aca89 == '\0') {
    auStack_e8._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_e8._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_e8._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_e8._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar17 = pMVar16;
  pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar13 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_e8._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar15 = pMVar17;
    auStack_e8._0_8_ = pMVar13;
    if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_110 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar13 = pMVar17;
      if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_110 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar7,(MethodInfo *)0x0);
        auStack_f8._8_4_ = extraout_XMM0_Dc_02;
        auStack_f8._0_8_ = UVar24.fields._0_8_;
        auStack_f8._12_4_ = extraout_XMM0_Dd_02;
        pMStack_110 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_100._4_4_ = UVar24.fields.z;
        pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar23 = auStack_f8;
        pMStack_110 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_100._4_4_;
        value_02.fields.x = (float)auStack_f8._0_4_;
        value_02.fields.y = (float)auStack_f8._4_4_;
        auStack_f8 = auVar23;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar14;
      }
    }
    pMStack_110 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_120 = il2cpp_runtime_helper_022b2c90();
    pMStack_118 = pMVar13;
    pMStack_110 = pMVar16;
    if (g_data_057aca8a == '\0') {
      pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar15 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_128 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = pMVar15;
      pMVar17 = pMVar10;
      pMStack_128 = pMVar15;
      if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible;
        pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar13 = pMVar10;
        if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar24 = Map_MapScriptBaseObject__GetScale(pMVar15,(MethodInfo *)0x0);
          fStack_13c = UVar24.fields.z;
          auStack_138._8_4_ = extraout_XMM0_Dc_03;
          auStack_138._0_8_ = UVar24.fields._0_8_;
          auStack_138._12_4_ = extraout_XMM0_Dd_03;
          pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar23 = auStack_138;
          UVar24.fields.z = fStack_13c;
          UVar24.fields.x = (float)auStack_138._0_4_;
          UVar24.fields.y = (float)auStack_138._4_4_;
          auStack_138 = auVar23;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,UVar24,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar14;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar17 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, pMVar10 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x60) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
          plVar6 = *(long **)&(pMVar16->fields).Visible;
          pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar17 = pMVar15;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar17 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar16->fields).Visible;
            pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar10->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar10->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x68) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x68);
          plVar6 = *(long **)&(pMVar10->fields).Visible;
          pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar16 = pMVar15;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar10->fields).Visible;
            pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
          *(Il2CppObject **)(lVar20 + 0x70) = pIVar12;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
          plVar6 = *(long **)&(pMVar17->fields).Visible;
          if (plVar6 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar6 + 0x1b8))();
            plVar6 = *(long **)&(pMVar17->fields).Visible;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar12 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar12,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar12;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar12);
        return pIVar12;
      }
      puVar19 = auStack_148;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar18 = auStack_108;
    pMVar16 = pMStack_118;
  }
  else {
    pMStack_d0 = pMStack_d8;
    pMVar10 = pMStack_d8;
    pMVar16 = pMVar13;
    if ((pIVar12 != (Il2CppObject *)0x0) &&
       (pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible,
       pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar10 = pMVar13,
       pMVar17 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar12 + 3;
      pIVar12 = (Il2CppObject *)0x0;
      pMStack_d8 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar17,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar6 = *(long **)&(pMVar13->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
        pMStack_d8 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar11 = (**(code **)(lVar20 + 0x1b8))();
        plVar6 = *(long **)&(pMVar13->fields).Visible;
        pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar20 = *plVar6;
          pIVar12 = (Il2CppObject *)
                    (**(code **)(lVar20 + 0x1c8))
                              (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8)
                              );
          return pIVar12;
        }
      }
    }
    pMStack_d8 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar18 = auStack_f8;
    pMStack_d8 = pMVar10;
    if (g_data_057aca6f == '\0') {
      uStack_100 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
    if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_100 = 0x412d594;
      UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar15,(MethodInfo *)0x0);
      auStack_e8._8_4_ = extraout_XMM0_Dc;
      auStack_e8._0_8_ = UVar24.fields._0_8_;
      auStack_e8._12_4_ = extraout_XMM0_Dd;
      uStack_100 = 0x412d5ae;
      auStack_f8._12_4_ = UVar24.fields.z;
      pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_e8;
      uStack_100 = 0x412d5c6;
      value.fields.z = (float)auStack_f8._12_4_;
      value.fields.x = (float)auStack_e8._0_4_;
      value.fields.y = (float)auStack_e8._4_4_;
      auStack_e8 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar14;
    }
    uStack_100 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar18 + -8) = pMVar16;
  pMVar13 = pMVar15;
  if ((pIVar12 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar15,
     pMVar10 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar12 + 3);
    pIVar12 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar10,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar15->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar15->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x10) = pMVar16;
  puVar19 = puVar18 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
  if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d684;
    UVar24 = Map_MapScriptBaseObject__GetScale(pMVar17,(MethodInfo *)0x0);
    auVar23._8_4_ = extraout_XMM0_Dc_00;
    auVar23._0_8_ = UVar24.fields._0_8_;
    auVar23._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar18 + -0x20) = auVar23;
    *(float *)(puVar18 + -0x24) = UVar24.fields.z;
    *(undefined8 *)(puVar18 + -0x38) = 0x412d69e;
    pCVar14 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar18 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar18 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar18 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar14,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar14;
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar19 + -8) = pMVar13;
  pMVar16 = pMVar17;
  if ((pIVar12 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar17,
     pMVar10 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar12 + 3);
    pIVar12 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar19 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar10,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar17->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar17->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  *(undefined8 *)(puVar19 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x10) = uVar11;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    return *(Il2CppObject **)(lVar20 + 0x60);
  }
  *(undefined8 *)(puVar19 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x18) = pMVar13;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x60) = pIVar12;
    *(undefined8 *)(puVar19 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
    plVar6 = *(long **)&(pMVar16->fields).Visible;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar12 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar16->fields).Visible;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar19 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x20) = uVar11;
  if (*(long *)(lVar20 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar20 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar19 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x28) = pMVar16;
  lVar21 = *(long *)(lVar20 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x68) = pIVar12;
    *(undefined8 *)(puVar19 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
    if (*(long **)(lVar20 + 0x30) != (long *)0x0) {
      lVar21 = **(long **)(lVar20 + 0x30);
      pIVar12 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)(lVar20 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar19 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x30) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar21 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar19 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar21 + 0x30);
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x70) = pIVar12;
    *(undefined8 *)(puVar19 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
    plVar6 = *(long **)(lVar21 + 0x30);
    if (plVar6 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar6 + 0x1c0);
      vtableDispatch = *(code **)(*plVar6 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar6,uVar11);
      plVar6 = *(long **)(lVar21 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar12 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar12;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar19 + -0x40) = 0x412d8b9;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x40) = auVar23._0_8_;
  plVar6 = *(long **)(lVar20 + 0x30);
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x1b8);
    pIVar12 = (Il2CppObject *)
              (*vtableDispatch)
                        (plVar6,*(undefined8 *)(*plVar6 + 0x1c0),auVar23._8_8_,vtableDispatch);
    return pIVar12;
  }
  *(undefined8 *)(puVar19 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar19 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f000

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  long lVar2;
  Map_MapScriptSceneObject_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar5;
  void *pvVar6;
  long *plVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  long lVar9;
  long lVar10;
  UnityEngine_Vector3_Fields UVar11;
  bool_conflict bVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  undefined8 uVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar16;
  Il2CppObject *pIVar17;
  Map_MapScriptBaseObject_o *pMVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  Map_MapScriptBaseObject_o *pMVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar25 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_190 [10];
  undefined1 auStack_140 [12];
  float fStack_134;
  undefined1 auStack_130 [16];
  Map_MapScriptBaseObject_o *pMStack_120;
  undefined8 uStack_118;
  Map_MapScriptBaseObject_o *pMStack_110;
  Map_MapScriptBaseObject_o *pMStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  Map_MapScriptBaseObject_o *pMStack_d0;
  Map_MapScriptBaseObject_o *pMStack_c8;
  float fStack_b4;
  undefined1 auStack_b0 [16];
  Map_MapScriptBaseObject_o *pMStack_a0;
  undefined8 uStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  Map_MapScriptBaseObject_o *pMStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  Map_MapScriptBaseObject_o *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  Map_MapScriptBaseObject_o *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057aca84 == '\0') {
    uStack_20 = 0x412f01f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x412f02b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x412f04a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x412f05c;
  pMVar19 = MethodInfo_String_ConvertTo_String;
  pIVar17 = __v;
  pMVar13 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar3 = (__i->fields).Value, pIVar17 = (Il2CppObject *)0x0, pMVar3 != (Map_MapScriptSceneObject_o *)0x0
     )) {
    (pMVar3->fields).Asset = (System_String_o *)pMVar13;
    uStack_20 = 0x412f07a;
    il2cpp_runtime_helper_022b4080(&(pMVar3->fields).Asset);
    pMVar3 = (__i->fields).Value;
    pIVar17 = (Il2CppObject *)0x0;
    pMVar19 = pMVar13;
    if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar3->klass;
      pMVar19 = (Map_MapScriptBaseObject_o *)(pMVar4->vtable)._8_Serialize.method;
      uStack_20 = 0x412f093;
      uVar14 = (*(pMVar4->vtable)._8_Serialize.methodPtr)();
      pMVar3 = (__i->fields).Value;
      pIVar17 = (Il2CppObject *)0x0;
      if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar4 = pMVar3->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar3,uVar14,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  uStack_20 = 0x412f0bf;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar17 != (Il2CppObject *)0x0) && (pIVar17[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17((char)((pIVar17[3].klass)->_1).byval_arg.bits,(undefined7)uStack_20);
    pIStack_28 = (Il2CppObject *)0x412f0eb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x412f0f2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057aca85 == '\0') {
    uStack_40 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x412f15c;
  pMVar13 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar20 = pMVar19;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pIVar17 != (Il2CppObject *)0x0) &&
     (pIVar5 = pIVar17[3].klass, pMVar20 = (Map_MapScriptBaseObject_o *)0x0, pIVar5 != (Il2CppClass *)0x0)) {
    *(char *)&(pIVar5->_1).byval_arg.bits = (char)bVar12;
    pvVar6 = (pIVar5->_1).image;
    pMVar13 = *(Map_MapScriptBaseObject_o **)((long)pvVar6 + 0x1c0);
    uStack_40 = 0x412f17d;
    uVar14 = (**(code **)((long)pvVar6 + 0x1b8))();
    pIVar5 = pIVar17[3].klass;
    pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
    if (pIVar5 != (Il2CppClass *)0x0) {
      pvVar6 = (pIVar5->_1).image;
      (**(code **)((long)pvVar6 + 0x1c8))
                (pIVar5,uVar14,*(undefined8 *)((long)pvVar6 + 0x1d0),pvVar6,*(code **)((long)pvVar6 + 0x1c8));
      return;
    }
  }
  uStack_40 = 0x412f1a9;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar20->fields).Visible, lVar23 != 0)) {
    uStack_40 = CONCAT17(*(undefined1 *)(lVar23 + 0x29),(undefined7)uStack_40);
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f1db;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f1e2;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar17;
  pMStack_48 = pMVar19;
  if (g_data_057aca86 == '\0') {
    uStack_60 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_60 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x412f24c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar18 = pMVar13;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar13,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar20->fields).Visible, pMVar18 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)((long)plVar7 + 0x29) = (char)bVar12;
    pMVar19 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_60 = 0x412f26d;
    uVar14 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar20->fields).Visible;
    pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_60 = 0x412f299;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar18->fields).Visible, lVar23 != 0)) {
    uStack_60 = CONCAT17(*(undefined1 *)(lVar23 + 0x2a),(undefined7)uStack_60);
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar20;
  pMStack_68 = pMVar13;
  if (g_data_057aca87 == '\0') {
    uStack_80 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_80 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x412f33c;
  pMVar13 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar20 = pMVar19;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar18->fields).Visible, pMVar20 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)((long)plVar7 + 0x2a) = (char)bVar12;
    pMVar13 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_80 = 0x412f35d;
    uVar14 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar18->fields).Visible;
    pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_80 = 0x412f389;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23._0_4_ = (pMVar20->fields).Visible, lVar23._4_4_ = (pMVar20->fields).Networked, lVar23 != 0)) {
    return;
  }
  pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pMStack_90 = pMVar18;
  pMStack_88 = pMVar19;
  if (g_data_057aca88 == '\0') {
    pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar19 = MethodInfo_String_ConvertTo_String;
  pMVar18 = pMVar13;
  pMVar15 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar20->fields).Visible, pMVar18 = (Map_MapScriptBaseObject_o *)0x0, lVar23 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar23 + 0x30) = pMVar15;
    pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x30);
    plVar7 = *(long **)&(pMVar20->fields).Visible;
    pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar19 = pMVar15;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
      pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar14 = (**(code **)(lVar23 + 0x1b8))();
      plVar7 = *(long **)&(pMVar20->fields).Visible;
      pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar18;
  pMStack_a0 = pMVar20;
  if (pMVar18 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar18->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar20 = pMVar18;
    if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar26 = Map_MapScriptBaseObject__GetPosition(pMVar8,(MethodInfo *)0x0);
      fStack_b4 = UVar26.fields.z;
      auStack_b0._8_4_ = extraout_XMM0_Dc_01;
      auStack_b0._0_8_ = UVar26.fields._0_8_;
      auStack_b0._12_4_ = extraout_XMM0_Dd_01;
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar16 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_b0;
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_b4;
      value_01.fields.x = (float)auStack_b0._0_4_;
      value_01.fields.y = (float)auStack_b0._4_4_;
      auStack_b0 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar16,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_e0._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = pMVar20;
  pMStack_c8 = pMVar13;
  if (g_data_057aca89 == '\0') {
    auStack_e0._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_e0._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_e0._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_e0._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar20 = pMVar19;
  pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar15 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_e0._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar18 = pMVar20;
    auStack_e0._0_8_ = pMVar15;
    if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible;
      pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar15 = pMVar20;
      if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar8,(MethodInfo *)0x0);
        auStack_f0._8_4_ = extraout_XMM0_Dc_02;
        auStack_f0._0_8_ = UVar26.fields._0_8_;
        auStack_f0._12_4_ = extraout_XMM0_Dd_02;
        pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_f8._4_4_ = UVar26.fields.z;
        pCVar16 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar25 = auStack_f0;
        pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_f8._4_4_;
        value_02.fields.x = (float)auStack_f0._0_4_;
        value_02.fields.y = (float)auStack_f0._4_4_;
        auStack_f0 = auVar25;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar16,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_118 = il2cpp_runtime_helper_022b2c90();
    pMStack_110 = pMVar15;
    pMStack_108 = pMVar19;
    if (g_data_057aca8a == '\0') {
      pMStack_120 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_120 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_120 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_120 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar18 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_120 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar15 = pMVar18;
      pMVar20 = pMVar13;
      pMStack_120 = pMVar18;
      if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
        pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar15 = pMVar13;
        if (pMVar18 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar26 = Map_MapScriptBaseObject__GetScale(pMVar18,(MethodInfo *)0x0);
          fStack_134 = UVar26.fields.z;
          auStack_130._8_4_ = extraout_XMM0_Dc_03;
          auStack_130._0_8_ = UVar26.fields._0_8_;
          auStack_130._12_4_ = extraout_XMM0_Dd_03;
          pCVar16 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar25 = auStack_130;
          UVar26.fields.z = fStack_134;
          UVar26.fields.x = (float)auStack_130._0_4_;
          UVar26.fields.y = (float)auStack_130._4_4_;
          auStack_130 = auVar25;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar16,UVar26,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar20 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar24._0_4_ = (pMVar19->fields).Visible, lVar24._4_4_ = (pMVar19->fields).Networked, lVar24 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar20 = MethodInfo_String_ConvertTo_String;
        pMVar18 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar19->fields).Visible, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x60) = pMVar18;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
          plVar7 = *(long **)&(pMVar19->fields).Visible;
          pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar20 = pMVar18;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar20 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar14 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar19->fields).Visible;
            pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar9._0_4_ = (pMVar13->fields).Visible, lVar9._4_4_ = (pMVar13->fields).Networked, lVar9 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar19 = MethodInfo_String_ConvertTo_String;
        pMVar18 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar20,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar13->fields).Visible, pMVar20 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x68) = pMVar18;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x68);
          plVar7 = *(long **)&(pMVar13->fields).Visible;
          pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar19 = pMVar18;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar14 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar13->fields).Visible;
            pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar10._0_4_ = (pMVar20->fields).Visible, lVar10._4_4_ = (pMVar20->fields).Networked, lVar10 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar20->fields).Visible, lVar23 != 0)) {
          *(Il2CppObject **)(lVar23 + 0x70) = pIVar17;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
          plVar7 = *(long **)&(pMVar20->fields).Visible;
          if (plVar7 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar7 + 0x1b8))();
            plVar7 = *(long **)&(pMVar20->fields).Visible;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar17,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar17;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar17);
        return;
      }
      puVar22 = auStack_140;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar21 = auStack_100;
    pMVar19 = pMStack_110;
  }
  else {
    pMStack_c8 = pMStack_d0;
    pMVar13 = pMStack_d0;
    pMVar19 = pMVar15;
    if ((pIVar17 != (Il2CppObject *)0x0) &&
       (pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
       pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar15,
       pMVar20 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar17 + 3;
      pIVar17 = (Il2CppObject *)0x0;
      pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar7 = *(long **)&(pMVar15->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        pIVar17 = *(Il2CppObject **)(lVar23 + 0x1c0);
        pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar14 = (**(code **)(lVar23 + 0x1b8))();
        plVar7 = *(long **)&(pMVar15->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar7 != (long *)0x0) {
          lVar23 = *plVar7;
          (**(code **)(lVar23 + 0x1c8))
                    (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
          return;
        }
      }
    }
    pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar21 = auStack_f0;
    pMStack_d0 = pMVar13;
    if (g_data_057aca6f == '\0') {
      uStack_f8 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    if (pMVar18 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_f8 = 0x412d594;
      UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar18,(MethodInfo *)0x0);
      auStack_e0._8_4_ = extraout_XMM0_Dc;
      auStack_e0._0_8_ = UVar26.fields._0_8_;
      auStack_e0._12_4_ = extraout_XMM0_Dd;
      uStack_f8 = 0x412d5ae;
      auStack_f0._12_4_ = UVar26.fields.z;
      pCVar16 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_e0;
      uStack_f8 = 0x412d5c6;
      value.fields.z = (float)auStack_f0._12_4_;
      value.fields.x = (float)auStack_e0._0_4_;
      value.fields.y = (float)auStack_e0._4_4_;
      auStack_e0 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar16,value,(MethodInfo *)0x0);
      return;
    }
    uStack_f8 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar21 + -8) = pMVar19;
  pMVar15 = pMVar18;
  if ((pIVar17 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar18->fields).Visible,
     pMVar15 = (Map_MapScriptBaseObject_o *)0x0, pMVar19 = pMVar18,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar17 + 3);
    pIVar17 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar21 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar13,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar18->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar17 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x10) = 0x412d61c;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar18->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar21 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x10) = pMVar19;
  puVar22 = puVar21 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar21 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible;
  if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar21 + -0x38) = 0x412d684;
    UVar26 = Map_MapScriptBaseObject__GetScale(pMVar20,(MethodInfo *)0x0);
    auVar25._8_4_ = extraout_XMM0_Dc_00;
    auVar25._0_8_ = UVar26.fields._0_8_;
    auVar25._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar21 + -0x20) = auVar25;
    *(float *)(puVar21 + -0x24) = UVar26.fields.z;
    *(undefined8 *)(puVar21 + -0x38) = 0x412d69e;
    pCVar16 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar21 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar21 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar21 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar16,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar21 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar22 + -8) = pMVar15;
  pMVar19 = pMVar20;
  if ((pIVar17 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible,
     pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar15 = pMVar20,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar17 + 3);
    pIVar17 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar22 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar13,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar20->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar17 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x10) = 0x412d70c;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar20->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar22 + -0x10) = 0x412d732;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x10) = uVar14;
  lVar2._0_4_ = (pMVar19->fields).Visible;
  lVar2._4_4_ = (pMVar19->fields).Networked;
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar22 + -0x18) = pMVar15;
  lVar23 = *(long *)&(pMVar19->fields).Visible;
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x60) = pIVar17;
    *(undefined8 *)(puVar22 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
    plVar7 = *(long **)&(pMVar19->fields).Visible;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar17 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x20) = 0x412d793;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar19->fields).Visible;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar22 + -0x20) = 0x412d7b9;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x20) = uVar14;
  if (*(long *)(lVar23 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar22 + -0x28) = pMVar19;
  lVar24 = *(long *)(lVar23 + 0x30);
  if (lVar24 != 0) {
    *(Il2CppObject **)(lVar24 + 0x68) = pIVar17;
    *(undefined8 *)(puVar22 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x68);
    if (*(long **)(lVar23 + 0x30) != (long *)0x0) {
      lVar24 = **(long **)(lVar23 + 0x30);
      pIVar17 = *(Il2CppObject **)(lVar24 + 0x1c0);
      vtableDispatch = *(code **)(lVar24 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x30) = 0x412d813;
      uVar14 = (*vtableDispatch)();
      plVar7 = *(long **)(lVar23 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar24 = 0;
  *(undefined8 *)(puVar22 + -0x30) = 0x412d839;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x30) = uVar14;
  if (*(long *)(lVar24 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar22 + -0x38) = lVar23;
  lVar23 = *(long *)(lVar24 + 0x30);
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x70) = pIVar17;
    *(undefined8 *)(puVar22 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
    plVar7 = *(long **)(lVar24 + 0x30);
    if (plVar7 != (long *)0x0) {
      uVar14 = *(undefined8 *)(*plVar7 + 0x1c0);
      vtableDispatch = *(code **)(*plVar7 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x40) = 0x412d893;
      uVar14 = (*vtableDispatch)(plVar7,uVar14);
      plVar7 = *(long **)(lVar24 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar14,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar22 + -0x40) = 0x412d8b9;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar22 + -0x40) = auVar25._0_8_;
  plVar7 = *(long **)(lVar23 + 0x30);
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x1b8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1c0),auVar25._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar22 + -0x48) = 0x412d8e3;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x48) = uVar14;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar22 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f0c0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppType **ppIVar4;
  Il2CppType *pIVar5;
  long *plVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_Fields UVar8;
  bool_conflict bVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  long lVar20;
  long lVar21;
  MethodInfo *pMVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_178 [10];
  undefined1 auStack_128 [12];
  float fStack_11c;
  undefined1 auStack_118 [16];
  Map_MapScriptBaseObject_o *pMStack_108;
  undefined8 uStack_100;
  Map_MapScriptBaseObject_o *pMStack_f8;
  Map_MapScriptBaseObject_o *pMStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  Map_MapScriptBaseObject_o *pMStack_b8;
  Map_MapScriptBaseObject_o *pMStack_b0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  Map_MapScriptBaseObject_o *pMStack_88;
  undefined8 uStack_80;
  Map_MapScriptBaseObject_o *pMStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar10;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca85 == '\0') {
    uStack_28 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x412f15c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar22 = method;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar22 = (MethodInfo *)0x0, pMVar2 != (Map_MapScriptSceneObject_o *)0x0))
  {
    *(char *)&(pMVar2->fields).Active = (char)bVar9;
    pMVar16 = (Map_MapScriptBaseObject_o *)(pMVar2->klass->vtable)._8_Serialize.method;
    uStack_28 = 0x412f17d;
    uVar11 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__i->fields).Value;
    pMVar22 = (MethodInfo *)0x0;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      pIVar10 = (Il2CppObject *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (pMVar2,uVar11,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                           UNRECOVERED_JUMPTABLE_00);
      return pIVar10;
    }
  }
  uStack_28 = 0x412f1a9;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (MethodInfo *)0x0) && (pMVar22->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT17(*(undefined1 *)((long)pMVar22->parameters + 0x29),(undefined7)uStack_28);
    pMStack_30 = (MethodInfo *)0x412f1db;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar10;
  }
  pMStack_30 = (MethodInfo *)0x412f1e2;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057aca86 == '\0') {
    uStack_48 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_48 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x412f24c;
  pMVar15 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar19 = pMVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (MethodInfo *)0x0) &&
     (ppIVar4 = pMVar22->parameters, pMVar19 = (Map_MapScriptBaseObject_o *)0x0, ppIVar4 != (Il2CppType **)0x0
     )) {
    *(char *)((long)ppIVar4 + 0x29) = (char)bVar9;
    pMVar15 = (*ppIVar4)[0x1c].data;
    uStack_48 = 0x412f26d;
    uVar11 = (**(code **)&(*ppIVar4)[0x1b].bits)();
    ppIVar4 = pMVar22->parameters;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (ppIVar4 != (Il2CppType **)0x0) {
      pIVar5 = *ppIVar4;
      pIVar10 = (Il2CppObject *)
                (**(code **)&pIVar5[0x1c].bits)
                          (ppIVar4,uVar11,pIVar5[0x1d].data,pIVar5,*(code **)&pIVar5[0x1c].bits);
      return pIVar10;
    }
  }
  uStack_48 = 0x412f299;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
    uStack_48 = CONCAT17(*(undefined1 *)(lVar20 + 0x2a),(undefined7)uStack_48);
    pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar10;
  }
  pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar22;
  pMStack_50 = pMVar16;
  if (g_data_057aca87 == '\0') {
    uStack_68 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_68 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x412f33c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar14 = pMVar15;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar15,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar6 = *(long **)&(pMVar19->fields).Visible, pMVar14 = (Map_MapScriptBaseObject_o *)0x0,
     plVar6 != (long *)0x0)) {
    *(char *)((long)plVar6 + 0x2a) = (char)bVar9;
    pMVar16 = *(Map_MapScriptBaseObject_o **)(*plVar6 + 0x1c0);
    uStack_68 = 0x412f35d;
    uVar11 = (**(code **)(*plVar6 + 0x1b8))();
    plVar6 = *(long **)&(pMVar19->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = (Il2CppObject *)
                (**(code **)(lVar20 + 0x1c8))
                          (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
      return pIVar10;
    }
  }
  uStack_68 = 0x412f389;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar14->fields).Visible, lVar20 != 0)) {
    return *(Il2CppObject **)(lVar20 + 0x30);
  }
  pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar19;
  pMStack_70 = pMVar15;
  if (g_data_057aca88 == '\0') {
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar15 = MethodInfo_String_ConvertTo_String;
  pMVar19 = pMVar16;
  pMVar12 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar14->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0, lVar20 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar20 + 0x30) = pMVar12;
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x30);
    plVar6 = *(long **)&(pMVar14->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar15 = pMVar12;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pMVar15 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar11 = (**(code **)(lVar20 + 0x1b8))();
      plVar6 = *(long **)&(pMVar14->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar19;
  pMStack_88 = pMVar14;
  if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar14 = pMVar19;
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar24 = Map_MapScriptBaseObject__GetPosition(pMVar7,(MethodInfo *)0x0);
      fStack_9c = UVar24.fields.z;
      auStack_98._8_4_ = extraout_XMM0_Dc_01;
      auStack_98._0_8_ = UVar24.fields._0_8_;
      auStack_98._12_4_ = extraout_XMM0_Dd_01;
      pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_98;
      pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_9c;
      value_01.fields.x = (float)auStack_98._0_4_;
      value_01.fields.y = (float)auStack_98._4_4_;
      auStack_98 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
  }
  pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_c8._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar14;
  pMStack_b0 = pMVar16;
  if (g_data_057aca89 == '\0') {
    auStack_c8._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_c8._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_c8._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_c8._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar19 = pMVar15;
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar12 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_c8._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar14 = pMVar19;
    auStack_c8._0_8_ = pMVar12;
    if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar12 = pMVar19;
      if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar7,(MethodInfo *)0x0);
        auStack_d8._8_4_ = extraout_XMM0_Dc_02;
        auStack_d8._0_8_ = UVar24.fields._0_8_;
        auStack_d8._12_4_ = extraout_XMM0_Dd_02;
        pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_e0._4_4_ = UVar24.fields.z;
        pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar23 = auStack_d8;
        pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_e0._4_4_;
        value_02.fields.x = (float)auStack_d8._0_4_;
        value_02.fields.y = (float)auStack_d8._4_4_;
        auStack_d8 = auVar23;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar13;
      }
    }
    pMStack_f0 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_100 = il2cpp_runtime_helper_022b2c90();
    pMStack_f8 = pMVar12;
    pMStack_f0 = pMVar15;
    if (g_data_057aca8a == '\0') {
      pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar15 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_108 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar14;
      pMVar19 = pMVar16;
      pMStack_108 = pMVar14;
      if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar14 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar12 = pMVar16;
        if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar24 = Map_MapScriptBaseObject__GetScale(pMVar14,(MethodInfo *)0x0);
          fStack_11c = UVar24.fields.z;
          auStack_118._8_4_ = extraout_XMM0_Dc_03;
          auStack_118._0_8_ = UVar24.fields._0_8_;
          auStack_118._12_4_ = extraout_XMM0_Dd_03;
          pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar23 = auStack_118;
          UVar24.fields.z = fStack_11c;
          UVar24.fields.x = (float)auStack_118._0_4_;
          UVar24.fields.y = (float)auStack_118._4_4_;
          auStack_118 = auVar23;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,UVar24,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar13;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar19 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar15->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar19 = MethodInfo_String_ConvertTo_String;
        pMVar14 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar15->fields).Visible, pMVar16 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x60) = pMVar14;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
          plVar6 = *(long **)&(pMVar15->fields).Visible;
          pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar19 = pMVar14;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar15->fields).Visible;
            pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar15 = MethodInfo_String_ConvertTo_String;
        pMVar14 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x68) = pMVar14;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x68);
          plVar6 = *(long **)&(pMVar16->fields).Visible;
          pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar15 = pMVar14;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar15 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar16->fields).Visible;
            pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar19->fields).Visible, lVar20 != 0)) {
          *(Il2CppObject **)(lVar20 + 0x70) = pIVar10;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
          plVar6 = *(long **)&(pMVar19->fields).Visible;
          if (plVar6 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar6 + 0x1b8))();
            plVar6 = *(long **)&(pMVar19->fields).Visible;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar10,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
        return pIVar10;
      }
      puVar18 = auStack_128;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar17 = auStack_e8;
    pMVar16 = pMStack_f8;
  }
  else {
    pMStack_b0 = pMStack_b8;
    pMVar15 = pMStack_b8;
    pMVar16 = pMVar12;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
       pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar15 = pMVar12,
       pMVar19 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar10 + 3;
      pIVar10 = (Il2CppObject *)0x0;
      pMStack_b8 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar19,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar6 = *(long **)&(pMVar12->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
        pMStack_b8 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar11 = (**(code **)(lVar20 + 0x1b8))();
        plVar6 = *(long **)&(pMVar12->fields).Visible;
        pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar20 = *plVar6;
          pIVar10 = (Il2CppObject *)
                    (**(code **)(lVar20 + 0x1c8))
                              (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8)
                              );
          return pIVar10;
        }
      }
    }
    pMStack_b8 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = auStack_d8;
    pMStack_b8 = pMVar15;
    if (g_data_057aca6f == '\0') {
      uStack_e0 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar14 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
    if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_e0 = 0x412d594;
      UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar14,(MethodInfo *)0x0);
      auStack_c8._8_4_ = extraout_XMM0_Dc;
      auStack_c8._0_8_ = UVar24.fields._0_8_;
      auStack_c8._12_4_ = extraout_XMM0_Dd;
      uStack_e0 = 0x412d5ae;
      auStack_d8._12_4_ = UVar24.fields.z;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_c8;
      uStack_e0 = 0x412d5c6;
      value.fields.z = (float)auStack_d8._12_4_;
      value.fields.x = (float)auStack_c8._0_4_;
      value.fields.y = (float)auStack_c8._4_4_;
      auStack_c8 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
    uStack_e0 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar17 + -8) = pMVar16;
  pMVar12 = pMVar14;
  if ((pIVar10 != (Il2CppObject *)0x0) &&
     (pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar14,
     pMVar15 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar10 + 3);
    pIVar10 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar17 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar15,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar14->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar17 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar14->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  *(undefined8 *)(puVar17 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar17 + -0x10) = pMVar16;
  puVar18 = puVar17 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar17 + -0x38) = 0x412d684;
    UVar24 = Map_MapScriptBaseObject__GetScale(pMVar19,(MethodInfo *)0x0);
    auVar23._8_4_ = extraout_XMM0_Dc_00;
    auVar23._0_8_ = UVar24.fields._0_8_;
    auVar23._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar17 + -0x20) = auVar23;
    *(float *)(puVar17 + -0x24) = UVar24.fields.z;
    *(undefined8 *)(puVar17 + -0x38) = 0x412d69e;
    pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar17 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar17 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar17 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar13;
  }
  *(undefined8 *)(puVar17 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar18 + -8) = pMVar12;
  pMVar16 = pMVar19;
  if ((pIVar10 != (Il2CppObject *)0x0) &&
     (pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar12 = pMVar19,
     pMVar15 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar10 + 3);
    pIVar10 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar15,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar19->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar19->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x10) = uVar11;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    return *(Il2CppObject **)(lVar20 + 0x60);
  }
  *(undefined8 *)(puVar18 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x18) = pMVar12;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x60) = pIVar10;
    *(undefined8 *)(puVar18 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
    plVar6 = *(long **)&(pMVar16->fields).Visible;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar16->fields).Visible;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x20) = uVar11;
  if (*(long *)(lVar20 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar20 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar18 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x28) = pMVar16;
  lVar21 = *(long *)(lVar20 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x68) = pIVar10;
    *(undefined8 *)(puVar18 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
    if (*(long **)(lVar20 + 0x30) != (long *)0x0) {
      lVar21 = **(long **)(lVar20 + 0x30);
      pIVar10 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)(lVar20 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar18 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x30) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar21 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar21 + 0x30);
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x70) = pIVar10;
    *(undefined8 *)(puVar18 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
    plVar6 = *(long **)(lVar21 + 0x30);
    if (plVar6 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar6 + 0x1c0);
      vtableDispatch = *(code **)(*plVar6 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar6,uVar11);
      plVar6 = *(long **)(lVar21 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar18 + -0x40) = 0x412d8b9;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar23._0_8_;
  plVar6 = *(long **)(lVar20 + 0x30);
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x1b8);
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (plVar6,*(undefined8 *)(*plVar6 + 0x1c0),auVar23._8_8_,vtableDispatch);
    return pIVar10;
  }
  *(undefined8 *)(puVar18 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar18 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f100

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  long lVar2;
  Map_MapScriptSceneObject_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar5;
  void *pvVar6;
  long *plVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  long lVar9;
  long lVar10;
  UnityEngine_Vector3_Fields UVar11;
  bool_conflict bVar12;
  undefined8 uVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar15;
  Il2CppObject *pIVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  Map_MapScriptBaseObject_o *pMVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  Map_MapScriptBaseObject_o *pMVar22;
  long lVar23;
  long lVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar25 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_170 [10];
  undefined1 auStack_120 [12];
  float fStack_114;
  undefined1 auStack_110 [16];
  Map_MapScriptBaseObject_o *pMStack_100;
  undefined8 uStack_f8;
  Map_MapScriptBaseObject_o *pMStack_f0;
  Map_MapScriptBaseObject_o *pMStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  Map_MapScriptBaseObject_o *pMStack_b0;
  Map_MapScriptBaseObject_o *pMStack_a8;
  float fStack_94;
  undefined1 auStack_90 [16];
  Map_MapScriptBaseObject_o *pMStack_80;
  undefined8 uStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  Map_MapScriptBaseObject_o *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  Map_MapScriptBaseObject_o *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057aca85 == '\0') {
    uStack_20 = 0x412f11f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x412f12b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x412f14a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x412f15c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pIVar16 = __v;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar3 = (__i->fields).Value, pIVar16 = (Il2CppObject *)0x0, pMVar3 != (Map_MapScriptSceneObject_o *)0x0
     )) {
    *(char *)&(pMVar3->fields).Active = (char)bVar12;
    pMVar19 = (Map_MapScriptBaseObject_o *)(pMVar3->klass->vtable)._8_Serialize.method;
    uStack_20 = 0x412f17d;
    uVar13 = (*(pMVar3->klass->vtable)._8_Serialize.methodPtr)();
    pMVar3 = (__i->fields).Value;
    pIVar16 = (Il2CppObject *)0x0;
    if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar3->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar3,uVar13,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  uStack_20 = 0x412f1a9;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar16 != (Il2CppObject *)0x0) && (pIVar16[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17(*(undefined1 *)((long)&((pIVar16[3].klass)->_1).byval_arg.bits + 1),
                         (undefined7)uStack_20);
    pIStack_28 = (Il2CppObject *)0x412f1db;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x412f1e2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057aca86 == '\0') {
    uStack_40 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x412f24c;
  pMVar18 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar22 = pMVar19;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pIVar5 = pIVar16[3].klass, pMVar22 = (Map_MapScriptBaseObject_o *)0x0, pIVar5 != (Il2CppClass *)0x0)) {
    *(char *)((long)&(pIVar5->_1).byval_arg.bits + 1) = (char)bVar12;
    pvVar6 = (pIVar5->_1).image;
    pMVar18 = *(Map_MapScriptBaseObject_o **)((long)pvVar6 + 0x1c0);
    uStack_40 = 0x412f26d;
    uVar13 = (**(code **)((long)pvVar6 + 0x1b8))();
    pIVar5 = pIVar16[3].klass;
    pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
    if (pIVar5 != (Il2CppClass *)0x0) {
      pvVar6 = (pIVar5->_1).image;
      (**(code **)((long)pvVar6 + 0x1c8))
                (pIVar5,uVar13,*(undefined8 *)((long)pvVar6 + 0x1d0),pvVar6,*(code **)((long)pvVar6 + 0x1c8));
      return;
    }
  }
  uStack_40 = 0x412f299;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar22->fields).Visible, lVar23 != 0)) {
    uStack_40 = CONCAT17(*(undefined1 *)(lVar23 + 0x2a),(undefined7)uStack_40);
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f2cb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f2d2;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar16;
  pMStack_48 = pMVar19;
  if (g_data_057aca87 == '\0') {
    uStack_60 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_60 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x412f33c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar17 = pMVar18;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar18,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
     (plVar7 = *(long **)&(pMVar22->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
     plVar7 != (long *)0x0)) {
    *(char *)((long)plVar7 + 0x2a) = (char)bVar12;
    pMVar19 = *(Map_MapScriptBaseObject_o **)(*plVar7 + 0x1c0);
    uStack_60 = 0x412f35d;
    uVar13 = (**(code **)(*plVar7 + 0x1b8))();
    plVar7 = *(long **)&(pMVar22->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      (**(code **)(lVar23 + 0x1c8))
                (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
      return;
    }
  }
  uStack_60 = 0x412f389;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23._0_4_ = (pMVar17->fields).Visible, lVar23._4_4_ = (pMVar17->fields).Networked, lVar23 != 0)) {
    return;
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar22;
  pMStack_68 = pMVar18;
  if (g_data_057aca88 == '\0') {
    pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar18 = MethodInfo_String_ConvertTo_String;
  pMVar22 = pMVar19;
  pMVar14 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar17->fields).Visible, pMVar22 = (Map_MapScriptBaseObject_o *)0x0, lVar23 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar23 + 0x30) = pMVar14;
    pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x30);
    plVar7 = *(long **)&(pMVar17->fields).Visible;
    pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar18 = pMVar14;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pMVar18 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
      pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar13 = (**(code **)(lVar23 + 0x1b8))();
      plVar7 = *(long **)&(pMVar17->fields).Visible;
      pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  pMStack_80 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar22;
  pMStack_80 = pMVar17;
  if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar17 = pMVar22;
    if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar26 = Map_MapScriptBaseObject__GetPosition(pMVar8,(MethodInfo *)0x0);
      fStack_94 = UVar26.fields.z;
      auStack_90._8_4_ = extraout_XMM0_Dc_01;
      auStack_90._0_8_ = UVar26.fields._0_8_;
      auStack_90._12_4_ = extraout_XMM0_Dd_01;
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_90;
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_94;
      value_01.fields.x = (float)auStack_90._0_4_;
      value_01.fields.y = (float)auStack_90._4_4_;
      auStack_90 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_c0._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_b0 = pMVar17;
  pMStack_a8 = pMVar19;
  if (g_data_057aca89 == '\0') {
    auStack_c0._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_c0._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_c0._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_c0._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar22 = pMVar18;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_c0._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar17 = pMVar22;
    auStack_c0._0_8_ = pMVar14;
    if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar14 = pMVar22;
      if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar8,(MethodInfo *)0x0);
        auStack_d0._8_4_ = extraout_XMM0_Dc_02;
        auStack_d0._0_8_ = UVar26.fields._0_8_;
        auStack_d0._12_4_ = extraout_XMM0_Dd_02;
        pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_d8._4_4_ = UVar26.fields.z;
        pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar25 = auStack_d0;
        pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_d8._4_4_;
        value_02.fields.x = (float)auStack_d0._0_4_;
        value_02.fields.y = (float)auStack_d0._4_4_;
        auStack_d0 = auVar25;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_f8 = il2cpp_runtime_helper_022b2c90();
    pMStack_f0 = pMVar14;
    pMStack_e8 = pMVar18;
    if (g_data_057aca8a == '\0') {
      pMStack_100 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_100 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_100 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_100 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar18 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_100 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = pMVar17;
      pMVar22 = pMVar19;
      pMStack_100 = pMVar17;
      if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
        pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar14 = pMVar19;
        if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar26 = Map_MapScriptBaseObject__GetScale(pMVar17,(MethodInfo *)0x0);
          fStack_114 = UVar26.fields.z;
          auStack_110._8_4_ = extraout_XMM0_Dc_03;
          auStack_110._0_8_ = UVar26.fields._0_8_;
          auStack_110._12_4_ = extraout_XMM0_Dd_03;
          pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar25 = auStack_110;
          UVar26.fields.z = fStack_114;
          UVar26.fields.x = (float)auStack_110._0_4_;
          UVar26.fields.y = (float)auStack_110._4_4_;
          auStack_110 = auVar25;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,UVar26,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar22 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar24._0_4_ = (pMVar18->fields).Visible, lVar24._4_4_ = (pMVar18->fields).Networked, lVar24 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar22 = MethodInfo_String_ConvertTo_String;
        pMVar17 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar18->fields).Visible, pMVar19 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x60) = pMVar17;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
          plVar7 = *(long **)&(pMVar18->fields).Visible;
          pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar22 = pMVar17;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar22 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar13 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar18->fields).Visible;
            pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar9._0_4_ = (pMVar19->fields).Visible, lVar9._4_4_ = (pMVar19->fields).Networked, lVar9 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar18 = MethodInfo_String_ConvertTo_String;
        pMVar17 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar22,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar19->fields).Visible, pMVar22 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x68) = pMVar17;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x68);
          plVar7 = *(long **)&(pMVar19->fields).Visible;
          pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar18 = pMVar17;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar18 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar13 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar19->fields).Visible;
            pMVar22 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar10._0_4_ = (pMVar22->fields).Visible, lVar10._4_4_ = (pMVar22->fields).Networked, lVar10 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar22 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar22->fields).Visible, lVar23 != 0)) {
          *(Il2CppObject **)(lVar23 + 0x70) = pIVar16;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
          plVar7 = *(long **)&(pMVar22->fields).Visible;
          if (plVar7 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar7 + 0x1b8))();
            plVar7 = *(long **)&(pMVar22->fields).Visible;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar16;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar16);
        return;
      }
      puVar21 = auStack_120;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar20 = auStack_e0;
    pMVar19 = pMStack_f0;
  }
  else {
    pMStack_a8 = pMStack_b0;
    pMVar18 = pMStack_b0;
    pMVar19 = pMVar14;
    if ((pIVar16 != (Il2CppObject *)0x0) &&
       (pMVar22 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
       pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar18 = pMVar14,
       pMVar22 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar16 + 3;
      pIVar16 = (Il2CppObject *)0x0;
      pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar22,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar7 = *(long **)&(pMVar14->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
        pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar13 = (**(code **)(lVar23 + 0x1b8))();
        plVar7 = *(long **)&(pMVar14->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar7 != (long *)0x0) {
          lVar23 = *plVar7;
          (**(code **)(lVar23 + 0x1c8))
                    (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
          return;
        }
      }
    }
    pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar20 = auStack_d0;
    pMStack_b0 = pMVar18;
    if (g_data_057aca6f == '\0') {
      uStack_d8 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_d8 = 0x412d594;
      UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar17,(MethodInfo *)0x0);
      auStack_c0._8_4_ = extraout_XMM0_Dc;
      auStack_c0._0_8_ = UVar26.fields._0_8_;
      auStack_c0._12_4_ = extraout_XMM0_Dd;
      uStack_d8 = 0x412d5ae;
      auStack_d0._12_4_ = UVar26.fields.z;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_c0;
      uStack_d8 = 0x412d5c6;
      value.fields.z = (float)auStack_d0._12_4_;
      value.fields.x = (float)auStack_c0._0_4_;
      value.fields.y = (float)auStack_c0._4_4_;
      auStack_c0 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value,(MethodInfo *)0x0);
      return;
    }
    uStack_d8 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar20 + -8) = pMVar19;
  pMVar14 = pMVar17;
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar19 = pMVar17,
     pMVar18 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar16 + 3);
    pIVar16 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar20 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar18,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar17->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar20 + -0x10) = 0x412d61c;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar17->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar20 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar20 + -0x10) = pMVar19;
  puVar21 = puVar20 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar20 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar22 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar22 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar20 + -0x38) = 0x412d684;
    UVar26 = Map_MapScriptBaseObject__GetScale(pMVar22,(MethodInfo *)0x0);
    auVar25._8_4_ = extraout_XMM0_Dc_00;
    auVar25._0_8_ = UVar26.fields._0_8_;
    auVar25._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar20 + -0x20) = auVar25;
    *(float *)(puVar20 + -0x24) = UVar26.fields.z;
    *(undefined8 *)(puVar20 + -0x38) = 0x412d69e;
    pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar20 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar20 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar20 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar20 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar21 + -8) = pMVar14;
  pMVar19 = pMVar22;
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar22->fields).Visible,
     pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar22,
     pMVar18 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar16 + 3);
    pIVar16 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar21 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar18,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar22->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x10) = 0x412d70c;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar22->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar21 + -0x10) = 0x412d732;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x10) = uVar13;
  lVar2._0_4_ = (pMVar19->fields).Visible;
  lVar2._4_4_ = (pMVar19->fields).Networked;
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x18) = pMVar14;
  lVar23 = *(long *)&(pMVar19->fields).Visible;
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x60) = pIVar16;
    *(undefined8 *)(puVar21 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
    plVar7 = *(long **)&(pMVar19->fields).Visible;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x20) = 0x412d793;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar19->fields).Visible;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar21 + -0x20) = 0x412d7b9;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x20) = uVar13;
  if (*(long *)(lVar23 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x28) = pMVar19;
  lVar24 = *(long *)(lVar23 + 0x30);
  if (lVar24 != 0) {
    *(Il2CppObject **)(lVar24 + 0x68) = pIVar16;
    *(undefined8 *)(puVar21 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x68);
    if (*(long **)(lVar23 + 0x30) != (long *)0x0) {
      lVar24 = **(long **)(lVar23 + 0x30);
      pIVar16 = *(Il2CppObject **)(lVar24 + 0x1c0);
      vtableDispatch = *(code **)(lVar24 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x30) = 0x412d813;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)(lVar23 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar24 = 0;
  *(undefined8 *)(puVar21 + -0x30) = 0x412d839;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x30) = uVar13;
  if (*(long *)(lVar24 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar21 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar21 + -0x38) = lVar23;
  lVar23 = *(long *)(lVar24 + 0x30);
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x70) = pIVar16;
    *(undefined8 *)(puVar21 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
    plVar7 = *(long **)(lVar24 + 0x30);
    if (plVar7 != (long *)0x0) {
      uVar13 = *(undefined8 *)(*plVar7 + 0x1c0);
      vtableDispatch = *(code **)(*plVar7 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x40) = 0x412d893;
      uVar13 = (*vtableDispatch)(plVar7,uVar13);
      plVar7 = *(long **)(lVar24 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar21 + -0x40) = 0x412d8b9;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar21 + -0x40) = auVar25._0_8_;
  plVar7 = *(long **)(lVar23 + 0x30);
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x1b8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1c0),auVar25._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar21 + -0x48) = 0x412d8e3;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar21 + -0x48) = uVar13;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar21 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f1b0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppType **ppIVar4;
  Il2CppType *pIVar5;
  long *plVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_Fields UVar8;
  bool_conflict bVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  MethodInfo *pMVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_158 [10];
  undefined1 auStack_108 [12];
  float fStack_fc;
  undefined1 auStack_f8 [16];
  Map_MapScriptBaseObject_o *pMStack_e8;
  undefined8 uStack_e0;
  Map_MapScriptBaseObject_o *pMStack_d8;
  Map_MapScriptBaseObject_o *pMStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  Map_MapScriptBaseObject_o *pMStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  float fStack_7c;
  undefined1 auStack_78 [16];
  Map_MapScriptBaseObject_o *pMStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar10;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca86 == '\0') {
    uStack_28 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x412f24c;
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar22 = method;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar22 = (MethodInfo *)0x0, pMVar2 != (Map_MapScriptSceneObject_o *)0x0))
  {
    *(char *)((long)&(pMVar2->fields).Active + 1) = (char)bVar9;
    pMVar16 = (Map_MapScriptBaseObject_o *)(pMVar2->klass->vtable)._8_Serialize.method;
    uStack_28 = 0x412f26d;
    uVar11 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__i->fields).Value;
    pMVar22 = (MethodInfo *)0x0;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      pIVar10 = (Il2CppObject *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (pMVar2,uVar11,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                           UNRECOVERED_JUMPTABLE_00);
      return pIVar10;
    }
  }
  uStack_28 = 0x412f299;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar22 != (MethodInfo *)0x0) && (pMVar22->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT17(*(undefined1 *)((long)pMVar22->parameters + 0x2a),(undefined7)uStack_28);
    pMStack_30 = (MethodInfo *)0x412f2cb;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar10;
  }
  pMStack_30 = (MethodInfo *)0x412f2d2;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057aca87 == '\0') {
    uStack_48 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_48 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x412f33c;
  pMVar15 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar17 = pMVar16;
  bVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar16,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pMVar22 != (MethodInfo *)0x0) &&
     (ppIVar4 = pMVar22->parameters, pMVar17 = (Map_MapScriptBaseObject_o *)0x0, ppIVar4 != (Il2CppType **)0x0
     )) {
    *(char *)((long)ppIVar4 + 0x2a) = (char)bVar9;
    pMVar15 = (*ppIVar4)[0x1c].data;
    uStack_48 = 0x412f35d;
    uVar11 = (**(code **)&(*ppIVar4)[0x1b].bits)();
    ppIVar4 = pMVar22->parameters;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (ppIVar4 != (Il2CppType **)0x0) {
      pIVar5 = *ppIVar4;
      pIVar10 = (Il2CppObject *)
                (**(code **)&pIVar5[0x1c].bits)
                          (ppIVar4,uVar11,pIVar5[0x1d].data,pIVar5,*(code **)&pIVar5[0x1c].bits);
      return pIVar10;
    }
  }
  uStack_48 = 0x412f389;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
    return *(Il2CppObject **)(lVar20 + 0x30);
  }
  pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar22;
  pMStack_50 = pMVar16;
  if (g_data_057aca88 == '\0') {
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar16 = MethodInfo_String_ConvertTo_String;
  pMVar14 = pMVar15;
  pMVar12 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar20 = *(long *)&(pMVar17->fields).Visible, pMVar14 = (Map_MapScriptBaseObject_o *)0x0, lVar20 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar20 + 0x30) = pMVar12;
    pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x30);
    plVar6 = *(long **)&(pMVar17->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar16 = pMVar12;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
      pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar11 = (**(code **)(lVar20 + 0x1b8))();
      plVar6 = *(long **)&(pMVar17->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar14;
  pMStack_68 = pMVar17;
  if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar17 = pMVar14;
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar24 = Map_MapScriptBaseObject__GetPosition(pMVar7,(MethodInfo *)0x0);
      fStack_7c = UVar24.fields.z;
      auStack_78._8_4_ = extraout_XMM0_Dc_01;
      auStack_78._0_8_ = UVar24.fields._0_8_;
      auStack_78._12_4_ = extraout_XMM0_Dd_01;
      pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_78;
      pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_7c;
      value_01.fields.x = (float)auStack_78._0_4_;
      value_01.fields.y = (float)auStack_78._4_4_;
      auStack_78 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
  }
  pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_a8._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_98 = pMVar17;
  pMStack_90 = pMVar15;
  if (g_data_057aca89 == '\0') {
    auStack_a8._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_a8._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_a8._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_a8._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar15 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar17 = pMVar16;
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar12 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_a8._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar14 = pMVar17;
    auStack_a8._0_8_ = pMVar12;
    if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar12 = pMVar17;
      if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar7,(MethodInfo *)0x0);
        auStack_b8._8_4_ = extraout_XMM0_Dc_02;
        auStack_b8._0_8_ = UVar24.fields._0_8_;
        auStack_b8._12_4_ = extraout_XMM0_Dd_02;
        pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_c0._4_4_ = UVar24.fields.z;
        pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar23 = auStack_b8;
        pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_c0._4_4_;
        value_02.fields.x = (float)auStack_b8._0_4_;
        value_02.fields.y = (float)auStack_b8._4_4_;
        auStack_b8 = auVar23;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar13;
      }
    }
    pMStack_d0 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_e0 = il2cpp_runtime_helper_022b2c90();
    pMStack_d8 = pMVar12;
    pMStack_d0 = pMVar16;
    if (g_data_057aca8a == '\0') {
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_e8 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar14;
      pMVar17 = pMVar15;
      pMStack_e8 = pMVar14;
      if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar14 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible;
        pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar12 = pMVar15;
        if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar24 = Map_MapScriptBaseObject__GetScale(pMVar14,(MethodInfo *)0x0);
          fStack_fc = UVar24.fields.z;
          auStack_f8._8_4_ = extraout_XMM0_Dc_03;
          auStack_f8._0_8_ = UVar24.fields._0_8_;
          auStack_f8._12_4_ = extraout_XMM0_Dd_03;
          pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar23 = auStack_f8;
          UVar24.fields.z = fStack_fc;
          UVar24.fields.x = (float)auStack_f8._0_4_;
          UVar24.fields.y = (float)auStack_f8._4_4_;
          auStack_f8 = auVar23;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,UVar24,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar13;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar15 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar17 = MethodInfo_String_ConvertTo_String;
        pMVar14 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar16->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x60) = pMVar14;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
          plVar6 = *(long **)&(pMVar16->fields).Visible;
          pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar17 = pMVar14;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar17 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar16->fields).Visible;
            pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar15->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = MethodInfo_String_ConvertTo_String;
        pMVar14 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar15 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar15->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
           lVar20 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar20 + 0x68) = pMVar14;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x68);
          plVar6 = *(long **)&(pMVar15->fields).Visible;
          pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar16 = pMVar14;
          if (plVar6 != (long *)0x0) {
            lVar20 = *plVar6;
            pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar20 + 0x1c0);
            uVar11 = (**(code **)(lVar20 + 0x1b8))();
            plVar6 = *(long **)&(pMVar15->fields).Visible;
            pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
          return *(Il2CppObject **)(lVar20 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar20 = *(long *)&(pMVar17->fields).Visible, lVar20 != 0)) {
          *(Il2CppObject **)(lVar20 + 0x70) = pIVar10;
          il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
          plVar6 = *(long **)&(pMVar17->fields).Visible;
          if (plVar6 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar6 + 0x1b8))();
            plVar6 = *(long **)&(pMVar17->fields).Visible;
            if (plVar6 != (long *)0x0) {
              lVar20 = *plVar6;
              pIVar10 = (Il2CppObject *)
                        (**(code **)(lVar20 + 0x1c8))
                                  (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,
                                   *(code **)(lVar20 + 0x1c8));
              return pIVar10;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar10,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
        return pIVar10;
      }
      puVar19 = auStack_108;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar18 = auStack_c8;
    pMVar16 = pMStack_d8;
  }
  else {
    pMStack_90 = pMStack_98;
    pMVar15 = pMStack_98;
    pMVar16 = pMVar12;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
       pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar15 = pMVar12,
       pMVar17 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar10 + 3;
      pIVar10 = (Il2CppObject *)0x0;
      pMStack_98 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar17,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar6 = *(long **)&(pMVar12->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
        pMStack_98 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar11 = (**(code **)(lVar20 + 0x1b8))();
        plVar6 = *(long **)&(pMVar12->fields).Visible;
        pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar20 = *plVar6;
          pIVar10 = (Il2CppObject *)
                    (**(code **)(lVar20 + 0x1c8))
                              (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8)
                              );
          return pIVar10;
        }
      }
    }
    pMStack_98 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar18 = auStack_b8;
    pMStack_98 = pMVar15;
    if (g_data_057aca6f == '\0') {
      uStack_c0 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar14 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
    if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_c0 = 0x412d594;
      UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar14,(MethodInfo *)0x0);
      auStack_a8._8_4_ = extraout_XMM0_Dc;
      auStack_a8._0_8_ = UVar24.fields._0_8_;
      auStack_a8._12_4_ = extraout_XMM0_Dd;
      uStack_c0 = 0x412d5ae;
      auStack_b8._12_4_ = UVar24.fields.z;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_a8;
      uStack_c0 = 0x412d5c6;
      value.fields.z = (float)auStack_b8._12_4_;
      value.fields.x = (float)auStack_a8._0_4_;
      value.fields.y = (float)auStack_a8._4_4_;
      auStack_a8 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
    uStack_c0 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar18 + -8) = pMVar16;
  pMVar12 = pMVar14;
  if ((pIVar10 != (Il2CppObject *)0x0) &&
     (pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar14,
     pMVar15 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar10 + 3);
    pIVar10 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar15,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar14->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar14->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x10) = pMVar16;
  puVar19 = puVar18 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d684;
    UVar24 = Map_MapScriptBaseObject__GetScale(pMVar17,(MethodInfo *)0x0);
    auVar23._8_4_ = extraout_XMM0_Dc_00;
    auVar23._0_8_ = UVar24.fields._0_8_;
    auVar23._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar18 + -0x20) = auVar23;
    *(float *)(puVar18 + -0x24) = UVar24.fields.z;
    *(undefined8 *)(puVar18 + -0x38) = 0x412d69e;
    pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar18 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar18 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar18 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar13;
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar19 + -8) = pMVar12;
  pMVar16 = pMVar17;
  if ((pIVar10 != (Il2CppObject *)0x0) &&
     (pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar12 = pMVar17,
     pMVar15 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar8 = *(UnityEngine_Vector3_Fields *)(pIVar10 + 3);
    pIVar10 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar19 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar15,(UnityEngine_Vector3_o)UVar8,(MethodInfo *)0x0);
    plVar6 = *(long **)&(pMVar17->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar17->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  *(undefined8 *)(puVar19 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x10) = uVar11;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    return *(Il2CppObject **)(lVar20 + 0x60);
  }
  *(undefined8 *)(puVar19 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x18) = pMVar12;
  lVar20 = *(long *)&(pMVar16->fields).Visible;
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x60) = pIVar10;
    *(undefined8 *)(puVar19 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x60);
    plVar6 = *(long **)&(pMVar16->fields).Visible;
    if (plVar6 != (long *)0x0) {
      lVar20 = *plVar6;
      pIVar10 = *(Il2CppObject **)(lVar20 + 0x1c0);
      vtableDispatch = *(code **)(lVar20 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)&(pMVar16->fields).Visible;
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar19 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x20) = uVar11;
  if (*(long *)(lVar20 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar20 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar19 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x28) = pMVar16;
  lVar21 = *(long *)(lVar20 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x68) = pIVar10;
    *(undefined8 *)(puVar19 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
    if (*(long **)(lVar20 + 0x30) != (long *)0x0) {
      lVar21 = **(long **)(lVar20 + 0x30);
      pIVar10 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar6 = *(long **)(lVar20 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar19 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x30) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar21 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar19 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar21 + 0x30);
  if (lVar20 != 0) {
    *(Il2CppObject **)(lVar20 + 0x70) = pIVar10;
    *(undefined8 *)(puVar19 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar20 + 0x70);
    plVar6 = *(long **)(lVar21 + 0x30);
    if (plVar6 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar6 + 0x1c0);
      vtableDispatch = *(code **)(*plVar6 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar6,uVar11);
      plVar6 = *(long **)(lVar21 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar20 = *plVar6;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(lVar20 + 0x1c8))
                            (plVar6,uVar11,*(undefined8 *)(lVar20 + 0x1d0),lVar20,*(code **)(lVar20 + 0x1c8));
        return pIVar10;
      }
    }
  }
  lVar20 = 0;
  *(undefined8 *)(puVar19 + -0x40) = 0x412d8b9;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x40) = auVar23._0_8_;
  plVar6 = *(long **)(lVar20 + 0x30);
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x1b8);
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (plVar6,*(undefined8 *)(*plVar6 + 0x1c0),auVar23._8_8_,vtableDispatch);
    return pIVar10;
  }
  *(undefined8 *)(puVar19 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar19 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f1f0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  long lVar2;
  Map_MapScriptSceneObject_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar5;
  void *pvVar6;
  long *plVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  long lVar9;
  long lVar10;
  UnityEngine_Vector3_Fields UVar11;
  bool_conflict bVar12;
  undefined8 uVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar15;
  Il2CppObject *pIVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  Map_MapScriptBaseObject_o *pMVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  Map_MapScriptBaseObject_o *pMVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar25 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_150 [10];
  undefined1 auStack_100 [12];
  float fStack_f4;
  undefined1 auStack_f0 [16];
  Map_MapScriptBaseObject_o *pMStack_e0;
  undefined8 uStack_d8;
  Map_MapScriptBaseObject_o *pMStack_d0;
  Map_MapScriptBaseObject_o *pMStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  Map_MapScriptBaseObject_o *pMStack_90;
  Map_MapScriptBaseObject_o *pMStack_88;
  float fStack_74;
  undefined1 auStack_70 [16];
  Map_MapScriptBaseObject_o *pMStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  Map_MapScriptBaseObject_o *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057aca86 == '\0') {
    uStack_20 = 0x412f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x412f21b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x412f23a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x412f24c;
  pMVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pIVar16 = __v;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar3 = (__i->fields).Value, pIVar16 = (Il2CppObject *)0x0, pMVar3 != (Map_MapScriptSceneObject_o *)0x0
     )) {
    *(char *)((long)&(pMVar3->fields).Active + 1) = (char)bVar12;
    pMVar19 = (Map_MapScriptBaseObject_o *)(pMVar3->klass->vtable)._8_Serialize.method;
    uStack_20 = 0x412f26d;
    uVar13 = (*(pMVar3->klass->vtable)._8_Serialize.methodPtr)();
    pMVar3 = (__i->fields).Value;
    pIVar16 = (Il2CppObject *)0x0;
    if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar3->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar3,uVar13,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  uStack_20 = 0x412f299;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar16 != (Il2CppObject *)0x0) && (pIVar16[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17(*(undefined1 *)((long)&((pIVar16[3].klass)->_1).byval_arg.bits + 2),
                         (undefined7)uStack_20);
    pIStack_28 = (Il2CppObject *)0x412f2cb;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x412f2d2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057aca87 == '\0') {
    uStack_40 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x412f33c;
  pMVar18 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar20 = pMVar19;
  bVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pMVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pIVar5 = pIVar16[3].klass, pMVar20 = (Map_MapScriptBaseObject_o *)0x0, pIVar5 != (Il2CppClass *)0x0)) {
    *(char *)((long)&(pIVar5->_1).byval_arg.bits + 2) = (char)bVar12;
    pvVar6 = (pIVar5->_1).image;
    pMVar18 = *(Map_MapScriptBaseObject_o **)((long)pvVar6 + 0x1c0);
    uStack_40 = 0x412f35d;
    uVar13 = (**(code **)((long)pvVar6 + 0x1b8))();
    pIVar5 = pIVar16[3].klass;
    pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
    if (pIVar5 != (Il2CppClass *)0x0) {
      pvVar6 = (pIVar5->_1).image;
      (**(code **)((long)pvVar6 + 0x1c8))
                (pIVar5,uVar13,*(undefined8 *)((long)pvVar6 + 0x1d0),pvVar6,*(code **)((long)pvVar6 + 0x1c8));
      return;
    }
  }
  uStack_40 = 0x412f389;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23._0_4_ = (pMVar20->fields).Visible, lVar23._4_4_ = (pMVar20->fields).Networked, lVar23 != 0)) {
    return;
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar16;
  pMStack_48 = pMVar19;
  if (g_data_057aca88 == '\0') {
    pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar19 = MethodInfo_String_ConvertTo_String;
  pMVar17 = pMVar18;
  pMVar14 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar23 = *(long *)&(pMVar20->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0, lVar23 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar23 + 0x30) = pMVar14;
    pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x30);
    plVar7 = *(long **)&(pMVar20->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar19 = pMVar14;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
      pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar13 = (**(code **)(lVar23 + 0x1b8))();
      plVar7 = *(long **)&(pMVar20->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar17;
  pMStack_60 = pMVar20;
  if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar20 = pMVar17;
    if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar26 = Map_MapScriptBaseObject__GetPosition(pMVar8,(MethodInfo *)0x0);
      fStack_74 = UVar26.fields.z;
      auStack_70._8_4_ = extraout_XMM0_Dc_01;
      auStack_70._0_8_ = UVar26.fields._0_8_;
      auStack_70._12_4_ = extraout_XMM0_Dd_01;
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_70;
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_74;
      value_01.fields.x = (float)auStack_70._0_4_;
      value_01.fields.y = (float)auStack_70._4_4_;
      auStack_70 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_a0._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_90 = pMVar20;
  pMStack_88 = pMVar18;
  if (g_data_057aca89 == '\0') {
    auStack_a0._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_a0._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_a0._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_a0._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar18 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar20 = pMVar19;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_a0._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar17 = pMVar20;
    auStack_a0._0_8_ = pMVar14;
    if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar14 = pMVar20;
      if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar8,(MethodInfo *)0x0);
        auStack_b0._8_4_ = extraout_XMM0_Dc_02;
        auStack_b0._0_8_ = UVar26.fields._0_8_;
        auStack_b0._12_4_ = extraout_XMM0_Dd_02;
        pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_b8._4_4_ = UVar26.fields.z;
        pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar25 = auStack_b0;
        pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_b8._4_4_;
        value_02.fields.x = (float)auStack_b0._0_4_;
        value_02.fields.y = (float)auStack_b0._4_4_;
        auStack_b0 = auVar25;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_d8 = il2cpp_runtime_helper_022b2c90();
    pMStack_d0 = pMVar14;
    pMStack_c8 = pMVar19;
    if (g_data_057aca8a == '\0') {
      pMStack_e0 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_e0 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e0 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar19 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_e0 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = pMVar17;
      pMVar20 = pMVar18;
      pMStack_e0 = pMVar17;
      if (pMVar18 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar18->fields).Visible;
        pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar14 = pMVar18;
        if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar26 = Map_MapScriptBaseObject__GetScale(pMVar17,(MethodInfo *)0x0);
          fStack_f4 = UVar26.fields.z;
          auStack_f0._8_4_ = extraout_XMM0_Dc_03;
          auStack_f0._0_8_ = UVar26.fields._0_8_;
          auStack_f0._12_4_ = extraout_XMM0_Dd_03;
          pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar25 = auStack_f0;
          UVar26.fields.z = fStack_f4;
          UVar26.fields.x = (float)auStack_f0._0_4_;
          UVar26.fields.y = (float)auStack_f0._4_4_;
          auStack_f0 = auVar25;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,UVar26,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar20 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar24._0_4_ = (pMVar19->fields).Visible, lVar24._4_4_ = (pMVar19->fields).Networked, lVar24 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar20 = MethodInfo_String_ConvertTo_String;
        pMVar17 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar18,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar19 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar19->fields).Visible, pMVar18 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x60) = pMVar17;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
          plVar7 = *(long **)&(pMVar19->fields).Visible;
          pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar20 = pMVar17;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar20 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar13 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar19->fields).Visible;
            pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar9._0_4_ = (pMVar18->fields).Visible, lVar9._4_4_ = (pMVar18->fields).Networked, lVar9 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar19 = MethodInfo_String_ConvertTo_String;
        pMVar17 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar20,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar18 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar18->fields).Visible, pMVar20 = (Map_MapScriptBaseObject_o *)0x0,
           lVar23 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar23 + 0x68) = pMVar17;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x68);
          plVar7 = *(long **)&(pMVar18->fields).Visible;
          pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar19 = pMVar17;
          if (plVar7 != (long *)0x0) {
            lVar23 = *plVar7;
            pMVar19 = *(Map_MapScriptBaseObject_o **)(lVar23 + 0x1c0);
            uVar13 = (**(code **)(lVar23 + 0x1b8))();
            plVar7 = *(long **)&(pMVar18->fields).Visible;
            pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar10._0_4_ = (pMVar20->fields).Visible, lVar10._4_4_ = (pMVar20->fields).Networked, lVar10 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar23 = *(long *)&(pMVar20->fields).Visible, lVar23 != 0)) {
          *(Il2CppObject **)(lVar23 + 0x70) = pIVar16;
          il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
          plVar7 = *(long **)&(pMVar20->fields).Visible;
          if (plVar7 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar7 + 0x1b8))();
            plVar7 = *(long **)&(pMVar20->fields).Visible;
            if (plVar7 != (long *)0x0) {
              lVar23 = *plVar7;
              (**(code **)(lVar23 + 0x1c8))
                        (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar16;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar16);
        return;
      }
      puVar22 = auStack_100;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar21 = auStack_c0;
    pMVar19 = pMStack_d0;
  }
  else {
    pMStack_88 = pMStack_90;
    pMVar18 = pMStack_90;
    pMVar19 = pMVar14;
    if ((pIVar16 != (Il2CppObject *)0x0) &&
       (pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
       pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar18 = pMVar14,
       pMVar20 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar16 + 3;
      pIVar16 = (Il2CppObject *)0x0;
      pMStack_90 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar7 = *(long **)&(pMVar14->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
        pMStack_90 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar13 = (**(code **)(lVar23 + 0x1b8))();
        plVar7 = *(long **)&(pMVar14->fields).Visible;
        pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar7 != (long *)0x0) {
          lVar23 = *plVar7;
          (**(code **)(lVar23 + 0x1c8))
                    (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
          return;
        }
      }
    }
    pMStack_90 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar21 = auStack_b0;
    pMStack_90 = pMVar18;
    if (g_data_057aca6f == '\0') {
      uStack_b8 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible;
    if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_b8 = 0x412d594;
      UVar26 = Map_MapScriptBaseObject__GetRotation(pMVar17,(MethodInfo *)0x0);
      auStack_a0._8_4_ = extraout_XMM0_Dc;
      auStack_a0._0_8_ = UVar26.fields._0_8_;
      auStack_a0._12_4_ = extraout_XMM0_Dd;
      uStack_b8 = 0x412d5ae;
      auStack_b0._12_4_ = UVar26.fields.z;
      pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_a0;
      uStack_b8 = 0x412d5c6;
      value.fields.z = (float)auStack_b0._12_4_;
      value.fields.x = (float)auStack_a0._0_4_;
      value.fields.y = (float)auStack_a0._4_4_;
      auStack_a0 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value,(MethodInfo *)0x0);
      return;
    }
    uStack_b8 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar21 + -8) = pMVar19;
  pMVar14 = pMVar17;
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar19 = pMVar17,
     pMVar18 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar16 + 3);
    pIVar16 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar21 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar18,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar17->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar21 + -0x10) = 0x412d61c;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar17->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar21 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar21 + -0x10) = pMVar19;
  puVar22 = puVar21 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar21 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar21 + -0x38) = 0x412d684;
    UVar26 = Map_MapScriptBaseObject__GetScale(pMVar20,(MethodInfo *)0x0);
    auVar25._8_4_ = extraout_XMM0_Dc_00;
    auVar25._0_8_ = UVar26.fields._0_8_;
    auVar25._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar21 + -0x20) = auVar25;
    *(float *)(puVar21 + -0x24) = UVar26.fields.z;
    *(undefined8 *)(puVar21 + -0x38) = 0x412d69e;
    pCVar15 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar21 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar21 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar21 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar15,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar21 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar22 + -8) = pMVar14;
  pMVar19 = pMVar20;
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (pMVar18 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible,
     pMVar19 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar20,
     pMVar18 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar11 = *(UnityEngine_Vector3_Fields *)(pIVar16 + 3);
    pIVar16 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar22 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar18,(UnityEngine_Vector3_o)UVar11,(MethodInfo *)0x0);
    plVar7 = *(long **)&(pMVar20->fields).Visible;
    pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x10) = 0x412d70c;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar20->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar22 + -0x10) = 0x412d732;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x10) = uVar13;
  lVar2._0_4_ = (pMVar19->fields).Visible;
  lVar2._4_4_ = (pMVar19->fields).Networked;
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar22 + -0x18) = pMVar14;
  lVar23 = *(long *)&(pMVar19->fields).Visible;
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x60) = pIVar16;
    *(undefined8 *)(puVar22 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x60);
    plVar7 = *(long **)&(pMVar19->fields).Visible;
    if (plVar7 != (long *)0x0) {
      lVar23 = *plVar7;
      pIVar16 = *(Il2CppObject **)(lVar23 + 0x1c0);
      vtableDispatch = *(code **)(lVar23 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x20) = 0x412d793;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)&(pMVar19->fields).Visible;
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar22 + -0x20) = 0x412d7b9;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x20) = uVar13;
  if (*(long *)(lVar23 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar22 + -0x28) = pMVar19;
  lVar24 = *(long *)(lVar23 + 0x30);
  if (lVar24 != 0) {
    *(Il2CppObject **)(lVar24 + 0x68) = pIVar16;
    *(undefined8 *)(puVar22 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x68);
    if (*(long **)(lVar23 + 0x30) != (long *)0x0) {
      lVar24 = **(long **)(lVar23 + 0x30);
      pIVar16 = *(Il2CppObject **)(lVar24 + 0x1c0);
      vtableDispatch = *(code **)(lVar24 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x30) = 0x412d813;
      uVar13 = (*vtableDispatch)();
      plVar7 = *(long **)(lVar23 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar24 = 0;
  *(undefined8 *)(puVar22 + -0x30) = 0x412d839;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x30) = uVar13;
  if (*(long *)(lVar24 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar22 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar22 + -0x38) = lVar23;
  lVar23 = *(long *)(lVar24 + 0x30);
  if (lVar23 != 0) {
    *(Il2CppObject **)(lVar23 + 0x70) = pIVar16;
    *(undefined8 *)(puVar22 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x70);
    plVar7 = *(long **)(lVar24 + 0x30);
    if (plVar7 != (long *)0x0) {
      uVar13 = *(undefined8 *)(*plVar7 + 0x1c0);
      vtableDispatch = *(code **)(*plVar7 + 0x1b8);
      *(undefined8 *)(puVar22 + -0x40) = 0x412d893;
      uVar13 = (*vtableDispatch)(plVar7,uVar13);
      plVar7 = *(long **)(lVar24 + 0x30);
      if (plVar7 != (long *)0x0) {
        lVar23 = *plVar7;
        (**(code **)(lVar23 + 0x1c8))
                  (plVar7,uVar13,*(undefined8 *)(lVar23 + 0x1d0),lVar23,*(code **)(lVar23 + 0x1c8));
        return;
      }
    }
  }
  lVar23 = 0;
  *(undefined8 *)(puVar22 + -0x40) = 0x412d8b9;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar22 + -0x40) = auVar25._0_8_;
  plVar7 = *(long **)(lVar23 + 0x30);
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x1b8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1c0),auVar25._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar22 + -0x48) = 0x412d8e3;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar22 + -0x48) = uVar13;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar22 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f2a0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  UnityEngine_Vector3_Fields UVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  long lVar18;
  long lVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_138 [10];
  undefined1 auStack_e8 [12];
  float fStack_dc;
  undefined1 auStack_d8 [16];
  Map_MapScriptBaseObject_o *pMStack_c8;
  undefined8 uStack_c0;
  Map_MapScriptBaseObject_o *pMStack_b8;
  Map_MapScriptBaseObject_o *pMStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  Map_MapScriptBaseObject_o *pMStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  float fStack_5c;
  undefined1 auStack_58 [16];
  Map_MapScriptBaseObject_o *pMStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_38;
  Map_MapScriptBaseObject_o *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar8;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca87 == '\0') {
    uStack_28 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x412f33c;
  pMVar14 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar13 = (Map_MapScriptBaseObject_o *)method;
  bVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
     pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)((long)&(pMVar2->fields).Active + 2) = (char)bVar7;
    pMVar14 = (Map_MapScriptBaseObject_o *)(pMVar2->klass->vtable)._8_Serialize.method;
    uStack_28 = 0x412f35d;
    uVar9 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__i->fields).Value;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      pIVar8 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (pMVar2,uVar9,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00)
      ;
      return pIVar8;
    }
  }
  uStack_28 = 0x412f389;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar18 = *(long *)&(pMVar13->fields).Visible, lVar18 != 0)) {
    return *(Il2CppObject **)(lVar18 + 0x30);
  }
  pMStack_30 = (Map_MapScriptBaseObject_o *)0x412f3aa;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = (Map_MapScriptBaseObject_o *)method;
  if (g_data_057aca88 == '\0') {
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar17 = MethodInfo_String_ConvertTo_String;
  pMVar12 = pMVar14;
  pMVar10 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar18 = *(long *)&(pMVar13->fields).Visible, pMVar12 = (Map_MapScriptBaseObject_o *)0x0, lVar18 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar18 + 0x30) = pMVar10;
    pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x30);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar17 = pMVar10;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pMVar17 = *(Map_MapScriptBaseObject_o **)(lVar18 + 0x1c0);
      pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar9 = (**(code **)(lVar18 + 0x1b8))();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar12;
  pMStack_48 = pMVar13;
  if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
    pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar13 = pMVar12;
    if (pMVar5 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar21 = Map_MapScriptBaseObject__GetPosition(pMVar5,(MethodInfo *)0x0);
      fStack_5c = UVar21.fields.z;
      auStack_58._8_4_ = extraout_XMM0_Dc_01;
      auStack_58._0_8_ = UVar21.fields._0_8_;
      auStack_58._12_4_ = extraout_XMM0_Dd_01;
      pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar20 = auStack_58;
      pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_5c;
      value_01.fields.x = (float)auStack_58._0_4_;
      value_01.fields.y = (float)auStack_58._4_4_;
      auStack_58 = auVar20;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar11,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar11;
    }
  }
  pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_88._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar13;
  pMStack_70 = pMVar14;
  if (g_data_057aca89 == '\0') {
    auStack_88._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_88._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_88._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_88._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar14 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar13 = pMVar17;
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar10 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_88._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar12 = pMVar13;
    auStack_88._0_8_ = pMVar10;
    if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar10 = pMVar13;
      if (pMVar5 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar21 = Map_MapScriptBaseObject__GetRotation(pMVar5,(MethodInfo *)0x0);
        auStack_98._8_4_ = extraout_XMM0_Dc_02;
        auStack_98._0_8_ = UVar21.fields._0_8_;
        auStack_98._12_4_ = extraout_XMM0_Dd_02;
        pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_a0._4_4_ = UVar21.fields.z;
        pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar20 = auStack_98;
        pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_a0._4_4_;
        value_02.fields.x = (float)auStack_98._0_4_;
        value_02.fields.y = (float)auStack_98._4_4_;
        auStack_98 = auVar20;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar11,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar11;
      }
    }
    pMStack_b0 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_c0 = il2cpp_runtime_helper_022b2c90();
    pMStack_b8 = pMVar10;
    pMStack_b0 = pMVar17;
    if (g_data_057aca8a == '\0') {
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar12 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_c8 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar10 = pMVar12;
      pMVar17 = pMVar14;
      pMStack_c8 = pMVar12;
      if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
        pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar10 = pMVar14;
        if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar21 = Map_MapScriptBaseObject__GetScale(pMVar12,(MethodInfo *)0x0);
          fStack_dc = UVar21.fields.z;
          auStack_d8._8_4_ = extraout_XMM0_Dc_03;
          auStack_d8._0_8_ = UVar21.fields._0_8_;
          auStack_d8._12_4_ = extraout_XMM0_Dd_03;
          pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar20 = auStack_d8;
          UVar21.fields.z = fStack_dc;
          UVar21.fields.x = (float)auStack_d8._0_4_;
          UVar21.fields.y = (float)auStack_d8._4_4_;
          auStack_d8 = auVar20;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar11,UVar21,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar11;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar14 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar13->fields).Visible, lVar18 != 0)) {
          return *(Il2CppObject **)(lVar18 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar17 = MethodInfo_String_ConvertTo_String;
        pMVar12 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar13->fields).Visible, pMVar14 = (Map_MapScriptBaseObject_o *)0x0,
           lVar18 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar18 + 0x60) = pMVar12;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x60);
          plVar4 = *(long **)&(pMVar13->fields).Visible;
          pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar17 = pMVar12;
          if (plVar4 != (long *)0x0) {
            lVar18 = *plVar4;
            pMVar17 = *(Map_MapScriptBaseObject_o **)(lVar18 + 0x1c0);
            uVar9 = (**(code **)(lVar18 + 0x1b8))();
            plVar4 = *(long **)&(pMVar13->fields).Visible;
            pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar4 != (long *)0x0) {
              lVar18 = *plVar4;
              pIVar8 = (Il2CppObject *)
                       (**(code **)(lVar18 + 0x1c8))
                                 (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,
                                  *(code **)(lVar18 + 0x1c8));
              return pIVar8;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar14->fields).Visible, lVar18 != 0)) {
          return *(Il2CppObject **)(lVar18 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar13 = MethodInfo_String_ConvertTo_String;
        pMVar12 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar14->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
           lVar18 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar18 + 0x68) = pMVar12;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x68);
          plVar4 = *(long **)&(pMVar14->fields).Visible;
          pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar13 = pMVar12;
          if (plVar4 != (long *)0x0) {
            lVar18 = *plVar4;
            pMVar13 = *(Map_MapScriptBaseObject_o **)(lVar18 + 0x1c0);
            uVar9 = (**(code **)(lVar18 + 0x1b8))();
            plVar4 = *(long **)&(pMVar14->fields).Visible;
            pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar4 != (long *)0x0) {
              lVar18 = *plVar4;
              pIVar8 = (Il2CppObject *)
                       (**(code **)(lVar18 + 0x1c8))
                                 (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,
                                  *(code **)(lVar18 + 0x1c8));
              return pIVar8;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar17->fields).Visible, lVar18 != 0)) {
          return *(Il2CppObject **)(lVar18 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar17->fields).Visible, lVar18 != 0)) {
          *(Il2CppObject **)(lVar18 + 0x70) = pIVar8;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x70);
          plVar4 = *(long **)&(pMVar17->fields).Visible;
          if (plVar4 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar4 + 0x1b8))();
            plVar4 = *(long **)&(pMVar17->fields).Visible;
            if (plVar4 != (long *)0x0) {
              lVar18 = *plVar4;
              pIVar8 = (Il2CppObject *)
                       (**(code **)(lVar18 + 0x1c8))
                                 (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,
                                  *(code **)(lVar18 + 0x1c8));
              return pIVar8;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar8,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
        return pIVar8;
      }
      puVar16 = auStack_e8;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar15 = auStack_a8;
    pMVar14 = pMStack_b8;
  }
  else {
    pMStack_70 = pMStack_78;
    pMVar13 = pMStack_78;
    pMVar14 = pMVar10;
    if ((pIVar8 != (Il2CppObject *)0x0) &&
       (pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
       pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar10,
       pMVar17 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar8 + 3;
      pIVar8 = (Il2CppObject *)0x0;
      pMStack_78 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar17,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar4 = *(long **)&(pMVar10->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = *(Il2CppObject **)(lVar18 + 0x1c0);
        pMStack_78 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar9 = (**(code **)(lVar18 + 0x1b8))();
        plVar4 = *(long **)&(pMVar10->fields).Visible;
        pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar4 != (long *)0x0) {
          lVar18 = *plVar4;
          pIVar8 = (Il2CppObject *)
                   (**(code **)(lVar18 + 0x1c8))
                             (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
          return pIVar8;
        }
      }
    }
    pMStack_78 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar15 = auStack_98;
    pMStack_78 = pMVar13;
    if (g_data_057aca6f == '\0') {
      uStack_a0 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
    if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_a0 = 0x412d594;
      UVar21 = Map_MapScriptBaseObject__GetRotation(pMVar12,(MethodInfo *)0x0);
      auStack_88._8_4_ = extraout_XMM0_Dc;
      auStack_88._0_8_ = UVar21.fields._0_8_;
      auStack_88._12_4_ = extraout_XMM0_Dd;
      uStack_a0 = 0x412d5ae;
      auStack_98._12_4_ = UVar21.fields.z;
      pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar20 = auStack_88;
      uStack_a0 = 0x412d5c6;
      value.fields.z = (float)auStack_98._12_4_;
      value.fields.x = (float)auStack_88._0_4_;
      value.fields.y = (float)auStack_88._4_4_;
      auStack_88 = auVar20;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar11,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar11;
    }
    uStack_a0 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar15 + -8) = pMVar14;
  pMVar10 = pMVar12;
  if ((pIVar8 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
     pMVar10 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar12,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar6 = *(UnityEngine_Vector3_Fields *)(pIVar8 + 3);
    pIVar8 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar15 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar13,(UnityEngine_Vector3_o)UVar6,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pIVar8 = *(Il2CppObject **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar15 + -0x10) = 0x412d61c;
      uVar9 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  *(undefined8 *)(puVar15 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar15 + -0x10) = pMVar14;
  puVar16 = puVar15 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible;
  if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d684;
    UVar21 = Map_MapScriptBaseObject__GetScale(pMVar17,(MethodInfo *)0x0);
    auVar20._8_4_ = extraout_XMM0_Dc_00;
    auVar20._0_8_ = UVar21.fields._0_8_;
    auVar20._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar15 + -0x20) = auVar20;
    *(float *)(puVar15 + -0x24) = UVar21.fields.z;
    *(undefined8 *)(puVar15 + -0x38) = 0x412d69e;
    pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar15 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar15 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar15 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar11,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar11;
  }
  *(undefined8 *)(puVar15 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar16 + -8) = pMVar10;
  pMVar14 = pMVar17;
  if ((pIVar8 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar10 = pMVar17,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar6 = *(UnityEngine_Vector3_Fields *)(pIVar8 + 3);
    pIVar8 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar16 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar13,(UnityEngine_Vector3_o)UVar6,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar17->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pIVar8 = *(Il2CppObject **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x10) = 0x412d70c;
      uVar9 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar17->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  *(undefined8 *)(puVar16 + -0x10) = 0x412d732;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x10) = uVar9;
  lVar18 = *(long *)&(pMVar14->fields).Visible;
  if (lVar18 != 0) {
    return *(Il2CppObject **)(lVar18 + 0x60);
  }
  *(undefined8 *)(puVar16 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x18) = pMVar10;
  lVar18 = *(long *)&(pMVar14->fields).Visible;
  if (lVar18 != 0) {
    *(Il2CppObject **)(lVar18 + 0x60) = pIVar8;
    *(undefined8 *)(puVar16 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x60);
    plVar4 = *(long **)&(pMVar14->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pIVar8 = *(Il2CppObject **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x20) = 0x412d793;
      uVar9 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar14->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x20) = 0x412d7b9;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x20) = uVar9;
  if (*(long *)(lVar18 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar18 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x28) = pMVar14;
  lVar19 = *(long *)(lVar18 + 0x30);
  if (lVar19 != 0) {
    *(Il2CppObject **)(lVar19 + 0x68) = pIVar8;
    *(undefined8 *)(puVar16 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar19 + 0x68);
    if (*(long **)(lVar18 + 0x30) != (long *)0x0) {
      lVar19 = **(long **)(lVar18 + 0x30);
      pIVar8 = *(Il2CppObject **)(lVar19 + 0x1c0);
      vtableDispatch = *(code **)(lVar19 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x30) = 0x412d813;
      uVar9 = (*vtableDispatch)();
      plVar4 = *(long **)(lVar18 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  lVar19 = 0;
  *(undefined8 *)(puVar16 + -0x30) = 0x412d839;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x30) = uVar9;
  if (*(long *)(lVar19 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar19 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar16 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x38) = lVar18;
  lVar18 = *(long *)(lVar19 + 0x30);
  if (lVar18 != 0) {
    *(Il2CppObject **)(lVar18 + 0x70) = pIVar8;
    *(undefined8 *)(puVar16 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x70);
    plVar4 = *(long **)(lVar19 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar9 = *(undefined8 *)(*plVar4 + 0x1c0);
      vtableDispatch = *(code **)(*plVar4 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x40) = 0x412d893;
      uVar9 = (*vtableDispatch)(plVar4,uVar9);
      plVar4 = *(long **)(lVar19 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar18 + 0x1c8))
                           (plVar4,uVar9,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return pIVar8;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x40) = 0x412d8b9;
  auVar20 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x40) = auVar20._0_8_;
  plVar4 = *(long **)(lVar18 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    pIVar8 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),auVar20._8_8_,vtableDispatch);
    return pIVar8;
  }
  *(undefined8 *)(puVar16 + -0x48) = 0x412d8e3;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x48) = uVar9;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar16 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f2e0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  long lVar2;
  Map_MapScriptSceneObject_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  long lVar7;
  long lVar8;
  UnityEngine_Vector3_Fields UVar9;
  bool_conflict bVar10;
  undefined8 uVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  Il2CppObject *pIVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  Map_MapScriptBaseObject_o *pMVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_130 [10];
  undefined1 auStack_e0 [12];
  float fStack_d4;
  undefined1 auStack_d0 [16];
  Map_MapScriptBaseObject_o *pMStack_c0;
  undefined8 uStack_b8;
  Map_MapScriptBaseObject_o *pMStack_b0;
  Map_MapScriptBaseObject_o *pMStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  Map_MapScriptBaseObject_o *pMStack_70;
  Map_MapScriptBaseObject_o *pMStack_68;
  float fStack_54;
  undefined1 auStack_50 [16];
  Map_MapScriptBaseObject_o *pMStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057aca87 == '\0') {
    uStack_20 = 0x412f2ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x412f30b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x412f32a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x412f33c;
  pMVar17 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar16 = (Map_MapScriptBaseObject_o *)__v;
  bVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar3 = (__i->fields).Value, pMVar16 = (Map_MapScriptBaseObject_o *)0x0,
     pMVar3 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)((long)&(pMVar3->fields).Active + 2) = (char)bVar10;
    pMVar17 = (Map_MapScriptBaseObject_o *)(pMVar3->klass->vtable)._8_Serialize.method;
    uStack_20 = 0x412f35d;
    uVar11 = (*(pMVar3->klass->vtable)._8_Serialize.methodPtr)();
    pMVar3 = (__i->fields).Value;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (pMVar3 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar3->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar3,uVar11,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  uStack_20 = 0x412f389;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar21._0_4_ = (pMVar16->fields).Visible, lVar21._4_4_ = (pMVar16->fields).Networked, lVar21 != 0)) {
    return;
  }
  pIStack_28 = (Il2CppObject *)0x412f3aa;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057aca88 == '\0') {
    pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar20 = MethodInfo_String_ConvertTo_String;
  pMVar15 = pMVar17;
  pMVar12 = (Map_MapScriptBaseObject_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar21 = *(long *)&(pMVar16->fields).Visible, pMVar15 = (Map_MapScriptBaseObject_o *)0x0, lVar21 != 0))
  {
    *(Map_MapScriptBaseObject_o **)(lVar21 + 0x30) = pMVar12;
    pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x30);
    plVar5 = *(long **)&(pMVar16->fields).Visible;
    pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar20 = pMVar12;
    if (plVar5 != (long *)0x0) {
      lVar21 = *plVar5;
      pMVar20 = *(Map_MapScriptBaseObject_o **)(lVar21 + 0x1c0);
      pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar11 = (**(code **)(lVar21 + 0x1b8))();
      plVar5 = *(long **)&(pMVar16->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  pMStack_40 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar15;
  pMStack_40 = pMVar16;
  if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar16 = pMVar15;
    if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar24 = Map_MapScriptBaseObject__GetPosition(pMVar6,(MethodInfo *)0x0);
      fStack_54 = UVar24.fields.z;
      auStack_50._8_4_ = extraout_XMM0_Dc_01;
      auStack_50._0_8_ = UVar24.fields._0_8_;
      auStack_50._12_4_ = extraout_XMM0_Dd_01;
      pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_50;
      pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_54;
      value_01.fields.x = (float)auStack_50._0_4_;
      value_01.fields.y = (float)auStack_50._4_4_;
      auStack_50 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_68 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_80._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar16;
  pMStack_68 = pMVar17;
  if (g_data_057aca89 == '\0') {
    auStack_80._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_80._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_80._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_80._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar17 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar16 = pMVar20;
  pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar20,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar12 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_80._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar15 = pMVar16;
    auStack_80._0_8_ = pMVar12;
    if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
      pMVar15 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar12 = pMVar16;
      if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar6,(MethodInfo *)0x0);
        auStack_90._8_4_ = extraout_XMM0_Dc_02;
        auStack_90._0_8_ = UVar24.fields._0_8_;
        auStack_90._12_4_ = extraout_XMM0_Dd_02;
        pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_98._4_4_ = UVar24.fields.z;
        pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar23 = auStack_90;
        pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_98._4_4_;
        value_02.fields.x = (float)auStack_90._0_4_;
        value_02.fields.y = (float)auStack_90._4_4_;
        auStack_90 = auVar23;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_b8 = il2cpp_runtime_helper_022b2c90();
    pMStack_b0 = pMVar12;
    pMStack_a8 = pMVar20;
    if (g_data_057aca8a == '\0') {
      pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar15 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_c0 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar15;
      pMVar20 = pMVar17;
      pMStack_c0 = pMVar15;
      if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
        pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar12 = pMVar17;
        if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar24 = Map_MapScriptBaseObject__GetScale(pMVar15,(MethodInfo *)0x0);
          fStack_d4 = UVar24.fields.z;
          auStack_d0._8_4_ = extraout_XMM0_Dc_03;
          auStack_d0._0_8_ = UVar24.fields._0_8_;
          auStack_d0._12_4_ = extraout_XMM0_Dd_03;
          pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar23 = auStack_d0;
          UVar24.fields.z = fStack_d4;
          UVar24.fields.x = (float)auStack_d0._0_4_;
          UVar24.fields.y = (float)auStack_d0._4_4_;
          auStack_d0 = auVar23;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,UVar24,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar20 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar22._0_4_ = (pMVar16->fields).Visible, lVar22._4_4_ = (pMVar16->fields).Networked, lVar22 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar20 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar16 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar21 = *(long *)&(pMVar16->fields).Visible, pMVar17 = (Map_MapScriptBaseObject_o *)0x0,
           lVar21 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar21 + 0x60) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar21 + 0x60);
          plVar5 = *(long **)&(pMVar16->fields).Visible;
          pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar20 = pMVar15;
          if (plVar5 != (long *)0x0) {
            lVar21 = *plVar5;
            pMVar20 = *(Map_MapScriptBaseObject_o **)(lVar21 + 0x1c0);
            uVar11 = (**(code **)(lVar21 + 0x1b8))();
            plVar5 = *(long **)&(pMVar16->fields).Visible;
            pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar5 != (long *)0x0) {
              lVar21 = *plVar5;
              (**(code **)(lVar21 + 0x1c8))
                        (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar7._0_4_ = (pMVar17->fields).Visible, lVar7._4_4_ = (pMVar17->fields).Networked, lVar7 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = MethodInfo_String_ConvertTo_String;
        pMVar15 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar20,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar21 = *(long *)&(pMVar17->fields).Visible, pMVar20 = (Map_MapScriptBaseObject_o *)0x0,
           lVar21 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar21 + 0x68) = pMVar15;
          il2cpp_runtime_helper_022b4080(lVar21 + 0x68);
          plVar5 = *(long **)&(pMVar17->fields).Visible;
          pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar16 = pMVar15;
          if (plVar5 != (long *)0x0) {
            lVar21 = *plVar5;
            pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar21 + 0x1c0);
            uVar11 = (**(code **)(lVar21 + 0x1b8))();
            plVar5 = *(long **)&(pMVar17->fields).Visible;
            pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar5 != (long *)0x0) {
              lVar21 = *plVar5;
              (**(code **)(lVar21 + 0x1c8))
                        (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar8._0_4_ = (pMVar20->fields).Visible, lVar8._4_4_ = (pMVar20->fields).Networked, lVar8 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar16,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar20 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar21 = *(long *)&(pMVar20->fields).Visible, lVar21 != 0)) {
          *(Il2CppObject **)(lVar21 + 0x70) = pIVar14;
          il2cpp_runtime_helper_022b4080(lVar21 + 0x70);
          plVar5 = *(long **)&(pMVar20->fields).Visible;
          if (plVar5 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar5 + 0x1b8))();
            plVar5 = *(long **)&(pMVar20->fields).Visible;
            if (plVar5 != (long *)0x0) {
              lVar21 = *plVar5;
              (**(code **)(lVar21 + 0x1c8))
                        (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar14;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar14);
        return;
      }
      puVar19 = auStack_e0;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar18 = auStack_a0;
    pMVar17 = pMStack_b0;
  }
  else {
    pMStack_68 = pMStack_70;
    pMVar16 = pMStack_70;
    pMVar17 = pMVar12;
    if ((pIVar14 != (Il2CppObject *)0x0) &&
       (pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
       pMVar17 = (Map_MapScriptBaseObject_o *)0x0, pMVar16 = pMVar12,
       pMVar20 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar14 + 3;
      pIVar14 = (Il2CppObject *)0x0;
      pMStack_70 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar5 = *(long **)&(pMVar12->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        pIVar14 = *(Il2CppObject **)(lVar21 + 0x1c0);
        pMStack_70 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar11 = (**(code **)(lVar21 + 0x1b8))();
        plVar5 = *(long **)&(pMVar12->fields).Visible;
        pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar5 != (long *)0x0) {
          lVar21 = *plVar5;
          (**(code **)(lVar21 + 0x1c8))
                    (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
          return;
        }
      }
    }
    pMStack_70 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar18 = auStack_90;
    pMStack_70 = pMVar16;
    if (g_data_057aca6f == '\0') {
      uStack_98 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
    if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_98 = 0x412d594;
      UVar24 = Map_MapScriptBaseObject__GetRotation(pMVar15,(MethodInfo *)0x0);
      auStack_80._8_4_ = extraout_XMM0_Dc;
      auStack_80._0_8_ = UVar24.fields._0_8_;
      auStack_80._12_4_ = extraout_XMM0_Dd;
      uStack_98 = 0x412d5ae;
      auStack_90._12_4_ = UVar24.fields.z;
      pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar23 = auStack_80;
      uStack_98 = 0x412d5c6;
      value.fields.z = (float)auStack_90._12_4_;
      value.fields.x = (float)auStack_80._0_4_;
      value.fields.y = (float)auStack_80._4_4_;
      auStack_80 = auVar23;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value,(MethodInfo *)0x0);
      return;
    }
    uStack_98 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar18 + -8) = pMVar17;
  pMVar12 = pMVar15;
  if ((pIVar14 != (Il2CppObject *)0x0) &&
     (pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar17 = pMVar15,
     pMVar16 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar9 = *(UnityEngine_Vector3_Fields *)(pIVar14 + 3);
    pIVar14 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar18 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar16,(UnityEngine_Vector3_o)UVar9,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar15->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar21 = *plVar5;
      pIVar14 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar18 + -0x10) = 0x412d61c;
      uVar11 = (*vtableDispatch)();
      plVar5 = *(long **)&(pMVar15->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar18 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar18 + -0x10) = pMVar17;
  puVar19 = puVar18 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x38) = 0x412d684;
    UVar24 = Map_MapScriptBaseObject__GetScale(pMVar20,(MethodInfo *)0x0);
    auVar23._8_4_ = extraout_XMM0_Dc_00;
    auVar23._0_8_ = UVar24.fields._0_8_;
    auVar23._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar18 + -0x20) = auVar23;
    *(float *)(puVar18 + -0x24) = UVar24.fields.z;
    *(undefined8 *)(puVar18 + -0x38) = 0x412d69e;
    pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar18 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar18 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar18 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar13,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar18 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar19 + -8) = pMVar12;
  pMVar17 = pMVar20;
  if ((pIVar14 != (Il2CppObject *)0x0) &&
     (pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible,
     pMVar17 = (Map_MapScriptBaseObject_o *)0x0, pMVar12 = pMVar20,
     pMVar16 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar9 = *(UnityEngine_Vector3_Fields *)(pIVar14 + 3);
    pIVar14 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar19 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar16,(UnityEngine_Vector3_o)UVar9,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar20->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar21 = *plVar5;
      pIVar14 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x10) = 0x412d70c;
      uVar11 = (*vtableDispatch)();
      plVar5 = *(long **)&(pMVar20->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar19 + -0x10) = 0x412d732;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x10) = uVar11;
  lVar2._0_4_ = (pMVar17->fields).Visible;
  lVar2._4_4_ = (pMVar17->fields).Networked;
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(puVar19 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x18) = pMVar12;
  lVar21 = *(long *)&(pMVar17->fields).Visible;
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x60) = pIVar14;
    *(undefined8 *)(puVar19 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x60);
    plVar5 = *(long **)&(pMVar17->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar21 = *plVar5;
      pIVar14 = *(Il2CppObject **)(lVar21 + 0x1c0);
      vtableDispatch = *(code **)(lVar21 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x20) = 0x412d793;
      uVar11 = (*vtableDispatch)();
      plVar5 = *(long **)&(pMVar17->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar19 + -0x20) = 0x412d7b9;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x20) = uVar11;
  if (*(long *)(lVar21 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar19 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar19 + -0x28) = pMVar17;
  lVar22 = *(long *)(lVar21 + 0x30);
  if (lVar22 != 0) {
    *(Il2CppObject **)(lVar22 + 0x68) = pIVar14;
    *(undefined8 *)(puVar19 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar22 + 0x68);
    if (*(long **)(lVar21 + 0x30) != (long *)0x0) {
      lVar22 = **(long **)(lVar21 + 0x30);
      pIVar14 = *(Il2CppObject **)(lVar22 + 0x1c0);
      vtableDispatch = *(code **)(lVar22 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x30) = 0x412d813;
      uVar11 = (*vtableDispatch)();
      plVar5 = *(long **)(lVar21 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  lVar22 = 0;
  *(undefined8 *)(puVar19 + -0x30) = 0x412d839;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x30) = uVar11;
  if (*(long *)(lVar22 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar19 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x38) = lVar21;
  lVar21 = *(long *)(lVar22 + 0x30);
  if (lVar21 != 0) {
    *(Il2CppObject **)(lVar21 + 0x70) = pIVar14;
    *(undefined8 *)(puVar19 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar21 + 0x70);
    plVar5 = *(long **)(lVar22 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar11 = *(undefined8 *)(*plVar5 + 0x1c0);
      vtableDispatch = *(code **)(*plVar5 + 0x1b8);
      *(undefined8 *)(puVar19 + -0x40) = 0x412d893;
      uVar11 = (*vtableDispatch)(plVar5,uVar11);
      plVar5 = *(long **)(lVar22 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar21 = *plVar5;
        (**(code **)(lVar21 + 0x1c8))
                  (plVar5,uVar11,*(undefined8 *)(lVar21 + 0x1d0),lVar21,*(code **)(lVar21 + 0x1c8));
        return;
      }
    }
  }
  lVar21 = 0;
  *(undefined8 *)(puVar19 + -0x40) = 0x412d8b9;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x40) = auVar23._0_8_;
  plVar5 = *(long **)(lVar21 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1c0),auVar23._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar19 + -0x48) = 0x412d8e3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x48) = uVar11;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar19 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f390

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *pMVar2;
  long *plVar3;
  Map_MapScriptBaseObject_o *__this;
  UnityEngine_Vector3_Fields UVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_118 [10];
  undefined1 auStack_c8 [12];
  float fStack_bc;
  undefined1 auStack_b8 [16];
  Map_MapScriptBaseObject_o *pMStack_a8;
  undefined8 uStack_a0;
  Map_MapScriptBaseObject_o *pMStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  Map_MapScriptBaseObject_o *pMStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  float fStack_3c;
  undefined1 auStack_38 [16];
  Map_MapScriptBaseObject_o *pMStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (__i->fields).Value, pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    return *(Il2CppObject **)&(pMVar2->fields).Visible;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca88 == '\0') {
    pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f40c;
  pMVar11 = MethodInfo_String_ConvertTo_String;
  pMVar10 = (Map_MapScriptBaseObject_o *)method;
  pMVar5 = (Map_MapScriptBaseObject_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (((Map_MapScriptBaseObject_o *)__i != (Map_MapScriptBaseObject_o *)0x0) &&
     (lVar14 = *(long *)&(((Map_MapScriptBaseObject_o *)__i)->fields).Visible,
     pMVar10 = (Map_MapScriptBaseObject_o *)0x0, lVar14 != 0)) {
    *(Map_MapScriptBaseObject_o **)(lVar14 + 0x30) = pMVar5;
    pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x30);
    plVar3 = *(long **)&(((Map_MapScriptBaseObject_o *)__i)->fields).Visible;
    pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar11 = pMVar5;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar14 + 0x1c0);
      pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f443;
      uVar6 = (**(code **)(lVar14 + 0x1b8))();
      plVar3 = *(long **)&(((Map_MapScriptBaseObject_o *)__i)->fields).Visible;
      pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  pMStack_28 = (Map_MapScriptBaseObject_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = pMVar10;
  pMStack_28 = (Map_MapScriptBaseObject_o *)__i;
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar9 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible;
    pMVar5 = (Map_MapScriptBaseObject_o *)0x0;
    __i = (CustomLogic_CustomLogicPrefabBuiltin_o *)pMVar10;
    if (pMVar9 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar18 = Map_MapScriptBaseObject__GetPosition(pMVar9,(MethodInfo *)0x0);
      fStack_3c = UVar18.fields.z;
      auStack_38._8_4_ = extraout_XMM0_Dc_01;
      auStack_38._0_8_ = UVar18.fields._0_8_;
      auStack_38._12_4_ = extraout_XMM0_Dd_01;
      pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar17 = auStack_38;
      pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_3c;
      value_01.fields.x = (float)auStack_38._0_4_;
      value_01.fields.y = (float)auStack_38._4_4_;
      auStack_38 = auVar17;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar8;
    }
  }
  pMStack_50 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_68._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = (Map_MapScriptBaseObject_o *)__i;
  pMStack_50 = (Map_MapScriptBaseObject_o *)method;
  if (g_data_057aca89 == '\0') {
    auStack_68._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_68._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_68._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_68._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar9 = pMVar11;
  pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pMVar11,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_68._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar16 = pMVar9;
    auStack_68._0_8_ = pMVar5;
    if (pMVar9 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      __this = *(Map_MapScriptBaseObject_o **)&(pMVar9->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar5 = pMVar9;
      if (__this != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar18 = Map_MapScriptBaseObject__GetRotation(__this,(MethodInfo *)0x0);
        auStack_78._8_4_ = extraout_XMM0_Dc_02;
        auStack_78._0_8_ = UVar18.fields._0_8_;
        auStack_78._12_4_ = extraout_XMM0_Dd_02;
        pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_80._4_4_ = UVar18.fields.z;
        pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar17 = auStack_78;
        pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_80._4_4_;
        value_02.fields.x = (float)auStack_78._0_4_;
        value_02.fields.y = (float)auStack_78._4_4_;
        auStack_78 = auVar17;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_02,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar8;
      }
    }
    pMStack_90 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_a0 = il2cpp_runtime_helper_022b2c90();
    pMStack_98 = pMVar5;
    pMStack_90 = pMVar11;
    if (g_data_057aca8a == '\0') {
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar11 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar16 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_a8 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = pMVar16;
      pMVar5 = pMVar10;
      pMStack_a8 = pMVar16;
      if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible;
        pMVar5 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar9 = pMVar10;
        if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar18 = Map_MapScriptBaseObject__GetScale(pMVar16,(MethodInfo *)0x0);
          fStack_bc = UVar18.fields.z;
          auStack_b8._8_4_ = extraout_XMM0_Dc_03;
          auStack_b8._0_8_ = UVar18.fields._0_8_;
          auStack_b8._12_4_ = extraout_XMM0_Dd_03;
          pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar17 = auStack_b8;
          UVar18.fields.z = fStack_bc;
          UVar18.fields.x = (float)auStack_b8._0_4_;
          UVar18.fields.y = (float)auStack_b8._4_4_;
          auStack_b8 = auVar17;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar18,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar8;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar10 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)pMVar11,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar11 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar11->fields).Visible, lVar14 != 0)) {
          return *(Il2CppObject **)(lVar14 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar5 = MethodInfo_String_ConvertTo_String;
        pMVar9 = (Map_MapScriptBaseObject_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)pMVar10,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar11 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar11->fields).Visible, pMVar10 = (Map_MapScriptBaseObject_o *)0x0,
           lVar14 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar14 + 0x60) = pMVar9;
          il2cpp_runtime_helper_022b4080(lVar14 + 0x60);
          plVar3 = *(long **)&(pMVar11->fields).Visible;
          pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar5 = pMVar9;
          if (plVar3 != (long *)0x0) {
            lVar14 = *plVar3;
            pMVar5 = *(Map_MapScriptBaseObject_o **)(lVar14 + 0x1c0);
            uVar6 = (**(code **)(lVar14 + 0x1b8))();
            plVar3 = *(long **)&(pMVar11->fields).Visible;
            pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar3 != (long *)0x0) {
              lVar14 = *plVar3;
              pIVar7 = (Il2CppObject *)
                       (**(code **)(lVar14 + 0x1c8))
                                 (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,
                                  *(code **)(lVar14 + 0x1c8));
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar10->fields).Visible, lVar14 != 0)) {
          return *(Il2CppObject **)(lVar14 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar11 = MethodInfo_String_ConvertTo_String;
        pMVar9 = (Map_MapScriptBaseObject_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)pMVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar10 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar10->fields).Visible, pMVar5 = (Map_MapScriptBaseObject_o *)0x0,
           lVar14 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar14 + 0x68) = pMVar9;
          il2cpp_runtime_helper_022b4080(lVar14 + 0x68);
          plVar3 = *(long **)&(pMVar10->fields).Visible;
          pMVar5 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar11 = pMVar9;
          if (plVar3 != (long *)0x0) {
            lVar14 = *plVar3;
            pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar14 + 0x1c0);
            uVar6 = (**(code **)(lVar14 + 0x1b8))();
            plVar3 = *(long **)&(pMVar10->fields).Visible;
            pMVar5 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar3 != (long *)0x0) {
              lVar14 = *plVar3;
              pIVar7 = (Il2CppObject *)
                       (**(code **)(lVar14 + 0x1c8))
                                 (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,
                                  *(code **)(lVar14 + 0x1c8));
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar5 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar5->fields).Visible, lVar14 != 0)) {
          return *(Il2CppObject **)(lVar14 + 0x70);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)pMVar11,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar5 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar14 = *(long *)&(pMVar5->fields).Visible, lVar14 != 0)) {
          *(Il2CppObject **)(lVar14 + 0x70) = pIVar7;
          il2cpp_runtime_helper_022b4080(lVar14 + 0x70);
          plVar3 = *(long **)&(pMVar5->fields).Visible;
          if (plVar3 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar3 + 0x1b8))();
            plVar3 = *(long **)&(pMVar5->fields).Visible;
            if (plVar3 != (long *)0x0) {
              lVar14 = *plVar3;
              pIVar7 = (Il2CppObject *)
                       (**(code **)(lVar14 + 0x1c8))
                                 (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,
                                  *(code **)(lVar14 + 0x1c8));
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
        return pIVar7;
      }
      puVar13 = auStack_c8;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar12 = auStack_88;
    pMVar11 = pMStack_98;
  }
  else {
    pMStack_50 = pMStack_58;
    pMVar10 = pMStack_58;
    pMVar11 = pMVar5;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (pMVar9 = *(Map_MapScriptBaseObject_o **)&(pMVar5->fields).Visible,
       pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar10 = pMVar5,
       pMVar9 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar7 + 3;
      pIVar7 = (Il2CppObject *)0x0;
      pMStack_58 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar9,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar3 = *(long **)&(pMVar5->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
        pMStack_58 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar6 = (**(code **)(lVar14 + 0x1b8))();
        plVar3 = *(long **)&(pMVar5->fields).Visible;
        pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar3 != (long *)0x0) {
          lVar14 = *plVar3;
          pIVar7 = (Il2CppObject *)
                   (**(code **)(lVar14 + 0x1c8))
                             (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
          return pIVar7;
        }
      }
    }
    pMStack_58 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar12 = auStack_78;
    pMStack_58 = pMVar10;
    if (g_data_057aca6f == '\0') {
      uStack_80 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
    if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_80 = 0x412d594;
      UVar18 = Map_MapScriptBaseObject__GetRotation(pMVar16,(MethodInfo *)0x0);
      auStack_68._8_4_ = extraout_XMM0_Dc;
      auStack_68._0_8_ = UVar18.fields._0_8_;
      auStack_68._12_4_ = extraout_XMM0_Dd;
      uStack_80 = 0x412d5ae;
      auStack_78._12_4_ = UVar18.fields.z;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar17 = auStack_68;
      uStack_80 = 0x412d5c6;
      value.fields.z = (float)auStack_78._12_4_;
      value.fields.x = (float)auStack_68._0_4_;
      value.fields.y = (float)auStack_68._4_4_;
      auStack_68 = auVar17;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar8;
    }
    uStack_80 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar12 + -8) = pMVar11;
  pMVar9 = pMVar16;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
     pMVar9 = (Map_MapScriptBaseObject_o *)0x0, pMVar11 = pMVar16, pMVar10 != (Map_MapScriptBaseObject_o *)0x0
     )) {
    UVar4 = *(UnityEngine_Vector3_Fields *)(pIVar7 + 3);
    pIVar7 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar12 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar10,(UnityEngine_Vector3_o)UVar4,(MethodInfo *)0x0);
    plVar3 = *(long **)&(pMVar16->fields).Visible;
    pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
      vtableDispatch = *(code **)(lVar14 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x10) = 0x412d61c;
      uVar6 = (*vtableDispatch)();
      plVar3 = *(long **)&(pMVar16->fields).Visible;
      pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar12 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar12 + -0x10) = pMVar11;
  puVar13 = puVar12 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar12 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar9->fields).Visible;
  if (pMVar5 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar12 + -0x38) = 0x412d684;
    UVar18 = Map_MapScriptBaseObject__GetScale(pMVar5,(MethodInfo *)0x0);
    auVar17._8_4_ = extraout_XMM0_Dc_00;
    auVar17._0_8_ = UVar18.fields._0_8_;
    auVar17._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar12 + -0x20) = auVar17;
    *(float *)(puVar12 + -0x24) = UVar18.fields.z;
    *(undefined8 *)(puVar12 + -0x38) = 0x412d69e;
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar12 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar12 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar12 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar8;
  }
  *(undefined8 *)(puVar12 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar13 + -8) = pMVar9;
  pMVar11 = pMVar5;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar5->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar9 = pMVar5, pMVar10 != (Map_MapScriptBaseObject_o *)0x0)
     ) {
    UVar4 = *(UnityEngine_Vector3_Fields *)(pIVar7 + 3);
    pIVar7 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar13 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar10,(UnityEngine_Vector3_o)UVar4,(MethodInfo *)0x0);
    plVar3 = *(long **)&(pMVar5->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
      vtableDispatch = *(code **)(lVar14 + 0x1b8);
      *(undefined8 *)(puVar13 + -0x10) = 0x412d70c;
      uVar6 = (*vtableDispatch)();
      plVar3 = *(long **)&(pMVar5->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar13 + -0x10) = 0x412d732;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar13 + -0x10) = uVar6;
  lVar14 = *(long *)&(pMVar11->fields).Visible;
  if (lVar14 != 0) {
    return *(Il2CppObject **)(lVar14 + 0x60);
  }
  *(undefined8 *)(puVar13 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar13 + -0x18) = pMVar9;
  lVar14 = *(long *)&(pMVar11->fields).Visible;
  if (lVar14 != 0) {
    *(Il2CppObject **)(lVar14 + 0x60) = pIVar7;
    *(undefined8 *)(puVar13 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x60);
    plVar3 = *(long **)&(pMVar11->fields).Visible;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
      vtableDispatch = *(code **)(lVar14 + 0x1b8);
      *(undefined8 *)(puVar13 + -0x20) = 0x412d793;
      uVar6 = (*vtableDispatch)();
      plVar3 = *(long **)&(pMVar11->fields).Visible;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar14 = 0;
  *(undefined8 *)(puVar13 + -0x20) = 0x412d7b9;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar13 + -0x20) = uVar6;
  if (*(long *)(lVar14 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar14 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar13 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar13 + -0x28) = pMVar11;
  lVar15 = *(long *)(lVar14 + 0x30);
  if (lVar15 != 0) {
    *(Il2CppObject **)(lVar15 + 0x68) = pIVar7;
    *(undefined8 *)(puVar13 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x68);
    if (*(long **)(lVar14 + 0x30) != (long *)0x0) {
      lVar15 = **(long **)(lVar14 + 0x30);
      pIVar7 = *(Il2CppObject **)(lVar15 + 0x1c0);
      vtableDispatch = *(code **)(lVar15 + 0x1b8);
      *(undefined8 *)(puVar13 + -0x30) = 0x412d813;
      uVar6 = (*vtableDispatch)();
      plVar3 = *(long **)(lVar14 + 0x30);
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar15 = 0;
  *(undefined8 *)(puVar13 + -0x30) = 0x412d839;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar13 + -0x30) = uVar6;
  if (*(long *)(lVar15 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar15 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar13 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar13 + -0x38) = lVar14;
  lVar14 = *(long *)(lVar15 + 0x30);
  if (lVar14 != 0) {
    *(Il2CppObject **)(lVar14 + 0x70) = pIVar7;
    *(undefined8 *)(puVar13 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x70);
    plVar3 = *(long **)(lVar15 + 0x30);
    if (plVar3 != (long *)0x0) {
      uVar6 = *(undefined8 *)(*plVar3 + 0x1c0);
      vtableDispatch = *(code **)(*plVar3 + 0x1b8);
      *(undefined8 *)(puVar13 + -0x40) = 0x412d893;
      uVar6 = (*vtableDispatch)(plVar3,uVar6);
      plVar3 = *(long **)(lVar15 + 0x30);
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar6,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar14 = 0;
  *(undefined8 *)(puVar13 + -0x40) = 0x412d8b9;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar13 + -0x40) = auVar17._0_8_;
  plVar3 = *(long **)(lVar14 + 0x30);
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x1b8);
    pIVar7 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),auVar17._8_8_,vtableDispatch);
    return pIVar7;
  }
  *(undefined8 *)(puVar13 + -0x48) = 0x412d8e3;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar13 + -0x48) = uVar6;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar13 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f3b0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long *plVar2;
  code *vtableDispatch;
  long lVar3;
  Map_MapScriptSceneObject_o *pMVar4;
  Map_MapScriptSceneObject_c *pMVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Map_MapScriptBaseObject_o *__this;
  long lVar6;
  UnityEngine_Vector3_Fields UVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  undefined8 uVar9;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  Il2CppObject *pIVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  long alStack_110 [10];
  undefined1 auStack_c0 [12];
  float fStack_b4;
  undefined1 auStack_b0 [16];
  Map_MapScriptBaseObject_o *pMStack_a0;
  undefined8 uStack_98;
  Map_MapScriptBaseObject_o *pMStack_90;
  Map_MapScriptBaseObject_o *pMStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  Map_MapScriptBaseObject_o *pMStack_50;
  Map_MapScriptBaseObject_o *pMStack_48;
  float fStack_34;
  undefined1 auStack_30 [16];
  CustomLogic_CustomLogicPrefabBuiltin_o *pCStack_20;
  
  if (g_data_057aca88 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f3db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f3fa;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f40c;
  pMVar14 = MethodInfo_String_ConvertTo_String;
  pMVar13 = (Map_MapScriptBaseObject_o *)__v;
  pMVar8 = (Map_MapScriptBaseObject_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar4 = (__i->fields).Value, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
     pMVar4 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(Map_MapScriptBaseObject_o **)&(pMVar4->fields).Visible = pMVar8;
    pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f42a;
    il2cpp_runtime_helper_022b4080(&(pMVar4->fields).Visible);
    pMVar4 = (__i->fields).Value;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    pMVar14 = pMVar8;
    if (pMVar4 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar5 = pMVar4->klass;
      pMVar14 = (Map_MapScriptBaseObject_o *)(pMVar5->vtable)._8_Serialize.method;
      pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f443;
      uVar9 = (*(pMVar5->vtable)._8_Serialize.methodPtr)();
      pMVar4 = (__i->fields).Value;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (pMVar4 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar5 = pMVar4->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar5->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar4,uVar9,(pMVar5->vtable)._9_Deserialize.method,pMVar5,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  pCStack_20 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f46f;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar13;
  pCStack_20 = __i;
  if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f492;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
    pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
    __i = (CustomLogic_CustomLogicPrefabBuiltin_o *)pMVar13;
    if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f4a9;
      UVar21 = Map_MapScriptBaseObject__GetPosition(pMVar12,(MethodInfo *)0x0);
      fStack_34 = UVar21.fields.z;
      auStack_30._8_4_ = extraout_XMM0_Dc_01;
      auStack_30._0_8_ = UVar21.fields._0_8_;
      auStack_30._12_4_ = extraout_XMM0_Dd_01;
      pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f4c3;
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar20 = auStack_30;
      pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f4db;
      value_01.fields.z = fStack_34;
      value_01.fields.x = (float)auStack_30._0_4_;
      value_01.fields.y = (float)auStack_30._4_4_;
      auStack_30 = auVar20;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_48 = (Map_MapScriptBaseObject_o *)0x412f4e9;
  auStack_60._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_50 = (Map_MapScriptBaseObject_o *)__i;
  pMStack_48 = (Map_MapScriptBaseObject_o *)__v;
  if (g_data_057aca89 == '\0') {
    auStack_60._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_60._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_60._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_60._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar12 = pMVar14;
  pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar8 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_60._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar19 = pMVar12;
    auStack_60._0_8_ = pMVar8;
    if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      __this = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar8 = pMVar12;
      if (__this != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar21 = Map_MapScriptBaseObject__GetRotation(__this,(MethodInfo *)0x0);
        auStack_70._8_4_ = extraout_XMM0_Dc_02;
        auStack_70._0_8_ = UVar21.fields._0_8_;
        auStack_70._12_4_ = extraout_XMM0_Dd_02;
        pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_78._4_4_ = UVar21.fields.z;
        pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar20 = auStack_70;
        pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_02.fields.z = uStack_78._4_4_;
        value_02.fields.x = (float)auStack_70._0_4_;
        value_02.fields.y = (float)auStack_70._4_4_;
        auStack_70 = auVar20;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_02,(MethodInfo *)0x0);
        return;
      }
    }
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    pMStack_90 = pMVar8;
    pMStack_88 = pMVar14;
    if (g_data_057aca8a == '\0') {
      pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar14 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar19 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_a0 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar19;
      pMVar8 = pMVar13;
      pMStack_a0 = pMVar19;
      if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
        pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar12 = pMVar13;
        if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar21 = Map_MapScriptBaseObject__GetScale(pMVar19,(MethodInfo *)0x0);
          fStack_b4 = UVar21.fields.z;
          auStack_b0._8_4_ = extraout_XMM0_Dc_03;
          auStack_b0._0_8_ = UVar21.fields._0_8_;
          auStack_b0._12_4_ = extraout_XMM0_Dd_03;
          pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar20 = auStack_b0;
          UVar21.fields.z = fStack_b4;
          UVar21.fields.x = (float)auStack_b0._0_4_;
          UVar21.fields.y = (float)auStack_b0._4_4_;
          auStack_b0 = auVar20;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar21,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar8 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17._0_4_ = (pMVar14->fields).Visible, lVar17._4_4_ = (pMVar14->fields).Networked, lVar17 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar8 = MethodInfo_String_ConvertTo_String;
        pMVar12 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar14->fields).Visible, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
           lVar17 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar17 + 0x60) = pMVar12;
          il2cpp_runtime_helper_022b4080(lVar17 + 0x60);
          plVar2 = *(long **)&(pMVar14->fields).Visible;
          pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar8 = pMVar12;
          if (plVar2 != (long *)0x0) {
            lVar17 = *plVar2;
            pMVar8 = *(Map_MapScriptBaseObject_o **)(lVar17 + 0x1c0);
            uVar9 = (**(code **)(lVar17 + 0x1b8))();
            plVar2 = *(long **)&(pMVar14->fields).Visible;
            pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar2 != (long *)0x0) {
              lVar17 = *plVar2;
              (**(code **)(lVar17 + 0x1c8))
                        (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18._0_4_ = (pMVar13->fields).Visible, lVar18._4_4_ = (pMVar13->fields).Networked, lVar18 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar14 = MethodInfo_String_ConvertTo_String;
        pMVar12 = (Map_MapScriptBaseObject_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar8,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar13->fields).Visible, pMVar8 = (Map_MapScriptBaseObject_o *)0x0,
           lVar17 != 0)) {
          *(Map_MapScriptBaseObject_o **)(lVar17 + 0x68) = pMVar12;
          il2cpp_runtime_helper_022b4080(lVar17 + 0x68);
          plVar2 = *(long **)&(pMVar13->fields).Visible;
          pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
          pMVar14 = pMVar12;
          if (plVar2 != (long *)0x0) {
            lVar17 = *plVar2;
            pMVar14 = *(Map_MapScriptBaseObject_o **)(lVar17 + 0x1c0);
            uVar9 = (**(code **)(lVar17 + 0x1b8))();
            plVar2 = *(long **)&(pMVar13->fields).Visible;
            pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar2 != (long *)0x0) {
              lVar17 = *plVar2;
              (**(code **)(lVar17 + 0x1c8))
                        (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar8 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar6._0_4_ = (pMVar8->fields).Visible, lVar6._4_4_ = (pMVar8->fields).Networked, lVar6 != 0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if ((pMVar8 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar8->fields).Visible, lVar17 != 0)) {
          *(Il2CppObject **)(lVar17 + 0x70) = pIVar11;
          il2cpp_runtime_helper_022b4080(lVar17 + 0x70);
          plVar2 = *(long **)&(pMVar8->fields).Visible;
          if (plVar2 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar2 + 0x1b8))();
            plVar2 = *(long **)&(pMVar8->fields).Visible;
            if (plVar2 != (long *)0x0) {
              lVar17 = *plVar2;
              (**(code **)(lVar17 + 0x1c8))
                        (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar11,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar11;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar11);
        return;
      }
      puVar16 = auStack_c0;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar15 = auStack_80;
    pMVar14 = pMStack_90;
  }
  else {
    pMStack_48 = pMStack_50;
    pMVar13 = pMStack_50;
    pMVar14 = pMVar8;
    if ((pIVar11 != (Il2CppObject *)0x0) &&
       (pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar8->fields).Visible,
       pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar8,
       pMVar12 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar11 + 3;
      pIVar11 = (Il2CppObject *)0x0;
      pMStack_50 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar12,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar11 = *(Il2CppObject **)(lVar17 + 0x1c0);
        pMStack_50 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar9 = (**(code **)(lVar17 + 0x1b8))();
        plVar2 = *(long **)&(pMVar8->fields).Visible;
        pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar2 != (long *)0x0) {
          lVar17 = *plVar2;
          (**(code **)(lVar17 + 0x1c8))
                    (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
          return;
        }
      }
    }
    pMStack_50 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar15 = auStack_70;
    pMStack_50 = pMVar13;
    if (g_data_057aca6f == '\0') {
      uStack_78 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
    if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_78 = 0x412d594;
      UVar21 = Map_MapScriptBaseObject__GetRotation(pMVar19,(MethodInfo *)0x0);
      auStack_60._8_4_ = extraout_XMM0_Dc;
      auStack_60._0_8_ = UVar21.fields._0_8_;
      auStack_60._12_4_ = extraout_XMM0_Dd;
      uStack_78 = 0x412d5ae;
      auStack_70._12_4_ = UVar21.fields.z;
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar20 = auStack_60;
      uStack_78 = 0x412d5c6;
      value.fields.z = (float)auStack_70._12_4_;
      value.fields.x = (float)auStack_60._0_4_;
      value.fields.y = (float)auStack_60._4_4_;
      auStack_60 = auVar20;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value,(MethodInfo *)0x0);
      return;
    }
    uStack_78 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar15 + -8) = pMVar14;
  pMVar12 = pMVar19;
  if ((pIVar11 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar19,
     pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar7 = *(UnityEngine_Vector3_Fields *)(pIVar11 + 3);
    pIVar11 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar15 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar13,(UnityEngine_Vector3_o)UVar7,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar19->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar11 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar15 + -0x10) = 0x412d61c;
      uVar9 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar19->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        (**(code **)(lVar17 + 0x1c8))
                  (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar15 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar15 + -0x10) = pMVar14;
  puVar16 = puVar15 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d684;
    UVar21 = Map_MapScriptBaseObject__GetScale(pMVar8,(MethodInfo *)0x0);
    auVar20._8_4_ = extraout_XMM0_Dc_00;
    auVar20._0_8_ = UVar21.fields._0_8_;
    auVar20._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar15 + -0x20) = auVar20;
    *(float *)(puVar15 + -0x24) = UVar21.fields.z;
    *(undefined8 *)(puVar15 + -0x38) = 0x412d69e;
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar15 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar15 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar15 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar15 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar16 + -8) = pMVar12;
  pMVar14 = pMVar8;
  if ((pIVar11 != (Il2CppObject *)0x0) &&
     (pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar8->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar12 = pMVar8, pMVar13 != (Map_MapScriptBaseObject_o *)0x0
     )) {
    UVar7 = *(UnityEngine_Vector3_Fields *)(pIVar11 + 3);
    pIVar11 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar16 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar13,(UnityEngine_Vector3_o)UVar7,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar8->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar11 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x10) = 0x412d70c;
      uVar9 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        (**(code **)(lVar17 + 0x1c8))
                  (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar16 + -0x10) = 0x412d732;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x10) = uVar9;
  lVar3._0_4_ = (pMVar14->fields).Visible;
  lVar3._4_4_ = (pMVar14->fields).Networked;
  if (lVar3 != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x18) = pMVar12;
  lVar17 = *(long *)&(pMVar14->fields).Visible;
  if (lVar17 != 0) {
    *(Il2CppObject **)(lVar17 + 0x60) = pIVar11;
    *(undefined8 *)(puVar16 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar17 + 0x60);
    plVar2 = *(long **)&(pMVar14->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar11 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x20) = 0x412d793;
      uVar9 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar14->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        (**(code **)(lVar17 + 0x1c8))
                  (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return;
      }
    }
  }
  lVar17 = 0;
  *(undefined8 *)(puVar16 + -0x20) = 0x412d7b9;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x20) = uVar9;
  if (*(long *)(lVar17 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x28) = pMVar14;
  lVar18 = *(long *)(lVar17 + 0x30);
  if (lVar18 != 0) {
    *(Il2CppObject **)(lVar18 + 0x68) = pIVar11;
    *(undefined8 *)(puVar16 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x68);
    if (*(long **)(lVar17 + 0x30) != (long *)0x0) {
      lVar18 = **(long **)(lVar17 + 0x30);
      pIVar11 = *(Il2CppObject **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x30) = 0x412d813;
      uVar9 = (*vtableDispatch)();
      plVar2 = *(long **)(lVar17 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        (**(code **)(lVar17 + 0x1c8))
                  (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x30) = 0x412d839;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x30) = uVar9;
  if (*(long *)(lVar18 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x38) = lVar17;
  lVar17 = *(long *)(lVar18 + 0x30);
  if (lVar17 != 0) {
    *(Il2CppObject **)(lVar17 + 0x70) = pIVar11;
    *(undefined8 *)(puVar16 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar17 + 0x70);
    plVar2 = *(long **)(lVar18 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar9 = *(undefined8 *)(*plVar2 + 0x1c0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x40) = 0x412d893;
      uVar9 = (*vtableDispatch)(plVar2,uVar9);
      plVar2 = *(long **)(lVar18 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        (**(code **)(lVar17 + 0x1c8))
                  (plVar2,uVar9,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return;
      }
    }
  }
  lVar17 = 0;
  *(undefined8 *)(puVar16 + -0x40) = 0x412d8b9;
  auVar20 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x40) = auVar20._0_8_;
  plVar2 = *(long **)(lVar17 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar20._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar16 + -0x48) = 0x412d8e3;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x48) = uVar9;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar16 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f470

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long *plVar2;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *__this;
  Il2CppType **ppIVar3;
  UnityEngine_Vector3_Fields UVar4;
  undefined8 uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  MethodInfo_24EEB40 *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  Il2CppType *pIVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *unaff_RBX;
  Map_MapScriptBaseObject_o *pMVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  MethodInfo_24EEB40 *obj;
  long lVar17;
  long lVar18;
  Map_MapScriptBaseObject_o *pMVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value_01;
  long alStack_f8 [10];
  undefined1 auStack_a8 [12];
  float fStack_9c;
  undefined1 auStack_98 [16];
  Map_MapScriptBaseObject_o *pMStack_88;
  undefined8 uStack_80;
  Map_MapScriptBaseObject_o *pMStack_78;
  Map_MapScriptBaseObject_o *pMStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  Map_MapScriptBaseObject_o *pMStack_38;
  
  pMVar14 = (Map_MapScriptBaseObject_o *)__i;
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (g_data_057aca6e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6e = '\x01';
    }
    __this = (__i->fields).Value;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    unaff_RBX = (Map_MapScriptBaseObject_o *)__i;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      UVar21 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,UVar21,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
  }
  auStack_48._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_38 = unaff_RBX;
  if (g_data_057aca89 == '\0') {
    auStack_48._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_48._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_48._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_48._0_8_ = (Map_MapScriptBaseObject_o *)0x412f54c;
  pMVar12 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar11 = (Map_MapScriptBaseObject_o *)method;
  pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_48._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar19 = pMVar11;
    auStack_48._0_8_ = pMVar14;
    if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
      pMVar19 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar14 = pMVar11;
      if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
        pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f5a9;
        UVar21 = Map_MapScriptBaseObject__GetRotation(pMVar13,(MethodInfo *)0x0);
        auStack_58._8_4_ = extraout_XMM0_Dc_01;
        auStack_58._0_8_ = UVar21.fields._0_8_;
        auStack_58._12_4_ = extraout_XMM0_Dd_01;
        pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f5c3;
        uStack_60._4_4_ = UVar21.fields.z;
        pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar20 = auStack_58;
        pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f5db;
        value_01.fields.z = uStack_60._4_4_;
        value_01.fields.x = (float)auStack_58._0_4_;
        value_01.fields.y = (float)auStack_58._4_4_;
        auStack_58 = auVar20;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value_01,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar6;
      }
    }
    pMStack_70 = (Map_MapScriptBaseObject_o *)0x412f5e9;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    pMStack_78 = pMVar14;
    pMStack_70 = (Map_MapScriptBaseObject_o *)method;
    if (g_data_057aca8a == '\0') {
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar14 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pMVar12,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar19 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_88 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = pMVar19;
      pMVar11 = pMVar12;
      pMStack_88 = pMVar19;
      if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
        pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar13 = pMVar12;
        if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar21 = Map_MapScriptBaseObject__GetScale(pMVar19,(MethodInfo *)0x0);
          fStack_9c = UVar21.fields.z;
          auStack_98._8_4_ = extraout_XMM0_Dc_02;
          auStack_98._0_8_ = UVar21.fields._0_8_;
          auStack_98._12_4_ = extraout_XMM0_Dd_02;
          pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar20 = auStack_98;
          UVar21.fields.z = fStack_9c;
          UVar21.fields.x = (float)auStack_98._0_4_;
          UVar21.fields.y = (float)auStack_98._4_4_;
          auStack_98 = auVar20;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,UVar21,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar6;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)pMVar14,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar11 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar14->fields).Visible, lVar17 != 0)) {
          return *(Il2CppObject **)(lVar17 + 0x60);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        obj = MethodInfo_String_ConvertTo_String;
        pMVar8 = (MethodInfo_24EEB40 *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar12,MethodInfo_String_ConvertTo_String);
        if ((pMVar14 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar14->fields).Visible, pMVar12 = (Map_MapScriptBaseObject_o *)0x0,
           lVar17 != 0)) {
          *(MethodInfo_24EEB40 **)(lVar17 + 0x60) = pMVar8;
          il2cpp_runtime_helper_022b4080(lVar17 + 0x60);
          plVar2 = *(long **)&(pMVar14->fields).Visible;
          pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
          obj = pMVar8;
          if (plVar2 != (long *)0x0) {
            lVar17 = *plVar2;
            obj = *(MethodInfo_24EEB40 **)(lVar17 + 0x1c0);
            uVar5 = (**(code **)(lVar17 + 0x1b8))();
            plVar2 = *(long **)&(pMVar14->fields).Visible;
            pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar2 != (long *)0x0) {
              lVar17 = *plVar2;
              pIVar7 = (Il2CppObject *)
                       (**(code **)(lVar17 + 0x1c8))
                                 (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,
                                  *(code **)(lVar17 + 0x1c8));
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar12 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar12->fields).Visible, lVar17 != 0)) {
          return *(Il2CppObject **)(lVar17 + 0x68);
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar8 = MethodInfo_String_ConvertTo_String;
        pMVar9 = (MethodInfo_24EEB40 *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        if ((pMVar12 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar17 = *(long *)&(pMVar12->fields).Visible, obj = (MethodInfo_24EEB40 *)0x0, lVar17 != 0)) {
          *(MethodInfo_24EEB40 **)(lVar17 + 0x68) = pMVar9;
          il2cpp_runtime_helper_022b4080(lVar17 + 0x68);
          plVar2 = *(long **)&(pMVar12->fields).Visible;
          obj = (MethodInfo_24EEB40 *)0x0;
          pMVar8 = pMVar9;
          if (plVar2 != (long *)0x0) {
            lVar17 = *plVar2;
            pMVar8 = *(MethodInfo_24EEB40 **)(lVar17 + 0x1c0);
            uVar5 = (**(code **)(lVar17 + 0x1b8))();
            plVar2 = *(long **)&(pMVar12->fields).Visible;
            obj = (MethodInfo_24EEB40 *)0x0;
            if (plVar2 != (long *)0x0) {
              lVar17 = *plVar2;
              pIVar7 = (Il2CppObject *)
                       (**(code **)(lVar17 + 0x1c8))
                                 (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,
                                  *(code **)(lVar17 + 0x1c8));
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
          return (Il2CppObject *)obj->parameters[0xe];
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar10 = (Il2CppType *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_String_ConvertTo_String);
        if ((obj != (MethodInfo_24EEB40 *)0x0) && (ppIVar3 = obj->parameters, ppIVar3 != (Il2CppType **)0x0))
        {
          ppIVar3[0xe] = pIVar10;
          il2cpp_runtime_helper_022b4080(ppIVar3 + 0xe);
          if (obj->parameters != (Il2CppType **)0x0) {
            uVar5 = (**(code **)&(*obj->parameters)[0x1b].bits)();
            ppIVar3 = obj->parameters;
            if (ppIVar3 != (Il2CppType **)0x0) {
              pIVar10 = *ppIVar3;
              pIVar7 = (Il2CppObject *)
                       (**(code **)&pIVar10[0x1c].bits)
                                 (ppIVar3,uVar5,pIVar10[0x1d].data,pIVar10,*(code **)&pIVar10[0x1c].bits);
              return pIVar7;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
        return pIVar7;
      }
      puVar16 = auStack_a8;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar15 = auStack_68;
    pMVar12 = pMStack_78;
  }
  else {
    pMVar11 = pMStack_38;
    pMVar12 = pMVar14;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible,
       pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar11 = pMVar14,
       pMVar19 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar7 + 3;
      pIVar7 = (Il2CppObject *)0x0;
      pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d513;
      Map_MapScriptBaseObject__SetPosition
                (pMVar19,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar2 = *(long **)&(pMVar14->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = *(Il2CppObject **)(lVar17 + 0x1c0);
        pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d52c;
        uVar5 = (**(code **)(lVar17 + 0x1b8))();
        plVar2 = *(long **)&(pMVar14->fields).Visible;
        pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar2 != (long *)0x0) {
          lVar17 = *plVar2;
          pIVar7 = (Il2CppObject *)
                   (**(code **)(lVar17 + 0x1c8))
                             (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
          return pIVar7;
        }
      }
    }
    pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d552;
    il2cpp_runtime_helper_022b2c90();
    puVar15 = auStack_58;
    pMStack_38 = pMVar11;
    if (g_data_057aca6f == '\0') {
      uStack_60 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar19 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
    if (pMVar19 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_60 = 0x412d594;
      UVar21 = Map_MapScriptBaseObject__GetRotation(pMVar19,(MethodInfo *)0x0);
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._0_8_ = UVar21.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      uStack_60 = 0x412d5ae;
      auStack_58._12_4_ = UVar21.fields.z;
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar20 = auStack_48;
      uStack_60 = 0x412d5c6;
      value.fields.z = (float)auStack_58._12_4_;
      value.fields.x = (float)auStack_48._0_4_;
      value.fields.y = (float)auStack_48._4_4_;
      auStack_48 = auVar20;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    uStack_60 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar15 + -8) = pMVar12;
  pMVar13 = pMVar19;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pMVar14 = *(Map_MapScriptBaseObject_o **)&(pMVar19->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar12 = pMVar19,
     pMVar14 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar4 = *(UnityEngine_Vector3_Fields *)(pIVar7 + 3);
    pIVar7 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar15 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar14,(UnityEngine_Vector3_o)UVar4,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar19->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar7 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar15 + -0x10) = 0x412d61c;
      uVar5 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar19->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar17 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar15 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar15 + -0x10) = pMVar12;
  puVar16 = puVar15 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d684;
    UVar21 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    auVar20._8_4_ = extraout_XMM0_Dc_00;
    auVar20._0_8_ = UVar21.fields._0_8_;
    auVar20._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar15 + -0x20) = auVar20;
    *(float *)(puVar15 + -0x24) = UVar21.fields.z;
    *(undefined8 *)(puVar15 + -0x38) = 0x412d69e;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar15 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar15 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar15 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value_00,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar6;
  }
  *(undefined8 *)(puVar15 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar16 + -8) = pMVar13;
  pMVar14 = pMVar11;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar11,
     pMVar12 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar4 = *(UnityEngine_Vector3_Fields *)(pIVar7 + 3);
    pIVar7 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar16 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar12,(UnityEngine_Vector3_o)UVar4,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar11->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar7 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x10) = 0x412d70c;
      uVar5 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar11->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar17 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar16 + -0x10) = 0x412d732;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x10) = uVar5;
  lVar17 = *(long *)&(pMVar14->fields).Visible;
  if (lVar17 != 0) {
    return *(Il2CppObject **)(lVar17 + 0x60);
  }
  *(undefined8 *)(puVar16 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x18) = pMVar13;
  lVar17 = *(long *)&(pMVar14->fields).Visible;
  if (lVar17 != 0) {
    *(Il2CppObject **)(lVar17 + 0x60) = pIVar7;
    *(undefined8 *)(puVar16 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar17 + 0x60);
    plVar2 = *(long **)&(pMVar14->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar17 = *plVar2;
      pIVar7 = *(Il2CppObject **)(lVar17 + 0x1c0);
      vtableDispatch = *(code **)(lVar17 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x20) = 0x412d793;
      uVar5 = (*vtableDispatch)();
      plVar2 = *(long **)&(pMVar14->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar17 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar17 = 0;
  *(undefined8 *)(puVar16 + -0x20) = 0x412d7b9;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x20) = uVar5;
  if (*(long *)(lVar17 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar17 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x28) = pMVar14;
  lVar18 = *(long *)(lVar17 + 0x30);
  if (lVar18 != 0) {
    *(Il2CppObject **)(lVar18 + 0x68) = pIVar7;
    *(undefined8 *)(puVar16 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x68);
    if (*(long **)(lVar17 + 0x30) != (long *)0x0) {
      lVar18 = **(long **)(lVar17 + 0x30);
      pIVar7 = *(Il2CppObject **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x30) = 0x412d813;
      uVar5 = (*vtableDispatch)();
      plVar2 = *(long **)(lVar17 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar17 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x30) = 0x412d839;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x30) = uVar5;
  if (*(long *)(lVar18 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar18 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar16 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x38) = lVar17;
  lVar17 = *(long *)(lVar18 + 0x30);
  if (lVar17 != 0) {
    *(Il2CppObject **)(lVar17 + 0x70) = pIVar7;
    *(undefined8 *)(puVar16 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar17 + 0x70);
    plVar2 = *(long **)(lVar18 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar5 = *(undefined8 *)(*plVar2 + 0x1c0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x40) = 0x412d893;
      uVar5 = (*vtableDispatch)(plVar2,uVar5);
      plVar2 = *(long **)(lVar18 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar17 = *plVar2;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar17 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar17 + 0x1d0),lVar17,*(code **)(lVar17 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar17 = 0;
  *(undefined8 *)(puVar16 + -0x40) = 0x412d8b9;
  auVar20 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x40) = auVar20._0_8_;
  plVar2 = *(long **)(lVar17 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    pIVar7 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar20._8_8_,vtableDispatch);
    return pIVar7;
  }
  *(undefined8 *)(puVar16 + -0x48) = 0x412d8e3;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x48) = uVar5;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar16 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f4f0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  code *vtableDispatch;
  long lVar5;
  Il2CppType **ppIVar6;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  MethodInfo *pMVar9;
  MethodInfo_24EEB40 *pMVar10;
  MethodInfo_24EEB40 *pMVar11;
  Il2CppType *pIVar12;
  Il2CppObject *__this;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  MethodInfo_24EEB40 *obj;
  long lVar18;
  long lVar19;
  Map_MapScriptBaseObject_o *pMVar20;
  Map_MapScriptBaseObject_o *pMVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  long alStack_d0 [10];
  undefined1 auStack_80 [12];
  float fStack_74;
  undefined1 auStack_70 [16];
  Map_MapScriptBaseObject_o *pMStack_60;
  undefined8 uStack_58;
  Map_MapScriptBaseObject_o *pMStack_50;
  Il2CppObject *pIStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (g_data_057aca89 == '\0') {
    auStack_20._0_8_ = 0x412f50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_20._0_8_ = 0x412f51b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_20._0_8_ = 0x412f53a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_20._0_8_ = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f54c;
  pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar17 = (Map_MapScriptBaseObject_o *)__v;
  pMVar9 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    auStack_20._0_8_ = 0x412f568;
    il2cpp_runtime_helper_022b2c90();
    pMVar20 = pMVar17;
    auStack_20._0_8_ = __i;
    if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca6f == '\0') {
        pIStack_48 = (Il2CppObject *)0x412f592;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca6f = '\x01';
      }
      pMVar21 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
      pMVar20 = (Map_MapScriptBaseObject_o *)0x0;
      __i = (CustomLogic_CustomLogicPrefabBuiltin_o *)pMVar17;
      if (pMVar21 != (Map_MapScriptBaseObject_o *)0x0) {
        pIStack_48 = (Il2CppObject *)0x412f5a9;
        UVar23 = Map_MapScriptBaseObject__GetRotation(pMVar21,(MethodInfo *)0x0);
        auStack_30._8_4_ = extraout_XMM0_Dc_01;
        auStack_30._0_8_ = UVar23.fields._0_8_;
        auStack_30._12_4_ = extraout_XMM0_Dd_01;
        pIStack_48 = (Il2CppObject *)0x412f5c3;
        uStack_38._4_4_ = UVar23.fields.z;
        pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar22 = auStack_30;
        pIStack_48 = (Il2CppObject *)0x412f5db;
        value_01.fields.z = uStack_38._4_4_;
        value_01.fields.x = (float)auStack_30._0_4_;
        value_01.fields.y = (float)auStack_30._4_4_;
        auStack_30 = auVar22;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_01,(MethodInfo *)0x0);
        return;
      }
    }
    pIStack_48 = (Il2CppObject *)0x412f5e9;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pMStack_50 = (Map_MapScriptBaseObject_o *)__i;
    pIStack_48 = __v;
    if (g_data_057aca8a == '\0') {
      pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f60f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f61b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f63a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f64c;
    pMVar17 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pMVar9 = (MethodInfo *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pMVar13,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar20 == (Map_MapScriptBaseObject_o *)0x0) {
      pMStack_60 = (Map_MapScriptBaseObject_o *)0x412f668;
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = pMVar20;
      pMVar21 = pMVar13;
      pMStack_60 = pMVar20;
      if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
        if (g_data_057aca70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
          g_data_057aca70 = '\x01';
        }
        pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
        pMVar21 = (Map_MapScriptBaseObject_o *)0x0;
        pMVar14 = pMVar13;
        if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
          UVar23 = Map_MapScriptBaseObject__GetScale(pMVar20,(MethodInfo *)0x0);
          fStack_74 = UVar23.fields.z;
          auStack_70._8_4_ = extraout_XMM0_Dc_02;
          auStack_70._0_8_ = UVar23.fields._0_8_;
          auStack_70._12_4_ = extraout_XMM0_Dd_02;
          pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          auVar22 = auStack_70;
          UVar23.fields.z = fStack_74;
          UVar23.fields.x = (float)auStack_70._0_4_;
          UVar23.fields.y = (float)auStack_70._4_4_;
          auStack_70 = auVar22;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar23,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8b = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMVar9 = (MethodInfo *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)pMVar17,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar21 == (Map_MapScriptBaseObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18._0_4_ = (pMVar17->fields).Visible, lVar18._4_4_ = (pMVar17->fields).Networked, lVar18 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8c = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        obj = MethodInfo_String_ConvertTo_String;
        pMVar10 = (MethodInfo_24EEB40 *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar13,MethodInfo_String_ConvertTo_String);
        if ((pMVar17 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar17->fields).Visible, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
           lVar18 != 0)) {
          *(MethodInfo_24EEB40 **)(lVar18 + 0x60) = pMVar10;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x60);
          plVar4 = *(long **)&(pMVar17->fields).Visible;
          pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
          obj = pMVar10;
          if (plVar4 != (long *)0x0) {
            lVar18 = *plVar4;
            obj = *(MethodInfo_24EEB40 **)(lVar18 + 0x1c0);
            uVar7 = (**(code **)(lVar18 + 0x1b8))();
            plVar4 = *(long **)&(pMVar17->fields).Visible;
            pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
            if (plVar4 != (long *)0x0) {
              lVar18 = *plVar4;
              (**(code **)(lVar18 + 0x1c8))
                        (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar19._0_4_ = (pMVar13->fields).Visible, lVar19._4_4_ = (pMVar13->fields).Networked, lVar19 != 0)
           ) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8d = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar10 = MethodInfo_String_ConvertTo_String;
        pMVar11 = (MethodInfo_24EEB40 *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        if ((pMVar13 != (Map_MapScriptBaseObject_o *)0x0) &&
           (lVar18 = *(long *)&(pMVar13->fields).Visible, obj = (MethodInfo_24EEB40 *)0x0, lVar18 != 0)) {
          *(MethodInfo_24EEB40 **)(lVar18 + 0x68) = pMVar11;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x68);
          plVar4 = *(long **)&(pMVar13->fields).Visible;
          obj = (MethodInfo_24EEB40 *)0x0;
          pMVar10 = pMVar11;
          if (plVar4 != (long *)0x0) {
            lVar18 = *plVar4;
            pMVar10 = *(MethodInfo_24EEB40 **)(lVar18 + 0x1c0);
            uVar7 = (**(code **)(lVar18 + 0x1b8))();
            plVar4 = *(long **)&(pMVar13->fields).Visible;
            obj = (MethodInfo_24EEB40 *)0x0;
            if (plVar4 != (long *)0x0) {
              lVar18 = *plVar4;
              (**(code **)(lVar18 + 0x1c8))
                        (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057aca8e = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = (Il2CppType *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar10,MethodInfo_String_ConvertTo_String);
        if ((obj != (MethodInfo_24EEB40 *)0x0) && (ppIVar6 = obj->parameters, ppIVar6 != (Il2CppType **)0x0))
        {
          ppIVar6[0xe] = pIVar12;
          il2cpp_runtime_helper_022b4080(ppIVar6 + 0xe);
          if (obj->parameters != (Il2CppType **)0x0) {
            uVar7 = (**(code **)&(*obj->parameters)[0x1b].bits)();
            ppIVar6 = obj->parameters;
            if (ppIVar6 != (Il2CppType **)0x0) {
              pIVar12 = *ppIVar6;
              (**(code **)&pIVar12[0x1c].bits)
                        (ppIVar6,uVar7,pIVar12[0x1d].data,pIVar12,*(code **)&pIVar12[0x1c].bits);
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aca8f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca8f = '\x01';
        }
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
        return;
      }
      puVar16 = auStack_80;
      goto CustomLogic_CustomLogicPrefabBuiltin__set_Scale;
    }
    puVar15 = auStack_40;
    pMVar13 = pMStack_50;
  }
  else {
    pMVar13 = (Map_MapScriptBaseObject_o *)__i;
    if ((pMVar9 != (MethodInfo *)0x0) &&
       (pMVar2 = (__i->fields).Value, pMVar13 = (Map_MapScriptBaseObject_o *)0x0,
       pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
      pppIVar1 = &pMVar9->parameters;
      pMVar9 = (MethodInfo *)0x0;
      Map_MapScriptBaseObject__SetPosition
                ((Map_MapScriptBaseObject_o *)pMVar2,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
      pMVar2 = (__i->fields).Value;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        pMVar9 = (pMVar3->vtable)._8_Serialize.method;
        uVar7 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
        pMVar2 = (__i->fields).Value;
        pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
        if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
          pMVar3 = pMVar2->klass;
          UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    puVar15 = auStack_30;
    if (g_data_057aca6f == '\0') {
      uStack_38 = 0x412d57d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    pMVar20 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
    if (pMVar20 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_38 = 0x412d594;
      UVar23 = Map_MapScriptBaseObject__GetRotation(pMVar20,(MethodInfo *)0x0);
      auStack_20._8_4_ = extraout_XMM0_Dc;
      auStack_20._0_8_ = UVar23.fields._0_8_;
      auStack_20._12_4_ = extraout_XMM0_Dd;
      uStack_38 = 0x412d5ae;
      auStack_30._12_4_ = UVar23.fields.z;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar22 = auStack_20;
      uStack_38 = 0x412d5c6;
      value.fields.z = (float)auStack_30._12_4_;
      value.fields.x = (float)auStack_20._0_4_;
      value.fields.y = (float)auStack_20._4_4_;
      auStack_20 = auVar22;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x412d5d4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar15 + -8) = pMVar13;
  pMVar14 = pMVar20;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar20->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar13 = pMVar20,
     pMVar17 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar23.fields = *(UnityEngine_Vector3_Fields *)&pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar15 + -0x10) = 0x412d603;
    Map_MapScriptBaseObject__SetRotation(pMVar17,UVar23,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar20->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar15 + -0x10) = 0x412d61c;
      uVar7 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar20->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        (**(code **)(lVar18 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar15 + -0x10) = 0x412d642;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar15 + -0x10) = pMVar13;
  puVar16 = puVar15 + -0x30;
  if (g_data_057aca70 == '\0') {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d66d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar21 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar21 != (Map_MapScriptBaseObject_o *)0x0) {
    *(undefined8 *)(puVar15 + -0x38) = 0x412d684;
    UVar23 = Map_MapScriptBaseObject__GetScale(pMVar21,(MethodInfo *)0x0);
    auVar22._8_4_ = extraout_XMM0_Dc_00;
    auVar22._0_8_ = UVar23.fields._0_8_;
    auVar22._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar15 + -0x20) = auVar22;
    *(float *)(puVar15 + -0x24) = UVar23.fields.z;
    *(undefined8 *)(puVar15 + -0x38) = 0x412d69e;
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    *(undefined8 *)(puVar15 + -0x38) = 0x412d6b6;
    value_00.fields.z = *(float *)(puVar15 + -0x24);
    value_00.fields._0_8_ = *(undefined8 *)(puVar15 + -0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar15 + -0x38) = 0x412d6c4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicPrefabBuiltin__set_Scale:
  *(Map_MapScriptBaseObject_o **)(puVar16 + -8) = pMVar14;
  pMVar13 = pMVar21;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar17 = *(Map_MapScriptBaseObject_o **)&(pMVar21->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar14 = pMVar21,
     pMVar17 != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar23.fields = *(UnityEngine_Vector3_Fields *)&pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar16 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar17,UVar23,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar21->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x10) = 0x412d70c;
      uVar7 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar21->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        (**(code **)(lVar18 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar16 + -0x10) = 0x412d732;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x10) = uVar7;
  lVar5._0_4_ = (pMVar13->fields).Visible;
  lVar5._4_4_ = (pMVar13->fields).Networked;
  if (lVar5 != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x18) = pMVar14;
  lVar18 = *(long *)&(pMVar13->fields).Visible;
  if (lVar18 != 0) {
    *(MethodInfo **)(lVar18 + 0x60) = pMVar9;
    *(undefined8 *)(puVar16 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x60);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar18 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar18 + 0x1c0);
      vtableDispatch = *(code **)(lVar18 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x20) = 0x412d793;
      uVar7 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        (**(code **)(lVar18 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x20) = 0x412d7b9;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x20) = uVar7;
  if (*(long *)(lVar18 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar16 + -0x28) = pMVar13;
  lVar19 = *(long *)(lVar18 + 0x30);
  if (lVar19 != 0) {
    *(MethodInfo **)(lVar19 + 0x68) = pMVar9;
    *(undefined8 *)(puVar16 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar19 + 0x68);
    if (*(long **)(lVar18 + 0x30) != (long *)0x0) {
      lVar19 = **(long **)(lVar18 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar19 + 0x1c0);
      vtableDispatch = *(code **)(lVar19 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x30) = 0x412d813;
      uVar7 = (*vtableDispatch)();
      plVar4 = *(long **)(lVar18 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        (**(code **)(lVar18 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return;
      }
    }
  }
  lVar19 = 0;
  *(undefined8 *)(puVar16 + -0x30) = 0x412d839;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x30) = uVar7;
  if (*(long *)(lVar19 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar16 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x38) = lVar18;
  lVar18 = *(long *)(lVar19 + 0x30);
  if (lVar18 != 0) {
    *(MethodInfo **)(lVar18 + 0x70) = pMVar9;
    *(undefined8 *)(puVar16 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar18 + 0x70);
    plVar4 = *(long **)(lVar19 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = *(undefined8 *)(*plVar4 + 0x1c0);
      vtableDispatch = *(code **)(*plVar4 + 0x1b8);
      *(undefined8 *)(puVar16 + -0x40) = 0x412d893;
      uVar7 = (*vtableDispatch)(plVar4,uVar7);
      plVar4 = *(long **)(lVar19 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar18 = *plVar4;
        (**(code **)(lVar18 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar18 + 0x1d0),lVar18,*(code **)(lVar18 + 0x1c8));
        return;
      }
    }
  }
  lVar18 = 0;
  *(undefined8 *)(puVar16 + -0x40) = 0x412d8b9;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar16 + -0x40) = auVar22._0_8_;
  plVar4 = *(long **)(lVar18 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),auVar22._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar16 + -0x48) = 0x412d8e3;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar16 + -0x48) = uVar7;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar16 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f570

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  long *plVar3;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *__this;
  Il2CppType **ppIVar4;
  UnityEngine_Vector3_Fields scale;
  undefined8 uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  MethodInfo_24EEB40 *pMVar8;
  Il2CppType *pIVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *unaff_RBX;
  undefined1 *puVar12;
  MethodInfo_24EEB40 *pMVar13;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar14;
  long lVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar18;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  Map_MapScriptBaseObject_o *pMStack_38;
  
  pMVar16 = (Map_MapScriptBaseObject_o *)__i;
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (g_data_057aca6f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca6f = '\x01';
    }
    __this = (__i->fields).Value;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    unaff_RBX = (Map_MapScriptBaseObject_o *)__i;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      UVar18 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,UVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
  }
  auStack_48._8_8_ = il2cpp_runtime_helper_022b2c90();
  pMStack_38 = unaff_RBX;
  if (g_data_057aca8a == '\0') {
    auStack_48._0_8_ = 0x412f60f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_48._0_8_ = 0x412f61b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_48._0_8_ = 0x412f63a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_48._0_8_ = (Map_MapScriptBaseObject_o *)0x412f64c;
  pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  pMVar11 = pMVar16;
  if (pMVar16 == (Map_MapScriptBaseObject_o *)0x0) {
    auStack_48._0_8_ = 0x412f668;
    il2cpp_runtime_helper_022b2c90();
    pMVar10 = (Map_MapScriptBaseObject_o *)method;
    auStack_48._0_8_ = pMVar16;
    if ((Map_MapScriptBaseObject_o *)method != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca70 = '\x01';
      }
      pMVar16 = *(Map_MapScriptBaseObject_o **)&(((Map_MapScriptBaseObject_o *)method)->fields).Visible;
      pMVar10 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar11 = (Map_MapScriptBaseObject_o *)method;
      if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
        UVar18 = Map_MapScriptBaseObject__GetScale(pMVar16,(MethodInfo *)0x0);
        auStack_58._8_4_ = extraout_XMM0_Dc_00;
        auStack_58._0_8_ = UVar18.fields._0_8_;
        auStack_58._12_4_ = extraout_XMM0_Dd_00;
        uStack_60._4_4_ = UVar18.fields.z;
        pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar17 = auStack_58;
        UVar18.fields.z = uStack_60._4_4_;
        UVar18.fields.x = (float)auStack_58._0_4_;
        UVar18.fields.y = (float)auStack_58._4_4_;
        auStack_58 = auVar17;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,UVar18,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar6;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar13,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar10 == (Map_MapScriptBaseObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((pMVar13 != (MethodInfo_24EEB40 *)0x0) && (pMVar13->parameters != (Il2CppType **)0x0)) {
        return (Il2CppObject *)pMVar13->parameters[0xc];
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8c = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = MethodInfo_String_ConvertTo_String;
      pMVar8 = (MethodInfo_24EEB40 *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
      if ((pMVar13 != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar4 = pMVar13->parameters, obj = (MethodInfo_24EEB40 *)0x0, ppIVar4 != (Il2CppType **)0x0)) {
        ppIVar4[0xc] = (Il2CppType *)pMVar8;
        il2cpp_runtime_helper_022b4080(ppIVar4 + 0xc);
        obj = (MethodInfo_24EEB40 *)0x0;
        obj_00 = pMVar8;
        if (pMVar13->parameters != (Il2CppType **)0x0) {
          pIVar9 = *pMVar13->parameters;
          obj_00 = pIVar9[0x1c].data;
          uVar5 = (**(code **)&pIVar9[0x1b].bits)();
          ppIVar4 = pMVar13->parameters;
          obj = (MethodInfo_24EEB40 *)0x0;
          if (ppIVar4 != (Il2CppType **)0x0) {
            pIVar9 = *ppIVar4;
            pIVar7 = (Il2CppObject *)
                     (**(code **)&pIVar9[0x1c].bits)
                               (ppIVar4,uVar5,pIVar9[0x1d].data,pIVar9,*(code **)&pIVar9[0x1c].bits);
            return pIVar7;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
        return (Il2CppObject *)obj->parameters[0xd];
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_String_ConvertTo_String;
      pMVar8 = (MethodInfo_24EEB40 *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      if ((obj != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar4 = obj->parameters, obj_00 = (MethodInfo_24EEB40 *)0x0, ppIVar4 != (Il2CppType **)0x0)) {
        ppIVar4[0xd] = (Il2CppType *)pMVar8;
        il2cpp_runtime_helper_022b4080(ppIVar4 + 0xd);
        obj_00 = (MethodInfo_24EEB40 *)0x0;
        pMVar13 = pMVar8;
        if (obj->parameters != (Il2CppType **)0x0) {
          pIVar9 = *obj->parameters;
          pMVar13 = pIVar9[0x1c].data;
          uVar5 = (**(code **)&pIVar9[0x1b].bits)();
          ppIVar4 = obj->parameters;
          obj_00 = (MethodInfo_24EEB40 *)0x0;
          if (ppIVar4 != (Il2CppType **)0x0) {
            pIVar9 = *ppIVar4;
            pIVar7 = (Il2CppObject *)
                     (**(code **)&pIVar9[0x1c].bits)
                               (ppIVar4,uVar5,pIVar9[0x1d].data,pIVar9,*(code **)&pIVar9[0x1c].bits);
            return pIVar7;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
        return (Il2CppObject *)obj_00->parameters[0xe];
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8e = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar9 = (Il2CppType *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar13,MethodInfo_String_ConvertTo_String);
      if ((obj_00 != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar4 = obj_00->parameters, ppIVar4 != (Il2CppType **)0x0)) {
        ppIVar4[0xe] = pIVar9;
        il2cpp_runtime_helper_022b4080(ppIVar4 + 0xe);
        if (obj_00->parameters != (Il2CppType **)0x0) {
          uVar5 = (**(code **)&(*obj_00->parameters)[0x1b].bits)();
          ppIVar4 = obj_00->parameters;
          if (ppIVar4 != (Il2CppType **)0x0) {
            pIVar9 = *ppIVar4;
            pIVar7 = (Il2CppObject *)
                     (**(code **)&pIVar9[0x1c].bits)
                               (ppIVar4,uVar5,pIVar9[0x1d].data,pIVar9,*(code **)&pIVar9[0x1c].bits);
            return pIVar7;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca8f = '\x01';
      }
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar7,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
      return pIVar7;
    }
    puVar12 = auStack_68;
  }
  else {
    pMVar10 = pMStack_38;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (pMVar2 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
       pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar10 = pMVar16,
       pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
      pIVar1 = pIVar7 + 3;
      pIVar7 = (Il2CppObject *)0x0;
      pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d603;
      Map_MapScriptBaseObject__SetRotation
                (pMVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
      plVar3 = *(long **)&(pMVar16->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
        pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d61c;
        uVar5 = (**(code **)(lVar14 + 0x1b8))();
        plVar3 = *(long **)&(pMVar16->fields).Visible;
        pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
        if (plVar3 != (long *)0x0) {
          lVar14 = *plVar3;
          pIVar7 = (Il2CppObject *)
                   (**(code **)(lVar14 + 0x1c8))
                             (plVar3,uVar5,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
          return pIVar7;
        }
      }
    }
    pMStack_38 = (Map_MapScriptBaseObject_o *)0x412d642;
    il2cpp_runtime_helper_022b2c90();
    puVar12 = auStack_58;
    pMStack_38 = pMVar10;
    if (g_data_057aca70 == '\0') {
      uStack_60 = 0x412d66d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca70 = '\x01';
    }
    pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
    if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_60 = 0x412d684;
      UVar18 = Map_MapScriptBaseObject__GetScale(pMVar10,(MethodInfo *)0x0);
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._0_8_ = UVar18.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      uStack_60 = 0x412d69e;
      auStack_58._12_4_ = UVar18.fields.z;
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar17 = auStack_48;
      uStack_60 = 0x412d6b6;
      value.fields.z = (float)auStack_58._12_4_;
      value.fields.x = (float)auStack_48._0_4_;
      value.fields.y = (float)auStack_48._4_4_;
      auStack_48 = auVar17;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    uStack_60 = 0x412d6c4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar12 + -8) = pMVar11;
  pMVar16 = pMVar10;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pMVar2 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar11 = pMVar10, pMVar2 != (Map_MapScriptBaseObject_o *)0x0
     )) {
    scale = *(UnityEngine_Vector3_Fields *)(pIVar7 + 3);
    pIVar7 = (Il2CppObject *)0x0;
    *(undefined8 *)(puVar12 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(pMVar2,(UnityEngine_Vector3_o)scale,(MethodInfo *)0x0);
    plVar3 = *(long **)&(pMVar10->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
      vtableDispatch = *(code **)(lVar14 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x10) = 0x412d70c;
      uVar5 = (*vtableDispatch)();
      plVar3 = *(long **)&(pMVar10->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar5,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar12 + -0x10) = 0x412d732;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x10) = uVar5;
  lVar14 = *(long *)&(pMVar16->fields).Visible;
  if (lVar14 != 0) {
    return *(Il2CppObject **)(lVar14 + 0x60);
  }
  *(undefined8 *)(puVar12 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar12 + -0x18) = pMVar11;
  lVar14 = *(long *)&(pMVar16->fields).Visible;
  if (lVar14 != 0) {
    *(Il2CppObject **)(lVar14 + 0x60) = pIVar7;
    *(undefined8 *)(puVar12 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x60);
    plVar3 = *(long **)&(pMVar16->fields).Visible;
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      pIVar7 = *(Il2CppObject **)(lVar14 + 0x1c0);
      vtableDispatch = *(code **)(lVar14 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x20) = 0x412d793;
      uVar5 = (*vtableDispatch)();
      plVar3 = *(long **)&(pMVar16->fields).Visible;
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar5,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar14 = 0;
  *(undefined8 *)(puVar12 + -0x20) = 0x412d7b9;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x20) = uVar5;
  if (*(long *)(lVar14 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar14 + 0x30) + 0x68);
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar12 + -0x28) = pMVar16;
  lVar15 = *(long *)(lVar14 + 0x30);
  if (lVar15 != 0) {
    *(Il2CppObject **)(lVar15 + 0x68) = pIVar7;
    *(undefined8 *)(puVar12 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x68);
    if (*(long **)(lVar14 + 0x30) != (long *)0x0) {
      lVar15 = **(long **)(lVar14 + 0x30);
      pIVar7 = *(Il2CppObject **)(lVar15 + 0x1c0);
      vtableDispatch = *(code **)(lVar15 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x30) = 0x412d813;
      uVar5 = (*vtableDispatch)();
      plVar3 = *(long **)(lVar14 + 0x30);
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar5,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar15 = 0;
  *(undefined8 *)(puVar12 + -0x30) = 0x412d839;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x30) = uVar5;
  if (*(long *)(lVar15 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar15 + 0x30) + 0x70);
  }
  *(undefined8 *)(puVar12 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar12 + -0x38) = lVar14;
  lVar14 = *(long *)(lVar15 + 0x30);
  if (lVar14 != 0) {
    *(Il2CppObject **)(lVar14 + 0x70) = pIVar7;
    *(undefined8 *)(puVar12 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x70);
    plVar3 = *(long **)(lVar15 + 0x30);
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)(*plVar3 + 0x1c0);
      vtableDispatch = *(code **)(*plVar3 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x40) = 0x412d893;
      uVar5 = (*vtableDispatch)(plVar3,uVar5);
      plVar3 = *(long **)(lVar15 + 0x30);
      if (plVar3 != (long *)0x0) {
        lVar14 = *plVar3;
        pIVar7 = (Il2CppObject *)
                 (**(code **)(lVar14 + 0x1c8))
                           (plVar3,uVar5,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8));
        return pIVar7;
      }
    }
  }
  lVar14 = 0;
  *(undefined8 *)(puVar12 + -0x40) = 0x412d8b9;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar12 + -0x40) = auVar17._0_8_;
  plVar3 = *(long **)(lVar14 + 0x30);
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x1b8);
    pIVar7 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),auVar17._8_8_,vtableDispatch);
    return pIVar7;
  }
  *(undefined8 *)(puVar12 + -0x48) = 0x412d8e3;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x48) = uVar5;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f5f0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Map_MapScriptBaseObject_o *__this;
  long *plVar4;
  code *vtableDispatch;
  Il2CppType **ppIVar5;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  MethodInfo *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  Il2CppType *pIVar10;
  Il2CppObject *__this_00;
  Map_MapScriptBaseObject_o *pMVar11;
  undefined1 *puVar12;
  MethodInfo_24EEB40 *pMVar13;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  Map_MapScriptBaseObject_o *pMVar14;
  long lVar15;
  long lVar16;
  Map_MapScriptBaseObject_o *__this_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (g_data_057aca8a == '\0') {
    auStack_20._0_8_ = 0x412f60f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    auStack_20._0_8_ = 0x412f61b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_20._0_8_ = 0x412f63a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_20._0_8_ = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x412f64c;
  pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar8 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  pMVar11 = (Map_MapScriptBaseObject_o *)__i;
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    auStack_20._0_8_ = 0x412f668;
    il2cpp_runtime_helper_022b2c90();
    __this_01 = (Map_MapScriptBaseObject_o *)__v;
    auStack_20._0_8_ = __i;
    if ((Map_MapScriptBaseObject_o *)__v != (Map_MapScriptBaseObject_o *)0x0) {
      if (g_data_057aca70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057aca70 = '\x01';
      }
      pMVar14 = *(Map_MapScriptBaseObject_o **)&(((Map_MapScriptBaseObject_o *)__v)->fields).Visible;
      __this_01 = (Map_MapScriptBaseObject_o *)0x0;
      pMVar11 = (Map_MapScriptBaseObject_o *)__v;
      if (pMVar14 != (Map_MapScriptBaseObject_o *)0x0) {
        UVar18 = Map_MapScriptBaseObject__GetScale(pMVar14,(MethodInfo *)0x0);
        auStack_30._8_4_ = extraout_XMM0_Dc_00;
        auStack_30._0_8_ = UVar18.fields._0_8_;
        auStack_30._12_4_ = extraout_XMM0_Dd_00;
        uStack_38._4_4_ = UVar18.fields.z;
        pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        auVar17 = auStack_30;
        UVar18.fields.z = uStack_38._4_4_;
        UVar18.fields.x = (float)auStack_30._0_4_;
        UVar18.fields.y = (float)auStack_30._4_4_;
        auStack_30 = auVar17;
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar18,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pMVar8 = (MethodInfo *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar13,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (__this_01 == (Map_MapScriptBaseObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((pMVar13 != (MethodInfo_24EEB40 *)0x0) && (pMVar13->parameters != (Il2CppType **)0x0)) {
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8c = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = MethodInfo_String_ConvertTo_String;
      pMVar9 = (MethodInfo_24EEB40 *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
      if ((pMVar13 != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar5 = pMVar13->parameters, obj = (MethodInfo_24EEB40 *)0x0, ppIVar5 != (Il2CppType **)0x0)) {
        ppIVar5[0xc] = (Il2CppType *)pMVar9;
        il2cpp_runtime_helper_022b4080(ppIVar5 + 0xc);
        obj = (MethodInfo_24EEB40 *)0x0;
        obj_00 = pMVar9;
        if (pMVar13->parameters != (Il2CppType **)0x0) {
          pIVar10 = *pMVar13->parameters;
          obj_00 = pIVar10[0x1c].data;
          uVar6 = (**(code **)&pIVar10[0x1b].bits)();
          ppIVar5 = pMVar13->parameters;
          obj = (MethodInfo_24EEB40 *)0x0;
          if (ppIVar5 != (Il2CppType **)0x0) {
            pIVar10 = *ppIVar5;
            (**(code **)&pIVar10[0x1c].bits)
                      (ppIVar5,uVar6,pIVar10[0x1d].data,pIVar10,*(code **)&pIVar10[0x1c].bits);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_String_ConvertTo_String;
      pMVar9 = (MethodInfo_24EEB40 *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      if ((obj != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar5 = obj->parameters, obj_00 = (MethodInfo_24EEB40 *)0x0, ppIVar5 != (Il2CppType **)0x0)) {
        ppIVar5[0xd] = (Il2CppType *)pMVar9;
        il2cpp_runtime_helper_022b4080(ppIVar5 + 0xd);
        obj_00 = (MethodInfo_24EEB40 *)0x0;
        pMVar13 = pMVar9;
        if (obj->parameters != (Il2CppType **)0x0) {
          pIVar10 = *obj->parameters;
          pMVar13 = pIVar10[0x1c].data;
          uVar6 = (**(code **)&pIVar10[0x1b].bits)();
          ppIVar5 = obj->parameters;
          obj_00 = (MethodInfo_24EEB40 *)0x0;
          if (ppIVar5 != (Il2CppType **)0x0) {
            pIVar10 = *ppIVar5;
            (**(code **)&pIVar10[0x1c].bits)
                      (ppIVar5,uVar6,pIVar10[0x1d].data,pIVar10,*(code **)&pIVar10[0x1c].bits);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca8e = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar10 = (Il2CppType *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar13,MethodInfo_String_ConvertTo_String);
      if ((obj_00 != (MethodInfo_24EEB40 *)0x0) &&
         (ppIVar5 = obj_00->parameters, ppIVar5 != (Il2CppType **)0x0)) {
        ppIVar5[0xe] = pIVar10;
        il2cpp_runtime_helper_022b4080(ppIVar5 + 0xe);
        if (obj_00->parameters != (Il2CppType **)0x0) {
          uVar6 = (**(code **)&(*obj_00->parameters)[0x1b].bits)();
          ppIVar5 = obj_00->parameters;
          if (ppIVar5 != (Il2CppType **)0x0) {
            pIVar10 = *ppIVar5;
            (**(code **)&pIVar10[0x1c].bits)
                      (ppIVar5,uVar6,pIVar10[0x1d].data,pIVar10,*(code **)&pIVar10[0x1c].bits);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca8f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca8f = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
      return;
    }
    puVar12 = auStack_40;
  }
  else {
    if ((pMVar8 != (MethodInfo *)0x0) &&
       (pMVar2 = (__i->fields).Value, pMVar11 = (Map_MapScriptBaseObject_o *)0x0,
       pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
      pppIVar1 = &pMVar8->parameters;
      pMVar8 = (MethodInfo *)0x0;
      Map_MapScriptBaseObject__SetRotation
                ((Map_MapScriptBaseObject_o *)pMVar2,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
      pMVar2 = (__i->fields).Value;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        pMVar8 = (pMVar3->vtable)._8_Serialize.method;
        uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
        pMVar2 = (__i->fields).Value;
        pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
        if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
          pMVar3 = pMVar2->klass;
          UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    puVar12 = auStack_30;
    if (g_data_057aca70 == '\0') {
      uStack_38 = 0x412d66d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca70 = '\x01';
    }
    __this_01 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
    if (__this_01 != (Map_MapScriptBaseObject_o *)0x0) {
      uStack_38 = 0x412d684;
      UVar18 = Map_MapScriptBaseObject__GetScale(__this_01,(MethodInfo *)0x0);
      auStack_20._8_4_ = extraout_XMM0_Dc;
      auStack_20._0_8_ = UVar18.fields._0_8_;
      auStack_20._12_4_ = extraout_XMM0_Dd;
      uStack_38 = 0x412d69e;
      auStack_30._12_4_ = UVar18.fields.z;
      pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar17 = auStack_20;
      uStack_38 = 0x412d6b6;
      value.fields.z = (float)auStack_30._12_4_;
      value.fields.x = (float)auStack_20._0_4_;
      value.fields.y = (float)auStack_20._4_4_;
      auStack_20 = auVar17;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,value,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x412d6c4;
    il2cpp_runtime_helper_022b2c90();
  }
  *(Map_MapScriptBaseObject_o **)(puVar12 + -8) = pMVar11;
  pMVar14 = __this_01;
  if ((pMVar8 != (MethodInfo *)0x0) &&
     (__this = *(Map_MapScriptBaseObject_o **)&(__this_01->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar11 = __this_01,
     __this != (Map_MapScriptBaseObject_o *)0x0)) {
    UVar18.fields = *(UnityEngine_Vector3_Fields *)&pMVar8->parameters;
    pMVar8 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar12 + -0x10) = 0x412d6f3;
    Map_MapScriptBaseObject__SetScale(__this,UVar18,(MethodInfo *)0x0);
    plVar4 = *(long **)&(__this_01->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar15 = *plVar4;
      pMVar8 = *(MethodInfo **)(lVar15 + 0x1c0);
      vtableDispatch = *(code **)(lVar15 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x10) = 0x412d70c;
      uVar6 = (*vtableDispatch)();
      plVar4 = *(long **)&(__this_01->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar15 = *plVar4;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  *(undefined8 *)(puVar12 + -0x10) = 0x412d732;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x10) = uVar6;
  lVar15._0_4_ = (pMVar14->fields).Visible;
  lVar15._4_4_ = (pMVar14->fields).Networked;
  if (lVar15 != 0) {
    return;
  }
  *(undefined8 *)(puVar12 + -0x18) = 0x412d755;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar12 + -0x18) = pMVar11;
  lVar15 = *(long *)&(pMVar14->fields).Visible;
  if (lVar15 != 0) {
    *(MethodInfo **)(lVar15 + 0x60) = pMVar8;
    *(undefined8 *)(puVar12 + -0x20) = 0x412d77a;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x60);
    plVar4 = *(long **)&(pMVar14->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar15 = *plVar4;
      pMVar8 = *(MethodInfo **)(lVar15 + 0x1c0);
      vtableDispatch = *(code **)(lVar15 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x20) = 0x412d793;
      uVar6 = (*vtableDispatch)();
      plVar4 = *(long **)&(pMVar14->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar15 = *plVar4;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  lVar15 = 0;
  *(undefined8 *)(puVar12 + -0x20) = 0x412d7b9;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x20) = uVar6;
  if (*(long *)(lVar15 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x412d7d5;
  il2cpp_runtime_helper_022b2c90();
  *(Map_MapScriptBaseObject_o **)(puVar12 + -0x28) = pMVar14;
  lVar16 = *(long *)(lVar15 + 0x30);
  if (lVar16 != 0) {
    *(MethodInfo **)(lVar16 + 0x68) = pMVar8;
    *(undefined8 *)(puVar12 + -0x30) = 0x412d7fa;
    il2cpp_runtime_helper_022b4080(lVar16 + 0x68);
    if (*(long **)(lVar15 + 0x30) != (long *)0x0) {
      lVar16 = **(long **)(lVar15 + 0x30);
      pMVar8 = *(MethodInfo **)(lVar16 + 0x1c0);
      vtableDispatch = *(code **)(lVar16 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x30) = 0x412d813;
      uVar6 = (*vtableDispatch)();
      plVar4 = *(long **)(lVar15 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar15 = *plVar4;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  lVar16 = 0;
  *(undefined8 *)(puVar12 + -0x30) = 0x412d839;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x30) = uVar6;
  if (*(long *)(lVar16 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(puVar12 + -0x38) = 0x412d855;
  il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar12 + -0x38) = lVar15;
  lVar15 = *(long *)(lVar16 + 0x30);
  if (lVar15 != 0) {
    *(MethodInfo **)(lVar15 + 0x70) = pMVar8;
    *(undefined8 *)(puVar12 + -0x40) = 0x412d87a;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x70);
    plVar4 = *(long **)(lVar16 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = *(undefined8 *)(*plVar4 + 0x1c0);
      vtableDispatch = *(code **)(*plVar4 + 0x1b8);
      *(undefined8 *)(puVar12 + -0x40) = 0x412d893;
      uVar6 = (*vtableDispatch)(plVar4,uVar6);
      plVar4 = *(long **)(lVar16 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar15 = *plVar4;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  lVar15 = 0;
  *(undefined8 *)(puVar12 + -0x40) = 0x412d8b9;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar12 + -0x40) = auVar17._0_8_;
  plVar4 = *(long **)(lVar15 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),auVar17._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)(puVar12 + -0x48) = 0x412d8e3;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar12 + -0x48) = uVar6;
  if (g_data_057aca72 == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x412d906;
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f670

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long *plVar2;
  code *vtableDispatch;
  Map_MapScriptSceneObject_o *__this;
  Il2CppType **ppIVar3;
  undefined8 uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppObject *pIVar5;
  MethodInfo_24EEB40 *pMVar6;
  MethodInfo_24EEB40 *pMVar7;
  Il2CppType *pIVar8;
  undefined8 extraout_RDX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar9;
  long lVar10;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (g_data_057aca70 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca70 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (lVar10 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if ((method != (MethodInfo *)0x0) && (method->parameters != (Il2CppType **)0x0)) {
      return (Il2CppObject *)method->parameters[0xc];
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    obj_00 = MethodInfo_String_ConvertTo_String;
    pMVar6 = (MethodInfo_24EEB40 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
    if ((method != (MethodInfo *)0x0) &&
       (ppIVar3 = method->parameters, obj = (MethodInfo_24EEB40 *)0x0, ppIVar3 != (Il2CppType **)0x0)) {
      ppIVar3[0xc] = (Il2CppType *)pMVar6;
      il2cpp_runtime_helper_022b4080(ppIVar3 + 0xc);
      obj = (MethodInfo_24EEB40 *)0x0;
      obj_00 = pMVar6;
      if (method->parameters != (Il2CppType **)0x0) {
        pIVar8 = *method->parameters;
        obj_00 = pIVar8[0x1c].data;
        uVar4 = (**(code **)&pIVar8[0x1b].bits)();
        ppIVar3 = method->parameters;
        obj = (MethodInfo_24EEB40 *)0x0;
        if (ppIVar3 != (Il2CppType **)0x0) {
          pIVar8 = *ppIVar3;
          pIVar5 = (Il2CppObject *)
                   (**(code **)&pIVar8[0x1c].bits)
                             (ppIVar3,uVar4,pIVar8[0x1d].data,pIVar8,*(code **)&pIVar8[0x1c].bits);
          return pIVar5;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
      return (Il2CppObject *)obj->parameters[0xd];
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8d = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pMVar7 = (MethodInfo_24EEB40 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
    if ((obj != (MethodInfo_24EEB40 *)0x0) &&
       (ppIVar3 = obj->parameters, obj_00 = (MethodInfo_24EEB40 *)0x0, ppIVar3 != (Il2CppType **)0x0)) {
      ppIVar3[0xd] = (Il2CppType *)pMVar7;
      il2cpp_runtime_helper_022b4080(ppIVar3 + 0xd);
      obj_00 = (MethodInfo_24EEB40 *)0x0;
      pMVar6 = pMVar7;
      if (obj->parameters != (Il2CppType **)0x0) {
        pIVar8 = *obj->parameters;
        pMVar6 = pIVar8[0x1c].data;
        uVar4 = (**(code **)&pIVar8[0x1b].bits)();
        ppIVar3 = obj->parameters;
        obj_00 = (MethodInfo_24EEB40 *)0x0;
        if (ppIVar3 != (Il2CppType **)0x0) {
          pIVar8 = *ppIVar3;
          pIVar5 = (Il2CppObject *)
                   (**(code **)&pIVar8[0x1c].bits)
                             (ppIVar3,uVar4,pIVar8[0x1d].data,pIVar8,*(code **)&pIVar8[0x1c].bits);
          return pIVar5;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
      return (Il2CppObject *)obj_00->parameters[0xe];
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8e = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = (Il2CppType *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar6,MethodInfo_String_ConvertTo_String);
    if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (ppIVar3 = obj_00->parameters, ppIVar3 != (Il2CppType **)0x0)
       ) {
      ppIVar3[0xe] = pIVar8;
      il2cpp_runtime_helper_022b4080(ppIVar3 + 0xe);
      if (obj_00->parameters != (Il2CppType **)0x0) {
        uVar4 = (**(code **)&(*obj_00->parameters)[0x1b].bits)();
        ppIVar3 = obj_00->parameters;
        if (ppIVar3 != (Il2CppType **)0x0) {
          pIVar8 = *ppIVar3;
          pIVar5 = (Il2CppObject *)
                   (**(code **)&pIVar8[0x1c].bits)
                             (ppIVar3,uVar4,pIVar8[0x1d].data,pIVar8,*(code **)&pIVar8[0x1c].bits);
          return pIVar5;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca8f = '\x01';
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
    return pIVar5;
  }
  lVar9 = lVar10;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar9 = 0, *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30) != (Map_MapScriptBaseObject_o *)0x0)) {
    pIVar1 = pIVar5 + 3;
    pIVar5 = (Il2CppObject *)0x0;
    Map_MapScriptBaseObject__SetScale
              (*(Map_MapScriptBaseObject_o **)(lVar10 + 0x30),
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pIVar1,(MethodInfo *)0x0);
    lVar9 = 0;
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      pIVar5 = *(Il2CppObject **)(lVar9 + 0x1c0);
      uVar4 = (**(code **)(lVar9 + 0x1b8))();
      plVar2 = *(long **)(lVar10 + 0x30);
      lVar9 = 0;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pIVar5 = (Il2CppObject *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar4,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pIVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar9 + 0x30) + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    *(Il2CppObject **)(lVar10 + 0x60) = pIVar5;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar10 = **(long **)(lVar9 + 0x30);
      pIVar5 = *(Il2CppObject **)(lVar10 + 0x1c0);
      uVar4 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)(lVar9 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pIVar5 = (Il2CppObject *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar4,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pIVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(Il2CppObject **)(lVar9 + 0x68) = pIVar5;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      pIVar5 = *(Il2CppObject **)(lVar9 + 0x1c0);
      uVar4 = (**(code **)(lVar9 + 0x1b8))();
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pIVar5 = (Il2CppObject *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar4,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pIVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(Il2CppObject **)(lVar9 + 0x70) = pIVar5;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar2 = *(long **)(lVar10 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pIVar5 = (Il2CppObject *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar4,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pIVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar10 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    pIVar5 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f6f0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  long lVar4;
  long *plVar5;
  code *vtableDispatch;
  Il2CppClass *pIVar6;
  void *pvVar7;
  Il2CppType **ppIVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  MethodInfo_24EEB40 *pMVar11;
  MethodInfo_24EEB40 *pMVar12;
  Il2CppType *pIVar13;
  Il2CppObject *__this;
  undefined8 extraout_RDX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar14;
  long lVar15;
  
  if (g_data_057aca8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar10 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__v != (Il2CppObject *)0x0) && (__v[3].klass != (Il2CppClass *)0x0)) {
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    obj_00 = MethodInfo_String_ConvertTo_String;
    pMVar11 = (MethodInfo_24EEB40 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
    if ((__v != (Il2CppObject *)0x0) &&
       (pIVar6 = __v[3].klass, obj = (MethodInfo_24EEB40 *)0x0, pIVar6 != (Il2CppClass *)0x0)) {
      (pIVar6->_1).generic_class = pMVar11;
      il2cpp_runtime_helper_022b4080(&(pIVar6->_1).generic_class);
      obj = (MethodInfo_24EEB40 *)0x0;
      obj_00 = pMVar11;
      if (__v[3].klass != (Il2CppClass *)0x0) {
        pvVar7 = ((__v[3].klass)->_1).image;
        obj_00 = *(MethodInfo_24EEB40 **)((long)pvVar7 + 0x1c0);
        uVar9 = (**(code **)((long)pvVar7 + 0x1b8))();
        pIVar6 = __v[3].klass;
        obj = (MethodInfo_24EEB40 *)0x0;
        if (pIVar6 != (Il2CppClass *)0x0) {
          pvVar7 = (pIVar6->_1).image;
          (**(code **)((long)pvVar7 + 0x1c8))
                    (pIVar6,uVar9,*(undefined8 *)((long)pvVar7 + 0x1d0),pvVar7,
                     *(code **)((long)pvVar7 + 0x1c8));
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((obj != (MethodInfo_24EEB40 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8d = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar11 = MethodInfo_String_ConvertTo_String;
    pMVar12 = (MethodInfo_24EEB40 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
    if ((obj != (MethodInfo_24EEB40 *)0x0) &&
       (ppIVar8 = obj->parameters, obj_00 = (MethodInfo_24EEB40 *)0x0, ppIVar8 != (Il2CppType **)0x0)) {
      ppIVar8[0xd] = (Il2CppType *)pMVar12;
      il2cpp_runtime_helper_022b4080(ppIVar8 + 0xd);
      obj_00 = (MethodInfo_24EEB40 *)0x0;
      pMVar11 = pMVar12;
      if (obj->parameters != (Il2CppType **)0x0) {
        pIVar13 = *obj->parameters;
        pMVar11 = pIVar13[0x1c].data;
        uVar9 = (**(code **)&pIVar13[0x1b].bits)();
        ppIVar8 = obj->parameters;
        obj_00 = (MethodInfo_24EEB40 *)0x0;
        if (ppIVar8 != (Il2CppType **)0x0) {
          pIVar13 = *ppIVar8;
          (**(code **)&pIVar13[0x1c].bits)
                    (ppIVar8,uVar9,pIVar13[0x1d].data,pIVar13,*(code **)&pIVar13[0x1c].bits);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca8e = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar13 = (Il2CppType *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar11,MethodInfo_String_ConvertTo_String);
    if ((obj_00 != (MethodInfo_24EEB40 *)0x0) && (ppIVar8 = obj_00->parameters, ppIVar8 != (Il2CppType **)0x0)
       ) {
      ppIVar8[0xe] = pIVar13;
      il2cpp_runtime_helper_022b4080(ppIVar8 + 0xe);
      if (obj_00->parameters != (Il2CppType **)0x0) {
        uVar9 = (**(code **)&(*obj_00->parameters)[0x1b].bits)();
        ppIVar8 = obj_00->parameters;
        if (ppIVar8 != (Il2CppType **)0x0) {
          pIVar13 = *ppIVar8;
          (**(code **)&pIVar13[0x1c].bits)
                    (ppIVar8,uVar9,pIVar13[0x1d].data,pIVar13,*(code **)&pIVar13[0x1c].bits);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca8f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca8f = '\x01';
    }
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
    return;
  }
  pCVar14 = __i;
  if ((pMVar10 != (MethodInfo *)0x0) &&
     (pMVar2 = (__i->fields).Value, pCVar14 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0,
     pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    pppIVar1 = &pMVar10->parameters;
    pMVar10 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar2,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    pMVar2 = (__i->fields).Value;
    pCVar14 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      pMVar10 = (pMVar3->vtable)._8_Serialize.method;
      uVar9 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__i->fields).Value;
      pCVar14 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_01 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_01)
                  (pMVar2,uVar9,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_01);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pCVar14->fields).Value != (Map_MapScriptSceneObject_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (pCVar14->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(MethodInfo **)&(pMVar2->fields).ScaleZ = pMVar10;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).ScaleZ);
    pMVar2 = (pCVar14->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      pMVar10 = (pMVar3->vtable)._8_Serialize.method;
      uVar9 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (pCVar14->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_01 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_01)
                  (pMVar2,uVar9,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_01);
        return;
      }
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar15 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x68) = pMVar10;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x68);
    if (*(long **)(lVar15 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar15 + 0x30);
      pMVar10 = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar9 = (**(code **)(lVar4 + 0x1b8))();
      plVar5 = *(long **)(lVar15 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar15 = *plVar5;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar5,uVar9,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar15 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x70) = pMVar10;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x70);
    plVar5 = *(long **)(lVar15 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar15 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar15 = *plVar5;
        (**(code **)(lVar15 + 0x1c8))
                  (plVar5,uVar9,*(undefined8 *)(lVar15 + 0x1d0),lVar15,*(code **)(lVar15 + 0x1c8));
        return;
      }
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar15 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f770

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  Il2CppType **ppIVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  MethodInfo *pMVar7;
  Il2CppType *pIVar8;
  MethodInfo *obj;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return *(Il2CppObject **)&(pMVar1->fields).ScaleZ;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_String_ConvertTo_String;
  pMVar4 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, method = (MethodInfo *)0x0, pMVar1 != (Map_MapScriptSceneObject_o *)0x0))
  {
    *(MethodInfo **)&(pMVar1->fields).ScaleZ = pMVar4;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).ScaleZ);
    pMVar1 = (__i->fields).Value;
    method = (MethodInfo *)0x0;
    obj = pMVar4;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      obj = (pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      method = (MethodInfo *)0x0;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pIVar6 = (Il2CppObject *)
                 (*vtableDispatch)
                           (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return pIVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method->parameters != (Il2CppType **)0x0)) {
    return (Il2CppObject *)method->parameters[0xd];
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = MethodInfo_String_ConvertTo_String;
  pMVar7 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((method != (MethodInfo *)0x0) &&
     (ppIVar3 = method->parameters, obj = (MethodInfo *)0x0, ppIVar3 != (Il2CppType **)0x0)) {
    ppIVar3[0xd] = (Il2CppType *)pMVar7;
    il2cpp_runtime_helper_022b4080(ppIVar3 + 0xd);
    obj = (MethodInfo *)0x0;
    pMVar4 = pMVar7;
    if (method->parameters != (Il2CppType **)0x0) {
      pIVar8 = *method->parameters;
      pMVar4 = pIVar8[0x1c].data;
      uVar5 = (**(code **)&pIVar8[0x1b].bits)();
      ppIVar3 = method->parameters;
      obj = (MethodInfo *)0x0;
      if (ppIVar3 != (Il2CppType **)0x0) {
        pIVar8 = *ppIVar3;
        pIVar6 = (Il2CppObject *)
                 (**(code **)&pIVar8[0x1c].bits)
                           (ppIVar3,uVar5,pIVar8[0x1d].data,pIVar8,*(code **)&pIVar8[0x1c].bits);
        return pIVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    return (Il2CppObject *)obj->parameters[0xe];
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppType *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pMVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((obj != (MethodInfo *)0x0) && (ppIVar3 = obj->parameters, ppIVar3 != (Il2CppType **)0x0)) {
    ppIVar3[0xe] = pIVar8;
    il2cpp_runtime_helper_022b4080(ppIVar3 + 0xe);
    if (obj->parameters != (Il2CppType **)0x0) {
      uVar5 = (**(code **)&(*obj->parameters)[0x1b].bits)();
      ppIVar3 = obj->parameters;
      if (ppIVar3 != (Il2CppType **)0x0) {
        pIVar8 = *ppIVar3;
        pIVar6 = (Il2CppObject *)
                 (**(code **)&pIVar8[0x1c].bits)
                           (ppIVar3,uVar5,pIVar8[0x1d].data,pIVar8,*(code **)&pIVar8[0x1c].bits);
        return pIVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
  return pIVar6;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f790

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar3;
  void *pvVar4;
  Il2CppType **ppIVar5;
  MethodInfo *pMVar6;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  Il2CppType *pIVar9;
  Il2CppObject *__this;
  MethodInfo *obj;
  
  if (g_data_057aca8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_String_ConvertTo_String;
  pMVar6 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, __v = (Il2CppObject *)0x0, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(MethodInfo **)&(pMVar1->fields).ScaleZ = pMVar6;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).ScaleZ);
    pMVar1 = (__i->fields).Value;
    __v = (Il2CppObject *)0x0;
    obj = pMVar6;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      obj = (pMVar2->vtable)._8_Serialize.method;
      uVar7 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      __v = (Il2CppObject *)0x0;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtableDispatch)
                  (pMVar1,uVar7,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].klass != (Il2CppClass *)0x0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = MethodInfo_String_ConvertTo_String;
  pMVar8 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__v != (Il2CppObject *)0x0) &&
     (pIVar3 = __v[3].klass, obj = (MethodInfo *)0x0, pIVar3 != (Il2CppClass *)0x0)) {
    (pIVar3->_1).typeMetadataHandle = pMVar8;
    il2cpp_runtime_helper_022b4080(&(pIVar3->_1).typeMetadataHandle);
    obj = (MethodInfo *)0x0;
    pMVar6 = pMVar8;
    if (__v[3].klass != (Il2CppClass *)0x0) {
      pvVar4 = ((__v[3].klass)->_1).image;
      pMVar6 = *(MethodInfo **)((long)pvVar4 + 0x1c0);
      uVar7 = (**(code **)((long)pvVar4 + 0x1b8))();
      pIVar3 = __v[3].klass;
      obj = (MethodInfo *)0x0;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar3->_1).image;
        (**(code **)((long)pvVar4 + 0x1c8))
                  (pIVar3,uVar7,*(undefined8 *)((long)pvVar4 + 0x1d0),pvVar4,*(code **)((long)pvVar4 + 0x1c8))
        ;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppType *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pMVar6,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((obj != (MethodInfo *)0x0) && (ppIVar5 = obj->parameters, ppIVar5 != (Il2CppType **)0x0)) {
    ppIVar5[0xe] = pIVar9;
    il2cpp_runtime_helper_022b4080(ppIVar5 + 0xe);
    if (obj->parameters != (Il2CppType **)0x0) {
      uVar7 = (**(code **)&(*obj->parameters)[0x1b].bits)();
      ppIVar5 = obj->parameters;
      if (ppIVar5 != (Il2CppType **)0x0) {
        pIVar9 = *ppIVar5;
        (**(code **)&pIVar9[0x1c].bits)(ppIVar5,uVar7,pIVar9[0x1d].data,pIVar9,*(code **)&pIVar9[0x1c].bits);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f850

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  Il2CppType **ppIVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Il2CppType *pIVar7;
  MethodInfo *obj;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideMode;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_String_ConvertTo_String;
  pMVar4 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, method = (MethodInfo *)0x0, pMVar1 != (Map_MapScriptSceneObject_o *)0x0))
  {
    (pMVar1->fields).CollideMode = (System_String_o *)pMVar4;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideMode);
    pMVar1 = (__i->fields).Value;
    method = (MethodInfo *)0x0;
    obj = pMVar4;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      obj = (pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      method = (MethodInfo *)0x0;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pIVar6 = (Il2CppObject *)
                 (*vtableDispatch)
                           (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return pIVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method->parameters != (Il2CppType **)0x0)) {
    return (Il2CppObject *)method->parameters[0xe];
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppType *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((method != (MethodInfo *)0x0) && (ppIVar3 = method->parameters, ppIVar3 != (Il2CppType **)0x0)) {
    ppIVar3[0xe] = pIVar7;
    il2cpp_runtime_helper_022b4080(ppIVar3 + 0xe);
    if (method->parameters != (Il2CppType **)0x0) {
      uVar5 = (**(code **)&(*method->parameters)[0x1b].bits)();
      ppIVar3 = method->parameters;
      if (ppIVar3 != (Il2CppType **)0x0) {
        pIVar7 = *ppIVar3;
        pIVar6 = (Il2CppObject *)
                 (**(code **)&pIVar7[0x1c].bits)
                           (ppIVar3,uVar5,pIVar7[0x1d].data,pIVar7,*(code **)&pIVar7[0x1c].bits);
        return pIVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
  return pIVar6;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f870

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar3;
  void *pvVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  MethodInfo *obj;
  
  if (g_data_057aca8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_String_ConvertTo_String;
  pMVar5 = (MethodInfo *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, __v = (Il2CppObject *)0x0, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideMode = (System_String_o *)pMVar5;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideMode);
    pMVar1 = (__i->fields).Value;
    __v = (Il2CppObject *)0x0;
    obj = pMVar5;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      obj = (pMVar2->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      __v = (Il2CppObject *)0x0;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtableDispatch)
                  (pMVar1,uVar6,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].klass != (Il2CppClass *)0x0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__v != (Il2CppObject *)0x0) && (pIVar3 = __v[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
    (pIVar3->_1).interopData = pIVar7;
    il2cpp_runtime_helper_022b4080(&(pIVar3->_1).interopData);
    if (__v[3].klass != (Il2CppClass *)0x0) {
      uVar6 = (**(code **)((long)((__v[3].klass)->_1).image + 0x1b8))();
      pIVar3 = __v[3].klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar3->_1).image;
        (**(code **)((long)pvVar4 + 0x1c8))
                  (pIVar3,uVar6,*(undefined8 *)((long)pvVar4 + 0x1d0),pvVar4,*(code **)((long)pvVar4 + 0x1c8))
        ;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x412f930

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideWith;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideWith = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideWith);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pIVar5 = (Il2CppObject *)
                 (*vtableDispatch)
                           (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return pIVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412f950

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  Il2CppObject *__this;
  
  if (g_data_057aca8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideWith = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideWith);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtableDispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtableDispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca8f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412cf10

void CustomLogic_CustomLogicPrefabBuiltin___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  
  if (g_data_057aca6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    g_data_057aca6c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value,__this_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* prefabCSV, bool clearComponents, const MethodInfo* method);
// 0x412cfa0

void CustomLogic_CustomLogicPrefabBuiltin___ctor_402cfa0
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *prefabCSV,
               bool_conflict clearComponents,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  Map_MapScriptBaseMaterial_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  Map_MapScriptSceneObject_Fields *pMVar6;
  System_String_array *value;
  MethodInfo *method_00;
  Map_MapScriptSceneObject_o *__this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar10;
  Map_MapScriptSceneObject_o *pMVar11;
  Map_MapScriptSceneObject_o *pMVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar18;
  
  if (g_data_057aca6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca6d = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Map_MapScriptSceneObject_o *)0x0;
  pCVar10 = __this;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (prefabCSV != (System_String_o *)0x0) {
    value = System_String__Split(prefabCSV,10,0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Join("",value,(MethodInfo *)0x0);
    __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
    (__this->fields).Value = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
    pMVar12 = (__this->fields).Value;
    pCVar10 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
    if (pMVar12 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar12->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar12,method_00,(pMVar12->klass->vtable)._9_Deserialize.method);
      if ((char)clearComponents != '\0') {
        CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__this,method_00);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca71 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aca71 = '\x01';
  }
  pMVar12 = (pCVar10->fields).Value;
  if ((pMVar12 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar2 = (pMVar12->fields).Material, pMVar2 != (Map_MapScriptBaseMaterial_o *)0x0)) {
    piVar1 = (int *)((long)&(pMVar2->fields).Color + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pMVar2->fields).Color;
    *(undefined4 *)&(pMVar2->fields).Color = 0;
    pMVar11 = pMVar12;
    if (0 < length) {
      __this_00 = (Map_MapScriptSceneObject_o *)0x0;
      System_Array__Clear((System_Array_o *)(pMVar2->fields).Shader,0,length,(MethodInfo *)0x0);
      pMVar11 = (pCVar10->fields).Value;
      pMVar12 = (Map_MapScriptSceneObject_o *)0x0;
      if (pMVar11 == (Map_MapScriptSceneObject_o *)0x0) goto label_0412d13e;
    }
    __this_00 = (Map_MapScriptSceneObject_o *)(pMVar11->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar11->klass->vtable)._8_Serialize.methodPtr)();
    pMVar11 = (pCVar10->fields).Value;
    pMVar12 = (Map_MapScriptSceneObject_o *)0x0;
    if (pMVar11 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar11->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar11,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
label_0412d13e:
  uVar7 = il2cpp_runtime_helper_022b2c90();
  lVar13._0_4_ = (pMVar12->fields).Visible;
  lVar13._4_4_ = (pMVar12->fields).Networked;
  if (lVar13 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)&(pMVar12->fields).Visible;
  if (lVar13 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar13 + 0x10) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x10);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar13 + 0x1c0);
      uVar8 = (**(code **)(lVar13 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar8,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
    lVar14 = **(long **)(lVar13 + 0x30);
    __this_00 = *(Map_MapScriptSceneObject_o **)(lVar14 + 0x1c0);
    uVar8 = (**(code **)(lVar14 + 0x1b8))();
    plVar4 = *(long **)(lVar13 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      (**(code **)(lVar13 + 0x1c8))
                (plVar4,uVar8,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8),in_R9,uVar7);
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar14 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)(lVar14 + 0x30);
  if (lVar15 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar15 + 0x18) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x18);
    if (*(long **)(lVar14 + 0x30) != (long *)0x0) {
      lVar15 = **(long **)(lVar14 + 0x30);
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar15 + 0x1c0);
      uVar7 = (**(code **)(lVar15 + 0x1b8))();
      plVar4 = *(long **)(lVar14 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar15 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)__this_00;
    __this_00 = *(Map_MapScriptSceneObject_o **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar15 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar14 = *plVar4;
      (**(code **)(lVar14 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar14 + 0x1d0),lVar14,*(code **)(lVar14 + 0x1c8),in_R9,lVar13);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar13 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)__this_00;
    __this_00 = *(Map_MapScriptSceneObject_o **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar13 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      (**(code **)(lVar13 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8),in_R9,lVar14);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar13 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)__this_00;
    __this_00 = *(Map_MapScriptSceneObject_o **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar13 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      (**(code **)(lVar13 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8),in_R9,lVar15);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14 = *(long *)(lVar13 + 0x30);
  if (lVar14 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar14 + 0x30) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x30);
    if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
      lVar14 = **(long **)(lVar13 + 0x30);
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar14 + 0x1c0);
      uVar7 = (**(code **)(lVar14 + 0x1b8))();
      plVar4 = *(long **)(lVar13 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar16 = *(Map_MapScriptBaseObject_o **)(lVar13 + 0x30);
  if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar18 = Map_MapScriptBaseObject__GetPosition(pMVar16,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar18,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  if ((__this_00 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
     pMVar17 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pMVar6 = &__this_00->fields;
    __this_00 = (Map_MapScriptSceneObject_o *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar6->Visible,(MethodInfo *)0x0
              );
    plVar4 = *(long **)&(pMVar16->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar4 = *(long **)&(pMVar16->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
  if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar18 = Map_MapScriptBaseObject__GetRotation(pMVar16,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar18,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  if ((__this_00 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
     pMVar17 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pMVar6 = &__this_00->fields;
    __this_00 = (Map_MapScriptSceneObject_o *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar6->Visible,(MethodInfo *)0x0
              );
    plVar4 = *(long **)&(pMVar16->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar4 = *(long **)&(pMVar16->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar16 = *(Map_MapScriptBaseObject_o **)&(pMVar17->fields).Visible;
  if (pMVar16 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar18 = Map_MapScriptBaseObject__GetScale(pMVar16,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar18,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  if ((__this_00 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible,
     pMVar17 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pMVar6 = &__this_00->fields;
    __this_00 = (Map_MapScriptSceneObject_o *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar6->Visible,(MethodInfo *)0x0
              );
    plVar4 = *(long **)&(pMVar16->fields).Visible;
    pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar4 = *(long **)&(pMVar16->fields).Visible;
      pMVar17 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14._0_4_ = (pMVar17->fields).Visible;
  lVar14._4_4_ = (pMVar17->fields).Networked;
  if (lVar14 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)&(pMVar17->fields).Visible;
  if (lVar13 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar13 + 0x60) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x60);
    plVar4 = *(long **)&(pMVar17->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar13 = *plVar4;
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar4 = *(long **)&(pMVar17->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14 = *(long *)(lVar13 + 0x30);
  if (lVar14 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar14 + 0x68) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x68);
    if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
      lVar14 = **(long **)(lVar13 + 0x30);
      __this_00 = *(Map_MapScriptSceneObject_o **)(lVar14 + 0x1c0);
      uVar7 = (**(code **)(lVar14 + 0x1b8))();
      plVar4 = *(long **)(lVar13 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14 = *(long *)(lVar13 + 0x30);
  if (lVar14 != 0) {
    *(Map_MapScriptSceneObject_o **)(lVar14 + 0x70) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x70);
    plVar4 = *(long **)(lVar13 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar13 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar13 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_AssetType
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d150

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_AssetType
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  Map_MapScriptBaseObject_o *pMVar14;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar15;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar2->fields).Type;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar2->fields).Type = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&pMVar2->fields);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      method = (pMVar3->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        pSVar7 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
    lVar10 = **(long **)(lVar9 + 0x30);
    method = *(MethodInfo **)(lVar10 + 0x1c0);
    uVar6 = (**(code **)(lVar10 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar9 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
      return pSVar7;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar10 + 0x30) + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)(lVar10 + 0x30);
  if (lVar12 != 0) {
    *(MethodInfo **)(lVar12 + 0x18) = method;
    il2cpp_runtime_helper_022b4080(lVar12 + 0x18);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar12 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar6 = (**(code **)(lVar12 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)(lVar11 + 0x30);
  if (lVar12 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar12 >> 8),*(undefined1 *)(lVar12 + 0x28));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar11 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar11 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar10 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8),in_R9
                          ,lVar9);
      return pSVar7;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar12 + 0x30);
  if (lVar9 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar9 >> 8),*(undefined1 *)(lVar9 + 0x29));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar12 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar12 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar9 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8),in_R9,
                          lVar10);
      return pSVar7;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar9 >> 8),*(undefined1 *)(lVar9 + 0x2a));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar9 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8),in_R9,
                          lVar11);
      return pSVar7;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar9 + 0x30) + 0x30);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x30);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar10 = **(long **)(lVar9 + 0x30);
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)(lVar9 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar13 = *(Map_MapScriptBaseObject_o **)(lVar9 + 0x30);
  if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar15 = Map_MapScriptBaseObject__GetPosition(pMVar13,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar15,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar15 = Map_MapScriptBaseObject__GetRotation(pMVar13,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar15,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar13 = *(Map_MapScriptBaseObject_o **)&(pMVar14->fields).Visible;
  if (pMVar13 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar15 = Map_MapScriptBaseObject__GetScale(pMVar13,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar15,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible,
     pMVar14 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      pMVar14 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pMVar14->fields).Visible;
  if (lVar9 != 0) {
    return *(System_String_o **)(lVar9 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pMVar14->fields).Visible;
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x60);
    plVar4 = *(long **)&(pMVar14->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)&(pMVar14->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar9 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x68);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar10 = **(long **)(lVar9 + 0x30);
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)(lVar9 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar9 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x70);
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar9 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    pSVar7 = (System_String_o *)
             (*vtableDispatch)
                       (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_AssetType
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d170

void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  undefined8 extraout_RDX;
  long lVar8;
  long lVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar2->fields).Type = value;
    il2cpp_runtime_helper_022b4080(&pMVar2->fields);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      value = (System_String_o *)(pMVar3->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
    lVar9 = **(long **)(lVar8 + 0x30);
    value = *(System_String_o **)(lVar9 + 0x1c0);
    uVar6 = (**(code **)(lVar9 + 0x1b8))();
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    *(System_String_o **)(lVar10 + 0x18) = value;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x18);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar10 = **(long **)(lVar9 + 0x30);
      value = *(System_String_o **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)(lVar9 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      (**(code **)(lVar9 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8),in_R9,lVar8);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8),in_R9,lVar9);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8),in_R9,lVar10);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x30) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar8 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8._0_4_ = (pMVar12->fields).Visible;
  lVar8._4_4_ = (pMVar12->fields).Networked;
  if (lVar8 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8 = *(long *)&(pMVar12->fields).Visible;
  if (lVar8 != 0) {
    *(System_String_o **)(lVar8 + 0x60) = value;
    il2cpp_runtime_helper_022b4080(lVar8 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Asset
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d220

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Asset
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  long lVar9;
  long lVar10;
  long lVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar14;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar2->fields).Asset;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar2->fields).Asset = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).Asset);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      method = (pMVar3->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        pSVar7 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar7;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)(lVar9 + 0x30);
  if (lVar11 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar11 >> 8),*(undefined1 *)(lVar11 + 0x28));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar11 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
      return pSVar7;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)(lVar10 + 0x30);
  if (lVar11 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar11 >> 8),*(undefined1 *)(lVar11 + 0x29));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar11 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8),in_R9
                          ,__this);
      return pSVar7;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)(lVar10 + 0x30);
  if (lVar11 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar11 >> 8),*(undefined1 *)(lVar11 + 0x2a));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      pSVar7 = (System_String_o *)
               (**(code **)(lVar11 + 0x1c8))
                         (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8),in_R9
                          ,lVar9);
      return pSVar7;
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar11 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar11 + 0x30) + 0x30);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar11 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar11 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar11 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar11 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar12 = *(Map_MapScriptBaseObject_o **)(lVar11 + 0x30);
  if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar14 = Map_MapScriptBaseObject__GetPosition(pMVar12,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar14,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      method = *(MethodInfo **)(lVar11 + 0x1c0);
      uVar6 = (**(code **)(lVar11 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
  if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar14 = Map_MapScriptBaseObject__GetRotation(pMVar12,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar14,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      method = *(MethodInfo **)(lVar11 + 0x1c0);
      uVar6 = (**(code **)(lVar11 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar12 = *(Map_MapScriptBaseObject_o **)&(pMVar13->fields).Visible;
  if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar14 = Map_MapScriptBaseObject__GetScale(pMVar12,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar14,(MethodInfo *)0x0);
    return (System_String_o *)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible,
     pMVar13 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      method = *(MethodInfo **)(lVar11 + 0x1c0);
      uVar6 = (**(code **)(lVar11 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      pMVar13 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)&(pMVar13->fields).Visible;
  if (lVar11 != 0) {
    return *(System_String_o **)(lVar11 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)&(pMVar13->fields).Visible;
  if (lVar11 != 0) {
    *(MethodInfo **)(lVar11 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar11 + 0x60);
    plVar4 = *(long **)&(pMVar13->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar11 = *plVar4;
      method = *(MethodInfo **)(lVar11 + 0x1c0);
      uVar6 = (**(code **)(lVar11 + 0x1b8))();
      plVar4 = *(long **)&(pMVar13->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar11 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar11 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar11 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar11 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar11 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar11 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar11 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar11 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar11 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar11 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar11 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        pSVar7 = (System_String_o *)
                 (**(code **)(lVar11 + 0x1c8))
                           (plVar4,uVar6,*(undefined8 *)(lVar11 + 0x1d0),lVar11,*(code **)(lVar11 + 0x1c8));
        return pSVar7;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar11 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    pSVar7 = (System_String_o *)
             (*vtableDispatch)
                       (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Asset
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d240

void CustomLogic_CustomLogicPrefabBuiltin__set_Asset
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  undefined8 extraout_RDX;
  long lVar8;
  long lVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar12;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar2->fields).Asset = value;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).Asset);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      value = (System_String_o *)(pMVar3->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8),in_R9,__this);
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)value;
    value = *(System_String_o **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      (**(code **)(lVar9 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8),in_R9,lVar8);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x30) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)(lVar8 + 0x30);
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetPosition(pMVar10,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetRotation(pMVar10,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetScale(pMVar10,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8._0_4_ = (pMVar11->fields).Visible;
  lVar8._4_4_ = (pMVar11->fields).Networked;
  if (lVar8 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8 = *(long *)&(pMVar11->fields).Visible;
  if (lVar8 != 0) {
    *(System_String_o **)(lVar8 + 0x60) = value;
    il2cpp_runtime_helper_022b4080(lVar8 + 0x60);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      value = *(System_String_o **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d2a0

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Active
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  bool_conflict bVar6;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  long lVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pMVar2 >> 8),(char)(pMVar2->fields).Active);
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)&(pMVar2->fields).Active = (char)method;
    method = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      bVar6 = (*UNRECOVERED_JUMPTABLE_00)
                        (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return bVar6;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0x29));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      bVar6 = (**(code **)(lVar10 + 0x1c8))
                        (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
      return bVar6;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0x2a));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      bVar6 = (**(code **)(lVar10 + 0x1c8))
                        (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8),in_R9,
                         __this);
      return bVar6;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x30);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    return (bool_conflict)*(undefined8 *)(lVar10 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    bVar6 = (*vtableDispatch)
                      (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return (bool_conflict)"Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x412d2c0

void CustomLogic_CustomLogicPrefabBuiltin__set_Active
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  long lVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar13;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,value);
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)&(pMVar2->fields).Active = (char)value;
    pMVar9 = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)pMVar9;
    pMVar9 = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      (**(code **)(lVar10 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)pMVar9;
    pMVar9 = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      (**(code **)(lVar10 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8),in_R9,__this);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x30) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar5 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar5 + 0x1c0);
      uVar7 = (**(code **)(lVar5 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10._0_4_ = (pMVar12->fields).Visible;
  lVar10._4_4_ = (pMVar12->fields).Networked;
  if (lVar10 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x68) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar5 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar5 + 0x1c0);
      uVar7 = (**(code **)(lVar5 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x70) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x70);
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d310

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Static
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  bool_conflict bVar6;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  long lVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar2 >> 8),*(undefined1 *)((long)&(pMVar2->fields).Active + 1));
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar2->fields).Active + 1) = (char)method;
    method = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      bVar6 = (*UNRECOVERED_JUMPTABLE_00)
                        (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return bVar6;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0x2a));
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      bVar6 = (**(code **)(lVar10 + 0x1c8))
                        (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
      return bVar6;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x30);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    return (bool_conflict)*(undefined8 *)(lVar10 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        bVar6 = (**(code **)(lVar10 + 0x1c8))
                          (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar6;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    bVar6 = (*vtableDispatch)
                      (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return (bool_conflict)"Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Static
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x412d330

void CustomLogic_CustomLogicPrefabBuiltin__set_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  long lVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Vector3_o UVar13;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,value);
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar2->fields).Active + 1) = (char)value;
    pMVar9 = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)pMVar9;
    pMVar9 = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar7 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      (**(code **)(lVar10 + 0x1c8))
                (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x30) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar5 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar5 + 0x1c0);
      uVar7 = (**(code **)(lVar5 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10._0_4_ = (pMVar12->fields).Visible;
  lVar10._4_4_ = (pMVar12->fields).Networked;
  if (lVar10 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x68) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar5 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar5 + 0x1c0);
      uVar7 = (**(code **)(lVar5 + 0x1b8))();
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)(lVar10 + 0x30);
  if (lVar5 != 0) {
    *(MethodInfo **)(lVar5 + 0x70) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar5 + 0x70);
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar10 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar4,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Visible
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d380

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Visible
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar4;
  long *plVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  code *vtableDispatch;
  bool_conflict bVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  undefined8 extraout_RDX;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar2 >> 8),*(undefined1 *)((long)&(pMVar2->fields).Active + 2));
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar2->fields).Active + 2) = (char)method;
    method = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar8 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      bVar7 = (*UNRECOVERED_JUMPTABLE_00)
                        (pMVar2,uVar8,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return bVar7;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x30);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar8 = (**(code **)(lVar4 + 0x1b8))();
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar8 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar8 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (bool_conflict)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar8 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    return (bool_conflict)*(undefined8 *)(lVar10 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar5 = *(long **)&(pMVar12->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar8 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar12->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar8 = (**(code **)(lVar4 + 0x1b8))();
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return (bool_conflict)*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x70);
    plVar5 = *(long **)(lVar10 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        bVar7 = (**(code **)(lVar10 + 0x1c8))
                          (plVar5,uVar8,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return bVar7;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar10 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    bVar7 = (*vtableDispatch)
                      (plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return bVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return (bool_conflict)"Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Visible
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x412d3a0

void CustomLogic_CustomLogicPrefabBuiltin__set_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar4;
  long *plVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Vector3_o UVar13;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,value);
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar2->fields).Active + 2) = (char)value;
    pMVar9 = (pMVar2->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x30) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x30);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar7 = (**(code **)(lVar4 + 0x1b8))();
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &pMVar9->parameters;
    pMVar9 = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10._0_4_ = (pMVar12->fields).Visible;
  lVar10._4_4_ = (pMVar12->fields).Networked;
  if (lVar10 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar5 = *(long **)&(pMVar12->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      pMVar9 = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar12->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x68) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar10 + 0x30);
      pMVar9 = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar7 = (**(code **)(lVar4 + 0x1b8))();
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x70) = pMVar9;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x70);
    plVar5 = *(long **)(lVar10 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar10 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d3f0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Name
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Map_MapScriptBaseObject_o *pMVar4;
  long *plVar5;
  long lVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  undefined8 extraout_RDX;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    return *(System_String_o **)&(pMVar2->fields).Visible;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(MethodInfo **)&(pMVar2->fields).Visible = method;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).Visible);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      method = (pMVar3->vtable)._8_Serialize.method;
      uVar7 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        pSVar8 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar8;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar10 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (System_String_o *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (System_String_o *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
    return (System_String_o *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    return *(System_String_o **)(lVar10 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar12->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar5 = *(long **)&(pMVar12->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar7 = (**(code **)(lVar10 + 0x1b8))();
      plVar5 = *(long **)&(pMVar12->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(lVar10 + 0x30);
  if (lVar6 != 0) {
    *(MethodInfo **)(lVar6 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar6 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar6 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar6 + 0x1c0);
      uVar7 = (**(code **)(lVar6 + 0x1b8))();
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(lVar10 + 0x30);
  if (lVar6 != 0) {
    *(MethodInfo **)(lVar6 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar6 + 0x70);
    plVar5 = *(long **)(lVar10 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar10 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        pSVar8 = (System_String_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar5,uVar7,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pSVar8;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar10 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    pSVar8 = (System_String_o *)
             (*vtableDispatch)
                       (plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d410

void CustomLogic_CustomLogicPrefabBuiltin__set_Name
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Map_MapScriptBaseObject_o *pMVar4;
  long *plVar5;
  long lVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 extraout_RDX;
  long lVar9;
  Map_MapScriptBaseObject_o *pMVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  UnityEngine_Vector3_o UVar12;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    *(System_String_o **)&(pMVar2->fields).Visible = value;
    il2cpp_runtime_helper_022b4080(&(pMVar2->fields).Visible);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      value = (System_String_o *)(pMVar3->vtable)._8_Serialize.method;
      uVar7 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar3 = pMVar2->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar2,uVar7,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)(lVar9 + 0x30);
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetPosition(pMVar10,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar5 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetRotation(pMVar10,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar5 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar10 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible;
  if (pMVar10 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar12 = Map_MapScriptBaseObject__GetScale(pMVar10,(MethodInfo *)0x0);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,UVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar4 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible,
     pMVar11 = (Map_MapScriptBaseObject_o *)0x0, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &((MethodInfo *)value)->parameters;
    value = (System_String_o *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar10->fields).Visible;
    pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar5 = *(long **)&(pMVar10->fields).Visible;
      pMVar11 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pMVar11->fields).Visible;
  lVar9._4_4_ = (pMVar11->fields).Networked;
  if (lVar9 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pMVar11->fields).Visible;
  if (lVar9 != 0) {
    *(System_String_o **)(lVar9 + 0x60) = value;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x60);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      value = *(System_String_o **)(lVar9 + 0x1c0);
      uVar7 = (**(code **)(lVar9 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(lVar9 + 0x30);
  if (lVar6 != 0) {
    *(System_String_o **)(lVar6 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar6 + 0x68);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar6 = **(long **)(lVar9 + 0x30);
      value = *(System_String_o **)(lVar6 + 0x1c0);
      uVar7 = (**(code **)(lVar6 + 0x1b8))();
      plVar5 = *(long **)(lVar9 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(lVar9 + 0x30);
  if (lVar6 != 0) {
    *(System_String_o **)(lVar6 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar6 + 0x70);
    plVar5 = *(long **)(lVar9 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar9 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        (**(code **)(lVar9 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar9 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d470

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Position
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  long *plVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  long lVar4;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptSceneObject_o *pMVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  long lVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    UVar11 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar11,(MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = __this_00;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar8 = *(Map_MapScriptBaseObject_o **)&(__this_00->fields).Visible,
     pMVar7 = (Map_MapScriptSceneObject_o *)0x0, pMVar8 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar8,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this_00->fields).Visible;
    pMVar7 = (Map_MapScriptSceneObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(__this_00->fields).Visible;
      pMVar7 = (Map_MapScriptSceneObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar7->fields).Visible;
  if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar11 = Map_MapScriptBaseObject__GetRotation(pMVar8,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar11,(MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar3 = *(Map_MapScriptBaseObject_o **)&(pMVar8->fields).Visible,
     pMVar9 = (Map_MapScriptBaseObject_o *)0x0, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar8->fields).Visible;
    pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar8 = *(Map_MapScriptBaseObject_o **)&(pMVar9->fields).Visible;
  if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar11 = Map_MapScriptBaseObject__GetScale(pMVar8,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar11,(MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar3 = *(Map_MapScriptBaseObject_o **)&(pMVar8->fields).Visible,
     pMVar9 = (Map_MapScriptBaseObject_o *)0x0, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar8->fields).Visible;
    pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      pMVar9 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar9->fields).Visible;
  if (lVar10 != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar10 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar9->fields).Visible;
  if (lVar10 != 0) {
    *(MethodInfo **)(lVar10 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar2 = *(long **)&(pMVar9->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      method = *(MethodInfo **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(pMVar9->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar10 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)(lVar10 + 0x30);
      method = *(MethodInfo **)(lVar4 + 0x1c0);
      uVar6 = (**(code **)(lVar4 + 0x1b8))();
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar10 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar4 = *(long *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    *(MethodInfo **)(lVar4 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x70);
    plVar2 = *(long **)(lVar10 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar10 + 0x1c8))
                           (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return pCVar5;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar10 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x412d4f0

void CustomLogic_CustomLogicPrefabBuiltin__set_Position
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_c *pMVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar2;
  Map_MapScriptBaseObject_o *__this_00;
  long lVar3;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_Fields *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar8;
  Map_MapScriptSceneObject_o *pMVar9;
  Map_MapScriptSceneObject_o *pMVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  long lVar13;
  UnityEngine_Vector3_o UVar14;
  
  pCVar8 = __this;
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar9 = (__this->fields).Value, pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0,
     pMVar9 != (Map_MapScriptSceneObject_o *)0x0)) {
    pCVar4 = &value->fields;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pMVar9,(UnityEngine_Vector3_o)(pCVar4->Value).fields,
               (MethodInfo *)0x0);
    pMVar9 = (__this->fields).Value;
    pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
    if (pMVar9 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar1 = pMVar9->klass;
      value = (CustomLogic_CustomLogicVector3Builtin_o *)(pMVar1->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar1->vtable)._8_Serialize.methodPtr)();
      pMVar9 = (__this->fields).Value;
      pCVar8 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
      if (pMVar9 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar1 = pMVar9->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar1->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar9,uVar6,(pMVar1->vtable)._9_Deserialize.method,pMVar1,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar9 = (pCVar8->fields).Value;
  if (pMVar9 != (Map_MapScriptSceneObject_o *)0x0) {
    UVar14 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)pMVar9,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar9->fields).Visible,
     pMVar10 = (Map_MapScriptSceneObject_o *)0x0, pMVar11 != (Map_MapScriptBaseObject_o *)0x0)) {
    pUVar5 = (UnityEngine_Vector3_o *)&((MethodInfo *)value)->parameters;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetRotation(pMVar11,(UnityEngine_Vector3_o)pUVar5->fields,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar9->fields).Visible;
    pMVar10 = (Map_MapScriptSceneObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar13 = *plVar2;
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar13 + 0x1c0);
      uVar6 = (**(code **)(lVar13 + 0x1b8))();
      plVar2 = *(long **)&(pMVar9->fields).Visible;
      pMVar10 = (Map_MapScriptSceneObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar13 = *plVar2;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar10->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar14 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (__this_00 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, __this_00 != (Map_MapScriptBaseObject_o *)0x0)) {
    pUVar5 = (UnityEngine_Vector3_o *)&((MethodInfo *)value)->parameters;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetScale(__this_00,(UnityEngine_Vector3_o)pUVar5->fields,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar13 = *plVar2;
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar13 + 0x1c0);
      uVar6 = (**(code **)(lVar13 + 0x1b8))();
      plVar2 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar13 = *plVar2;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13._0_4_ = (pMVar12->fields).Visible;
  lVar13._4_4_ = (pMVar12->fields).Networked;
  if (lVar13 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)&(pMVar12->fields).Visible;
  if (lVar13 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar13 + 0x60) = value;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x60);
    plVar2 = *(long **)&(pMVar12->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar13 = *plVar2;
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar13 + 0x1c0);
      uVar6 = (**(code **)(lVar13 + 0x1b8))();
      plVar2 = *(long **)&(pMVar12->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar13 = *plVar2;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar13 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar13 + 0x30);
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x1c0);
      uVar6 = (**(code **)(lVar3 + 0x1b8))();
      plVar2 = *(long **)(lVar13 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar13 = *plVar2;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar13 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar2 = *(long **)(lVar13 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar13 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar13 = *plVar2;
        (**(code **)(lVar13 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8));
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar13 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d560

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Rotation
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  long *plVar2;
  Map_MapScriptBaseObject_o *__this_00;
  long lVar3;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  Map_MapScriptSceneObject_o *__this_01;
  Map_MapScriptSceneObject_o *pMVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  long lVar9;
  UnityEngine_Vector3_o UVar10;
  
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  __this_01 = (__this->fields).Value;
  if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
    UVar10 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)__this_01,(MethodInfo *)0x0);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar10,(MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = __this_01;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar7 = *(Map_MapScriptBaseObject_o **)&(__this_01->fields).Visible,
     pMVar6 = (Map_MapScriptSceneObject_o *)0x0, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar7,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this_01->fields).Visible;
    pMVar6 = (Map_MapScriptSceneObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar5 = (**(code **)(lVar9 + 0x1b8))();
      plVar2 = *(long **)&(__this_01->fields).Visible;
      pMVar6 = (Map_MapScriptSceneObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pCVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar7 = *(Map_MapScriptBaseObject_o **)&(pMVar6->fields).Visible;
  if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar10 = Map_MapScriptBaseObject__GetScale(pMVar7,(MethodInfo *)0x0);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar10,(MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if ((method != (MethodInfo *)0x0) &&
     (__this_00 = *(Map_MapScriptBaseObject_o **)&(pMVar7->fields).Visible,
     pMVar8 = (Map_MapScriptBaseObject_o *)0x0, __this_00 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar7->fields).Visible;
    pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar5 = (**(code **)(lVar9 + 0x1b8))();
      plVar2 = *(long **)&(pMVar7->fields).Visible;
      pMVar8 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pCVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pMVar8->fields).Visible;
  if (lVar9 != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar9 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pMVar8->fields).Visible;
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x60);
    plVar2 = *(long **)&(pMVar8->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar5 = (**(code **)(lVar9 + 0x1b8))();
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar9 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar9 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar9 + 0x30);
      method = *(MethodInfo **)(lVar3 + 0x1c0);
      uVar5 = (**(code **)(lVar3 + 0x1b8))();
      plVar2 = *(long **)(lVar9 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar9 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar9 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar2 = *(long **)(lVar9 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar9 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar9 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar9 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x412d5e0

void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_c *pMVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Map_MapScriptBaseObject_o *__this_00;
  long *plVar2;
  long lVar3;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_Fields *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar7;
  Map_MapScriptSceneObject_o *pMVar8;
  Map_MapScriptSceneObject_o *pMVar9;
  long lVar10;
  UnityEngine_Vector3_o value_00;
  
  pCVar7 = __this;
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar8 = (__this->fields).Value, pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0,
     pMVar8 != (Map_MapScriptSceneObject_o *)0x0)) {
    pCVar4 = &value->fields;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pMVar8,(UnityEngine_Vector3_o)(pCVar4->Value).fields,
               (MethodInfo *)0x0);
    pMVar8 = (__this->fields).Value;
    pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
    if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar1 = pMVar8->klass;
      value = (CustomLogic_CustomLogicVector3Builtin_o *)(pMVar1->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar1->vtable)._8_Serialize.methodPtr)();
      pMVar8 = (__this->fields).Value;
      pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
      if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar1 = pMVar8->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar1->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar8,uVar6,(pMVar1->vtable)._9_Deserialize.method,pMVar1,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar8 = (pCVar7->fields).Value;
  if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
    value_00 = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)pMVar8,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  if (((MethodInfo *)value != (MethodInfo *)0x0) &&
     (__this_00 = *(Map_MapScriptBaseObject_o **)&(pMVar8->fields).Visible,
     pMVar9 = (Map_MapScriptSceneObject_o *)0x0, __this_00 != (Map_MapScriptBaseObject_o *)0x0)) {
    pUVar5 = (UnityEngine_Vector3_o *)&((MethodInfo *)value)->parameters;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetScale(__this_00,(UnityEngine_Vector3_o)pUVar5->fields,(MethodInfo *)0x0);
    plVar2 = *(long **)&(pMVar8->fields).Visible;
    pMVar9 = (Map_MapScriptSceneObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(pMVar8->fields).Visible;
      pMVar9 = (Map_MapScriptSceneObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(pMVar9->fields).Visible != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)&(pMVar9->fields).Visible;
  if (lVar10 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar10 + 0x60) = value;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
    plVar2 = *(long **)&(pMVar9->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar10 + 0x1c0);
      uVar6 = (**(code **)(lVar10 + 0x1b8))();
      plVar2 = *(long **)&(pMVar9->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar10 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar10 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar10 + 0x30);
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x1c0);
      uVar6 = (**(code **)(lVar3 + 0x1b8))();
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar10 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar2 = *(long **)(lVar10 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar10 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar10 = *plVar2;
        (**(code **)(lVar10 + 0x1c8))
                  (plVar2,uVar6,*(undefined8 *)(lVar10 + 0x1d0),lVar10,*(code **)(lVar10 + 0x1c8));
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar10 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d650

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Scale
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptBaseObject_o *__this_00;
  long *plVar2;
  long lVar3;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  Map_MapScriptSceneObject_o *__this_01;
  Map_MapScriptSceneObject_o *pMVar6;
  long lVar7;
  UnityEngine_Vector3_o value;
  
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  __this_01 = (__this->fields).Value;
  if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
    value = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)__this_01,(MethodInfo *)0x0);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = __this_01;
  if ((method != (MethodInfo *)0x0) &&
     (__this_00 = *(Map_MapScriptBaseObject_o **)&(__this_01->fields).Visible,
     pMVar6 = (Map_MapScriptSceneObject_o *)0x0, __this_00 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this_01->fields).Visible;
    pMVar6 = (Map_MapScriptSceneObject_o *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      method = *(MethodInfo **)(lVar7 + 0x1c0);
      uVar5 = (**(code **)(lVar7 + 0x1b8))();
      plVar2 = *(long **)&(__this_01->fields).Visible;
      pMVar6 = (Map_MapScriptSceneObject_o *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pCVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar7 = *(long *)&(pMVar6->fields).Visible;
  if (lVar7 != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar7 + 0x60);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar7 = *(long *)&(pMVar6->fields).Visible;
  if (lVar7 != 0) {
    *(MethodInfo **)(lVar7 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar7 + 0x60);
    plVar2 = *(long **)&(pMVar6->fields).Visible;
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      method = *(MethodInfo **)(lVar7 + 0x1c0);
      uVar5 = (**(code **)(lVar7 + 0x1b8))();
      plVar2 = *(long **)&(pMVar6->fields).Visible;
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar7 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar7 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar7 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar7 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar7 + 0x30);
      method = *(MethodInfo **)(lVar3 + 0x1c0);
      uVar5 = (**(code **)(lVar3 + 0x1b8))();
      plVar2 = *(long **)(lVar7 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar7 + 0x30) != 0) {
    return *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(lVar7 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar7 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar2 = *(long **)(lVar7 + 0x30);
    if (plVar2 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = *(long **)(lVar7 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar2,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pCVar4;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)(lVar7 + 0x30);
  if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x1b8);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x412d6d0

void CustomLogic_CustomLogicPrefabBuiltin__set_Scale
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  CustomLogic_CustomLogicVector3Builtin_Fields *pCVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar7;
  long lVar8;
  
  pCVar7 = __this;
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0,
     pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    pCVar5 = &value->fields;
    value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(pCVar5->Value).fields,
               (MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      value = (CustomLogic_CustomLogicVector3Builtin_o *)(pMVar2->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__this->fields).Value;
      pCVar7 = (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_01 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_01)
                  (pMVar1,uVar6,(pMVar2->vtable)._9_Deserialize.method,pMVar2,UNRECOVERED_JUMPTABLE_01);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pCVar7->fields).Value != (Map_MapScriptSceneObject_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (pCVar7->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)&(pMVar1->fields).ScaleZ = value;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).ScaleZ);
    pMVar1 = (pCVar7->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      value = (CustomLogic_CustomLogicVector3Builtin_o *)(pMVar2->vtable)._8_Serialize.method;
      uVar6 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (pCVar7->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_01 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_01)
                  (pMVar1,uVar6,(pMVar2->vtable)._9_Deserialize.method,pMVar2,UNRECOVERED_JUMPTABLE_01);
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar8 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar8 + 0x30);
      value = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x1c0);
      uVar6 = (**(code **)(lVar3 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar8 + 0x30);
  if (lVar3 != 0) {
    *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar3 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideMode
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d740

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  System_String_o *pSVar6;
  undefined8 extraout_RDX;
  long lVar7;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return *(System_String_o **)&(pMVar1->fields).ScaleZ;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(MethodInfo **)&(pMVar1->fields).ScaleZ = method;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).ScaleZ);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      method = (pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pSVar6 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar6;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar7 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar7 + 0x30) + 0x68);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar7 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar7 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar7 + 0x30);
      method = *(MethodInfo **)(lVar3 + 0x1c0);
      uVar5 = (**(code **)(lVar3 + 0x1b8))();
      plVar4 = *(long **)(lVar7 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        pSVar6 = (System_String_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar4,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pSVar6;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar7 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar7 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar7 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar4 = *(long **)(lVar7 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar7 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        pSVar6 = (System_String_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar4,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pSVar6;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar7 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    pSVar6 = (System_String_o *)
             (*vtableDispatch)
                       (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideMode
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d760

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long lVar6;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(System_String_o **)&(pMVar1->fields).ScaleZ = value;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).ScaleZ);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      value = (System_String_o *)(pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar6 + 0x30);
  if (lVar3 != 0) {
    *(System_String_o **)(lVar3 + 0x68) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    if (*(long **)(lVar6 + 0x30) != (long *)0x0) {
      lVar3 = **(long **)(lVar6 + 0x30);
      value = *(System_String_o **)(lVar3 + 0x1c0);
      uVar5 = (**(code **)(lVar3 + 0x1b8))();
      plVar4 = *(long **)(lVar6 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        (**(code **)(lVar6 + 0x1c8))
                  (plVar4,uVar5,*(undefined8 *)(lVar6 + 0x1d0),lVar6,*(code **)(lVar6 + 0x1c8));
        return;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar6 + 0x30);
  if (lVar3 != 0) {
    *(System_String_o **)(lVar3 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar4 = *(long **)(lVar6 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar6 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        (**(code **)(lVar6 + 0x1c8))
                  (plVar4,uVar5,*(undefined8 *)(lVar6 + 0x1d0),lVar6,*(code **)(lVar6 + 0x1c8));
        return;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar6 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideWith
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d7c0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  System_String_o *pSVar6;
  undefined8 extraout_RDX;
  long lVar7;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideMode;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideMode = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideMode);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      method = (pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pSVar6 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar6;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar7 + 0x30) != 0) {
    return *(System_String_o **)(*(long *)(lVar7 + 0x30) + 0x70);
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar7 + 0x30);
  if (lVar3 != 0) {
    *(MethodInfo **)(lVar3 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar4 = *(long **)(lVar7 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar7 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        pSVar6 = (System_String_o *)
                 (**(code **)(lVar7 + 0x1c8))
                           (plVar4,uVar5,*(undefined8 *)(lVar7 + 0x1d0),lVar7,*(code **)(lVar7 + 0x1c8));
        return pSVar6;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar7 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    pSVar6 = (System_String_o *)
             (*vtableDispatch)
                       (plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideWith
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d7e0

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long lVar6;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideMode = value;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideMode);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      value = (System_String_o *)(pMVar2->vtable)._8_Serialize.method;
      uVar5 = (*(pMVar2->vtable)._8_Serialize.methodPtr)();
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar1,uVar5,(pMVar2->vtable)._9_Deserialize.method,pMVar2,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar3 = *(long *)(lVar6 + 0x30);
  if (lVar3 != 0) {
    *(System_String_o **)(lVar3 + 0x70) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70);
    plVar4 = *(long **)(lVar6 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar6 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        (**(code **)(lVar6 + 0x1c8))
                  (plVar4,uVar5,*(undefined8 *)(lVar6 + 0x1d0),lVar6,*(code **)(lVar6 + 0x1c8));
        return;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar6 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_PhysicsMaterial
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d840

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  System_String_o *pSVar5;
  undefined8 extraout_RDX;
  long lVar6;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideWith;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideWith = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideWith);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        pSVar5 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar5;
      }
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)(lVar6 + 0x30);
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x1b8);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_PhysicsMaterial
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x412d860

void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  long lVar5;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideWith = value;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields).CollideWith);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        UNRECOVERED_JUMPTABLE_00 = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)(lVar5 + 0x30);
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x1b8);
    (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$ClearComponents
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d0b0

void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  int *piVar1;
  Il2CppType ***pppIVar2;
  int32_t length;
  Map_MapScriptBaseMaterial_o *pMVar3;
  Map_MapScriptSceneObject_c *pMVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  undefined8 extraout_RDX;
  Map_MapScriptSceneObject_o *pMVar10;
  Map_MapScriptSceneObject_o *pMVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  Map_MapScriptBaseObject_o *pMVar15;
  Map_MapScriptBaseObject_o *pMVar16;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar17;
  
  if (g_data_057aca71 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aca71 = '\x01';
  }
  pMVar11 = (__this->fields).Value;
  if ((pMVar11 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar3 = (pMVar11->fields).Material, pMVar3 != (Map_MapScriptBaseMaterial_o *)0x0)) {
    piVar1 = (int *)((long)&(pMVar3->fields).Color + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pMVar3->fields).Color;
    *(undefined4 *)&(pMVar3->fields).Color = 0;
    pMVar10 = pMVar11;
    if (0 < length) {
      method = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pMVar3->fields).Shader,0,length,(MethodInfo *)0x0);
      pMVar10 = (__this->fields).Value;
      pMVar11 = (Map_MapScriptSceneObject_o *)0x0;
      if (pMVar10 == (Map_MapScriptSceneObject_o *)0x0) goto label_0412d13e;
    }
    method = (pMVar10->klass->vtable)._8_Serialize.method;
    uVar7 = (*(pMVar10->klass->vtable)._8_Serialize.methodPtr)();
    pMVar10 = (__this->fields).Value;
    pMVar11 = (Map_MapScriptSceneObject_o *)0x0;
    if (pMVar10 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar4 = pMVar10->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar4->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar10,uVar7,(pMVar4->vtable)._9_Deserialize.method,pMVar4,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
label_0412d13e:
  uVar7 = il2cpp_runtime_helper_022b2c90();
  lVar12._0_4_ = (pMVar11->fields).Visible;
  lVar12._4_4_ = (pMVar11->fields).Networked;
  if (lVar12 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)&(pMVar11->fields).Visible;
  if (lVar12 != 0) {
    *(MethodInfo **)(lVar12 + 0x10) = method;
    il2cpp_runtime_helper_022b4080(lVar12 + 0x10);
    plVar5 = *(long **)&(pMVar11->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar8 = (**(code **)(lVar12 + 0x1b8))();
      plVar5 = *(long **)&(pMVar11->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar8,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar12 + 0x30) != (long *)0x0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    method = *(MethodInfo **)(lVar13 + 0x1c0);
    uVar8 = (**(code **)(lVar13 + 0x1b8))();
    plVar5 = *(long **)(lVar12 + 0x30);
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      (**(code **)(lVar12 + 0x1c8))
                (plVar5,uVar8,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8),in_R9,uVar7);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14 = *(long *)(lVar13 + 0x30);
  if (lVar14 != 0) {
    *(MethodInfo **)(lVar14 + 0x18) = method;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x18);
    if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
      lVar14 = **(long **)(lVar13 + 0x30);
      method = *(MethodInfo **)(lVar14 + 0x1c0);
      uVar7 = (**(code **)(lVar14 + 0x1b8))();
      plVar5 = *(long **)(lVar13 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar14 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar14 + 0x30);
  if (plVar5 != (long *)0x0) {
    *(char *)(plVar5 + 5) = (char)method;
    method = *(MethodInfo **)(*plVar5 + 0x1c0);
    uVar7 = (**(code **)(*plVar5 + 0x1b8))();
    plVar5 = *(long **)(lVar14 + 0x30);
    if (plVar5 != (long *)0x0) {
      lVar13 = *plVar5;
      (**(code **)(lVar13 + 0x1c8))
                (plVar5,uVar7,*(undefined8 *)(lVar13 + 0x1d0),lVar13,*(code **)(lVar13 + 0x1c8),in_R9,lVar12);
      return;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar12 + 0x30);
  if (plVar5 != (long *)0x0) {
    *(char *)((long)plVar5 + 0x29) = (char)method;
    method = *(MethodInfo **)(*plVar5 + 0x1c0);
    uVar7 = (**(code **)(*plVar5 + 0x1b8))();
    plVar5 = *(long **)(lVar12 + 0x30);
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      (**(code **)(lVar12 + 0x1c8))
                (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8),in_R9,lVar13);
      return;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar12 + 0x30);
  if (plVar5 != (long *)0x0) {
    *(char *)((long)plVar5 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar5 + 0x1c0);
    uVar7 = (**(code **)(*plVar5 + 0x1b8))();
    plVar5 = *(long **)(lVar12 + 0x30);
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      (**(code **)(lVar12 + 0x1c8))
                (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8),in_R9,lVar14);
      return;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)(lVar12 + 0x30);
  if (lVar13 != 0) {
    *(MethodInfo **)(lVar13 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x30);
    if (*(long **)(lVar12 + 0x30) != (long *)0x0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      method = *(MethodInfo **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar5 = *(long **)(lVar12 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar15 = *(Map_MapScriptBaseObject_o **)(lVar12 + 0x30);
  if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar17 = Map_MapScriptBaseObject__GetPosition(pMVar15,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar2 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar2,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar15->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar7 = (**(code **)(lVar12 + 0x1b8))();
      plVar5 = *(long **)&(pMVar15->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
  if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar17 = Map_MapScriptBaseObject__GetRotation(pMVar15,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar2 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar2,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar15->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar7 = (**(code **)(lVar12 + 0x1b8))();
      plVar5 = *(long **)&(pMVar15->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar15 = *(Map_MapScriptBaseObject_o **)&(pMVar16->fields).Visible;
  if (pMVar15 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar17 = Map_MapScriptBaseObject__GetScale(pMVar15,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar6 = *(Map_MapScriptBaseObject_o **)&(pMVar15->fields).Visible,
     pMVar16 = (Map_MapScriptBaseObject_o *)0x0, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar2 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar6,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar2,(MethodInfo *)0x0);
    plVar5 = *(long **)&(pMVar15->fields).Visible;
    pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar7 = (**(code **)(lVar12 + 0x1b8))();
      plVar5 = *(long **)&(pMVar15->fields).Visible;
      pMVar16 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13._0_4_ = (pMVar16->fields).Visible;
  lVar13._4_4_ = (pMVar16->fields).Networked;
  if (lVar13 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)&(pMVar16->fields).Visible;
  if (lVar12 != 0) {
    *(MethodInfo **)(lVar12 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar12 + 0x60);
    plVar5 = *(long **)&(pMVar16->fields).Visible;
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      method = *(MethodInfo **)(lVar12 + 0x1c0);
      uVar7 = (**(code **)(lVar12 + 0x1b8))();
      plVar5 = *(long **)&(pMVar16->fields).Visible;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)(lVar12 + 0x30);
  if (lVar13 != 0) {
    *(MethodInfo **)(lVar13 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x68);
    if (*(long **)(lVar12 + 0x30) != (long *)0x0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      method = *(MethodInfo **)(lVar13 + 0x1c0);
      uVar7 = (**(code **)(lVar13 + 0x1b8))();
      plVar5 = *(long **)(lVar12 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)(lVar12 + 0x30);
  if (lVar13 != 0) {
    *(MethodInfo **)(lVar13 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x70);
    plVar5 = *(long **)(lVar12 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      plVar5 = *(long **)(lVar12 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x1c8))
                  (plVar5,uVar7,*(undefined8 *)(lVar12 + 0x1d0),lVar12,*(code **)(lVar12 + 0x1c8));
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)(lVar12 + 0x30);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1b8);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$Refresh
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__Refresh (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d1d0

void CustomLogic_CustomLogicPrefabBuiltin__Refresh
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  undefined8 extraout_RDX;
  long lVar8;
  long lVar9;
  long lVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  Map_MapScriptBaseObject_o *pMVar12;
  undefined8 in_R9;
  UnityEngine_Vector3_o UVar13;
  
  pMVar2 = (__this->fields).Value;
  if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
    pMVar3 = pMVar2->klass;
    method = (pMVar3->vtable)._8_Serialize.method;
    uVar6 = (*(pMVar3->vtable)._8_Serialize.methodPtr)();
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar2,uVar6,(pMVar3->vtable)._9_Deserialize.method,pMVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x18) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x18);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar9 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)(plVar4 + 5) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar9 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8),in_R9,__this);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar10 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x29) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar10 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      (**(code **)(lVar9 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar9 + 0x1d0),lVar9,*(code **)(lVar9 + 0x1c8),in_R9,lVar8);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    *(char *)((long)plVar4 + 0x2a) = (char)method;
    method = *(MethodInfo **)(*plVar4 + 0x1c0);
    uVar6 = (**(code **)(*plVar4 + 0x1b8))();
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      (**(code **)(lVar8 + 0x1c8))
                (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8),in_R9,lVar9);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x30) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x30);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6e = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)(lVar8 + 0x30);
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetPosition(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetPosition
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      method = *(MethodInfo **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca6f = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetRotation(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetRotation
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      method = *(MethodInfo **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca70 = '\x01';
  }
  pMVar11 = *(Map_MapScriptBaseObject_o **)&(pMVar12->fields).Visible;
  if (pMVar11 != (Map_MapScriptBaseObject_o *)0x0) {
    UVar13 = Map_MapScriptBaseObject__GetScale(pMVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if ((method != (MethodInfo *)0x0) &&
     (pMVar5 = *(Map_MapScriptBaseObject_o **)&(pMVar11->fields).Visible,
     pMVar12 = (Map_MapScriptBaseObject_o *)0x0, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    pppIVar1 = &method->parameters;
    method = (MethodInfo *)0x0;
    Map_MapScriptBaseObject__SetScale
              (pMVar5,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)pppIVar1,(MethodInfo *)0x0);
    plVar4 = *(long **)&(pMVar11->fields).Visible;
    pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      method = *(MethodInfo **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar11->fields).Visible;
      pMVar12 = (Map_MapScriptBaseObject_o *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8._0_4_ = (pMVar12->fields).Visible;
  lVar8._4_4_ = (pMVar12->fields).Networked;
  if (lVar8 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8 = *(long *)&(pMVar12->fields).Visible;
  if (lVar8 != 0) {
    *(MethodInfo **)(lVar8 + 0x60) = method;
    il2cpp_runtime_helper_022b4080(lVar8 + 0x60);
    plVar4 = *(long **)&(pMVar12->fields).Visible;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      method = *(MethodInfo **)(lVar8 + 0x1c0);
      uVar6 = (**(code **)(lVar8 + 0x1b8))();
      plVar4 = *(long **)&(pMVar12->fields).Visible;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x68) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x68);
    if (*(long **)(lVar8 + 0x30) != (long *)0x0) {
      lVar9 = **(long **)(lVar8 + 0x30);
      method = *(MethodInfo **)(lVar9 + 0x1c0);
      uVar6 = (**(code **)(lVar9 + 0x1b8))();
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x30) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    *(MethodInfo **)(lVar9 + 0x70) = method;
    il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        (**(code **)(lVar8 + 0x1c8))
                  (plVar4,uVar6,*(undefined8 *)(lVar8 + 0x1d0),lVar8,*(code **)(lVar8 + 0x1c8));
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)(lVar8 + 0x30);
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x1b8);
    (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1c0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin____Str__ (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d8c0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin____Str__
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    vtableDispatch = (pMVar1->klass->vtable)._8_Serialize.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method,in_RDX,vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_ClassName (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d8f0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_ClassName
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057aca72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefab");
    g_data_057aca72 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d920

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d930

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x412d940

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



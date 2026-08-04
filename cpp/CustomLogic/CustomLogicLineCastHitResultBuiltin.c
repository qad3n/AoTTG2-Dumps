// Type: CustomLogic.CustomLogicLineCastHitResultBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineCastHitResultBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineCastHitResultBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicLineCastHitResultBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40bf720

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  undefined8 *puVar9;
  System_Func_T__object__o *pSVar10;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLineCastHitResultBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLineCastHitResultBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac552 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Collider");
    il2cpp_runtime_helper_023445d0(&"ColliderInfo");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Distance");
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    il2cpp_runtime_helper_023445d0(&"IsMapObject");
    il2cpp_runtime_helper_023445d0(&"Point");
    g_data_057ac552 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x624ce79f) {
    if (uVar3 < 0x32b1316e) {
      if (uVar3 == 0x2cfc1e5d) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Collider",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar8;
          if (g_data_057ac558 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
            g_data_057ac558 = '\x01';
          }
          pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          System_Func_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x32b1316d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ColliderInfo",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ac559 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColliderInfo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          g_data_057ac559 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x549f4d10) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"__Copy__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac55a == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac55a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x58de2772) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Normal",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ac557 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          g_data_057ac557 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x624ce79e) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsMapObject",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ac554 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMapObject_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac554 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0x91efe6d8) {
    if (uVar3 == 0x91efe6d7) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac55b == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac55b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac55c == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac55c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xd3d96082) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Distance",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ac555 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distance_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac555 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xeaa8ef31) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Point",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ac556 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Point_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac556 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xf5ca12e0) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsCharacter",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    puVar9 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppSVar13 = (System_ArgumentException_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    else {
      ppSVar13 = (System_ArgumentException_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    goto CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineCastHitResultBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter:
  *(System_String_o **)((long)ppSVar13 + -8) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppSVar13 + -0x18) = puVar9;
  if (g_data_057ac553 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfc89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsCharacter_g____getter);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfc95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfcad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac553 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfcc3;
  pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfcdc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfceb;
  pCVar11 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40bfd05;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40c0860

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40c08d0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c08e0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *extraout_RAX;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_28;
  undefined8 uStack_10;
  
  if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pIVar5 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__c,(MethodInfo *)__c);
    return pIVar5;
  }
  uStack_10 = 0x40c08f4;
  auVar7 = il2cpp_runtime_helper_022b2c90();
  lVar6 = auVar7._8_8_;
  uStack_10 = auVar7._0_8_;
  if (lVar6 != 0) {
    if ((*(int *)(lVar6 + 0x18) == 0) || (*(int *)(lVar6 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
      bVar2 = CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
                        ((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this,
                         *(Il2CppObject **)(lVar6 + 0x20),*(Il2CppObject **)(lVar6 + 0x28),method);
      uStack_10 = CONCAT17((char)bVar2,(undefined7)uStack_10);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
      return pIVar5;
    }
  }
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._Point_k__BackingField,
     __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar3 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__c->fields)._Normal_k__BackingField;
    __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar4 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
      uStack_28 = CONCAT44(uVar4 ^ uVar3,(undefined4)uStack_28);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac55f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_Object);
  *(System_Collections_Generic_List_object__o **)
   &(((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this)->fields)._IsMapObject_k__BackingField =
       __this_00;
  il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this)->fields).
                      _IsMapObject_k__BackingField);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c0900

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  Il2CppObject *pIVar6;
  CustomLogic_BuiltinClassInstance_c *__this_00;
  Il2CppObject *extraout_RAX;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
                        ((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this,__a->m_Items[0],
                         __a->m_Items[1],method);
      uStack_8 = CONCAT17((char)bVar3,(undefined7)uStack_8);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
      return pIVar6;
    }
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) &&
     (pCVar2 = (__c->fields)._Point_k__BackingField,
     __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0,
     pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar4 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar2,(MethodInfo *)0x0);
    pCVar2 = (__c->fields)._Normal_k__BackingField;
    __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0;
    if (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar5 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar2,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(uVar5 ^ uVar4,(undefined4)uStack_20);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
      return pIVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac55f = '\x01';
  }
  __this_00 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Object);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_00;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30));
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c0950

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  Il2CppObject *pIVar2;
  CustomLogic_BuiltinClassInstance_c *__this_00;
  Il2CppObject *extraout_RAX;
  undefined1 auStack_14 [4];
  
  if ((__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._Point_k__BackingField,
     __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__c->fields)._Normal_k__BackingField;
    __this = (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)0x0;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
      return pIVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac55f = '\x01';
  }
  __this_00 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Object);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_00;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30));
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40bf7b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ac552 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Collider");
    il2cpp_runtime_helper_023445d0(&"ColliderInfo");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Distance");
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    il2cpp_runtime_helper_023445d0(&"IsMapObject");
    il2cpp_runtime_helper_023445d0(&"Point");
    g_data_057ac552 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x624ce79f) {
    if (uVar3 < 0x32b1316e) {
      if (uVar3 == 0x2cfc1e5d) {
        bVar4 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac558 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
            g_data_057ac558 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x32b1316d) &&
              (bVar4 = System_String__op_Equality(name,"ColliderInfo",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac559 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColliderInfo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          g_data_057ac559 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x549f4d10) {
      bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac55a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac55a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x58de2772) {
      bVar4 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac557 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
          g_data_057ac557 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x624ce79e) &&
            (bVar4 = System_String__op_Equality(name,"IsMapObject",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac554 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMapObject_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac554 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x91efe6d8) {
    if (uVar3 == 0x91efe6d7) {
      bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac55b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac55b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac55c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac55c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xd3d96082) {
    bVar4 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac555 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distance_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac555 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xeaa8ef31) {
    bVar4 = System_String__op_Equality(name,"Point",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac556 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Point_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
        g_data_057ac556 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf5ca12e0) &&
          (bVar4 = System_String__op_Equality(name,"IsCharacter",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineCastHitResultBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ac553 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfc89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsCharacter_g____getter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfc95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfcad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac553 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfcc3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfcdc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfceb;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bfd05;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter (const MethodInfo* method);
// 0x40bfc70

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac553 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsCharacter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac553 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject (const MethodInfo* method);
// 0x40bfd10

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac554 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMapObject_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac554 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Distance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance (const MethodInfo* method);
// 0x40bfdb0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac555 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distance_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac555 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Point
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point (const MethodInfo* method);
// 0x40bfe50

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac556 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Point_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac556 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x40bfef0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac557 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac557 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x40bff90

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac558 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac558 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__ColliderInfo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo (const MethodInfo* method);
// 0x40c0030

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColliderInfo_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
    g_data_057ac559 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResultBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x40c00d0

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x40c0220

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac55b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x40c0370

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (g_data_057ac55c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40c04c0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *__this;
  bool_conflict bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined1 *puVar2;
  Il2CppObject *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  Il2CppObject *pIStack_28;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ac55d == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c04dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c04e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c04f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0501;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c050d;
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0519;
    il2cpp_runtime_helper_023445d0(&"Normal");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0525;
    il2cpp_runtime_helper_023445d0(&"Collider");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0531;
    il2cpp_runtime_helper_023445d0(&"ColliderInfo");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c053d;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0549;
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0555;
    il2cpp_runtime_helper_023445d0(&"Distance");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0561;
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c056d;
    il2cpp_runtime_helper_023445d0(&"IsMapObject");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0579;
    il2cpp_runtime_helper_023445d0(&"Point");
    g_data_057ac55d = '\x01';
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c058f;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c05a4;
  pSVar3 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c05c9;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsCharacter",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c05de;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsMapObject",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c05f3;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Distance",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0608;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Point",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c061d;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Normal",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0632;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Collider",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0647;
    System_Collections_Generic_HashSet_object___Add(__this_00,"ColliderInfo",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c065c;
    System_Collections_Generic_HashSet_object___Add(__this_00,"__Copy__",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0671;
    System_Collections_Generic_HashSet_object___Add(__this_00,"__Eq__",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c0686;
    System_Collections_Generic_HashSet_object___Add(__this_00,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c06b8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = __this_00;
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ac54c == '\0') {
      uStack_38 = 0x40c06e6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      uStack_38 = 0x40c06f2;
      il2cpp_runtime_helper_023445d0(&"IsCharacter");
      g_data_057ac54c = '\x01';
    }
    pIStack_28 = (Il2CppObject *)0x0;
    __this = (pSVar3->fields)._slots;
    if (__this != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
      uStack_38 = 0x40c0729;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this,"IsCharacter",
                         &pIStack_28,MethodInfo_Boolean_TryGetValue);
      if ((((char)bVar1 == '\0') || (pIStack_28 == (Il2CppObject *)0x0)) ||
         (pIStack_28->klass != g_data_057b9b98)) {
        uStack_29 = 0;
      }
      else {
        uStack_38 = 0x40c076d;
        puVar2 = (undefined1 *)il2cpp_runtime_helper_02305440();
        uStack_29 = *puVar2;
      }
      uStack_38 = 0x40c0762;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
      return;
    }
  }
  lVar4 = 0;
  uStack_38 = 0x40c0776;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    uStack_38 = CONCAT17(*(undefined1 *)(lVar4 + 0x2d),(undefined7)uStack_38);
    uStack_40 = 0x40c07a2;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return;
  }
  uStack_40 = 0x40c07a9;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    uStack_40 = CONCAT44(*(undefined4 *)(lVar4 + 0x30),(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsCharacter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c06c0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 local_11;
  Il2CppObject *local_10;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    if (g_data_057ac54c == '\0') {
      uStack_20 = 0x40c06e6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      uStack_20 = 0x40c06f2;
      il2cpp_runtime_helper_023445d0(&"IsCharacter");
      g_data_057ac54c = '\x01';
    }
    local_10 = (Il2CppObject *)0x0;
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      uStack_20 = 0x40c0729;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,"IsCharacter",&local_10,MethodInfo_Boolean_TryGetValue);
      if ((((char)bVar1 == '\0') || (local_10 == (Il2CppObject *)0x0)) || (local_10->klass != g_data_057b9b98)) {
        local_11 = 0;
      }
      else {
        uStack_20 = 0x40c076d;
        puVar3 = (undefined1 *)il2cpp_runtime_helper_02305440();
        local_11 = *puVar3;
      }
      uStack_20 = 0x40c0762;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_11);
      return pIVar2;
    }
  }
  lVar4 = 0;
  uStack_20 = 0x40c0776;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    uStack_20 = CONCAT17(*(undefined1 *)(lVar4 + 0x2d),(undefined7)uStack_20);
    uStack_28 = 0x40c07a2;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return pIVar2;
  }
  uStack_28 = 0x40c07a9;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    uStack_28 = CONCAT44(*(undefined4 *)(lVar4 + 0x30),(undefined4)uStack_28);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return *(Il2CppObject **)(lVar4 + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return *(Il2CppObject **)(lVar4 + 0x40);
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return *(Il2CppObject **)(lVar4 + 0x48);
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar4 != 0) {
    return *(Il2CppObject **)(lVar4 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsMapObject>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c0780

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_10;
  undefined7 uStack_8;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    _uStack_8 = CONCAT17(*(undefined1 *)
                          ((long)&(__i->fields)._LookupBaseClassForVariables_k__BackingField + 1),(int7)in_RAX
                        );
    uStack_10 = 0x40c07a2;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar1;
  }
  uStack_10 = 0x40c07a9;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    uStack_10 = CONCAT44((__i->fields)._IsMapObject_k__BackingField,(undefined4)uStack_10);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_10 + 4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Point_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Distance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c07b0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Point_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Point>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c07e0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Point_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Normal>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c0800

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c0820

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__ColliderInfo>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x40c0840

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac55e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac55e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsCharacter
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf0c0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  char *pcVar2;
  Il2CppObject *value;
  undefined8 uVar3;
  undefined1 uVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppClass *pIVar5;
  undefined8 uStack_30;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCStack_28;
  Il2CppObject *local_10;
  
  uVar4 = SUB81(method,0);
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  local_10 = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_01,"IsCharacter",&local_10,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar1 != '\0') && (local_10 != (Il2CppObject *)0x0)) && (local_10->klass == g_data_057b9b98)) {
      pcVar2 = (char *)il2cpp_runtime_helper_02305440();
      return (bool_conflict)CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '\0');
    }
    return 0;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __this;
  if (g_data_057ac54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54d = '\x01';
  }
  __this_00 = (__this_01->fields)._entries;
  uStack_30 = CONCAT17(uVar4,(undefined7)uStack_30);
  pIVar5 = g_data_057b9b98;
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
  if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",value,
               MethodInfo_Void_set_Item);
    return extraout_EAX;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),(pIVar5->_1).byval_arg.field_0xd);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsCharacter
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40bf160

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *value_00;
  MethodInfo *extraout_RDX;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ac54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54d = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  uStack_18 = CONCAT17((char)value,(undefined7)uStack_18);
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7,method);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,"IsCharacter",value_00,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsMapObject
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf1e0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1));
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsMapObject
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40bf1f0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Distance
// il2cpp: float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf200

float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance
                (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (float)(__this->fields)._IsMapObject_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Distance
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40bf210

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._IsMapObject_k__BackingField = (bool_conflict)value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Point
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf220

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Point_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Point
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x40bf230

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Point_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Point_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Normal
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf240

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Normal_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Normal
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x40bf250

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Normal_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Normal_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Collider
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf260

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Collider_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Collider
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* value, const MethodInfo* method);
// 0x40bf270

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *value,MethodInfo *method)

{
  (__this->fields)._Collider_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Collider_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ColliderInfo
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf280

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._ColliderInfo_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_ColliderInfo
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* value, const MethodInfo* method);
// 0x40bf290

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicColliderBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._ColliderInfo_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ColliderInfo_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf2a0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  bool_conflict bVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  Il2CppObject *value;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *local_30;
  
  if (g_data_057ac54e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac54e = '\x01';
  }
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLineCastHitResultBuiltin);
  if (g_data_057ac551 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac551 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  local_30 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar3,"IsCharacter",&local_30,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar5 != '\0') && (local_30 != (Il2CppObject *)0x0)) && (local_30->klass == g_data_057b9b98)) {
      il2cpp_runtime_helper_02305440();
    }
    if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      if (g_data_057ac54d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        il2cpp_runtime_helper_023445d0(&"IsCharacter");
        g_data_057ac54d = '\x01';
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
      value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,"IsCharacter",value,MethodInfo_Void_set_Item);
        *(undefined1 *)((long)&(__this_00->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
             *(undefined1 *)((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1);
        pCVar4 = (__this->fields)._Point_k__BackingField;
        if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          __this_01 = (CustomLogic_BuiltinClassInstance_o *)
                      CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar4,(MethodInfo *)0x0);
          if (__this_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if (((((Il2CppClass *)__this_01->klass)->_2).naturalAligment < bVar1) ||
               ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040bf51b;
          }
          __this_00[1].monitor = __this_01;
          il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
          pCVar4 = (__this->fields)._Normal_k__BackingField;
          if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
            __this_01 = (CustomLogic_BuiltinClassInstance_o *)
                        CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar4,(MethodInfo *)0x0);
            if (__this_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
label_040bf4b8:
              *(CustomLogic_BuiltinClassInstance_o **)&__this_00[1].fields = __this_01;
              il2cpp_runtime_helper_022b4080(&__this_00[1].fields,__this_01);
              *(bool_conflict *)&__this_00[1].klass = (__this->fields)._IsMapObject_k__BackingField;
              __this_00[1].fields.Variables =
                   (System_Collections_Generic_Dictionary_string__object__o *)
                   (__this->fields)._Collider_k__BackingField;
              il2cpp_runtime_helper_022b4080(&__this_00[1].fields.Variables);
              *(CustomLogic_CustomLogicColliderBuiltin_o **)&__this_00[1].fields._containsTypeOverride =
                   (__this->fields)._ColliderInfo_k__BackingField;
              il2cpp_runtime_helper_022b4080(&__this_00[1].fields._containsTypeOverride);
              return (Il2CppObject *)__this_00;
            }
            bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar1 <= (((Il2CppClass *)__this_01->klass)->_2).naturalAligment) &&
               ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicVector3Builtin))
            goto label_040bf4b8;
            goto label_040bf51b;
          }
        }
      }
    }
  }
  __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_022b2c90();
label_040bf51b:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac551 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac551 = '\x01';
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar2 != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf5a0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__this,method);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40bf5b0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppClass *__this_01;
  bool_conflict bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  
  if (g_data_057ac54f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    g_data_057ac54f = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicLineCastHitResultBuiltin->_2).naturalAligment;
    if (bVar1 <= (self->klass->_2).naturalAligment) {
      pIVar6 = (Il2CppObject *)0x0;
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicLineCastHitResultBuiltin) {
        pIVar6 = self;
      }
      if ((((other != (Il2CppObject *)0x0) && (pIVar6 != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).naturalAligment)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicLineCastHitResultBuiltin)) {
        __this_00 = pIVar6[3].monitor;
        if (__this_00 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicVector3Builtin____Eq__
                            (__this_00,(Il2CppObject *)__this_00,other[3].monitor,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return 0;
          }
          __this_01 = pIVar6[4].klass;
          if (__this_01 != (Il2CppClass *)0x0) {
            bVar2 = CustomLogic_CustomLogicVector3Builtin____Eq__
                              ((CustomLogic_CustomLogicVector3Builtin_o *)__this_01,(Il2CppObject *)__this_01,
                               (Il2CppObject *)other[4].klass,(MethodInfo *)0x0);
            return bVar2;
          }
        }
        lVar5 = 0;
        il2cpp_runtime_helper_022b2c90();
        if (*(CustomLogic_CustomLogicVector3Builtin_o **)(lVar5 + 0x38) !=
            (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          uVar3 = CustomLogic_CustomLogicVector3Builtin____Hash__
                            (*(CustomLogic_CustomLogicVector3Builtin_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
          if (*(CustomLogic_CustomLogicVector3Builtin_o **)(lVar5 + 0x40) !=
              (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
            uVar4 = CustomLogic_CustomLogicVector3Builtin____Hash__
                              (*(CustomLogic_CustomLogicVector3Builtin_o **)(lVar5 + 0x40),(MethodInfo *)0x0);
            return uVar4 ^ uVar3;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac550 == '\0') {
          il2cpp_runtime_helper_023445d0(&"LineCastHitResult");
          g_data_057ac550 = '\x01';
        }
        return (bool_conflict)"LineCastHitResult";
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf680

int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__
                  (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  uint uVar2;
  uint uVar3;
  
  pCVar1 = (__this->fields)._Point_k__BackingField;
  if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar2 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar3 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
      return uVar3 ^ uVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac550 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineCastHitResult");
    g_data_057ac550 = '\x01';
  }
  return (int32_t)"LineCastHitResult";
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf6c0

System_String_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac550 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineCastHitResult");
    g_data_057ac550 = '\x01';
  }
  return "LineCastHitResult";
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf6f0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf700

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf710

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x40bf530

void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac551 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac551 = '\x01';
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



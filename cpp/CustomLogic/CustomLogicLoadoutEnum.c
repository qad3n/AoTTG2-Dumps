// Type: CustomLogic.CustomLogicLoadoutEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLoadoutEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLoadoutEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLoadoutEnum_o* CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4184290

CustomLogic_CustomLogicLoadoutEnum_o *
CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicLoadoutEnum_o *pCVar3;
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
  if (g_data_057ad173 == '\0') {
    pSStack_20 = (System_String_o *)0x41842ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad173 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4184327;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41842d6;
    pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLoadoutEnum);
    if (g_data_057ad169 == '\0') {
      pSStack_20 = (System_String_o *)0x41842ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad169 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x418430d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4184317;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x418432f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4184342;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4184351;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLoadoutEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4184360;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4184370;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418437f;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4184387;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x4184397;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41843a3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLoadoutEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41843ae;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057ad174 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"HumanBlades");
    il2cpp_runtime_helper_023445d0(&"TitanLarge");
    il2cpp_runtime_helper_023445d0(&"HumanAHSS");
    il2cpp_runtime_helper_023445d0(&"TitanSmall");
    il2cpp_runtime_helper_023445d0(&"HumanThunderspears");
    il2cpp_runtime_helper_023445d0(&"TitanMedium");
    il2cpp_runtime_helper_023445d0(&"HumanAPG");
    g_data_057ad174 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x7b873af1) {
    if (uVar1 == 0x1ca57968) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"TitanLarge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ad17b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanLarge_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
          g_data_057ad17b = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x54c554de) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HumanThunderspears",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ad178 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanThunderspears_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
          g_data_057ad178 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x7b873af0) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"TitanSmall",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ad179 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSmall_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad179 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return pCVar3;
    }
  }
  else if (uVar1 < 0xb7cd2303) {
    if (uVar1 == 0x927a02b5) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HumanBlades",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
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
        goto CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades;
      }
    }
    else if ((uVar1 == 0xb7cd2302) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"TitanMedium",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ad17a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanMedium_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad17a = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xea115bcc) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HumanAPG",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ad177 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAPG_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad177 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return pCVar3;
    }
  }
  else if ((uVar1 == 0xea789261) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HumanAHSS",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar7 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar7;
    if (g_data_057ad176 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAHSS_g____getter_3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
      g_data_057ad176 = '\x01';
    }
    pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
    System_Func_object__object____ctor();
    pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    return pCVar3;
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLoadoutEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057ad175 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4184749;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanBlades_g____getter);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4184755;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4184761;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x418476d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad175 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4184783;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x418479c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41847ab;
  pCVar3 = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41847c5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41843b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad174 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"HumanBlades");
    il2cpp_runtime_helper_023445d0(&"TitanLarge");
    il2cpp_runtime_helper_023445d0(&"HumanAHSS");
    il2cpp_runtime_helper_023445d0(&"TitanSmall");
    il2cpp_runtime_helper_023445d0(&"HumanThunderspears");
    il2cpp_runtime_helper_023445d0(&"TitanMedium");
    il2cpp_runtime_helper_023445d0(&"HumanAPG");
    g_data_057ad174 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x7b873af1) {
    if (uVar1 == 0x1ca57968) {
      bVar2 = System_String__op_Equality(name,"TitanLarge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad17b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanLarge_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
          g_data_057ad17b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x54c554de) {
      bVar2 = System_String__op_Equality(name,"HumanThunderspears",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad178 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanThunderspears_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
          g_data_057ad178 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7b873af0) &&
            (bVar2 = System_String__op_Equality(name,"TitanSmall",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad179 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSmall_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad179 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb7cd2303) {
    if (uVar1 == 0x927a02b5) {
      bVar2 = System_String__op_Equality(name,"HumanBlades",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades;
      }
    }
    else if ((uVar1 == 0xb7cd2302) &&
            (bVar2 = System_String__op_Equality(name,"TitanMedium",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad17a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanMedium_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad17a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xea115bcc) {
    bVar2 = System_String__op_Equality(name,"HumanAPG",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad177 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAPG_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
        g_data_057ad177 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xea789261) &&
          (bVar2 = System_String__op_Equality(name,"HumanAHSS",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad176 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAHSS_g____getter_3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
      g_data_057ad176 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLoadoutEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad175 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4184749;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanBlades_g____getter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4184755;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4184761;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418476d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad175 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4184783;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418479c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41847ab;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41847c5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanBlades
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades (const MethodInfo* method);
// 0x4184730

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad175 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanBlades_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad175 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS (const MethodInfo* method);
// 0x41847d0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad176 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAHSS_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad176 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAPG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG (const MethodInfo* method);
// 0x4184870

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad177 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanAPG_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad177 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanThunderspears
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears (const MethodInfo* method);
// 0x4184910

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad178 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HumanThunderspears_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad178 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanSmall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall (const MethodInfo* method);
// 0x41849b0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad179 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSmall_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad179 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanMedium
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium (const MethodInfo* method);
// 0x4184a50

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad17a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanMedium_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad17a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanLarge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge (const MethodInfo* method);
// 0x4184af0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (g_data_057ad17b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanLarge_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLoadoutEnum_object);
    g_data_057ad17b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor (const MethodInfo* method);
// 0x4184b90

void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad17c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"HumanBlades");
    il2cpp_runtime_helper_023445d0(&"ShifterAnnie");
    il2cpp_runtime_helper_023445d0(&"TitanLarge");
    il2cpp_runtime_helper_023445d0(&"ShifterArmored");
    il2cpp_runtime_helper_023445d0(&"HumanAHSS");
    il2cpp_runtime_helper_023445d0(&"TitanSmall");
    il2cpp_runtime_helper_023445d0(&"HumanThunderspears");
    il2cpp_runtime_helper_023445d0(&"ShifterWallColossal");
    il2cpp_runtime_helper_023445d0(&"TitanMedium");
    il2cpp_runtime_helper_023445d0(&"HumanAPG");
    il2cpp_runtime_helper_023445d0(&"ShifterEren");
    g_data_057ad17c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"ShifterAnnie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShifterEren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShifterArmored",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShifterWallColossal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HumanBlades",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HumanAHSS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HumanAPG",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HumanThunderspears",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanSmall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanMedium",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanLarge",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad17d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad17d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad437 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanBlades>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x4184db0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad17d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad17d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad437 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x4184e70

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad17e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad438 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad438 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAPG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x4184f30

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad17f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad439 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad439 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanThunderspears>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x4184ff0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad180 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad180 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad43a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanSmall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_6_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x41850b0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_6_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad181 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad181 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad16e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Small");
    g_data_057ad16e = 1;
    return "Small";
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanMedium>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_7_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x4185140

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_7_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad182 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad182 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad16f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Medium");
    g_data_057ad16f = 1;
    return "Medium";
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanLarge>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_8_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x41851d0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_8_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad183 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    g_data_057ad183 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad170 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Large");
    g_data_057ad170 = 1;
    return "Large";
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___ctor (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x4183e80

void CustomLogic_CustomLogicLoadoutEnum___ctor
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad169 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad169 = '\x01';
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


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanBlades
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades (const MethodInfo* method);
// 0x4183ef0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad16a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad16a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS (const MethodInfo* method);
// 0x4183f60

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad16b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad16b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAPG
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG (const MethodInfo* method);
// 0x4183fd0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad16c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad16c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanThunderspears
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears (const MethodInfo* method);
// 0x4184040

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad16d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad16d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanSmall
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall (const MethodInfo* method);
// 0x41840b0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall(MethodInfo *method)

{
  if (g_data_057ad16e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Small");
    g_data_057ad16e = '\x01';
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanMedium
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium (const MethodInfo* method);
// 0x41840e0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium(MethodInfo *method)

{
  if (g_data_057ad16f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Medium");
    g_data_057ad16f = '\x01';
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanLarge
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge (const MethodInfo* method);
// 0x4184110

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge(MethodInfo *method)

{
  if (g_data_057ad170 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Large");
    g_data_057ad170 = '\x01';
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_ClassName (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x4184140

System_String_o *
CustomLogic_CustomLogicLoadoutEnum__get_ClassName
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad171 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadoutEnum");
    g_data_057ad171 = '\x01';
  }
  return "LoadoutEnum";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x4184170

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsStatic (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x4184180

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_IsStatic
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x4184190

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___cctor (const MethodInfo* method);
// 0x41841a0

void CustomLogic_CustomLogicLoadoutEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ad172 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLoadoutEnum);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad172 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicLoadoutEnum + 0xb8) = "Annie";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8),"Annie");
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Eren";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Armored";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "WallColossal";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  return;
}



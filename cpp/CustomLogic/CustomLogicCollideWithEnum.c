// Type: CustomLogic.CustomLogicCollideWithEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideWithEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideWithEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideWithEnum_o* CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414c600

CustomLogic_CustomLogicCollideWithEnum_o *
CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicCollideWithEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc24 == '\0') {
    pSStack_20 = (System_String_o *)0x414c61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollideWithEnum);
    g_data_057acc24 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414c697;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414c646;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCollideWithEnum);
    if (g_data_057acc19 == '\0') {
      pSStack_20 = (System_String_o *)0x414c65e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc19 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414c67d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414c687;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCollideWithEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414c69f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414c6b2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414c6c1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCollideWithEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414c6d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414c6e0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414c6ef;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414c6f7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x414c707;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414c713;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollideWithEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414c71e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acc25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Hitboxes");
    il2cpp_runtime_helper_023445d0(&"Characters");
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Entities");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Projectiles");
    il2cpp_runtime_helper_023445d0(&"Humans");
    il2cpp_runtime_helper_023445d0(&"MapObjects");
    g_data_057acc25 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x3d352248) {
    if (uVar1 < 0x1838400b) {
      if (uVar1 == 0xfadbf6b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Projectiles",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc2b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Projectiles_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
            g_data_057acc2b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          return pCVar9;
        }
      }
      else if ((uVar1 == 0x1838400a) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Entities",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc2c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Entities_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc2c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x2787757f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hitboxes",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc2d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hitboxes_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc2d = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x3d352247) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MapObjects",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acc27 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapObjects_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc27 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x75afe365) {
    if (uVar1 == 0x5c14003e) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Titans",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc29 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titans_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc29 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x75afe364) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"All",(MethodInfo *)0x0),
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
      goto CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All;
    }
  }
  else if (uVar1 == 0x930b044b) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Humans",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acc2a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Humans_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc2a = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xaa3084c4) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MapEditor",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acc2e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapEditor_g____getter_10);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc2e = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xfc6ef2f9) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Characters",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057acc28 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Characters_g____getter_4);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
      g_data_057acc28 = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollideWithEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acc26 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cb99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__All_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cba5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cbb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cbbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc26 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cbd3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cbec;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cbfb;
  pCVar9 = (CustomLogic_CustomLogicCollideWithEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x414cc15;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414c720

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acc25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Hitboxes");
    il2cpp_runtime_helper_023445d0(&"Characters");
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Entities");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Projectiles");
    il2cpp_runtime_helper_023445d0(&"Humans");
    il2cpp_runtime_helper_023445d0(&"MapObjects");
    g_data_057acc25 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3d352248) {
    if (uVar1 < 0x1838400b) {
      if (uVar1 == 0xfadbf6b) {
        bVar2 = System_String__op_Equality(name,"Projectiles",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc2b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Projectiles_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
            g_data_057acc2b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1838400a) &&
              (bVar2 = System_String__op_Equality(name,"Entities",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc2c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Entities_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc2c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x2787757f) {
      bVar2 = System_String__op_Equality(name,"Hitboxes",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc2d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hitboxes_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc2d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x3d352247) &&
            (bVar2 = System_String__op_Equality(name,"MapObjects",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc27 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapObjects_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc27 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x75afe365) {
    if (uVar1 == 0x5c14003e) {
      bVar2 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc29 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titans_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
          g_data_057acc29 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x75afe364) &&
            (bVar2 = System_String__op_Equality(name,"All",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puVar4 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All;
    }
  }
  else if (uVar1 == 0x930b044b) {
    bVar2 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc2a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Humans_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc2a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xaa3084c4) {
    bVar2 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc2e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapEditor_g____getter_10);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
        g_data_057acc2e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xfc6ef2f9) &&
          (bVar2 = System_String__op_Equality(name,"Characters",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acc28 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Characters_g____getter_4);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
      g_data_057acc28 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollideWithEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acc26 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cb99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__All_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cba5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cbb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cbbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc26 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cbd3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cbec;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cbfb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414cc15;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__All
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All (const MethodInfo* method);
// 0x414cb80

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__All_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc26 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapObjects
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects (const MethodInfo* method);
// 0x414cc20

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc27 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapObjects_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc27 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Characters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters (const MethodInfo* method);
// 0x414ccc0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc28 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Characters_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc28 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x414cd60

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titans_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc29 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x414ce00

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Humans_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc2a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Projectiles
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles (const MethodInfo* method);
// 0x414cea0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Projectiles_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc2b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Entities
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities (const MethodInfo* method);
// 0x414cf40

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Entities_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc2c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Hitboxes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes (const MethodInfo* method);
// 0x414cfe0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hitboxes_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc2d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapEditor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor (const MethodInfo* method);
// 0x414d080

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (g_data_057acc2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MapEditor_g____getter_10);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideWithEnum_object);
    g_data_057acc2e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor (const MethodInfo* method);
// 0x414d120

void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acc2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Hitboxes");
    il2cpp_runtime_helper_023445d0(&"Characters");
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Entities");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Projectiles");
    il2cpp_runtime_helper_023445d0(&"Humans");
    il2cpp_runtime_helper_023445d0(&"MapObjects");
    g_data_057acc2f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"All",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MapObjects",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Characters",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Titans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Humans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Projectiles",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Entities",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hitboxes",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MapEditor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acce9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acce9 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__All>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d300

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acce9 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapObjects>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d370

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accea = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Characters>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d3e0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acceb = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Titans>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d450

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accec = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Humans>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d4c0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acced = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Projectiles>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d530

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accee = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Entities>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d5a0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accef = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Hitboxes>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d610

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accf0 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapEditor>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x414d680

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057accf1 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicCollideWithEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum___ctor (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x414c140

void CustomLogic_CustomLogicCollideWithEnum___ctor
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc19 = '\x01';
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


// CustomLogic.CustomLogicCollideWithEnum$$get_All
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_All (const MethodInfo* method);
// 0x414c1b0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_All(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1a = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapObjects
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapObjects (const MethodInfo* method);
// 0x414c220

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapObjects(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1b = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Characters
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Characters (const MethodInfo* method);
// 0x414c290

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Characters(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1c = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Titans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Titans (const MethodInfo* method);
// 0x414c300

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Titans(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1d = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Humans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Humans (const MethodInfo* method);
// 0x414c370

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Humans(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1e = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Projectiles
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Projectiles (const MethodInfo* method);
// 0x414c3e0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Projectiles(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc1f = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Entities
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Entities (const MethodInfo* method);
// 0x414c450

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Entities(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc20 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Hitboxes
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes (const MethodInfo* method);
// 0x414c4c0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc21 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapEditor
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapEditor (const MethodInfo* method);
// 0x414c530

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapEditor(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    g_data_057acc22 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_ClassName (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x414c5a0

System_String_o *
CustomLogic_CustomLogicCollideWithEnum__get_ClassName
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc23 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CollideWithEnum");
    g_data_057acc23 = '\x01';
  }
  return "CollideWithEnum";
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x414c5d0

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsStatic (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x414c5e0

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_IsStatic
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x414c5f0

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



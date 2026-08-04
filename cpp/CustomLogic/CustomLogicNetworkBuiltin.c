// Type: CustomLogic.CustomLogicNetworkBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41d7fc0

CustomLogic_CustomLogicNetworkBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar8;
  undefined8 *puVar9;
  System_Func_T__object__o *pSVar10;
  CustomLogic_CustomLogicNetworkBuiltin_o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad71b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkBuiltin);
    g_data_057ad71b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkBuiltin);
    if (g_data_057ad70d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad70d = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicNetworkBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicNetworkBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicNetworkBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad71c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"MyPlayer");
    il2cpp_runtime_helper_023445d0(&"FindPlayer");
    il2cpp_runtime_helper_023445d0(&"MasterClient");
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    il2cpp_runtime_helper_023445d0(&"Players");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    il2cpp_runtime_helper_023445d0(&"NetworkTime");
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    il2cpp_runtime_helper_023445d0(&"IsMasterClient");
    il2cpp_runtime_helper_023445d0(&"KickPlayer");
    il2cpp_runtime_helper_023445d0(&"GetTimestampDifference");
    g_data_057ad71c = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x20e62365) {
      if (uVar3 == 0x121de31d) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessageAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad724 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad724 = '\x01';
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
          }
          pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          return pCVar11;
        }
      }
      else if (uVar3 == 0x18dd36a9) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Players",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar8;
          if (g_data_057ad71e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Players_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
            g_data_057ad71e = '\x01';
          }
          pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          System_Func_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x20e62364) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"NetworkTime",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad721 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NetworkTime_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad721 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x3442c773) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FindPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad726 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FindPlayer_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad726 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x34be13e4) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"MasterClient",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad71f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MasterClient_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad71f = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessageOthers",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad725 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad725 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0x603b3855) {
    if (uVar3 == 0x396f5fc2) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"MyPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad720 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MyPlayer_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad720 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x5a740462) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetTimestampDifference",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad727 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetTimestampDifference_b);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad727 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x603b3854) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsMasterClient",(MethodInfo *)0x0),
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
      goto CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient;
    }
  }
  else if (uVar3 == 0xce859b1e) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"KickPlayer",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad728 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__KickPlayer_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad728 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0x67ac82ce) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad723 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad723 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0x7fb7f0a9) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Ping",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSVar8;
    if (g_data_057ad722 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_7_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
      g_data_057ad722 = '\x01';
    }
    pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    System_Func_object__object____ctor();
    pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNetworkBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient:
  *(System_String_o **)((long)ppSVar13 + -8) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppSVar13 + -0x18) = puVar9;
  if (g_data_057ad71d == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d8689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMasterClient_g____gett);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d8695;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d86a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d86ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad71d = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d86c3;
  pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d86dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d86eb;
  pCVar11 = (CustomLogic_CustomLogicNetworkBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41d8705;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41d9680

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad72a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad72a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41d96f0

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__8_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d9700

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__8_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *target;
  Il2CppType *obj;
  int32_t id;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar2;
  System_String_o *pSVar3;
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar5;
  CustomLogic_BuiltinClassInstance_o *unaff_R14;
  double sentTime;
  double serverTime;
  double dStack_60;
  long lStack_58;
  CustomLogic_BuiltinClassInstance_o *pCStack_50;
  
  if (g_data_057ad72b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (CustomLogic_BuiltinClassInstance_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)unaff_R14;
      pCVar2 = (CustomLogic_CustomLogicPlayerBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
      if (1 < (uint)__a->max_length) {
        pSVar3 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        CustomLogic_CustomLogicNetworkBuiltin__SendMessage(pCVar2,pSVar3,method_00);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad72c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72c = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = MethodInfo_String_ConvertTo_String;
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(pSVar3,pMVar5);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad72d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72d = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = MethodInfo_String_ConvertTo_String;
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(pSVar3,pMVar5);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad72e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72e = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar4,MethodInfo_Int32_ConvertTo_Int32);
    if (g_data_057ad717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad717 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
    if (player != (Photon_Realtime_Player_o *)0x0) {
      pCVar2 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(pCVar2,player,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  lStack_58 = extraout_RDX_01;
  pCStack_50 = unaff_R14;
  if (g_data_057ad72f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Double_ConvertTo_Double);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72f = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_((Il2CppObject *)__this,MethodInfo_Double_ConvertTo_Double);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                               (*(Il2CppObject **)(extraout_RDX_02 + 0x28),MethodInfo_Double_ConvertTo_Double);
        if (g_data_057ad718 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057ad718 = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dStack_60 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_60);
        return pIVar4;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = extraout_RDX_03;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    pMVar5 = extraout_RDX_04;
  }
  if (extraout_RDX_03 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03->name != 0) {
    target = extraout_RDX_03->klass;
    pSVar3 = ".";
    if (1 < *(int *)&extraout_RDX_03->name) {
      obj = extraout_RDX_03->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      pMVar5 = extraout_RDX_05;
    }
    CustomLogic_CustomLogicNetworkBuiltin__KickPlayer((Il2CppObject *)target,pSVar3,pMVar5);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__9_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d97b0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__9_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *target;
  Il2CppType *obj;
  int32_t id;
  System_String_o *pSVar2;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar4;
  double sentTime;
  double serverTime;
  double dStack_48;
  long lStack_40;
  
  if (g_data_057ad72c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = MethodInfo_String_ConvertTo_String;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(pSVar2,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad72d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72d = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = MethodInfo_String_ConvertTo_String;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(pSVar2,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad72e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72e = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar3,MethodInfo_Int32_ConvertTo_Int32);
    if (g_data_057ad717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad717 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
    if (player != (Photon_Realtime_Player_o *)0x0) {
      __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  lStack_40 = extraout_RDX_00;
  if (g_data_057ad72f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Double_ConvertTo_Double);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72f = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_((Il2CppObject *)__this,MethodInfo_Double_ConvertTo_Double);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                               (*(Il2CppObject **)(extraout_RDX_01 + 0x28),MethodInfo_Double_ConvertTo_Double);
        if (g_data_057ad718 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057ad718 = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dStack_48 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_48);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX_02;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    pMVar4 = extraout_RDX_03;
  }
  if (extraout_RDX_02 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02->name != 0) {
    target = extraout_RDX_02->klass;
    pSVar2 = ".";
    if (1 < *(int *)&extraout_RDX_02->name) {
      obj = extraout_RDX_02->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      pMVar4 = extraout_RDX_04;
    }
    CustomLogic_CustomLogicNetworkBuiltin__KickPlayer((Il2CppObject *)target,pSVar2,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__10_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d9830

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__10_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *target;
  Il2CppType *obj;
  int32_t id;
  System_String_o *pSVar2;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  double sentTime;
  double serverTime;
  double dStack_40;
  long lStack_38;
  
  if (g_data_057ad72d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = MethodInfo_String_ConvertTo_String;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(pSVar2,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad72e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72e = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar3,MethodInfo_Int32_ConvertTo_Int32);
    if (g_data_057ad717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad717 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
    if (player != (Photon_Realtime_Player_o *)0x0) {
      __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  lStack_38 = extraout_RDX;
  if (g_data_057ad72f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Double_ConvertTo_Double);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72f = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_((Il2CppObject *)__this,MethodInfo_Double_ConvertTo_Double);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                               (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_Double_ConvertTo_Double);
        if (g_data_057ad718 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057ad718 = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dStack_40 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_40);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX_01;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    pMVar4 = extraout_RDX_02;
  }
  if (extraout_RDX_01 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_01->name != 0) {
    target = extraout_RDX_01->klass;
    pSVar2 = ".";
    if (1 < *(int *)&extraout_RDX_01->name) {
      obj = extraout_RDX_01->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      pMVar4 = extraout_RDX_03;
    }
    CustomLogic_CustomLogicNetworkBuiltin__KickPlayer((Il2CppObject *)target,pSVar2,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindPlayer>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__11_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d98b0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__11_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *target;
  Il2CppType *obj;
  int32_t id;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *reason;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  double sentTime;
  double serverTime;
  double dStack_38;
  System_Object_array *pSStack_30;
  
  if (g_data_057ad72e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    if (g_data_057ad717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad717 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
    if (player != (Photon_Realtime_Player_o *)0x0) {
      __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSStack_30 = __a;
  if (g_data_057ad72f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Double_ConvertTo_Double);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72f = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_((Il2CppObject *)__this,MethodInfo_Double_ConvertTo_Double);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                               (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_Double_ConvertTo_Double);
        if (g_data_057ad718 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057ad718 = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dStack_38 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_38);
        return pIVar2;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX_00;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    method_00 = extraout_RDX_01;
  }
  if (extraout_RDX_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_00->name != 0) {
    target = extraout_RDX_00->klass;
    reason = ".";
    if (1 < *(int *)&extraout_RDX_00->name) {
      obj = extraout_RDX_00->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      reason = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
      method_00 = extraout_RDX_02;
    }
    CustomLogic_CustomLogicNetworkBuiltin__KickPlayer((Il2CppObject *)target,reason,method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTimestampDifference>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__12_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d99c0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__12_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *target;
  Il2CppType *obj;
  Il2CppObject *pIVar2;
  System_String_o *reason;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  double sentTime;
  double serverTime;
  double dStack_20;
  
  if (g_data_057ad72f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Double_ConvertTo_Double);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad72f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_((Il2CppObject *)__this,MethodInfo_Double_ConvertTo_Double);
      if (1 < (uint)__a->max_length) {
        serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_(__a->m_Items[1],MethodInfo_Double_ConvertTo_Double);
        if (g_data_057ad718 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057ad718 = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dStack_20 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_20);
        return pIVar2;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (extraout_RDX == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX->name != 0) {
    target = extraout_RDX->klass;
    reason = ".";
    if (1 < *(int *)&extraout_RDX->name) {
      obj = extraout_RDX->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      reason = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
      method_00 = extraout_RDX_01;
    }
    CustomLogic_CustomLogicNetworkBuiltin__KickPlayer((Il2CppObject *)target,reason,method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__KickPlayer>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__13_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d9ae0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__13_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  System_String_o *reason;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (g_data_057ad730 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad730 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar1 = (int)__a->max_length;
    if (iVar1 != 0) {
      target = __a->m_Items[0];
      reason = ".";
      if (1 < iVar1) {
        obj = __a->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        reason = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(obj,MethodInfo_String_ConvertTo_String);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicNetworkBuiltin__KickPlayer(target,reason,(MethodInfo *)method_00);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41d80e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad71c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"MyPlayer");
    il2cpp_runtime_helper_023445d0(&"FindPlayer");
    il2cpp_runtime_helper_023445d0(&"MasterClient");
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    il2cpp_runtime_helper_023445d0(&"Players");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    il2cpp_runtime_helper_023445d0(&"NetworkTime");
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    il2cpp_runtime_helper_023445d0(&"IsMasterClient");
    il2cpp_runtime_helper_023445d0(&"KickPlayer");
    il2cpp_runtime_helper_023445d0(&"GetTimestampDifference");
    g_data_057ad71c = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x20e62365) {
      if (uVar3 == 0x121de31d) {
        bVar4 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad724 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad724 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x18dd36a9) {
        bVar4 = System_String__op_Equality(name,"Players",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad71e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Players_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
            g_data_057ad71e = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x20e62364) &&
              (bVar4 = System_String__op_Equality(name,"NetworkTime",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad721 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NetworkTime_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad721 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x3442c773) {
      bVar4 = System_String__op_Equality(name,"FindPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad726 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FindPlayer_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad726 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x34be13e4) {
      bVar4 = System_String__op_Equality(name,"MasterClient",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad71f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MasterClient_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad71f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad725 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad725 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x603b3855) {
    if (uVar3 == 0x396f5fc2) {
      bVar4 = System_String__op_Equality(name,"MyPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad720 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MyPlayer_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
          g_data_057ad720 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x5a740462) {
      bVar4 = System_String__op_Equality(name,"GetTimestampDifference",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad727 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetTimestampDifference_b);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad727 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x603b3854) &&
            (bVar4 = System_String__op_Equality(name,"IsMasterClient",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient;
    }
  }
  else if (uVar3 == 0xce859b1e) {
    bVar4 = System_String__op_Equality(name,"KickPlayer",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad728 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__KickPlayer_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad728 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0x67ac82ce) {
    bVar4 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad723 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad723 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0x7fb7f0a9) &&
          (bVar4 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad722 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_7_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
      g_data_057ad722 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    System_Func_object__object____ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNetworkBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ad71d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d8689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMasterClient_g____gett);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d8695;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d86a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d86ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad71d = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d86c3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d86dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d86eb;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41d8705;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsMasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient (const MethodInfo* method);
// 0x41d8670

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsMasterClient_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad71d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Players
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players (const MethodInfo* method);
// 0x41d8710

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Players_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad71e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient (const MethodInfo* method);
// 0x41d87b0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad71f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MasterClient_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad71f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MyPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer (const MethodInfo* method);
// 0x41d8850

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad720 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MyPlayer_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad720 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__NetworkTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime (const MethodInfo* method);
// 0x41d88f0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad721 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NetworkTime_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad721 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x41d8990

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object);
    g_data_057ad722 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x41d8a30

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad723 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad723 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x41d8b80

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad724 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad724 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x41d8cd0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad725 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad725 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__FindPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer (const MethodInfo* method);
// 0x41d8e20

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad726 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FindPlayer_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad726 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__GetTimestampDifference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference (const MethodInfo* method);
// 0x41d8f70

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad727 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetTimestampDifference_b);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad727 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__KickPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer (const MethodInfo* method);
// 0x41d90c0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (g_data_057ad728 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__KickPlayer_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad728 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41d9210

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor(MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad729 == '\0') {
    uStack_20 = 0x41d922d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41d9239;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9245;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41d9251;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41d925d;
    il2cpp_runtime_helper_023445d0(&"MyPlayer");
    uStack_20 = 0x41d9269;
    il2cpp_runtime_helper_023445d0(&"FindPlayer");
    uStack_20 = 0x41d9275;
    il2cpp_runtime_helper_023445d0(&"MasterClient");
    uStack_20 = 0x41d9281;
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    uStack_20 = 0x41d928d;
    il2cpp_runtime_helper_023445d0(&"Players");
    uStack_20 = 0x41d9299;
    il2cpp_runtime_helper_023445d0(&"Ping");
    uStack_20 = 0x41d92a5;
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    uStack_20 = 0x41d92b1;
    il2cpp_runtime_helper_023445d0(&"NetworkTime");
    uStack_20 = 0x41d92bd;
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    uStack_20 = 0x41d92c9;
    il2cpp_runtime_helper_023445d0(&"IsMasterClient");
    uStack_20 = 0x41d92d5;
    il2cpp_runtime_helper_023445d0(&"KickPlayer");
    uStack_20 = 0x41d92e1;
    il2cpp_runtime_helper_023445d0(&"GetTimestampDifference");
    g_data_057ad729 = '\x01';
  }
  uStack_20 = 0x41d92f7;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x41d930c;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41d9331;
    System_Collections_Generic_HashSet_object___Add(__this,"IsMasterClient",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9346;
    System_Collections_Generic_HashSet_object___Add(__this,"Players",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d935b;
    System_Collections_Generic_HashSet_object___Add(__this,"MasterClient",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9370;
    System_Collections_Generic_HashSet_object___Add(__this,"MyPlayer",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9385;
    System_Collections_Generic_HashSet_object___Add(__this,"NetworkTime",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d939a;
    System_Collections_Generic_HashSet_object___Add(__this,"Ping",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d93af;
    System_Collections_Generic_HashSet_object___Add(__this,"SendMessage",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d93c4;
    System_Collections_Generic_HashSet_object___Add(__this,"SendMessageAll",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d93d9;
    System_Collections_Generic_HashSet_object___Add(__this,"SendMessageOthers",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d93ee;
    System_Collections_Generic_HashSet_object___Add(__this,"FindPlayer",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9403;
    System_Collections_Generic_HashSet_object___Add(__this,"GetTimestampDifference",MethodInfo_Boolean_Add);
    uStack_20 = 0x41d9418;
    System_Collections_Generic_HashSet_object___Add(__this,"KickPlayer",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41d944a;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad70e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad70e = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  uStack_20 = CONCAT17((char)bVar1,(undefined7)uStack_20);
  il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsMasterClient>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d9450

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if (g_data_057ad70e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad70e = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
  return pIVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Players>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_3_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d94b0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_3_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicNetworkBuiltin__get_Players(method);
  return pCVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MasterClient>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_4_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d94c0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_4_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad710 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad710 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MyPlayer>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_5_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d9540

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_5_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad711 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad711 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__NetworkTime>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_6_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d95c0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_6_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dStack_8;
  
  if (g_data_057ad712 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad712 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dStack_8 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_8);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_7_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x41d9620

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_7_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (g_data_057ad713 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad713 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin___ctor (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x41d7520

void CustomLogic_CustomLogicNetworkBuiltin___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad70d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad70d = '\x01';
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


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsMasterClient
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient (const MethodInfo* method);
// 0x41d7590

bool_conflict CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (g_data_057ad70e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad70e = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Players
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_Players (const MethodInfo* method);
// 0x41d75f0

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicNetworkBuiltin__get_Players(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *pCVar6;
  Photon_Realtime_Player_array *pPVar7;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  Photon_Realtime_Player_o *pPVar8;
  ulong uVar9;
  
  if (g_data_057ad70f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad70f = '\x01';
  }
  pCVar6 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar7 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar7 != (Photon_Realtime_Player_array *)0x0) {
    iVar5 = (int)pPVar7->max_length;
    if (pCVar6 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar5 < 1) {
        return pCVar6;
      }
      uVar9 = 0;
      if ((pPVar7->max_length & 0xffffffff) != 0) {
        do {
          pPVar8 = pPVar7->m_Items[uVar9];
          __this = (pCVar6->fields).List;
          __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
          CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,pPVar8,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_041d7770;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_041d7770;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,(Il2CppObject *)__this_00,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pPVar7->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) {
            return pCVar6;
          }
        } while (uVar9 < uVar2);
      }
      goto label_041d7775;
    }
    if (iVar5 < 1) {
      return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
    }
  }
label_041d7770:
  il2cpp_runtime_helper_022b2c90();
label_041d7775:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad710 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad710 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar8 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  pCVar6 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor
            ((CustomLogic_CustomLogicPlayerBuiltin_o *)pCVar6,pPVar8,(MethodInfo *)0x0);
  return pCVar6;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MasterClient
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient (const MethodInfo* method);
// 0x41d7780

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad710 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad710 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MyPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer (const MethodInfo* method);
// 0x41d7800

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad711 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad711 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_NetworkTime
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime (const MethodInfo* method);
// 0x41d7880

double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime(MethodInfo *method)

{
  int iVar1;
  double dVar2;
  
  if (g_data_057ad712 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad712 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    return dVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping (const MethodInfo* method);
// 0x41d78e0

int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (g_data_057ad713 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad713 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessage (CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, const MethodInfo* method);
// 0x41d7940

void CustomLogic_CustomLogicNetworkBuiltin__SendMessage
               (CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  int32_t id;
  System_Object_array *pSVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Photon_Realtime_Player_o *pPVar5;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad714 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad714 = '\x01';
    method = extraout_RDX;
  }
  if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
label_041d7a1c:
    il2cpp_runtime_helper_022b2c90();
label_041d7a21:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pPVar5 = (player->fields).Player;
    pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1,method);
    if (pSVar2 == (System_Object_array *)0x0) goto label_041d7a1c;
    if (message == (System_String_o *)0x0) {
label_041d79d8:
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = (Il2CppObject *)message;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items,message);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar1,"SendMessageRPC",pPVar5,pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto label_041d7a1c;
      }
      goto label_041d7a21;
    }
    lVar3 = il2cpp_runtime_helper_023051f0(message,(((pSVar2->obj).klass)->_1).element_class);
    if (lVar3 != 0) goto label_041d79d8;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(pIVar4,0);
  if (g_data_057ad715 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad715 = '\x01';
  }
  pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  if (pSVar2 == (System_Object_array *)0x0) {
label_041d7b02:
    il2cpp_runtime_helper_022b2c90();
label_041d7b07:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar4 == (Il2CppObject *)0x0) {
label_041d7ac5:
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = pIVar4;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items,pIVar4);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",0,pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto label_041d7b02;
      }
      goto label_041d7b07;
    }
    lVar3 = il2cpp_runtime_helper_023051f0(pIVar4,(((pSVar2->obj).klass)->_1).element_class);
    if (lVar3 != 0) goto label_041d7ac5;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(pIVar4,0);
  if (g_data_057ad716 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad716 = '\x01';
  }
  pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar2 == (System_Object_array *)0x0) {
label_041d7be5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar4 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pIVar4);
      if (lVar3 == 0) goto label_041d7bef;
    }
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = pIVar4;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",1,pSVar2,(MethodInfo *)0x0);
        return;
      }
      goto label_041d7be5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_041d7bef:
  id = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad717 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar5 = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
    __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,pPVar5,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll (System_String_o* message, const MethodInfo* method);
// 0x41d7a40

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  int32_t id;
  System_Object_array *pSVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad715 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad715 = '\x01';
  }
  pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  if (pSVar2 == (System_Object_array *)0x0) {
label_041d7b02:
    il2cpp_runtime_helper_022b2c90();
label_041d7b07:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (message == (System_String_o *)0x0) {
label_041d7ac5:
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = (Il2CppObject *)message;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items,message);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",0,pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto label_041d7b02;
      }
      goto label_041d7b07;
    }
    lVar3 = il2cpp_runtime_helper_023051f0(message,(((pSVar2->obj).klass)->_1).element_class);
    if (lVar3 != 0) goto label_041d7ac5;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(pIVar4,0);
  if (g_data_057ad716 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad716 = '\x01';
  }
  pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar2 == (System_Object_array *)0x0) {
label_041d7be5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar4 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pIVar4);
      if (lVar3 == 0) goto label_041d7bef;
    }
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = pIVar4;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",1,pSVar2,(MethodInfo *)0x0);
        return;
      }
      goto label_041d7be5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_041d7bef:
  id = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad717 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers (System_String_o* message, const MethodInfo* method);
// 0x41d7b20

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  int32_t id;
  System_Object_array *parameters;
  long lVar1;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (g_data_057ad716 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057ad716 = '\x01';
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
label_041d7be5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_helper_023051f0(message);
      if (lVar1 == 0) goto label_041d7bef;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_041d7be5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_041d7bef:
  id = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad717 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$FindPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__FindPlayer (int32_t id, const MethodInfo* method);
// 0x41d7c00

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__FindPlayer(int32_t id,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (g_data_057ad717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad717 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
    return __this;
  }
  return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin$$GetTimestampDifference
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference (double timestamp1, double timestamp2, const MethodInfo* method);
// 0x41d7c90

double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference
                 (double timestamp1,double timestamp2,MethodInfo *method)

{
  int iVar1;
  double dVar2;
  
  if (g_data_057ad718 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad718 = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
    return dVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$KickPlayer
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer (Il2CppObject* target, System_String_o* reason, const MethodInfo* method);
// 0x41d7d30

void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer
               (Il2CppObject *target,System_String_o *reason,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  uint uVar4;
  Photon_Realtime_Room_o *pPVar5;
  Il2CppClass *pIVar6;
  System_Type_o *arg0;
  Il2CppObject *arg1;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_String_o *pSVar8;
  
  if (g_data_057ad719 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ad719 = '\x01';
  }
  if (target == (Il2CppObject *)0x0) {
label_041d7eaa:
    il2cpp_runtime_helper_01f681a0(target);
    arg0 = System_Object__GetType(target,(MethodInfo *)0x0);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid player parameter type {0}. Valid types are {1}, int (id).");
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&"CustomLogicPlayerBuiltin");
    pSVar8 = System_String__Format_3af78e0(pSVar8,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this,pSVar8,(MethodInfo *)0x0);
  }
  else {
    pIVar6 = target->klass;
    if (pIVar6 == g_data_057b9bb8) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar4 = MiscExtensions__UnboxToInt(target,(MethodInfo *)0x0);
      if (pPVar5 == (Photon_Realtime_Room_o *)0x0) goto label_041d7f5a;
      pIVar6 = (Il2CppClass *)
               (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar5,(ulong)uVar4,1,(pPVar5->klass->vtable)._10_GetPlayer.method);
      iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CustomLogicPlayerBuiltin->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPlayerBuiltin)) goto label_041d7eaa;
      pIVar6 = target[3].klass;
      iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__KickPlayer((Photon_Realtime_Player_o *)pIVar6,1,0,reason,(MethodInfo *)0x0);
      return;
    }
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Only the master client can kick players.");
    System_Exception___ctor_3cf6120((System_Exception_o *)__this,pSVar8,(MethodInfo *)0x0);
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer);
  il2cpp_runtime_helper_022b2b10(__this,uVar7);
label_041d7f5a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad71a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Network");
    g_data_057ad71a = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x41d7f60

System_String_o *
CustomLogic_CustomLogicNetworkBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad71a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Network");
    g_data_057ad71a = '\x01';
  }
  return "Network";
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x41d7f90

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x41d7fa0

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x41d7fb0

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



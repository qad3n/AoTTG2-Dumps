// Type: CustomLogic.CustomLogicPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPlayerBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x412a360

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  long lVar1;
  uint in_EAX;
  int iVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  undefined8 uVar9;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar10;
  undefined8 *puVar11;
  System_Func_T__object__o *pSVar12;
  System_Action_T__object__o *pSVar13;
  System_Func_T__object____object__o *pSVar14;
  System_ArgumentException_o **ppSVar15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057aca4b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_ConvertTo_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057aca4b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    iVar2 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar5 = (Photon_Realtime_Player_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(obj,MethodInfo_Player_ConvertTo_Player);
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      if (g_data_057aca2f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057aca2f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
      (pCVar6->fields).Player = pPVar5;
      il2cpp_runtime_helper_022b4080(&(pCVar6->fields).Player,pPVar5);
      return pCVar6;
    }
  }
  uStack_18 = CONCAT44(iVar2,(uint)uStack_18);
  pSVar7 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPlayerBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar7 = System_String__Concat_3af7150(pSVar8,pSVar7,str2,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerBuiltin_CreateInstance);
  pSVar10 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar15 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057aca4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"IsAnonymous");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"ClearKDR");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"SpectateID");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Loadout");
    il2cpp_runtime_helper_023445d0(&"GetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"CharacterType");
    il2cpp_runtime_helper_023445d0(&"SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"UserID");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"Status");
    il2cpp_runtime_helper_023445d0(&"Connected");
    il2cpp_runtime_helper_023445d0(&"DisplayName");
    il2cpp_runtime_helper_023445d0(&"ID");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057aca4c = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar10,(MethodInfo *)0x0);
  if (uVar3 < 0x7bf69371) {
    if (uVar3 < 0x2329c92d) {
      if (uVar3 < 0xfe07307) {
        if (uVar3 == 0x5ef20f) {
          bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Status",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
            }
            pSStack_30 = pSVar10;
            if (g_data_057aca56 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Status_g____getter_11_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
              g_data_057aca56 = '\x01';
            }
            pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            return pCVar6;
          }
        }
        else if ((uVar3 == 0xfe07306) &&
                (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Name",(MethodInfo *)0x0)
                , (char)bVar4 != '\0')) {
          pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar10;
          if (g_data_057aca52 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca52 = '\x01';
          }
          pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if (uVar3 == 0x209c92df) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"UserID",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar10;
          if (g_data_057aca51 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UserID_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca51 = '\x01';
          }
          pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if (uVar3 == 0x2267fabd) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"ClearKDR",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057aca62 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar7;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearKDR_b__23_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca62 = '\x01';
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar7;
          }
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar14 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar1 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar1 + 0x18) = pSVar14;
            il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar14);
          }
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar14,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if ((uVar3 == 0x2329c92c) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Team",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca55 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca55 = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 < 0x537d6b99) {
      if (uVar3 == 0x33b0223e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"IsAnonymous",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar10;
          if (g_data_057aca50 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsAnonymous_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca50 = '\x01';
          }
          pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if (uVar3 == 0x369870e0) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Guild",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar10;
          if (g_data_057aca54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Guild_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca54 = '\x01';
          }
          pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if ((uVar3 == 0x537d6b98) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"CharacterType",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca57 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CharacterType_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca57 = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 == 0x56e8eb60) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"ID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ID_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca4f = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 == 0x72527c0e) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"SpawnPoint",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        pSStack_28 = (System_ArgumentException_o *)pSVar7;
        if (g_data_057aca5f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpawnPoint_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpawnPoint_g____setter_20);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5f = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pSVar13 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        System_Action_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,pSVar13,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if ((uVar3 == 0x7bf69370) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Connected",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar10;
      if (g_data_057aca4e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Connected_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca4e = '\x01';
      }
      pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return pCVar6;
    }
  }
  else if (uVar3 < 0xdbaad9bb) {
    if (uVar3 < 0xb404b03a) {
      if (uVar3 == 0xb404b039) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"SetCustomProperty",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057aca61 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar7;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCustomProperty_b__22_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca61 = '\x01';
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar7;
          }
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar14 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar1 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar1 + 0x10) = pSVar14;
            il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar14);
          }
          pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar14,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return pCVar6;
        }
      }
      else if ((uVar3 == 0x7fb7f0a9) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Ping",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca5d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_18_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5d = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 == 0xc835e055) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"GetCustomProperty",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057aca60 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCustomProperty_b__21_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca60 = '\x01';
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar7;
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar14 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar14 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar1 + 8) = pSVar14;
          il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar14);
        }
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar14,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 == 0xcd8e1e97) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"SpectateID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca5e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateID_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5e = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if ((uVar3 == 0xdbaad9ba) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Deaths",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar7;
      if (g_data_057aca5a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Deaths_g____getter_15_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Deaths_g____setter_15_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca5a = '\x01';
      }
      pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar13 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,pSVar13,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return pCVar6;
    }
  }
  else if (uVar3 < 0xf30591ff) {
    if (uVar3 == 0xe078d003) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Loadout",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar10;
        if (g_data_057aca58 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Loadout_g____getter_13_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca58 = '\x01';
        }
        pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return pCVar6;
      }
    }
    else if (uVar3 == 0xec7340b0) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Character",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puVar11 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        ppSVar15 = (System_ArgumentException_o **)&uStack_18;
        pSVar10 = pSStack_28;
        goto CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character;
      }
    }
    else if ((uVar3 == 0xf30591fe) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Kills",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar7;
      if (g_data_057aca59 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kills_g____getter_14_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Kills_g____setter_14_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca59 = '\x01';
      }
      pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar13 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,pSVar13,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return pCVar6;
    }
  }
  else if (uVar3 == 0xf4b21828) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"TotalDamage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar7;
      if (g_data_057aca5c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TotalDamage_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TotalDamage_g____setter_17);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca5c = '\x01';
      }
      pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar13 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,pSVar13,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return pCVar6;
    }
  }
  else if (uVar3 == 0xf8eca4b6) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"DisplayName",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar10 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar10;
      if (g_data_057aca53 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DisplayName_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca53 = '\x01';
      }
      pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return pCVar6;
    }
  }
  else if ((uVar3 == 0xffbdd3de) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"HighestDamage",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    pSStack_28 = (System_ArgumentException_o *)pSVar7;
    if (g_data_057aca5b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighestDamage_g____gette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighestDamage_g____setter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      g_data_057aca5b = '\x01';
    }
    pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    System_Func_object__object____ctor();
    pSVar13 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    System_Action_object__object____ctor();
    pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,pSVar13,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    return pCVar6;
  }
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPlayerBuiltin not found");
  pSVar7 = System_String__Concat_3af7150(pSVar7,(System_String_o *)pSVar10,pSVar8,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar10,pSVar7,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar11 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar10,uVar9);
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character:
  *(System_String_o **)((long)ppSVar15 + -8) = pSVar7;
  *(System_ArgumentException_o **)((long)ppSVar15 + -0x10) = pSVar10;
  *(undefined8 **)((long)ppSVar15 + -0x18) = puVar11;
  if (g_data_057aca4d == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad49;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Character_g____getter_2);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad61;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca4d = '\x01';
  }
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad83;
  pSVar12 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412ad9c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412adab;
  pCVar6 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  *(undefined8 *)((long)ppSVar15 + -0x20) = 0x412adc5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar6,pSVar12,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return pCVar6;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x412cd00

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x412cd70

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCustomProperty>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x412cd80

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  CustomLogic_BuiltinClassInstance_c *__this_00;
  long extraout_RDX;
  MethodInfo_24EEB40 *__this_01;
  MethodInfo_24EEB40 *method_00;
  
  __this_01 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057aca6a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca6a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_0412ce42:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = MethodInfo_String_ConvertTo_String;
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca45 == '\0') {
        il2cpp_runtime_helper_023445d0(&"CL:");
        g_data_057aca45 = '\x01';
      }
      player = (__c->fields).Player;
      pSVar1 = System_String__Concat_3ae5ba0("CL:",pSVar1,(MethodInfo *)0x0);
      pIVar2 = PhotonExtensions__GetCustomProperty(player,pSVar1,(MethodInfo *)0x0);
      return pIVar2;
    }
    goto label_0412ce42;
  }
  il2cpp_runtime_helper_022b2ca0();
  method_00 = __this_01;
  if (g_data_057aca6b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca6b = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        if (__this_01 != (MethodInfo_24EEB40 *)0x0) {
          CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
                    ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,pSVar1,
                     *(Il2CppObject **)(extraout_RDX + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_0412cee3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0412cee3:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo_24EEB40 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)method_00,(MethodInfo *)method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    g_data_057aca6c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_00,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_00;
  pIVar2 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_00);
  return pIVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCustomProperty>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x412ce50

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *property;
  CustomLogic_BuiltinClassInstance_c *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo_24EEB40 *method_00;
  
  method_00 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057aca6b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca6b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      property = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
          CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty(__c,property,__a->m_Items[1],method);
          return (Il2CppObject *)0x0;
        }
        goto label_0412cee3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0412cee3:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo_24EEB40 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)method_00,(MethodInfo *)method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    g_data_057aca6c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_00,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_00;
  pIVar1 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_00);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearKDR>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x412cef0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_c *__this_00;
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__ClearKDR(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    g_data_057aca6c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_00,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_00;
  pIVar1 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_00);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x412a4e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  System_Action_T__object__o *pSVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057aca4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"IsAnonymous");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"ClearKDR");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"SpectateID");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Loadout");
    il2cpp_runtime_helper_023445d0(&"GetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"CharacterType");
    il2cpp_runtime_helper_023445d0(&"SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"UserID");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"Status");
    il2cpp_runtime_helper_023445d0(&"Connected");
    il2cpp_runtime_helper_023445d0(&"DisplayName");
    il2cpp_runtime_helper_023445d0(&"ID");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057aca4c = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7bf69371) {
    if (uVar3 < 0x2329c92d) {
      if (uVar3 < 0xfe07307) {
        if (uVar3 == 0x5ef20f) {
          bVar4 = System_String__op_Equality(name,"Status",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057aca56 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Status_g____getter_11_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
              g_data_057aca56 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            System_Func_object__object____ctor();
            pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xfe07306) &&
                (bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca52 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca52 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x209c92df) {
        bVar4 = System_String__op_Equality(name,"UserID",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca51 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UserID_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca51 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x2267fabd) {
        bVar4 = System_String__op_Equality(name,"ClearKDR",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca62 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearKDR_b__23_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca62 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x2329c92c) &&
              (bVar4 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca55 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca55 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x537d6b99) {
      if (uVar3 == 0x33b0223e) {
        bVar4 = System_String__op_Equality(name,"IsAnonymous",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca50 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsAnonymous_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca50 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x369870e0) {
        bVar4 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Guild_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
            g_data_057aca54 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x537d6b98) &&
              (bVar4 = System_String__op_Equality(name,"CharacterType",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca57 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CharacterType_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca57 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x56e8eb60) {
      bVar4 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ID_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca4f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x72527c0e) {
      bVar4 = System_String__op_Equality(name,"SpawnPoint",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca5f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpawnPoint_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpawnPoint_g____setter_20);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x7bf69370) &&
            (bVar4 = System_String__op_Equality(name,"Connected",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca4e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Connected_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca4e = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xdbaad9bb) {
    if (uVar3 < 0xb404b03a) {
      if (uVar3 == 0xb404b039) {
        bVar4 = System_String__op_Equality(name,"SetCustomProperty",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca61 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCustomProperty_b__22_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca61 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x7fb7f0a9) &&
              (bVar4 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca5d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_18_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xc835e055) {
      bVar4 = System_String__op_Equality(name,"GetCustomProperty",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca60 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCustomProperty_b__21_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca60 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xcd8e1e97) {
      bVar4 = System_String__op_Equality(name,"SpectateID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca5e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateID_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca5e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xdbaad9ba) &&
            (bVar4 = System_String__op_Equality(name,"Deaths",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca5a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Deaths_g____getter_15_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Deaths_g____setter_15_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca5a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xf30591ff) {
    if (uVar3 == 0xe078d003) {
      bVar4 = System_String__op_Equality(name,"Loadout",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca58 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Loadout_g____getter_13_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
          g_data_057aca58 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xec7340b0) {
      bVar4 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character;
      }
    }
    else if ((uVar3 == 0xf30591fe) &&
            (bVar4 = System_String__op_Equality(name,"Kills",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca59 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kills_g____getter_14_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Kills_g____setter_14_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca59 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf4b21828) {
    bVar4 = System_String__op_Equality(name,"TotalDamage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca5c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TotalDamage_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TotalDamage_g____setter_17);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca5c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf8eca4b6) {
    bVar4 = System_String__op_Equality(name,"DisplayName",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca53 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DisplayName_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
        g_data_057aca53 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xffbdd3de) &&
          (bVar4 = System_String__op_Equality(name,"HighestDamage",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aca5b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighestDamage_g____gette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighestDamage_g____setter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
      g_data_057aca5b = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    System_Func_object__object____ctor();
    pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    System_Action_object__object____ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPlayerBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057aca4d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad49;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Character_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad61;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca4d = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad83;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412ad9c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412adab;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x412adc5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x412ad30

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Character_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca4d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Connected
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected (const MethodInfo* method);
// 0x412add0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Connected_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca4e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x412ae70

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ID_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca4f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsAnonymous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous (const MethodInfo* method);
// 0x412af10

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca50 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsAnonymous_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca50 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__UserID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID (const MethodInfo* method);
// 0x412afb0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UserID_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca51 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x412b050

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Name_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__DisplayName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName (const MethodInfo* method);
// 0x412b0f0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca53 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DisplayName_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x412b190

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca54 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Guild_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca54 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x412b230

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca55 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Status
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status (const MethodInfo* method);
// 0x412b2d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Status_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca56 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__CharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType (const MethodInfo* method);
// 0x412b370

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CharacterType_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca57 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Loadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout (const MethodInfo* method);
// 0x412b410

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Loadout_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca58 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Kills
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills (const MethodInfo* method);
// 0x412b4b0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kills_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Kills_g____setter_14_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca59 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Deaths
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths (const MethodInfo* method);
// 0x412b590

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Deaths_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Deaths_g____setter_15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__HighestDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage (const MethodInfo* method);
// 0x412b670

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighestDamage_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighestDamage_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__TotalDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage (const MethodInfo* method);
// 0x412b750

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TotalDamage_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TotalDamage_g____setter_17);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x412b830

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ping_g____getter_18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpectateID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID (const MethodInfo* method);
// 0x412b8d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateID_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpawnPoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint (const MethodInfo* method);
// 0x412b970

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpawnPoint_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpawnPoint_g____setter_20);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object);
    g_data_057aca5f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__GetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty (const MethodInfo* method);
// 0x412ba50

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCustomProperty_b__21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca60 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__SetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty (const MethodInfo* method);
// 0x412bba0

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca61 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCustomProperty_b__22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca61 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__ClearKDR
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR (const MethodInfo* method);
// 0x412bcf0

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (g_data_057aca62 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearKDR_b__23_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca62 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x412be40

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar3;
  System_String_o *__this;
  int32_t iVar4;
  bool_conflict bVar5;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *character;
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  System_Collections_Generic_HashSet_object__o *__this_02;
  MethodInfo_33E0570 *__this_03;
  MethodInfo_24EE950 *pMVar10;
  MethodInfo_24EE950 *__this_04;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1e8;
  MethodInfo_24EE950 *pMStack_1e0;
  MethodInfo_24EE950 *pMStack_1d8;
  undefined8 uStack_1d0;
  MethodInfo_24EE950 *pMStack_1c8;
  MethodInfo_24EE950 *pMStack_1c0;
  undefined8 uStack_1b8;
  MethodInfo_24EE950 *pMStack_1b0;
  MethodInfo_24EE950 *pMStack_1a8;
  undefined8 uStack_1a0;
  MethodInfo_24EE950 *pMStack_198;
  MethodInfo_24EE950 *pMStack_190;
  undefined8 uStack_188;
  MethodInfo_33E0570 *pMStack_180;
  MethodInfo_24EE950 *pMStack_178;
  undefined8 uStack_170;
  MethodInfo_33E0570 *pMStack_168;
  MethodInfo_24EE950 *pMStack_160;
  undefined8 uStack_158;
  System_Collections_Generic_HashSet_object__o *pSStack_150;
  MethodInfo_33E0570 *pMStack_148;
  undefined8 uStack_140;
  System_Collections_Generic_HashSet_object__o *pSStack_138;
  MethodInfo_33E0570 *pMStack_130;
  undefined8 uStack_128;
  System_Collections_Generic_HashSet_object__o *pSStack_120;
  undefined8 uStack_110;
  System_Collections_Generic_HashSet_object__o *pSStack_108;
  undefined1 uStack_39;
  System_Collections_Generic_HashSet_object__o *pSStack_38;
  undefined8 uStack_30;
  
  if (g_data_057aca63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"SetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"IsAnonymous");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"ClearKDR");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"SpectateID");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Loadout");
    il2cpp_runtime_helper_023445d0(&"GetCustomProperty");
    il2cpp_runtime_helper_023445d0(&"CharacterType");
    il2cpp_runtime_helper_023445d0(&"SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"UserID");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"Status");
    il2cpp_runtime_helper_023445d0(&"Connected");
    il2cpp_runtime_helper_023445d0(&"DisplayName");
    il2cpp_runtime_helper_023445d0(&"ID");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057aca63 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar9 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_00,"Character",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Connected",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"ID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsAnonymous",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"UserID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"DisplayName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Guild",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Team",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Status",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"CharacterType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Loadout",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Kills",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Deaths",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"HighestDamage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"TotalDamage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Ping",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SpectateID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SpawnPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"GetCustomProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SetCustomProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"ClearKDR",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar9 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      uStack_30 = (System_Collections_Generic_HashSet_object__o *)0x412c215;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffdf);
      return;
    }
    uStack_30 = (System_Collections_Generic_HashSet_object__o *)0x412c21c;
    uStack_30 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_022b2c90();
    if ((pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
       (pSVar3 = (pSVar9->fields)._comparer,
       pSVar3 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)) {
      uStack_30 = (System_Collections_Generic_HashSet_object__o *)
                  CONCAT44(*(undefined4 *)&pSVar3[1].monitor,SUB84(uStack_30,0));
      pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x412c24b;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
      return;
    }
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x412c252;
    il2cpp_runtime_helper_022b2c90();
    __this_02 = pSVar9;
    pSStack_38 = __this_00;
    if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca31 == '\0') {
        __this_02 = (System_Collections_Generic_HashSet_object__o *)&"anon_";
        il2cpp_runtime_helper_023445d0();
        g_data_057aca31 = '\x01';
      }
      pSVar3 = (pSVar9->fields)._comparer;
      __this_00 = pSVar9;
      if (pSVar3 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
        __this = pSVar3[2].monitor;
        if (__this == (System_String_o *)0x0) {
          uStack_39 = 1;
        }
        else {
          bVar5 = System_String__StartsWith(__this,"anon_",(MethodInfo *)0x0);
          uStack_39 = (undefined1)bVar5;
        }
        il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_39);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
       ((__this_02->fields)._comparer != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)) {
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca32 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca32 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca33 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca33 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca34 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca34 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca35 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca35 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca36 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca36 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca37 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca37 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca38 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca38 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PhotonExtensions__GetStringProperty
                (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                 (MethodInfo *)0x0);
      return;
    }
    uStack_110 = il2cpp_runtime_helper_022b2c90();
    pSStack_108 = __this_00;
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (g_data_057aca39 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca39 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)(__this_02->fields)._comparer;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                         (MethodInfo *)0x0);
      uStack_110 = CONCAT44(iVar4,(undefined4)uStack_110);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_110 + 4);
      return;
    }
    uStack_128 = il2cpp_runtime_helper_022b2c90();
    pSStack_120 = __this_00;
    if (g_data_057aca64 == '\0') {
      pMStack_130 = (MethodInfo_33E0570 *)0x412c73f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_130 = (MethodInfo_33E0570 *)0x412c74b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca64 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_130 = (MethodInfo_33E0570 *)0x412c76a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_130 = (MethodInfo_33E0570 *)0x412c77c;
    pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
    __this_03 = obj;
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_Kills
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_02,iVar4,method_00);
      return;
    }
    pMStack_130 = (MethodInfo_33E0570 *)0x412c797;
    uStack_140 = il2cpp_runtime_helper_022b2c90();
    pSStack_138 = __this_02;
    pMStack_130 = obj;
    if (__this_03 != (MethodInfo_33E0570 *)0x0) {
      if (g_data_057aca3b == '\0') {
        pMStack_148 = (MethodInfo_33E0570 *)0x412c7c1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3b = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)__this_03->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_148 = (MethodInfo_33E0570 *)0x412c7e4;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_148 = (MethodInfo_33E0570 *)0x412c7fe;
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                         (MethodInfo *)0x0);
      uStack_140 = CONCAT44(iVar4,(undefined4)uStack_140);
      pMStack_148 = (MethodInfo_33E0570 *)0x412c817;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_140 + 4);
      return;
    }
    pMStack_148 = (MethodInfo_33E0570 *)0x412c824;
    uStack_158 = il2cpp_runtime_helper_022b2c90();
    pSStack_150 = __this_02;
    pMStack_148 = obj;
    if (g_data_057aca65 == '\0') {
      pMStack_160 = (MethodInfo_24EE950 *)0x412c84f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_160 = (MethodInfo_24EE950 *)0x412c85b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca65 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_160 = (MethodInfo_24EE950 *)0x412c87a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_160 = (MethodInfo_24EE950 *)0x412c88c;
    pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar10 = pMVar7;
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
    if (__this_03 != (MethodInfo_33E0570 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_03,iVar4,method_01);
      return;
    }
    pMStack_160 = (MethodInfo_24EE950 *)0x412c8a7;
    uStack_170 = il2cpp_runtime_helper_022b2c90();
    pMStack_168 = __this_03;
    pMStack_160 = pMVar7;
    if (pMVar10 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca3d == '\0') {
        pMStack_178 = (MethodInfo_24EE950 *)0x412c8d1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3d = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar10->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_178 = (MethodInfo_24EE950 *)0x412c8f4;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_178 = (MethodInfo_24EE950 *)0x412c90e;
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                         (MethodInfo *)0x0);
      uStack_170 = CONCAT44(iVar4,(undefined4)uStack_170);
      pMStack_178 = (MethodInfo_24EE950 *)0x412c927;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_170 + 4);
      return;
    }
    pMStack_178 = (MethodInfo_24EE950 *)0x412c934;
    uStack_188 = il2cpp_runtime_helper_022b2c90();
    pMStack_180 = __this_03;
    pMStack_178 = pMVar7;
    if (g_data_057aca66 == '\0') {
      pMStack_190 = (MethodInfo_24EE950 *)0x412c95f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_190 = (MethodInfo_24EE950 *)0x412c96b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca66 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_190 = (MethodInfo_24EE950 *)0x412c98a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_190 = (MethodInfo_24EE950 *)0x412c99c;
    pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
    __this_04 = pMVar8;
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar10 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar10,iVar4,method_02);
      return;
    }
    pMStack_190 = (MethodInfo_24EE950 *)0x412c9b7;
    uStack_1a0 = il2cpp_runtime_helper_022b2c90();
    pMStack_198 = pMVar10;
    pMStack_190 = pMVar8;
    if (__this_04 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca3f == '\0') {
        pMStack_1a8 = (MethodInfo_24EE950 *)0x412c9e1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3f = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)__this_04->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca04;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca1e;
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                         (MethodInfo *)0x0);
      uStack_1a0 = CONCAT44(iVar4,(undefined4)uStack_1a0);
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca37;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1a0 + 4);
      return;
    }
    pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca44;
    uStack_1b8 = il2cpp_runtime_helper_022b2c90();
    pMStack_1b0 = pMVar10;
    pMStack_1a8 = pMVar8;
    if (g_data_057aca67 == '\0') {
      pMStack_1c0 = (MethodInfo_24EE950 *)0x412ca6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_1c0 = (MethodInfo_24EE950 *)0x412ca7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca67 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_1c0 = (MethodInfo_24EE950 *)0x412ca9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_1c0 = (MethodInfo_24EE950 *)0x412caac;
    pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar10 = pMVar7;
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
    if (__this_04 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_04,iVar4,method_03);
      return;
    }
    pMStack_1c0 = (MethodInfo_24EE950 *)0x412cac7;
    uStack_1d0 = il2cpp_runtime_helper_022b2c90();
    pMStack_1c8 = __this_04;
    pMStack_1c0 = pMVar7;
    if (pMVar10 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca41 == '\0') {
        pMStack_1d8 = (MethodInfo_24EE950 *)0x412caf1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca41 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar10->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_1d8 = (MethodInfo_24EE950 *)0x412cb14;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_1d8 = (MethodInfo_24EE950 *)0x412cb31;
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                         (MethodInfo *)0x0);
      uStack_1d0 = CONCAT44(iVar4,(undefined4)uStack_1d0);
      pMStack_1d8 = (MethodInfo_24EE950 *)0x412cb4a;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1d0 + 4);
      return;
    }
    pMStack_1d8 = (MethodInfo_24EE950 *)0x412cb57;
    uStack_1e8 = il2cpp_runtime_helper_022b2c90();
    pMStack_1e0 = __this_04;
    pMStack_1d8 = pMVar7;
    if (pMVar10 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca42 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca42 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar10->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar4 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,
                         (MethodInfo *)0x0);
      uStack_1e8 = CONCAT44(iVar4,(undefined4)uStack_1e8);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1e8 + 4);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (pMVar10 == (MethodInfo_24EE950 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca68 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca68 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar10 != (MethodInfo_24EE950 *)0x0) {
        CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                  ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar10,pCVar6,method_04);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca69 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca69 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
      return;
    }
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar5 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar10->parameters,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar10->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  uStack_30 = __this_00;
  if (g_data_057aca30 == '\0') {
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c45;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  pPVar1 = (Photon_Realtime_Player_o *)(pSVar9->fields)._comparer;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c74;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c8e;
  iVar4 = PhotonExtensions__GetIntProperty
                    (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < iVar4) {
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128c9f;
    x = Photon_Pun_PhotonView__Find(iVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128cba;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128cc6;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (x == (Photon_Pun_PhotonView_o *)0x0) {
label_04128d62:
        pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128d67;
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128ce5;
      character = (Characters_BaseCharacter_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128cf9;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128d05;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (character == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(character->fields).FeedVictimName == '\0') {
          lVar2 = *(long *)&(character->fields).Dead;
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04128d62;
          if (*(System_Collections_Generic_IEqualityComparer_T__o **)(lVar2 + 0x80) ==
              (pSVar9->fields)._comparer) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x4128d53;
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c1d0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  long lVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  Characters_BaseCharacter_o *pCVar5;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CustomLogic_CustomLogicPlayerBuiltin_o *unaff_RBX;
  MethodInfo_24EE950 *pMVar11;
  MethodInfo_24EE950 *pMVar12;
  Characters_BaseCharacter_o *pCVar13;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  MethodInfo *__this_00;
  MethodInfo_24EE950 *pMVar14;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1d0;
  MethodInfo_24EE950 *pMStack_1c8;
  MethodInfo_24EE950 *pMStack_1c0;
  undefined8 uStack_1b8;
  MethodInfo_24EE950 *pMStack_1b0;
  MethodInfo_24EE950 *pMStack_1a8;
  undefined8 uStack_1a0;
  MethodInfo_24EE950 *pMStack_198;
  MethodInfo_24EE950 *pMStack_190;
  undefined8 uStack_188;
  MethodInfo_24EE950 *pMStack_180;
  MethodInfo_24EE950 *pMStack_178;
  undefined8 uStack_170;
  MethodInfo *pMStack_168;
  MethodInfo_24EE950 *pMStack_160;
  undefined8 uStack_158;
  MethodInfo *pMStack_150;
  MethodInfo_24EE950 *pMStack_148;
  undefined8 uStack_140;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_138;
  MethodInfo *pMStack_130;
  undefined8 uStack_128;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_120;
  MethodInfo *pMStack_118;
  undefined8 uStack_110;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_108;
  undefined8 uStack_f8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_f0;
  undefined1 uStack_21;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xfffffffffffffff7);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
       ((__i->fields).Player != (Photon_Realtime_Player_o *)0x0)) {
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffec);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    __this = __i;
    if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca31 == '\0') {
        __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
        il2cpp_runtime_helper_023445d0();
        g_data_057aca31 = '\x01';
      }
      pPVar1 = (__i->fields).Player;
      unaff_RBX = __i;
      if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
        pSVar9 = (pPVar1->fields).nickName;
        if (pSVar9 == (System_String_o *)0x0) {
          uStack_21 = 1;
        }
        else {
          bVar4 = System_String__StartsWith(pSVar9,"anon_",(MethodInfo *)0x0);
          uStack_21 = (undefined1)bVar4;
        }
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
        return pIVar8;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if ((__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
       (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
      return (Il2CppObject *)(pPVar1->fields).nickName;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca32 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca32 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca33 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca33 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca34 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca34 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca35 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca35 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca36 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca36 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca37 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca37 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca38 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aca38 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pSVar9;
    }
    uStack_f8 = il2cpp_runtime_helper_022b2c90();
    pCStack_f0 = unaff_RBX;
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (g_data_057aca39 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca39 = '\x01';
      }
      pPVar1 = (__this->fields).Player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                         (MethodInfo *)0x0);
      uStack_f8 = CONCAT44(iVar3,(undefined4)uStack_f8);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
      return pIVar8;
    }
    uStack_110 = il2cpp_runtime_helper_022b2c90();
    pCStack_108 = unaff_RBX;
    if (g_data_057aca64 == '\0') {
      pMStack_118 = (MethodInfo *)0x412c73f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_118 = (MethodInfo *)0x412c74b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca64 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_118 = (MethodInfo *)0x412c76a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_118 = (MethodInfo *)0x412c77c;
    pMVar11 = MethodInfo_Int32_ConvertTo_Int32;
    __this_00 = method;
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
    if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__this,iVar3,method_00);
      return extraout_RAX;
    }
    pMStack_118 = (MethodInfo *)0x412c797;
    uStack_128 = il2cpp_runtime_helper_022b2c90();
    pCStack_120 = __this;
    pMStack_118 = method;
    if (__this_00 != (MethodInfo *)0x0) {
      if (g_data_057aca3b == '\0') {
        pMStack_130 = (MethodInfo *)0x412c7c1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3b = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_130 = (MethodInfo *)0x412c7e4;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_130 = (MethodInfo *)0x412c7fe;
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                         (MethodInfo *)0x0);
      uStack_128 = CONCAT44(iVar3,(undefined4)uStack_128);
      pMStack_130 = (MethodInfo *)0x412c817;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_128 + 4);
      return pIVar8;
    }
    pMStack_130 = (MethodInfo *)0x412c824;
    uStack_140 = il2cpp_runtime_helper_022b2c90();
    pCStack_138 = __this;
    pMStack_130 = method;
    if (g_data_057aca65 == '\0') {
      pMStack_148 = (MethodInfo_24EE950 *)0x412c84f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_148 = (MethodInfo_24EE950 *)0x412c85b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca65 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_148 = (MethodInfo_24EE950 *)0x412c87a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_148 = (MethodInfo_24EE950 *)0x412c88c;
    pMVar12 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar14 = pMVar11;
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar11,MethodInfo_Int32_ConvertTo_Int32);
    if (__this_00 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar3,method_01);
      return extraout_RAX_00;
    }
    pMStack_148 = (MethodInfo_24EE950 *)0x412c8a7;
    uStack_158 = il2cpp_runtime_helper_022b2c90();
    pMStack_150 = __this_00;
    pMStack_148 = pMVar11;
    if (pMVar14 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca3d == '\0') {
        pMStack_160 = (MethodInfo_24EE950 *)0x412c8d1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3d = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar14->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_160 = (MethodInfo_24EE950 *)0x412c8f4;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_160 = (MethodInfo_24EE950 *)0x412c90e;
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                         (MethodInfo *)0x0);
      uStack_158 = CONCAT44(iVar3,(undefined4)uStack_158);
      pMStack_160 = (MethodInfo_24EE950 *)0x412c927;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_158 + 4);
      return pIVar8;
    }
    pMStack_160 = (MethodInfo_24EE950 *)0x412c934;
    uStack_170 = il2cpp_runtime_helper_022b2c90();
    pMStack_168 = __this_00;
    pMStack_160 = pMVar11;
    if (g_data_057aca66 == '\0') {
      pMStack_178 = (MethodInfo_24EE950 *)0x412c95f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_178 = (MethodInfo_24EE950 *)0x412c96b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca66 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_178 = (MethodInfo_24EE950 *)0x412c98a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_178 = (MethodInfo_24EE950 *)0x412c99c;
    pMVar11 = MethodInfo_Int32_ConvertTo_Int32;
    __this_01 = pMVar12;
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar12,MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar14 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar14,iVar3,method_02);
      return extraout_RAX_01;
    }
    pMStack_178 = (MethodInfo_24EE950 *)0x412c9b7;
    uStack_188 = il2cpp_runtime_helper_022b2c90();
    pMStack_180 = pMVar14;
    pMStack_178 = pMVar12;
    if (__this_01 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca3f == '\0') {
        pMStack_190 = (MethodInfo_24EE950 *)0x412c9e1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca3f = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_190 = (MethodInfo_24EE950 *)0x412ca04;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_190 = (MethodInfo_24EE950 *)0x412ca1e;
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                         (MethodInfo *)0x0);
      uStack_188 = CONCAT44(iVar3,(undefined4)uStack_188);
      pMStack_190 = (MethodInfo_24EE950 *)0x412ca37;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_188 + 4);
      return pIVar8;
    }
    pMStack_190 = (MethodInfo_24EE950 *)0x412ca44;
    uStack_1a0 = il2cpp_runtime_helper_022b2c90();
    pMStack_198 = pMVar14;
    pMStack_190 = pMVar12;
    if (g_data_057aca67 == '\0') {
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca67 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412ca9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_1a8 = (MethodInfo_24EE950 *)0x412caac;
    pMVar12 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar14 = pMVar11;
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar11,MethodInfo_Int32_ConvertTo_Int32);
    if (__this_01 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar3,method_03);
      return extraout_RAX_02;
    }
    pMStack_1a8 = (MethodInfo_24EE950 *)0x412cac7;
    uStack_1b8 = il2cpp_runtime_helper_022b2c90();
    pMStack_1b0 = __this_01;
    pMStack_1a8 = pMVar11;
    if (pMVar14 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca41 == '\0') {
        pMStack_1c0 = (MethodInfo_24EE950 *)0x412caf1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca41 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar14->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pMStack_1c0 = (MethodInfo_24EE950 *)0x412cb14;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_1c0 = (MethodInfo_24EE950 *)0x412cb31;
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                         (MethodInfo *)0x0);
      uStack_1b8 = CONCAT44(iVar3,(undefined4)uStack_1b8);
      pMStack_1c0 = (MethodInfo_24EE950 *)0x412cb4a;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1b8 + 4);
      return pIVar8;
    }
    pMStack_1c0 = (MethodInfo_24EE950 *)0x412cb57;
    uStack_1d0 = il2cpp_runtime_helper_022b2c90();
    pMStack_1c8 = __this_01;
    pMStack_1c0 = pMVar11;
    if (pMVar14 != (MethodInfo_24EE950 *)0x0) {
      if (g_data_057aca42 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        g_data_057aca42 = '\x01';
      }
      pPVar1 = (Photon_Realtime_Player_o *)pMVar14->parameters;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar3 = PhotonExtensions__GetIntProperty
                        (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,
                         (MethodInfo *)0x0);
      uStack_1d0 = CONCAT44(iVar3,(undefined4)uStack_1d0);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1d0 + 4);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if (pMVar14 == (MethodInfo_24EE950 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca68 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057aca68 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar12,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (pMVar14 != (MethodInfo_24EE950 *)0x0) {
        CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                  ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar14,pCVar10,method_04);
        return extraout_RAX_03;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aca69 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca69 = '\x01';
      }
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
      return pIVar8;
    }
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar4 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar14->parameters,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar14->parameters,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
    return (Il2CppObject *)0x0;
  }
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  pPVar1 = (__i->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar3 = PhotonExtensions__GetIntProperty
                    (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < iVar3) {
    pCVar5 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(iVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar13 = pCVar5;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar7 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar7 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar13->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar5 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar5,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar13 = pCVar5;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar5->fields).FeedVictimName == '\0') {
          lVar2 = *(long *)&(pCVar5->fields).Dead;
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04128d62;
          if (*(Photon_Realtime_Player_o **)(lVar2 + 0x80) == (__i->fields).Player) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar6 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar5,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar6;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Connected>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c1f0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CustomLogic_CustomLogicPlayerBuiltin_o *unaff_RBX;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  MethodInfo *__this_00;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1c8;
  MethodInfo_24EE950 *pMStack_1c0;
  MethodInfo_24EE950 *pMStack_1b8;
  undefined8 uStack_1b0;
  MethodInfo_24EE950 *pMStack_1a8;
  MethodInfo_24EE950 *pMStack_1a0;
  undefined8 uStack_198;
  MethodInfo_24EE950 *pMStack_190;
  MethodInfo_24EE950 *pMStack_188;
  undefined8 uStack_180;
  MethodInfo_24EE950 *pMStack_178;
  MethodInfo_24EE950 *pMStack_170;
  undefined8 uStack_168;
  MethodInfo *pMStack_160;
  MethodInfo_24EE950 *pMStack_158;
  undefined8 uStack_150;
  MethodInfo *pMStack_148;
  MethodInfo_24EE950 *pMStack_140;
  undefined8 uStack_138;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_130;
  MethodInfo *pMStack_128;
  undefined8 uStack_120;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_118;
  MethodInfo *pMStack_110;
  undefined8 uStack_108;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_100;
  undefined8 uStack_f0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_e8;
  undefined1 uStack_19;
  undefined8 uStack_10;
  undefined7 uStack_8;
  bool bStack_1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    _uStack_8 = CONCAT17((__i->fields).Player != (Photon_Realtime_Player_o *)0x0,(int7)in_RAX);
    uStack_10 = 0x412c215;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&bStack_1);
    return pIVar4;
  }
  uStack_10 = 0x412c21c;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    uStack_10 = CONCAT44((pPVar1->fields).actorNumber,(undefined4)uStack_10);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_10 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  __this = __i;
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca31 == '\0') {
      __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
      il2cpp_runtime_helper_023445d0();
      g_data_057aca31 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    unaff_RBX = __i;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      pSVar5 = (pPVar1->fields).nickName;
      if (pSVar5 == (System_String_o *)0x0) {
        uStack_19 = 1;
      }
      else {
        bVar2 = System_String__StartsWith(pSVar5,"anon_",(MethodInfo *)0x0);
        uStack_19 = (undefined1)bVar2;
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca32 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pCStack_e8 = unaff_RBX;
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar3,(undefined4)uStack_f0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar4;
  }
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pCStack_100 = unaff_RBX;
  if (g_data_057aca64 == '\0') {
    pMStack_110 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_110 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_110 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_110 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = method;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__this,iVar3,method_00);
    return extraout_RAX;
  }
  pMStack_110 = (MethodInfo *)0x412c797;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pCStack_118 = __this;
  pMStack_110 = method;
  if (__this_00 != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_128 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_128 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_128 = (MethodInfo *)0x412c7fe;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_120 = CONCAT44(iVar3,(undefined4)uStack_120);
    pMStack_128 = (MethodInfo *)0x412c817;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_120 + 4);
    return pIVar4;
  }
  pMStack_128 = (MethodInfo *)0x412c824;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pCStack_130 = __this;
  pMStack_128 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_140 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_140 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_140 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar3,method_01);
    return extraout_RAX_00;
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMStack_148 = __this_00;
  pMStack_140 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_158 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_158 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_158 = (MethodInfo_24EE950 *)0x412c90e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_150 = CONCAT44(iVar3,(undefined4)uStack_150);
    pMStack_158 = (MethodInfo_24EE950 *)0x412c927;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_150 + 4);
    return pIVar4;
  }
  pMStack_158 = (MethodInfo_24EE950 *)0x412c934;
  uStack_168 = il2cpp_runtime_helper_022b2c90();
  pMStack_160 = __this_00;
  pMStack_158 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_170 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_170 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_170 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_170 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = pMVar8;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar3,method_02);
    return extraout_RAX_01;
  }
  pMStack_170 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_180 = il2cpp_runtime_helper_022b2c90();
  pMStack_178 = pMVar9;
  pMStack_170 = pMVar8;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_188 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_188 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_188 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_180 = CONCAT44(iVar3,(undefined4)uStack_180);
    pMStack_188 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_180 + 4);
    return pIVar4;
  }
  pMStack_188 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_198 = il2cpp_runtime_helper_022b2c90();
  pMStack_190 = pMVar9;
  pMStack_188 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_1a0 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_1a0 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_1a0 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_1a0 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar3,method_03);
    return extraout_RAX_02;
  }
  pMStack_1a0 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_1b0 = il2cpp_runtime_helper_022b2c90();
  pMStack_1a8 = __this_01;
  pMStack_1a0 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_1b8 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_1b8 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_1b8 = (MethodInfo_24EE950 *)0x412cb31;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_1b0 = CONCAT44(iVar3,(undefined4)uStack_1b0);
    pMStack_1b8 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1b0 + 4);
    return pIVar4;
  }
  pMStack_1b8 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_1c8 = il2cpp_runtime_helper_022b2c90();
  pMStack_1c0 = __this_01;
  pMStack_1b8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_1c8 = CONCAT44(iVar3,(undefined4)uStack_1c8);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1c8 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
      return extraout_RAX_03;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar2 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar6;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c220

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CustomLogic_CustomLogicPlayerBuiltin_o *unaff_RBX;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  MethodInfo *__this_00;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1c0;
  MethodInfo_24EE950 *pMStack_1b8;
  MethodInfo_24EE950 *pMStack_1b0;
  undefined8 uStack_1a8;
  MethodInfo_24EE950 *pMStack_1a0;
  MethodInfo_24EE950 *pMStack_198;
  undefined8 uStack_190;
  MethodInfo_24EE950 *pMStack_188;
  MethodInfo_24EE950 *pMStack_180;
  undefined8 uStack_178;
  MethodInfo_24EE950 *pMStack_170;
  MethodInfo_24EE950 *pMStack_168;
  undefined8 uStack_160;
  MethodInfo *pMStack_158;
  MethodInfo_24EE950 *pMStack_150;
  undefined8 uStack_148;
  MethodInfo *pMStack_140;
  MethodInfo_24EE950 *pMStack_138;
  undefined8 uStack_130;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_128;
  MethodInfo *pMStack_120;
  undefined8 uStack_118;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_110;
  MethodInfo *pMStack_108;
  undefined8 uStack_100;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_f8;
  undefined8 uStack_e8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_e0;
  undefined1 uStack_11;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     ((__i->fields).Player != (Photon_Realtime_Player_o *)0x0)) {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  __this = __i;
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca31 == '\0') {
      __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
      il2cpp_runtime_helper_023445d0();
      g_data_057aca31 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    unaff_RBX = __i;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      pSVar5 = (pPVar1->fields).nickName;
      if (pSVar5 == (System_String_o *)0x0) {
        uStack_11 = 1;
      }
      else {
        bVar2 = System_String__StartsWith(pSVar5,"anon_",(MethodInfo *)0x0);
        uStack_11 = (undefined1)bVar2;
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_11);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca32 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  uStack_e8 = il2cpp_runtime_helper_022b2c90();
  pCStack_e0 = unaff_RBX;
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_e8 = CONCAT44(iVar3,(undefined4)uStack_e8);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e8 + 4);
    return pIVar4;
  }
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  pCStack_f8 = unaff_RBX;
  if (g_data_057aca64 == '\0') {
    pMStack_108 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_108 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_108 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_108 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = method;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__this,iVar3,method_00);
    return extraout_RAX;
  }
  pMStack_108 = (MethodInfo *)0x412c797;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  pCStack_110 = __this;
  pMStack_108 = method;
  if (__this_00 != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_120 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_120 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_120 = (MethodInfo *)0x412c7fe;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_118 = CONCAT44(iVar3,(undefined4)uStack_118);
    pMStack_120 = (MethodInfo *)0x412c817;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_118 + 4);
    return pIVar4;
  }
  pMStack_120 = (MethodInfo *)0x412c824;
  uStack_130 = il2cpp_runtime_helper_022b2c90();
  pCStack_128 = __this;
  pMStack_120 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_138 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_138 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_138 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_138 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar3,method_01);
    return extraout_RAX_00;
  }
  pMStack_138 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_148 = il2cpp_runtime_helper_022b2c90();
  pMStack_140 = __this_00;
  pMStack_138 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_150 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_150 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_150 = (MethodInfo_24EE950 *)0x412c90e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_148 = CONCAT44(iVar3,(undefined4)uStack_148);
    pMStack_150 = (MethodInfo_24EE950 *)0x412c927;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_148 + 4);
    return pIVar4;
  }
  pMStack_150 = (MethodInfo_24EE950 *)0x412c934;
  uStack_160 = il2cpp_runtime_helper_022b2c90();
  pMStack_158 = __this_00;
  pMStack_150 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_168 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_168 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_168 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_168 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = pMVar8;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar3,method_02);
    return extraout_RAX_01;
  }
  pMStack_168 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_178 = il2cpp_runtime_helper_022b2c90();
  pMStack_170 = pMVar9;
  pMStack_168 = pMVar8;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_180 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_180 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_180 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_178 = CONCAT44(iVar3,(undefined4)uStack_178);
    pMStack_180 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_178 + 4);
    return pIVar4;
  }
  pMStack_180 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_190 = il2cpp_runtime_helper_022b2c90();
  pMStack_188 = pMVar9;
  pMStack_180 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_198 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_198 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_198 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_198 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar3,method_03);
    return extraout_RAX_02;
  }
  pMStack_198 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_1a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_1a0 = __this_01;
  pMStack_198 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_1b0 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_1b0 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_1b0 = (MethodInfo_24EE950 *)0x412cb31;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_1a8 = CONCAT44(iVar3,(undefined4)uStack_1a8);
    pMStack_1b0 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1a8 + 4);
    return pIVar4;
  }
  pMStack_1b0 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_1c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_1b8 = __this_01;
  pMStack_1b0 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_1c0 = CONCAT44(iVar3,(undefined4)uStack_1c0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1c0 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
      return extraout_RAX_03;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar2 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar6;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsAnonymous>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c260

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CustomLogic_CustomLogicPlayerBuiltin_o *unaff_RBX;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  MethodInfo *__this_00;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1b8;
  MethodInfo_24EE950 *pMStack_1b0;
  MethodInfo_24EE950 *pMStack_1a8;
  undefined8 uStack_1a0;
  MethodInfo_24EE950 *pMStack_198;
  MethodInfo_24EE950 *pMStack_190;
  undefined8 uStack_188;
  MethodInfo_24EE950 *pMStack_180;
  MethodInfo_24EE950 *pMStack_178;
  undefined8 uStack_170;
  MethodInfo_24EE950 *pMStack_168;
  MethodInfo_24EE950 *pMStack_160;
  undefined8 uStack_158;
  MethodInfo *pMStack_150;
  MethodInfo_24EE950 *pMStack_148;
  undefined8 uStack_140;
  MethodInfo *pMStack_138;
  MethodInfo_24EE950 *pMStack_130;
  undefined8 uStack_128;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_120;
  MethodInfo *pMStack_118;
  undefined8 uStack_110;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_108;
  MethodInfo *pMStack_100;
  undefined8 uStack_f8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_f0;
  undefined8 uStack_e0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_d8;
  undefined1 local_9;
  
  __this = __i;
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca31 == '\0') {
      __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
      il2cpp_runtime_helper_023445d0();
      g_data_057aca31 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    unaff_RBX = __i;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      pSVar5 = (pPVar1->fields).nickName;
      if (pSVar5 == (System_String_o *)0x0) {
        local_9 = 1;
      }
      else {
        bVar2 = System_String__StartsWith(pSVar5,"anon_",(MethodInfo *)0x0);
        local_9 = (undefined1)bVar2;
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca32 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pCStack_d8 = unaff_RBX;
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_e0 = CONCAT44(iVar3,(undefined4)uStack_e0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e0 + 4);
    return pIVar4;
  }
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  pCStack_f0 = unaff_RBX;
  if (g_data_057aca64 == '\0') {
    pMStack_100 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_100 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_100 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_100 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = method;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__this,iVar3,method_00);
    return extraout_RAX;
  }
  pMStack_100 = (MethodInfo *)0x412c797;
  uStack_110 = il2cpp_runtime_helper_022b2c90();
  pCStack_108 = __this;
  pMStack_100 = method;
  if (__this_00 != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_118 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_118 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_118 = (MethodInfo *)0x412c7fe;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_110 = CONCAT44(iVar3,(undefined4)uStack_110);
    pMStack_118 = (MethodInfo *)0x412c817;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_110 + 4);
    return pIVar4;
  }
  pMStack_118 = (MethodInfo *)0x412c824;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  pCStack_120 = __this;
  pMStack_118 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_130 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_130 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_130 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_130 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar3,method_01);
    return extraout_RAX_00;
  }
  pMStack_130 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_140 = il2cpp_runtime_helper_022b2c90();
  pMStack_138 = __this_00;
  pMStack_130 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_148 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_148 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_148 = (MethodInfo_24EE950 *)0x412c90e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_140 = CONCAT44(iVar3,(undefined4)uStack_140);
    pMStack_148 = (MethodInfo_24EE950 *)0x412c927;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_140 + 4);
    return pIVar4;
  }
  pMStack_148 = (MethodInfo_24EE950 *)0x412c934;
  uStack_158 = il2cpp_runtime_helper_022b2c90();
  pMStack_150 = __this_00;
  pMStack_148 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_160 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_160 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_160 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_160 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = pMVar8;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar3,method_02);
    return extraout_RAX_01;
  }
  pMStack_160 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_170 = il2cpp_runtime_helper_022b2c90();
  pMStack_168 = pMVar9;
  pMStack_160 = pMVar8;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_178 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_178 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_178 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_170 = CONCAT44(iVar3,(undefined4)uStack_170);
    pMStack_178 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_170 + 4);
    return pIVar4;
  }
  pMStack_178 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_188 = il2cpp_runtime_helper_022b2c90();
  pMStack_180 = pMVar9;
  pMStack_178 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_190 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_190 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_190 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_190 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar3,method_03);
    return extraout_RAX_02;
  }
  pMStack_190 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_1a0 = il2cpp_runtime_helper_022b2c90();
  pMStack_198 = __this_01;
  pMStack_190 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_1a8 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_1a8 = (MethodInfo_24EE950 *)0x412cb31;
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_1a0 = CONCAT44(iVar3,(undefined4)uStack_1a0);
    pMStack_1a8 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1a0 + 4);
    return pIVar4;
  }
  pMStack_1a8 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_1b8 = il2cpp_runtime_helper_022b2c90();
  pMStack_1b0 = __this_01;
  pMStack_1a8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_1b8 = CONCAT44(iVar3,(undefined4)uStack_1b8);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1b8 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
      return extraout_RAX_03;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar2 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar6;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__UserID>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c2e0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_1a0;
  MethodInfo_24EE950 *pMStack_198;
  MethodInfo_24EE950 *pMStack_190;
  undefined8 uStack_188;
  MethodInfo_24EE950 *pMStack_180;
  MethodInfo_24EE950 *pMStack_178;
  undefined8 uStack_170;
  MethodInfo_24EE950 *pMStack_168;
  MethodInfo_24EE950 *pMStack_160;
  undefined8 uStack_158;
  MethodInfo_24EE950 *pMStack_150;
  MethodInfo_24EE950 *pMStack_148;
  undefined8 uStack_140;
  MethodInfo *pMStack_138;
  MethodInfo_24EE950 *pMStack_130;
  undefined8 uStack_128;
  MethodInfo *pMStack_120;
  MethodInfo_24EE950 *pMStack_118;
  undefined8 uStack_110;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_108;
  MethodInfo *pMStack_100;
  undefined8 uStack_f8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_f0;
  MethodInfo *pMStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca32 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_c8 = CONCAT44(iVar2,(undefined4)uStack_c8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c8 + 4);
    return pIVar5;
  }
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_e8 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_e8 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_e8 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_e8 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_e8 = (MethodInfo *)0x412c797;
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  pCStack_f0 = __i;
  pMStack_e8 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_100 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_100 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_100 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_f8 = CONCAT44(iVar2,(undefined4)uStack_f8);
    pMStack_100 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
    return pIVar5;
  }
  pMStack_100 = (MethodInfo *)0x412c824;
  uStack_110 = il2cpp_runtime_helper_022b2c90();
  pCStack_108 = __i;
  pMStack_100 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_118 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_118 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_118 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_118 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_118 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  pMStack_120 = __this;
  pMStack_118 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_130 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_130 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_130 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_128 = CONCAT44(iVar2,(undefined4)uStack_128);
    pMStack_130 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_128 + 4);
    return pIVar5;
  }
  pMStack_130 = (MethodInfo_24EE950 *)0x412c934;
  uStack_140 = il2cpp_runtime_helper_022b2c90();
  pMStack_138 = __this;
  pMStack_130 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_148 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_148 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_148 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_148 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_148 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_158 = il2cpp_runtime_helper_022b2c90();
  pMStack_150 = pMVar9;
  pMStack_148 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_160 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_160 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_160 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_158 = CONCAT44(iVar2,(undefined4)uStack_158);
    pMStack_160 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_158 + 4);
    return pIVar5;
  }
  pMStack_160 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_170 = il2cpp_runtime_helper_022b2c90();
  pMStack_168 = pMVar9;
  pMStack_160 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_178 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_178 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_178 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_178 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_178 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_188 = il2cpp_runtime_helper_022b2c90();
  pMStack_180 = __this_00;
  pMStack_178 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_190 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_190 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_190 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_188 = CONCAT44(iVar2,(undefined4)uStack_188);
    pMStack_190 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_188 + 4);
    return pIVar5;
  }
  pMStack_190 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_1a0 = il2cpp_runtime_helper_022b2c90();
  pMStack_198 = __this_00;
  pMStack_190 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_1a0 = CONCAT44(iVar2,(undefined4)uStack_1a0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_1a0 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c300

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_198;
  MethodInfo_24EE950 *pMStack_190;
  MethodInfo_24EE950 *pMStack_188;
  undefined8 uStack_180;
  MethodInfo_24EE950 *pMStack_178;
  MethodInfo_24EE950 *pMStack_170;
  undefined8 uStack_168;
  MethodInfo_24EE950 *pMStack_160;
  MethodInfo_24EE950 *pMStack_158;
  undefined8 uStack_150;
  MethodInfo_24EE950 *pMStack_148;
  MethodInfo_24EE950 *pMStack_140;
  undefined8 uStack_138;
  MethodInfo *pMStack_130;
  MethodInfo_24EE950 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_100;
  MethodInfo *pMStack_f8;
  undefined8 uStack_f0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca32 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return pIVar5;
  }
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_e0 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_e0 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_e0 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_e0 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_e0 = (MethodInfo *)0x412c797;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pCStack_e8 = __i;
  pMStack_e0 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_f8 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar2,(undefined4)uStack_f0);
    pMStack_f8 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar5;
  }
  pMStack_f8 = (MethodInfo *)0x412c824;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pCStack_100 = __i;
  pMStack_f8 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_110 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_110 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_110 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = __this;
  pMStack_110 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_128 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_128 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_128 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_120 = CONCAT44(iVar2,(undefined4)uStack_120);
    pMStack_128 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_120 + 4);
    return pIVar5;
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412c934;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMStack_130 = __this;
  pMStack_128 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_140 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_140 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_140 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMStack_148 = pMVar9;
  pMStack_140 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_158 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_158 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_158 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_150 = CONCAT44(iVar2,(undefined4)uStack_150);
    pMStack_158 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_150 + 4);
    return pIVar5;
  }
  pMStack_158 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_168 = il2cpp_runtime_helper_022b2c90();
  pMStack_160 = pMVar9;
  pMStack_158 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_170 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_170 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_170 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_170 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_170 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_180 = il2cpp_runtime_helper_022b2c90();
  pMStack_178 = __this_00;
  pMStack_170 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_188 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_188 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_188 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_180 = CONCAT44(iVar2,(undefined4)uStack_180);
    pMStack_188 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_180 + 4);
    return pIVar5;
  }
  pMStack_188 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_198 = il2cpp_runtime_helper_022b2c90();
  pMStack_190 = __this_00;
  pMStack_188 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_198 = CONCAT44(iVar2,(undefined4)uStack_198);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_198 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__DisplayName>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c380

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_180;
  MethodInfo_24EE950 *pMStack_178;
  MethodInfo_24EE950 *pMStack_170;
  undefined8 uStack_168;
  MethodInfo_24EE950 *pMStack_160;
  MethodInfo_24EE950 *pMStack_158;
  undefined8 uStack_150;
  MethodInfo_24EE950 *pMStack_148;
  MethodInfo_24EE950 *pMStack_140;
  undefined8 uStack_138;
  MethodInfo_24EE950 *pMStack_130;
  MethodInfo_24EE950 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  MethodInfo *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca33 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca33 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar5;
  }
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_c8 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_c8 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c8 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c8 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_c8 = (MethodInfo *)0x412c797;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pCStack_d0 = __i;
  pMStack_c8 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_e0 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_d8 = CONCAT44(iVar2,(undefined4)uStack_d8);
    pMStack_e0 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return pIVar5;
  }
  pMStack_e0 = (MethodInfo *)0x412c824;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pCStack_e8 = __i;
  pMStack_e0 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = __this;
  pMStack_f8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_110 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_110 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_110 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_108 = CONCAT44(iVar2,(undefined4)uStack_108);
    pMStack_110 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_108 + 4);
    return pIVar5;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412c934;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = __this;
  pMStack_110 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_128 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_128 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_128 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMStack_130 = pMVar9;
  pMStack_128 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_140 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_140 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_140 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_138 = CONCAT44(iVar2,(undefined4)uStack_138);
    pMStack_140 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_138 + 4);
    return pIVar5;
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMStack_148 = pMVar9;
  pMStack_140 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_158 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_158 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_158 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_158 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_158 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_168 = il2cpp_runtime_helper_022b2c90();
  pMStack_160 = __this_00;
  pMStack_158 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_170 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_170 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_170 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_168 = CONCAT44(iVar2,(undefined4)uStack_168);
    pMStack_170 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_168 + 4);
    return pIVar5;
  }
  pMStack_170 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_180 = il2cpp_runtime_helper_022b2c90();
  pMStack_178 = __this_00;
  pMStack_170 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_180 = CONCAT44(iVar2,(undefined4)uStack_180);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_180 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c410

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_168;
  MethodInfo_24EE950 *pMStack_160;
  MethodInfo_24EE950 *pMStack_158;
  undefined8 uStack_150;
  MethodInfo_24EE950 *pMStack_148;
  MethodInfo_24EE950 *pMStack_140;
  undefined8 uStack_138;
  MethodInfo_24EE950 *pMStack_130;
  MethodInfo_24EE950 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo_24EE950 *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  MethodInfo *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  MethodInfo *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca34 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca34 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return pIVar5;
  }
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_b0 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_b0 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_b0 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_b0 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_b0 = (MethodInfo *)0x412c797;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pCStack_b8 = __i;
  pMStack_b0 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_c8 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pMStack_c8 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return pIVar5;
  }
  pMStack_c8 = (MethodInfo *)0x412c824;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pCStack_d0 = __i;
  pMStack_c8 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = __this;
  pMStack_e0 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar2,(undefined4)uStack_f0);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar5;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412c934;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = __this;
  pMStack_f8 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_110 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_110 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_110 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = pMVar9;
  pMStack_110 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_128 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_128 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_128 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_120 = CONCAT44(iVar2,(undefined4)uStack_120);
    pMStack_128 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_120 + 4);
    return pIVar5;
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMStack_130 = pMVar9;
  pMStack_128 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_140 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_140 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_140 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMStack_148 = __this_00;
  pMStack_140 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_158 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_158 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_158 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_150 = CONCAT44(iVar2,(undefined4)uStack_150);
    pMStack_158 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_150 + 4);
    return pIVar5;
  }
  pMStack_158 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_168 = il2cpp_runtime_helper_022b2c90();
  pMStack_160 = __this_00;
  pMStack_158 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_168 = CONCAT44(iVar2,(undefined4)uStack_168);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_168 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c490

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_150;
  MethodInfo_24EE950 *pMStack_148;
  MethodInfo_24EE950 *pMStack_140;
  undefined8 uStack_138;
  MethodInfo_24EE950 *pMStack_130;
  MethodInfo_24EE950 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo_24EE950 *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  MethodInfo_24EE950 *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  MethodInfo *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  MethodInfo *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca35 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar5;
  }
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_98 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_98 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_98 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_98 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_98 = (MethodInfo *)0x412c797;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pCStack_a0 = __i;
  pMStack_98 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_b0 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar5;
  }
  pMStack_b0 = (MethodInfo *)0x412c824;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pCStack_b8 = __i;
  pMStack_b0 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = __this;
  pMStack_c8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_d8 = CONCAT44(iVar2,(undefined4)uStack_d8);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return pIVar5;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412c934;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = __this;
  pMStack_e0 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = pMVar9;
  pMStack_f8 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_110 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_110 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_110 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_108 = CONCAT44(iVar2,(undefined4)uStack_108);
    pMStack_110 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_108 + 4);
    return pIVar5;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = pMVar9;
  pMStack_110 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_128 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_128 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_128 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMStack_130 = __this_00;
  pMStack_128 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_140 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_140 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_140 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_138 = CONCAT44(iVar2,(undefined4)uStack_138);
    pMStack_140 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_138 + 4);
    return pIVar5;
  }
  pMStack_140 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMStack_148 = __this_00;
  pMStack_140 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_150 = CONCAT44(iVar2,(undefined4)uStack_150);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_150 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Status>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c510

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_138;
  MethodInfo_24EE950 *pMStack_130;
  MethodInfo_24EE950 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo_24EE950 *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  MethodInfo_24EE950 *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  MethodInfo_24EE950 *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  MethodInfo *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  MethodInfo *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca36 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return pIVar5;
  }
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_80 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_80 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_80 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_80 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_80 = (MethodInfo *)0x412c797;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pCStack_88 = __i;
  pMStack_80 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_98 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pMStack_98 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return pIVar5;
  }
  pMStack_98 = (MethodInfo *)0x412c824;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pCStack_a0 = __i;
  pMStack_98 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = __this;
  pMStack_b0 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return pIVar5;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412c934;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = __this;
  pMStack_c8 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = pMVar9;
  pMStack_e0 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar2,(undefined4)uStack_f0);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar5;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = pMVar9;
  pMStack_f8 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_110 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_110 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_110 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = __this_00;
  pMStack_110 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_128 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_128 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_128 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_120 = CONCAT44(iVar2,(undefined4)uStack_120);
    pMStack_128 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_120 + 4);
    return pIVar5;
  }
  pMStack_128 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMStack_130 = __this_00;
  pMStack_128 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_138 = CONCAT44(iVar2,(undefined4)uStack_138);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_138 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__CharacterType>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c590

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_120;
  MethodInfo_24EE950 *pMStack_118;
  MethodInfo_24EE950 *pMStack_110;
  undefined8 uStack_108;
  MethodInfo_24EE950 *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  MethodInfo_24EE950 *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  MethodInfo_24EE950 *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  MethodInfo *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  MethodInfo *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca37 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca37 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar5;
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_68 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_68 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_68 = (MethodInfo *)0x412c797;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __i;
  pMStack_68 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_80 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    pMStack_80 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar5;
  }
  pMStack_80 = (MethodInfo *)0x412c824;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pCStack_88 = __i;
  pMStack_80 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_98 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_98 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_98 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = __this;
  pMStack_98 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar5;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412c934;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = __this;
  pMStack_b0 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = pMVar9;
  pMStack_c8 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_d8 = CONCAT44(iVar2,(undefined4)uStack_d8);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return pIVar5;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = pMVar9;
  pMStack_e0 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_f8 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = __this_00;
  pMStack_f8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_110 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_110 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_110 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_108 = CONCAT44(iVar2,(undefined4)uStack_108);
    pMStack_110 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_108 + 4);
    return pIVar5;
  }
  pMStack_110 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = __this_00;
  pMStack_110 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_120 = CONCAT44(iVar2,(undefined4)uStack_120);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_120 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Loadout>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c610

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar9;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_108;
  MethodInfo_24EE950 *pMStack_100;
  MethodInfo_24EE950 *pMStack_f8;
  undefined8 uStack_f0;
  MethodInfo_24EE950 *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  MethodInfo_24EE950 *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EE950 *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  MethodInfo *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aca38 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return pIVar5;
  }
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_50 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_50 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_50 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_50 = (MethodInfo *)0x412c77c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_50 = (MethodInfo *)0x412c797;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __i;
  pMStack_50 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_68 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo *)0x412c817;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return pIVar5;
  }
  pMStack_68 = (MethodInfo *)0x412c824;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __i;
  pMStack_68 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_80 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_80 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_80 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = __this;
  pMStack_80 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_98 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_98 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pMStack_98 = (MethodInfo_24EE950 *)0x412c927;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return pIVar5;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412c934;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = __this;
  pMStack_98 = pMVar7;
  if (g_data_057aca66 == '\0') {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar8;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar8,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar9;
  pMStack_b0 = pMVar8;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return pIVar5;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = pMVar9;
  pMStack_c8 = pMVar8;
  if (g_data_057aca67 == '\0') {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_e0 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412caac;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = __this_00;
  pMStack_e0 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar2,(undefined4)uStack_f0);
    pMStack_f8 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar5;
  }
  pMStack_f8 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMStack_100 = __this_00;
  pMStack_f8 = pMVar7;
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar9->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_108 = CONCAT44(iVar2,(undefined4)uStack_108);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_108 + 4);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar9->parameters,(MethodInfo *)0x0);
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar8,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar9 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar9,pCVar6,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c690

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar6;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo *__this;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_f0;
  MethodInfo_24EE950 *pMStack_e8;
  MethodInfo_24EE950 *pMStack_e0;
  undefined8 uStack_d8;
  MethodInfo_24EE950 *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EE950 *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  MethodInfo_24EE950 *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  MethodInfo *pMStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca39 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca64 == '\0') {
    pMStack_38 = (MethodInfo *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_38 = (MethodInfo *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_38 = (MethodInfo *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_38 = (MethodInfo *)0x412c77c;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_38 = (MethodInfo *)0x412c797;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pMStack_38 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3b == '\0') {
      pMStack_50 = (MethodInfo *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x412c817;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar4;
  }
  pMStack_50 = (MethodInfo *)0x412c824;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __i;
  pMStack_50 = method;
  if (g_data_057aca65 == '\0') {
    pMStack_68 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_68 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar8 = pMVar6;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar6,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = __this;
  pMStack_68 = pMVar6;
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_80 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar8->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_80 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    pMStack_80 = (MethodInfo_24EE950 *)0x412c927;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar4;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412c934;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = __this;
  pMStack_80 = pMVar6;
  if (g_data_057aca66 == '\0') {
    pMStack_98 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_98 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_98 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar7;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar8,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = pMVar8;
  pMStack_98 = pMVar7;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar4;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar8;
  pMStack_b0 = pMVar7;
  if (g_data_057aca67 == '\0') {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_c8 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412caac;
  pMVar7 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar8 = pMVar6;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar6,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_03);
    return extraout_RAX_02;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = __this_00;
  pMStack_c8 = pMVar6;
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar8->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_d8 = CONCAT44(iVar2,(undefined4)uStack_d8);
    pMStack_e0 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return pIVar4;
  }
  pMStack_e0 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = __this_00;
  pMStack_e0 = pMVar6;
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar8->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_f0 = CONCAT44(iVar2,(undefined4)uStack_f0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f0 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar8->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar8->parameters,(MethodInfo *)0x0);
      pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar5;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar7,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar8,pCVar5,method_04);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412c720

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  Il2CppObject *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo_24EE950 *pMVar5;
  MethodInfo_24EE950 *pMVar6;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  MethodInfo_24EE950 *pMVar7;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_d8;
  MethodInfo_24EE950 *pMStack_d0;
  MethodInfo_24EE950 *pMStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EE950 *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  MethodInfo_24EE950 *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  MethodInfo_24EE950 *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo_24EE950 *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057aca64 == '\0') {
    pIStack_20 = (Il2CppObject *)0x412c73f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pIStack_20 = (Il2CppObject *)0x412c74b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_20 = (Il2CppObject *)0x412c76a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_20 = (Il2CppObject *)0x412c77c;
  pMVar5 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)__v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,iVar2,method_00);
    return;
  }
  pIStack_20 = (Il2CppObject *)0x412c797;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  pIStack_20 = __v;
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3b == '\0') {
      pIStack_38 = (Il2CppObject *)0x412c7c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (__this_00->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pIStack_38 = (Il2CppObject *)0x412c7e4;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_38 = (Il2CppObject *)0x412c7fe;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIStack_38 = (Il2CppObject *)0x412c817;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return;
  }
  pIStack_38 = (Il2CppObject *)0x412c824;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pIStack_38 = __v;
  if (g_data_057aca65 == '\0') {
    pMStack_50 = (MethodInfo_24EE950 *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_50 = (MethodInfo_24EE950 *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_50 = (MethodInfo_24EE950 *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412c88c;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = pMVar5;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar5,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths(__this_00,iVar2,method_01);
    return;
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412c8a7;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __this_00;
  pMStack_50 = pMVar5;
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_68 = (MethodInfo_24EE950 *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar7->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_68 = (MethodInfo_24EE950 *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo_24EE950 *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EE950 *)0x412c927;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412c934;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __this_00;
  pMStack_68 = pMVar5;
  if (g_data_057aca66 == '\0') {
    pMStack_80 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_80 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_80 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412c99c;
  pMVar5 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = pMVar6;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar6,MethodInfo_Int32_ConvertTo_Int32);
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar7,iVar2,method_02);
    return;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = pMVar7;
  pMStack_80 = pMVar6;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_98 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_98 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pMStack_98 = (MethodInfo_24EE950 *)0x412ca37;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = pMVar7;
  pMStack_98 = pMVar6;
  if (g_data_057aca67 == '\0') {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_b0 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412caac;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = pMVar5;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar5,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar2,method_03);
    return;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = __this_01;
  pMStack_b0 = pMVar5;
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar7->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pMStack_c8 = (MethodInfo_24EE950 *)0x412cb4a;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return;
  }
  pMStack_c8 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = __this_01;
  pMStack_c8 = pMVar5;
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)pMVar7->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_d8 = CONCAT44(iVar2,(undefined4)uStack_d8);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)pMVar7->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)pMVar7->parameters,(MethodInfo *)0x0);
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar6,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (pMVar7 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)pMVar7,pCVar4,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c7a0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo_24EE950 *pMVar6;
  MethodInfo_24EE950 *obj;
  MethodInfo *__this;
  MethodInfo_24EE950 *__this_00;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_c0;
  MethodInfo_24EE950 *pMStack_b8;
  MethodInfo_24EE950 *pMStack_b0;
  undefined8 uStack_a8;
  MethodInfo_24EE950 *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  MethodInfo *pMStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3b = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca65 == '\0') {
    pMStack_38 = (MethodInfo *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_38 = (MethodInfo *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_38 = (MethodInfo *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_38 = (MethodInfo *)0x412c88c;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_38 = (MethodInfo *)0x412c8a7;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pMStack_38 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3d == '\0') {
      pMStack_50 = (MethodInfo *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x412c927;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar4;
  }
  pMStack_50 = (MethodInfo *)0x412c934;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __i;
  pMStack_50 = method;
  if (g_data_057aca66 == '\0') {
    pMStack_68 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_68 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412c99c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = pMVar6;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar6,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = __this;
  pMStack_68 = pMVar6;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_80 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_80 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    pMStack_80 = (MethodInfo_24EE950 *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar4;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = __this;
  pMStack_80 = pMVar6;
  if (g_data_057aca67 == '\0') {
    pMStack_98 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_98 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_98 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412caac;
  pMVar6 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = obj;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,iVar2,method_02);
    return extraout_RAX_01;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = __this_00;
  pMStack_98 = obj;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar4;
  }
  pMStack_b0 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = __this_00;
  pMStack_b0 = obj;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_c0 = CONCAT44(iVar2,(undefined4)uStack_c0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar6,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (__this_01 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,pCVar5,method_03);
      return extraout_RAX_02;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)__this_01->parameters,(MethodInfo *)0x0)
  ;
  if ((char)bVar3 != '\0') {
    value = PhotonExtensions__GetSpawnPoint
                      ((Photon_Realtime_Player_o *)__this_01->parameters,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar5;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412c830

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  Il2CppObject *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo_24EE950 *pMVar5;
  MethodInfo_24EE950 *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  MethodInfo_24EE950 *__this_01;
  MethodInfo_24EE950 *__this_02;
  UnityEngine_Vector3_o value;
  undefined8 uStack_a8;
  MethodInfo_24EE950 *pMStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  MethodInfo_24EE950 *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo_24EE950 *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057aca65 == '\0') {
    pIStack_20 = (Il2CppObject *)0x412c84f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pIStack_20 = (Il2CppObject *)0x412c85b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_20 = (Il2CppObject *)0x412c87a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_20 = (Il2CppObject *)0x412c88c;
  pMVar5 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)__v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_Deaths(__i,iVar2,method_00);
    return;
  }
  pIStack_20 = (Il2CppObject *)0x412c8a7;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  pIStack_20 = __v;
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3d == '\0') {
      pIStack_38 = (Il2CppObject *)0x412c8d1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (__this_00->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pIStack_38 = (Il2CppObject *)0x412c8f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_38 = (Il2CppObject *)0x412c90e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIStack_38 = (Il2CppObject *)0x412c927;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return;
  }
  pIStack_38 = (Il2CppObject *)0x412c934;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pIStack_38 = __v;
  if (g_data_057aca66 == '\0') {
    pMStack_50 = (MethodInfo_24EE950 *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_50 = (MethodInfo_24EE950 *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_50 = (MethodInfo_24EE950 *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412c99c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = pMVar5;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar5,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage(__this_00,iVar2,method_01);
    return;
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412c9b7;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __this_00;
  pMStack_50 = pMVar5;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_68 = (MethodInfo_24EE950 *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_68 = (MethodInfo_24EE950 *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo_24EE950 *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EE950 *)0x412ca37;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412ca44;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __this_00;
  pMStack_68 = pMVar5;
  if (g_data_057aca67 == '\0') {
    pMStack_80 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_80 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_80 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412caac;
  pMVar5 = MethodInfo_Int32_ConvertTo_Int32;
  __this_02 = obj;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,iVar2,method_02);
    return;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = __this_01;
  pMStack_80 = obj;
  if (__this_02 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_98 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_02->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_98 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pMStack_98 = (MethodInfo_24EE950 *)0x412cb4a;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return;
  }
  pMStack_98 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = __this_01;
  pMStack_98 = obj;
  if (__this_02 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_02->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint
                      ((Photon_Realtime_Player_o *)__this_02->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)__this_02->parameters,(MethodInfo *)0x0);
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar5,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__this_02 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_02,pCVar4,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c8b0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *extraout_RAX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE950 *obj_00;
  MethodInfo *__this;
  MethodInfo_24EE950 *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  MethodInfo *pMStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3d = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca66 == '\0') {
    pMStack_38 = (MethodInfo *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_38 = (MethodInfo *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_38 = (MethodInfo *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_38 = (MethodInfo *)0x412c99c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_38 = (MethodInfo *)0x412c9b7;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pMStack_38 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca3f == '\0') {
      pMStack_50 = (MethodInfo *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x412ca37;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar4;
  }
  pMStack_50 = (MethodInfo *)0x412ca44;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __i;
  pMStack_50 = method;
  if (g_data_057aca67 == '\0') {
    pMStack_68 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_68 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412caac;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = obj;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,iVar2,method_01);
    return extraout_RAX_00;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = __this;
  pMStack_68 = obj;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_80 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_80 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    pMStack_80 = (MethodInfo_24EE950 *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar4;
  }
  pMStack_80 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = __this;
  pMStack_80 = obj;
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_00->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_90 = CONCAT44(iVar2,(undefined4)uStack_90);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (__this_00 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_00,pCVar5,method_02);
      return extraout_RAX_01;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)__this_00->parameters,(MethodInfo *)0x0)
  ;
  if ((char)bVar3 != '\0') {
    value = PhotonExtensions__GetSpawnPoint
                      ((Photon_Realtime_Player_o *)__this_00->parameters,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar5;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412c940

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  Il2CppObject *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE950 *obj_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  MethodInfo_24EE950 *__this_01;
  UnityEngine_Vector3_o value;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo_24EE950 *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057aca66 == '\0') {
    pIStack_20 = (Il2CppObject *)0x412c95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pIStack_20 = (Il2CppObject *)0x412c96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_20 = (Il2CppObject *)0x412c98a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_20 = (Il2CppObject *)0x412c99c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)__v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage(__i,iVar2,method_00);
    return;
  }
  pIStack_20 = (Il2CppObject *)0x412c9b7;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  pIStack_20 = __v;
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3f == '\0') {
      pIStack_38 = (Il2CppObject *)0x412c9e1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (__this_00->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pIStack_38 = (Il2CppObject *)0x412ca04;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_38 = (Il2CppObject *)0x412ca1e;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIStack_38 = (Il2CppObject *)0x412ca37;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return;
  }
  pIStack_38 = (Il2CppObject *)0x412ca44;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pIStack_38 = __v;
  if (g_data_057aca67 == '\0') {
    pMStack_50 = (MethodInfo_24EE950 *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_50 = (MethodInfo_24EE950 *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_50 = (MethodInfo_24EE950 *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412caac;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  __this_01 = obj;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage(__this_00,iVar2,method_01);
    return;
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x412cac7;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __this_00;
  pMStack_50 = obj;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_68 = (MethodInfo_24EE950 *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_68 = (MethodInfo_24EE950 *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo_24EE950 *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EE950 *)0x412cb4a;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x412cb57;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __this_00;
  pMStack_68 = obj;
  if (__this_01 != (MethodInfo_24EE950 *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_78 = CONCAT44(iVar2,(undefined4)uStack_78);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 == (MethodInfo_24EE950 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (__this_01 != (MethodInfo_24EE950 *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
                ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_01,pCVar4,method_02);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
    return;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)__this_01->parameters,(MethodInfo *)0x0)
  ;
  if ((char)bVar3 != '\0') {
    value = PhotonExtensions__GetSpawnPoint
                      ((Photon_Realtime_Player_o *)__this_01->parameters,(MethodInfo *)0x0);
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412c9c0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo_24EE950 *obj;
  MethodInfo *__this;
  UnityEngine_Vector3_o value;
  undefined8 uStack_60;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca3f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca3f = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca67 == '\0') {
    pMStack_38 = (MethodInfo *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pMStack_38 = (MethodInfo *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_38 = (MethodInfo *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_38 = (MethodInfo *)0x412caac;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage(__i,iVar2,method_00);
    return extraout_RAX;
  }
  pMStack_38 = (MethodInfo *)0x412cac7;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pMStack_38 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca41 == '\0') {
      pMStack_50 = (MethodInfo *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x412cb4a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar4;
  }
  pMStack_50 = (MethodInfo *)0x412cb57;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __i;
  pMStack_50 = method;
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (Photon_Realtime_Player_o *)__this->parameters;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_60 = CONCAT44(iVar2,(undefined4)uStack_60);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((Photon_Realtime_Player_o *)__this->parameters,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint
                        ((Photon_Realtime_Player_o *)__this->parameters,(MethodInfo *)0x0);
      pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar5;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__this != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
              ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this,pCVar5,method_01);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412ca50

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  Il2CppObject *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo_24EE950 *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_48;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057aca67 == '\0') {
    pIStack_20 = (Il2CppObject *)0x412ca6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pIStack_20 = (Il2CppObject *)0x412ca7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_20 = (Il2CppObject *)0x412ca9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_20 = (Il2CppObject *)0x412caac;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)__v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage(__i,iVar2,method_00);
    return;
  }
  pIStack_20 = (Il2CppObject *)0x412cac7;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  pIStack_20 = __v;
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca41 == '\0') {
      pIStack_38 = (Il2CppObject *)0x412caf1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (__this_00->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      pIStack_38 = (Il2CppObject *)0x412cb14;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_38 = (Il2CppObject *)0x412cb31;
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIStack_38 = (Il2CppObject *)0x412cb4a;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return;
  }
  pIStack_38 = (Il2CppObject *)0x412cb57;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pIStack_38 = __v;
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (__this_00->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_48 = CONCAT44(iVar2,(undefined4)uStack_48);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar3 = PhotonExtensions__HasSpawnPoint((__this_00->fields).Player,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = PhotonExtensions__GetSpawnPoint((__this_00->fields).Player,(MethodInfo *)0x0);
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__this_00,pCVar4,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412cad0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  undefined8 uStack_30;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca41 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca41 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = PhotonExtensions__GetIntProperty
                      (pPVar1,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0
                      );
    uStack_30 = CONCAT44(iVar2,(undefined4)uStack_30);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca68 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057aca68 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,pCVar5,method_00);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca69 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca69 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
    return pIVar4;
  }
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar5;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpectateID>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412cb60

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca42 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
      g_data_057aca42 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar1 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      value = PhotonExtensions__GetSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,pCVar3,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x412cbf0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (g_data_057aca43 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057aca43 = '\x01';
    }
    bVar1 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      value = PhotonExtensions__GetSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
      pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar2,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,pCVar2,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x412cc80

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  Il2CppObject *__this;
  MethodInfo *method_00;
  
  if (g_data_057aca68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,value,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin___ctor (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4125670

void CustomLogic_CustomLogicPlayerBuiltin___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  if (g_data_057aca2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057aca2f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Player = player;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Player,player);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Character
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin__get_Character (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128c10

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Character
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Characters_BaseCharacter_o *pCVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  undefined8 uVar5;
  Characters_BaseCharacter_o *pCVar6;
  
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0)
  ;
  if (0 < viewID) {
    pCVar3 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = pCVar3;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar5 = il2cpp_runtime_helper_022b2c90();
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)
               CONCAT71((int7)((ulong)uVar5 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar6->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar3 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar3,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = pCVar3;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar3->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(pCVar3->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_04128d62;
          if (*(Photon_Realtime_Player_o **)(lVar1 + 0x80) == (__this->fields).Player) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar3,(MethodInfo *)0x0);
            return pCVar4;
          }
        }
      }
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Connected
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_Connected (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128d70

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_Connected
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(__this->fields).Player != (Photon_Realtime_Player_o *)0x0);
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128d80

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar4;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).actorNumber;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = __this;
  if (g_data_057aca31 == '\0') {
    pCVar4 = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
    il2cpp_runtime_helper_023445d0();
    g_data_057aca31 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    pSVar3 = (pPVar1->fields).nickName;
    if (pSVar3 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(pSVar3,"anon_",(MethodInfo *)0x0);
      return bVar2;
    }
    return (int32_t)CONCAT71((int7)((ulong)pPVar1 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar1 = (pCVar4->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (int32_t)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca32 = '\x01';
  }
  pPVar1 = (pCVar4->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  return (int32_t)pSVar3;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAnonymous
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128da0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar4;
  
  pCVar4 = __this;
  if (g_data_057aca31 == '\0') {
    pCVar4 = (CustomLogic_CustomLogicPlayerBuiltin_o *)&"anon_";
    il2cpp_runtime_helper_023445d0();
    g_data_057aca31 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    pSVar3 = (pPVar1->fields).nickName;
    if (pSVar3 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(pSVar3,"anon_",(MethodInfo *)0x0);
      return bVar2;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)pPVar1 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar1 = (pCVar4->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (bool_conflict)(pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca32 = '\x01';
  }
  pPVar1 = (pCVar4->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  return (bool_conflict)pSVar3;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_UserID
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_UserID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128df0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_UserID
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *pSVar2;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).nickName;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca32 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Name (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128e10

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Name
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca32 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_DisplayName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128e90

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca33 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Guild (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128f10

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Guild
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca34 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Team (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4128f90

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Team
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca35 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Status
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Status (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129010

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Status
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca36 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_CharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129090

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca37 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Loadout
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Loadout (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129110

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Loadout
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (g_data_057aca38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aca38 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Kills
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129190

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca39 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Kills
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41291f0

void CustomLogic_CustomLogicPlayerBuiltin__set_Kills
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 local_24 [4];
  
  if (g_data_057aca3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3a = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Deaths
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129300

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3b = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Deaths
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x4129360

void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 local_24 [4];
  
  if (g_data_057aca3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3c = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_HighestDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129470

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3d = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_HighestDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41294d0

void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 local_24 [4];
  
  if (g_data_057aca3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3e = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_TotalDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x41295e0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca3f = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_TotalDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x4129640

void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 local_24 [4];
  
  if (g_data_057aca40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca40 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129750

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca41 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpectateID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x41297c0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (g_data_057aca42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca42 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpawnPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129830

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057aca43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057aca43 = '\x01';
  }
  bVar1 = PhotonExtensions__HasSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
    return __this_00;
  }
  return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_SpawnPoint
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x41298c0

void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  int32_t key;
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_array *value_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar9;
  Photon_Realtime_Player_o *pPVar10;
  float __this_02;
  float fVar11;
  float fVar12;
  undefined1 local_30 [8];
  float local_28 [2];
  
  if (g_data_057aca44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"SpawnPoint");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057aca44 = '\x01';
  }
  local_28[0] = 0.0;
  local_30 = (undefined1  [8])0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar9 = extraout_RDX_01;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar9 = extraout_RDX;
  }
  if (cVar2 == '\0') {
    pPVar10 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pMVar9 = extraout_RDX_02;
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pMVar9 = extraout_RDX_00;
    }
    if (pPVar10 != pPVar4) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"SpawnPoint",pMVar9);
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pPVar10 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70);
    pSVar6 = "null";
label_04129ae2:
    PhotonExtensions__SetCustomProperty(pPVar10,pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    return;
  }
  local_28[0] = (value->fields).Value.fields.z;
  local_30 = *(undefined1 (*) [8])&(value->fields).Value.fields;
  value_00 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  pMVar9 = (MethodInfo *)local_30;
  pSVar6 = (System_String_o *)0x0;
  pSVar5 = System_Single__ToString(__this_02,pMVar9);
  if (value_00 != (System_String_array *)0x0) {
    if ((int)value_00->max_length != 0) {
      value_00->m_Items[0] = pSVar5;
      fVar11 = (float)il2cpp_runtime_helper_022b4080(value_00->m_Items);
      pMVar9 = (MethodInfo *)(local_30 + 4);
      pSVar6 = (System_String_o *)0x0;
      pSVar5 = System_Single__ToString(fVar11,pMVar9);
      if (1 < (uint)value_00->max_length) {
        value_00->m_Items[1] = pSVar5;
        fVar11 = (float)il2cpp_runtime_helper_022b4080(value_00->m_Items + 1);
        pMVar9 = (MethodInfo *)local_28;
        pSVar6 = (System_String_o *)0x0;
        pSVar5 = System_Single__ToString(fVar11,pMVar9);
        if (2 < (uint)value_00->max_length) {
          value_00->m_Items[2] = pSVar5;
          il2cpp_runtime_helper_022b4080(value_00->m_Items + 2,pSVar5);
          pSVar6 = System_String__Join(",",value_00,(MethodInfo *)0x0);
          pPVar10 = (__this->fields).Player;
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70);
          goto label_04129ae2;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aca48 = '\x01';
  }
  pPVar10 = (Photon_Realtime_Player_o *)pMVar9->parameters;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar10 == pPVar4) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (((lVar1 != 0) && (pMVar9->parameters != (Il2CppType **)0x0)) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar1 + 0x68),
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_00,*(int32_t *)(pMVar9->parameters + 3),MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (pMVar9->parameters == (Il2CppType **)0x0) goto label_04129d56;
      key = *(int32_t *)(pMVar9->parameters + 3);
      pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_Single);
      System_Collections_Generic_Dictionary_int__object___set_Item
                (__this_00,key,(Il2CppObject *)pSVar7,MethodInfo_Void_set_Item);
    }
    if ((pMVar9->parameters != (Il2CppType **)0x0) &&
       (pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           (__this_00,*(int32_t *)(pMVar9->parameters + 3),MethodInfo_Dictionary_2_System_String_System_Single_get_Item),
       pSVar7 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar7,(Il2CppObject *)pSVar6,0.0,MethodInfo_Void_set_Item);
      }
      fVar11 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar12 = System_Collections_Generic_Dictionary_object__float___get_Item
                         (pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Single_get_Item);
      if (1.0 <= fVar11 - fVar12) {
        fVar11 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar7,(Il2CppObject *)pSVar6,fVar11,MethodInfo_Void_set_Item);
        return;
      }
      goto label_04129d5b;
    }
  }
label_04129d56:
  il2cpp_runtime_helper_022b2c90();
label_04129d5b:
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Exceeded set property rate limit on non-local client: ");
  pSVar5 = System_String__Concat_3ae5ba0(pSVar5,pSVar6,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120(__this_01,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CheckPropertyRateLimit);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aca45 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CL:");
    g_data_057aca45 = '\x01';
  }
  pPVar10 = (Photon_Realtime_Player_o *)(__this_01->fields)._helpURL;
  pSVar5 = System_String__Concat_3ae5ba0("CL:",pSVar5,(MethodInfo *)0x0);
  PhotonExtensions__GetCustomProperty(pPVar10,pSVar5,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetCustomProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x4129dc0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (g_data_057aca45 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CL:");
    g_data_057aca45 = '\x01';
  }
  player = (__this->fields).Player;
  key = System_String__Concat_3ae5ba0("CL:",property,(MethodInfo *)0x0);
  pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$SetCustomProperty
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x4129e20

void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,Il2CppObject *value,
               MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *__this_00;
  Photon_Realtime_Player_o *pPVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  long *plVar11;
  System_Exception_o *__this_02;
  Photon_Realtime_Player_o *unaff_R13;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  System_Exception_o *pSStack_58;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_50;
  Photon_Realtime_Player_o *pPStack_48;
  System_String_o *pSStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057aca46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"CL:");
    g_data_057aca46 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    unaff_R13 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (unaff_R13 != pPVar6) {
      return;
    }
  }
  if ((value != (Il2CppObject *)0x0) &&
     ((((pIVar2 = value->klass, pIVar2 == g_data_057b9be8 || (pIVar2 == g_data_057b9bb8)) ||
       (pIVar2 == g_data_057b9c00)) || (pIVar2 == g_data_057b9b98)))) {
    pSVar7 = System_String__Concat_3ae5ba0("CL:",property,(MethodInfo *)0x0);
    CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,pSVar7,method_00);
    pPVar6 = (__this->fields).Player;
    pSVar7 = System_String__Concat_3ae5ba0("CL:",property,(MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperty(pPVar6,pSVar7,value,(MethodInfo *)0x0);
    return;
  }
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
  System_Exception___ctor_3cf6120(__this_00,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetCustomProperty);
  __this_02 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar8);
  pSStack_58 = __this_00;
  pCStack_50 = __this;
  pPStack_48 = unaff_R13;
  pSStack_40 = property;
  pIStack_38 = value;
  if (g_data_057aca47 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"ClearKDR");
    g_data_057aca47 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_01 = extraout_RDX_01;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_01 = extraout_RDX;
  }
  if (cVar4 == '\0') {
    pPVar6 = (Photon_Realtime_Player_o *)(__this_02->fields)._helpURL;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_01 = extraout_RDX_02;
    }
    else {
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_01 = extraout_RDX_00;
    }
    if (pPVar6 != pPVar9) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit
            ((CustomLogic_CustomLogicPlayerBuiltin_o *)__this_02,"ClearKDR",method_01);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  uStack_5c = 0;
  plVar11 = (long *)&uStack_5c;
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add(__this_01,pIVar3,pIVar10,MethodInfo_Void_Add);
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
    uStack_60 = 0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_60);
    System_Collections_Generic_Dictionary_object__object___Add(__this_01,pIVar3,pIVar10,MethodInfo_Void_Add);
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
    uStack_64 = 0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_64);
    System_Collections_Generic_Dictionary_object__object___Add(__this_01,pIVar3,pIVar10,MethodInfo_Void_Add);
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
    uStack_68 = 0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_68);
    System_Collections_Generic_Dictionary_object__object___Add(__this_01,pIVar3,pIVar10,MethodInfo_Void_Add);
    PhotonExtensions__SetCustomProperties
              ((Photon_Realtime_Player_o *)(__this_02->fields)._helpURL,
               (System_Collections_Generic_Dictionary_string__object__o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057aca49 = '\x01';
  }
  if (plVar11 != (long *)0x0) {
    if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(TypeInfo_CustomLogicPlayerBuiltin + 0x130)) ||
       (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicPlayerBuiltin + 0x130) * 8) != TypeInfo_CustomLogicPlayerBuiltin
       )) {
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$ClearKDR
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x4129fa0

void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppObject *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  long *plVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (g_data_057aca47 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"ClearKDR");
    g_data_057aca47 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_00 = extraout_RDX_01;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_00 = extraout_RDX;
  }
  if (cVar4 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    if (pPVar2 != pPVar6) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"ClearKDR",method_00);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  local_34 = 0;
  plVar8 = (long *)&local_34;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aca49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
      g_data_057aca49 = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicPlayerBuiltin + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicPlayerBuiltin + 0x130) * 8) !=
          TypeInfo_CustomLogicPlayerBuiltin)) {
        return;
      }
    }
    return;
  }
  System_Collections_Generic_Dictionary_object__object___Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
  local_38 = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
  System_Collections_Generic_Dictionary_object__object___Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
  local_3c = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_3c);
  System_Collections_Generic_Dictionary_object__object___Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
  local_40 = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_40);
  System_Collections_Generic_Dictionary_object__object___Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  PhotonExtensions__SetCustomProperties
            ((__this->fields).Player,(System_Collections_Generic_Dictionary_string__object__o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$CheckPropertyRateLimit
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x4129b00

void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  int32_t key;
  Photon_Realtime_Player_o *pPVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_Exception_o *__this_01;
  float fVar8;
  float fVar9;
  
  if (g_data_057aca48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aca48 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar1 == pPVar4) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (((lVar2 != 0) && (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0x68),
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_00,(pPVar1->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      pPVar1 = (__this->fields).Player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_04129d56;
      key = (pPVar1->fields).actorNumber;
      pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_System_Single);
      System_Collections_Generic_Dictionary_int__object___set_Item
                (__this_00,key,(Il2CppObject *)pSVar5,MethodInfo_Void_set_Item);
    }
    pPVar1 = (__this->fields).Player;
    if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           (__this_00,(pPVar1->fields).actorNumber,MethodInfo_Dictionary_2_System_String_System_Single_get_Item),
       pSVar5 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar5,(Il2CppObject *)property,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar5,(Il2CppObject *)property,0.0,MethodInfo_Void_set_Item);
      }
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar9 = System_Collections_Generic_Dictionary_object__float___get_Item
                        (pSVar5,(Il2CppObject *)property,MethodInfo_Single_get_Item);
      if (1.0 <= fVar8 - fVar9) {
        fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar5,(Il2CppObject *)property,fVar8,MethodInfo_Void_set_Item);
        return;
      }
      goto label_04129d5b;
    }
  }
label_04129d56:
  il2cpp_runtime_helper_022b2c90();
label_04129d5b:
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Exceeded set property rate limit on non-local client: ");
  pSVar6 = System_String__Concat_3ae5ba0(pSVar6,property,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120(__this_01,pSVar6,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CheckPropertyRateLimit);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aca45 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CL:");
    g_data_057aca45 = '\x01';
  }
  pPVar1 = (Photon_Realtime_Player_o *)(__this_01->fields)._helpURL;
  pSVar6 = System_String__Concat_3ae5ba0("CL:",pSVar6,(MethodInfo *)0x0);
  PhotonExtensions__GetCustomProperty(pPVar1,pSVar6,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__Equals (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x412a200

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__Equals
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *in_RAX;
  bool bVar2;
  
  if (g_data_057aca49 == '\0') {
    in_RAX = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057aca49 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    bVar2 = (__this->fields).Player == (Photon_Realtime_Player_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogicPlayerBuiltin->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPlayerBuiltin)) {
      return 0;
    }
    in_RAX = (Il2CppClass *)(__this->fields).Player;
    bVar2 = in_RAX == obj[3].klass;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),bVar2);
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a280

int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  int32_t iVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  Photon_Realtime_Player_o *pPVar2;
  
  pPVar2 = (__this->fields).Player;
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pPVar2->klass->vtable)._2_GetHashCode.methodPtr;
    iVar1 = (*UNRECOVERED_JUMPTABLE_00)
                      (pPVar2,(pPVar2->klass->vtable)._2_GetHashCode.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    vtableDispatch = *(code **)(method->methodPointer + 0x138);
    iVar1 = (*vtableDispatch)
                      (method,extraout_RDX,*(undefined8 *)(method->methodPointer + 0x140),
                       vtableDispatch);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar1 = (*(pPVar2->klass->vtable)._2_GetHashCode.methodPtr)();
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin____Eq__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x412a2b0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin____Eq__
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  
  if (self != (Il2CppObject *)0x0) {
    vtableDispatch = self->klass->vtable[0].methodPtr;
    bVar1 = (*vtableDispatch)(self,other,self->klass->vtable[0].method,vtableDispatch);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar1 = (*(__this->klass->vtable)._2_GetHashCode.methodPtr)();
  return bVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a2e0

int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._2_GetHashCode.methodPtr;
  iVar1 = (*vtableDispatch)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a300

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057aca4a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Player");
    g_data_057aca4a = '\x01';
  }
  return "Player";
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a330

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a340

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x412a350

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// Type: GameManagers.MainMenuGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/MainMenuGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// --------------------------------

// GameManagers.MainMenuGameManager$$OnJoinedLobby
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedLobby (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4569030

void GameManagers_MainMenuGameManager__OnJoinedLobby
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  Photon_Realtime_EnterRoomParams_o **ppPVar1;
  int *piVar2;
  code cVar3;
  ushort uVar4;
  ushort uVar5;
  System_Net_NetworkCredential_o *pSVar6;
  long *plVar7;
  Il2CppMethodPointer pIVar8;
  void *pvVar9;
  code *vtableDispatch;
  Photon_Realtime_LoadBalancingPeer_o *pPVar10;
  System_Action_ClientState__ClientState__o *pSVar11;
  intptr_t iVar12;
  intptr_t iVar13;
  Photon_Realtime_InRoomCallbacksContainer_o *__this_00;
  System_Collections_IDictionary_o *target;
  Il2CppRGCTXData *__this_01;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar14;
  Il2CppRuntimeInterfaceOffsetPair *pIVar15;
  Photon_Realtime_WebFlags_o *__this_02;
  Il2CppClass *pIVar16;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  UnityEngine_Component_o *pUVar17;
  undefined7 uVar18;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_08;
  char cVar19;
  int32_t iVar20;
  bool_conflict bVar21;
  int iVar22;
  Photon_Realtime_LoadBalancingClient_c *pPVar23;
  System_String_o *pSVar24;
  System_Object_array *pSVar25;
  undefined8 uVar26;
  Photon_Realtime_EnterRoomParams_o *pPVar27;
  Photon_Realtime_LoadBalancingClient_c *__this_09;
  undefined4 extraout_var;
  Photon_Realtime_LoadBalancingClient_c *pPVar28;
  Il2CppMethodPointer *ppIVar29;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar30;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_10;
  Photon_Realtime_LoadBalancingClient_c *pPVar31;
  UI_MainMenu_o *__this_11;
  undefined8 *puVar32;
  MethodInfo *pMVar33;
  Photon_Realtime_LoadBalancingClient_c *pPVar34;
  Photon_Realtime_LoadBalancingClient_c *propertiesToSet;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Photon_Realtime_LoadBalancingClient_c *pPVar35;
  System_Collections_Generic_Dictionary_object__object__o *__this_12;
  undefined8 extraout_RDX_05;
  uint uVar36;
  Photon_Realtime_LoadBalancingClient_c *original;
  MethodInfo **ppMVar37;
  undefined1 *puVar38;
  MethodInfo ***pppMVar39;
  Photon_Realtime_LoadBalancingClient_c **unaff_RBP;
  undefined8 uVar40;
  Photon_Realtime_LoadBalancingClient_c *pPVar41;
  System_Object_array *pSVar42;
  Il2CppObject *pIVar43;
  Photon_Realtime_LoadBalancingClient_o *pPVar44;
  Photon_Realtime_LoadBalancingClient_o *__this_13;
  Il2CppObject *__this_14;
  Photon_Realtime_LoadBalancingClient_c *__this_15;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar45;
  Photon_Realtime_LoadBalancingClient_c **__this_16;
  long lVar46;
  long lVar47;
  MethodInfo *pMVar48;
  Photon_Realtime_LoadBalancingClient_c *method_00;
  Photon_Realtime_LoadBalancingClient_c *in_R8;
  MethodInfo *in_R9;
  Photon_Realtime_LoadBalancingClient_c **unaff_R12;
  ulong uVar49;
  Photon_Realtime_LoadBalancingClient_c *unaff_R13;
  long *plVar50;
  long *unaff_R15;
  undefined1 auVar51 [16];
  undefined1 auVar52 [12];
  uint8_t auStackY_17e [118];
  undefined8 uStackY_108;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_100;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_f8;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_f0;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_e8;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_e0;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_d8;
  undefined4 uVar53;
  undefined4 uVar54;
  System_Enum_c *pSVar55;
  undefined1 auStack_b0 [16];
  System_Enum_c *pSStack_a0;
  MethodInfo **ppMStack_78;
  Photon_Realtime_LoadBalancingClient_c *pPStack_70;
  undefined1 auStack_28 [8];
  
  if (g_data_057af02d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_GetComponent_MainMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057af02d = '\x01';
  }
  pPVar31 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pPVar31,MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomInfo);
  plVar50 = &TypeInfo_MainMenuGameManager;
  if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(Photon_Realtime_LoadBalancingClient_c **)(*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8) = pPVar31;
  pPVar23 = pPVar31;
  il2cpp_runtime_helper_022b4080();
  if (**(char **)(TypeInfo_MainMenuGameManager + 0xb8) == '\0') {
    if (g_data_057aeb82 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aeb82 = '\x01';
    }
    if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
      ApplicationManagers_HeadlessManager__OnJoinedLobby((MethodInfo *)0x0);
      return;
    }
    plVar50 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar31 = *(Photon_Realtime_LoadBalancingClient_c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    unaff_R15 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
    bVar21 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pPVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar21 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar17 != (UnityEngine_Component_o *)0x0) {
      unaff_R12 = &MethodInfo_MainMenu_GetComponent_MainMenu;
      pPVar31 = (Photon_Realtime_LoadBalancingClient_c *)
                UnityEngine_Component__GetComponent_object_(pUVar17,(MethodInfo_24E7B40 *)MethodInfo_MainMenu_GetComponent_MainMenu);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pPVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar21 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar17 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((pUVar17 != (UnityEngine_Component_o *)0x0) &&
         (pPVar23 = MethodInfo_MainMenu_GetComponent_MainMenu,
         __this_11 = (UI_MainMenu_o *)
                     UnityEngine_Component__GetComponent_object_(pUVar17,(MethodInfo_24E7B40 *)MethodInfo_MainMenu_GetComponent_MainMenu),
         __this_11 != (UI_MainMenu_o *)0x0)) {
        UI_MainMenu__ShowMultiplayerRoomListPopup(__this_11,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
           (Settings_MultiplayerSettings_o *)0x0) {
    Settings_MultiplayerSettings__Disconnect
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined1 **)(TypeInfo_MainMenuGameManager + 0xb8) = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af02e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af02e = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_045692f7;
label_045692ad:
    if (g_data_057abf5b != '\0') goto label_045692b6;
label_04569305:
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_04569324;
label_045692c2:
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_045692ad;
label_045692f7:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057abf5b == '\0') goto label_04569305;
label_045692b6:
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_045692c2;
label_04569324:
    il2cpp_runtime_helper_02337ed0();
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  if (cVar3 != (code)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abebb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebb = '\x01';
    iVar22 = *(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4);
  }
  else {
    iVar22 = *(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4);
  }
  if (iVar22 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar38 = auStack_28;
  pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
  if (g_data_057abebc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebc = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe829f;
label_03fe8223:
    bVar21 = Photon_Pun_PhotonNetwork__get_IsConnected(TypeInfo_PhotonNetwork);
    cVar19 = (char)bVar21;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe8223;
label_03fe829f:
    pMVar33 = TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_02337ed0();
    bVar21 = Photon_Pun_PhotonNetwork__get_IsConnected(pMVar33);
    cVar19 = (char)bVar21;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  if (cVar19 == '\0') {
    TypeInfo_PhotonNetwork = pMVar33;
    return;
  }
  TypeInfo_PhotonNetwork = pMVar33;
  if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar22 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  else {
    iVar22 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  if (iVar22 != 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar28 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if (pPVar28 != (Photon_Realtime_LoadBalancingClient_c *)0x0)
  goto Photon_Realtime_LoadBalancingClient__OpJoinLobby;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abebd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebd = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8360;
label_03fe82ed:
    bVar21 = Photon_Pun_PhotonNetwork__get_IsConnected(TypeInfo_PhotonNetwork);
    cVar19 = (char)bVar21;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe82ed;
label_03fe8360:
    pMVar33 = TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_02337ed0();
    bVar21 = Photon_Pun_PhotonNetwork__get_IsConnected(pMVar33);
    cVar19 = (char)bVar21;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  if (cVar19 == '\0') {
    TypeInfo_PhotonNetwork = pMVar33;
    return;
  }
  TypeInfo_PhotonNetwork = pMVar33;
  if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar22 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  else {
    iVar22 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  if (iVar22 != 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R15 = *(long **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if ((Photon_Realtime_LoadBalancingClient_o *)unaff_R15 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
    Photon_Realtime_LoadBalancingClient__OpLeaveLobby
              ((Photon_Realtime_LoadBalancingClient_o *)unaff_R15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abebe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebe = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8430;
label_03fe83b3:
    pIVar8 = TypeInfo_PhotonNetwork[2].virtualMethodPointer;
    lVar46 = *(long *)pIVar8;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe83b3;
label_03fe8430:
    il2cpp_runtime_helper_02337ed0();
    pIVar8 = TypeInfo_PhotonNetwork[2].virtualMethodPointer;
    lVar46 = *(long *)pIVar8;
  }
  if (lVar46 == 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  else {
    cVar3 = pIVar8[0x30];
  }
  if (cVar3 != (code)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar31 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if (pPVar31 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    plVar50 = (long *)0x0;
    ppMStack_78 = &TypeInfo_PhotonNetwork;
    puVar38 = &stack0xffffffffffffff80;
    pPStack_70 = (Photon_Realtime_LoadBalancingClient_c *)unaff_R12;
    if (g_data_057abd7f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add,unaff_R15,0,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      il2cpp_runtime_helper_023445d0(&"FindFriends");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains a null or empty UserId, element at position {0} skipped.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friendsToFind array exceeds allowed length of {0}.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friends list to find is empty.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friendsToFind array is null or empty.");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains duplicate UserId \"{0}\", element at position {1} skipped.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: already fetching friends list.");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains local player's UserId \"{0}\", element at position {1} skipped.");
      g_data_057abd7f = '\x01';
    }
    bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                       ((Photon_Realtime_LoadBalancingClient_o *)pPVar31,0xde,
                        *(int32_t *)((long)&pPVar31->_1 + 0x80),"FindFriends",(MethodInfo *)in_R8);
    if ((char)bVar21 == '\0') {
      return;
    }
    if (*(System_String_array **)&pPVar31->vtable != (System_String_array *)0x0) {
      pPVar23 = (pPVar31->_1).image;
      pMVar33 = (pPVar23->vtable)._14_DebugReturn.method;
      uVar40 = 2;
      uVar26 = "OpFindFriends skipped: already fetching friends list.";
      goto label_03fc167b;
    }
    if (((Photon_Realtime_LoadBalancingClient_o *)unaff_R15 != (Photon_Realtime_LoadBalancingClient_o *)0x0)
       && (pSVar6 = (((Photon_Realtime_LoadBalancingClient_o *)unaff_R15)->fields).AppVersion,
          pSVar6 != (System_Net_NetworkCredential_o *)0x0)) {
      if (0x200 < (int)pSVar6) {
        pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff84);
        pSVar24 = System_String__Format("OpFindFriends skipped: friendsToFind array exceeds allowed length of {0}.",pIVar43,(MethodInfo *)0x0);
        pvVar9 = (pPVar31->_1).image;
        (**(code **)((long)pvVar9 + 0x218))(pPVar31,1,pSVar24,*(undefined8 *)((long)pvVar9 + 0x220));
        return;
      }
      pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      uVar36 = *(uint *)&(((Photon_Realtime_LoadBalancingClient_o *)unaff_R15)->fields).AppVersion;
      pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)(ulong)uVar36;
      pPVar28 = pPVar23;
      System_Collections_Generic_List_object____ctor_362b930
                ((System_Collections_Generic_List_object__o *)pPVar23,uVar36,MethodInfo_List_1_System_String);
      pSVar6 = (((Photon_Realtime_LoadBalancingClient_o *)unaff_R15)->fields).AppVersion;
      if ((int)pSVar6 < 1) {
label_03fc16e5:
        if (pPVar23 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          if (*(int *)&(pPVar23->_1).namespaze == 0) {
            puVar32 = &"OpFindFriends skipped: friends list to find is empty.";
            goto label_03fc1666;
          }
          pPVar41 = MethodInfo_String_ToArray;
          pSVar25 = System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)pPVar23,
                               (MethodInfo_362E340 *)MethodInfo_String_ToArray);
          plVar7 = (long *)(pPVar31->_1).name;
          pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
          if (plVar7 != (long *)0x0) {
            cVar19 = (**(code **)(*plVar7 + 0x2d8))(plVar7,pSVar25,0,*(undefined8 *)(*plVar7 + 0x2e0));
            pSVar42 = (System_Object_array *)0x0;
            if (cVar19 != '\0') {
              pSVar42 = pSVar25;
            }
            (pPVar31->vtable)._0_Equals.methodPtr = (Il2CppMethodPointer)pSVar42;
            il2cpp_runtime_helper_022b4080(&pPVar31->vtable);
            return;
          }
        }
      }
      else {
        uVar49 = 0;
        if (((ulong)pSVar6 & 0xffffffff) != 0) {
          do {
            unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)
                        (&(((Photon_Realtime_LoadBalancingClient_o *)unaff_R15)->fields).
                          _AppId_k__BackingField)[uVar49];
            pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
            bVar21 = System_String__IsNullOrEmpty((System_String_o *)unaff_RBP,(MethodInfo *)0x0);
            if ((char)bVar21 == '\0') {
              pvVar9 = (pPVar31->_1).this_arg.data;
              if (pvVar9 == (void *)0x0) {
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
              }
              else {
                pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)((long)pvVar9 + 0x30);
              }
              if ((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP ==
                  (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc1758;
              pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
              bVar21 = System_String__Equals_3af4db0
                                 ((System_String_o *)unaff_RBP,(System_String_o *)pPVar41,(MethodInfo *)0x0);
              if ((char)bVar21 != '\0') {
                pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff84);
                puVar32 = &"friendsToFind array contains local player's UserId \"{0}\", element at position {1} skipped.";
label_03fc15e1:
                pSVar24 = System_String__Format_3af78e0
                                    ((System_String_o *)*puVar32,(Il2CppObject *)unaff_RBP,pIVar43,
                                     (MethodInfo *)0x0);
                goto label_03fc14fe;
              }
              if (pPVar23 == (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc1758;
              pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
              pPVar28 = pPVar23;
              bVar21 = System_Collections_Generic_List_object___Contains
                                 ((System_Collections_Generic_List_object__o *)pPVar23,
                                  (Il2CppObject *)unaff_RBP,MethodInfo_Boolean_Contains);
              lVar46 = MethodInfo_Void_Add;
              if ((char)bVar21 != '\0') {
                pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff84);
                puVar32 = &"friendsToFind array contains duplicate UserId \"{0}\", element at position {1} skipped.";
                goto label_03fc15e1;
              }
              piVar2 = (int *)((long)&(pPVar23->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pPVar10 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar23->_1).name)->
                        _LoadBalancingPeer_k__BackingField;
              if (pPVar10 == (Photon_Realtime_LoadBalancingPeer_o *)0x0) goto label_03fc1758;
              uVar36 = *(uint *)&(pPVar23->_1).namespaze;
              if (uVar36 < (uint)(pPVar10->fields).WarningSize) {
                *(uint *)&(pPVar23->_1).namespaze = uVar36 + 1;
                pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)
                          (&(pPVar10->fields).TargetFramework + (long)(int)uVar36 * 2);
                *(Photon_Realtime_LoadBalancingClient_c ***)
                 (&(pPVar10->fields).TargetFramework + (long)(int)uVar36 * 2) = unaff_RBP;
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
                pPVar28 = pPVar23;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pPVar23,(Il2CppObject *)unaff_RBP,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff84);
              pSVar24 = System_String__Format("friendsToFind array contains a null or empty UserId, element at position {0} skipped.",pIVar43,(MethodInfo *)0x0);
label_03fc14fe:
              unaff_RBP = (pPVar31->_1).image;
              pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x2;
              pPVar28 = pPVar31;
              (*(((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP)->vtable)._14_DebugReturn.methodPtr)
                        (pPVar31,2,pSVar24,
                         (((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP)->vtable)._14_DebugReturn.method
                        );
            }
            uVar49 = uVar49 + 1;
            uVar36 = *(uint *)&(((Photon_Realtime_LoadBalancingClient_o *)unaff_R15)->fields).AppVersion;
            if ((long)(int)uVar36 <= (long)uVar49) goto label_03fc16e5;
          } while (uVar49 < uVar36);
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_03fc1758:
      il2cpp_runtime_helper_022b2c90();
Photon_Realtime_LoadBalancingClient__OpJoinLobby:
      *(Photon_Realtime_LoadBalancingClient_c ***)(puVar38 + -8) = unaff_RBP;
      *(long **)(puVar38 + -0x10) = plVar50;
      *(Photon_Realtime_LoadBalancingClient_c **)(puVar38 + -0x18) = pPVar31;
      if (g_data_057abd80 == '\0') {
        *(undefined8 *)(puVar38 + -0x20) = 0x3fc177f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_TypedLobby);
        *(undefined8 *)(puVar38 + -0x20) = 0x3fc178b;
        il2cpp_runtime_helper_023445d0(&"JoinLobby");
        g_data_057abd80 = '\x01';
      }
      iVar20 = *(int32_t *)&(pPVar28->_1).fields;
      *(undefined8 *)(puVar38 + -0x20) = 0x3fc17af;
      bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                         ((Photon_Realtime_LoadBalancingClient_o *)pPVar28,0xe5,iVar20,"JoinLobby",
                          (MethodInfo *)in_R8);
      if ((char)bVar21 != '\0') {
        if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          if (*(int *)(TypeInfo_TypedLobby + 0xe4) == 0) {
            *(undefined8 *)(puVar38 + -0x20) = 0x3fc17d5;
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)**(undefined8 **)(TypeInfo_TypedLobby + 0xb8);
          unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)&TypeInfo_TypedLobby;
        }
        pPVar44 = (Photon_Realtime_LoadBalancingClient_o *)(pPVar28->_1).name;
        if (pPVar44 == (Photon_Realtime_LoadBalancingClient_o *)0x0) {
          *(undefined8 *)(puVar38 + -0x20) = 0x3fc185d;
          il2cpp_runtime_helper_022b2c90();
          *(Photon_Realtime_LoadBalancingClient_c **)(puVar38 + -0x20) = pPVar28;
          if (g_data_057abd81 == '\0') {
            *(undefined8 *)(puVar38 + -0x28) = 0x3fc1879;
            il2cpp_runtime_helper_023445d0(&"LeaveLobby");
            g_data_057abd81 = '\x01';
          }
          iVar20 = (pPVar44->fields)._Server_k__BackingField;
          pIVar43 = (Il2CppObject *)0xe4;
          *(undefined8 *)(puVar38 + -0x28) = 0x3fc189d;
          bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                             (pPVar44,0xe4,iVar20,"LeaveLobby",(MethodInfo *)in_R8);
          if ((char)bVar21 == '\0') {
            return;
          }
          __this_13 = (Photon_Realtime_LoadBalancingClient_o *)
                      (pPVar44->fields)._LoadBalancingPeer_k__BackingField;
          if (__this_13 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
            (*(((Photon_Realtime_LoadBalancingPeer_c *)__this_13->klass)->vtable)._19_OpLeaveLobby.methodPtr)
                      (__this_13,
                       (((Photon_Realtime_LoadBalancingPeer_c *)__this_13->klass)->vtable)._19_OpLeaveLobby.
                       method);
            return;
          }
          *(undefined8 *)(puVar38 + -0x28) = 0x3fc18c7;
          uVar26 = il2cpp_runtime_helper_022b2c90();
          *(Photon_Realtime_LoadBalancingClient_c ***)(puVar38 + -0x28) = unaff_RBP;
          *(long **)(puVar38 + -0x30) = unaff_R15;
          *(Photon_Realtime_LoadBalancingClient_c **)(puVar38 + -0x38) = pPVar41;
          *(Photon_Realtime_LoadBalancingClient_o **)(puVar38 + -0x40) = pPVar44;
          *(undefined8 *)(puVar38 + -0x48) = uVar26;
          if (g_data_057abd82 == '\0') {
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc18f2;
            il2cpp_runtime_helper_023445d0(&TypeInfo_EnterRoomParams);
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc18fe;
            il2cpp_runtime_helper_023445d0(&TypeInfo_OpJoinRandomRoomParams);
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc190a;
            il2cpp_runtime_helper_023445d0(&"JoinRandomGame");
            g_data_057abd82 = '\x01';
          }
          iVar20 = (__this_13->fields)._Server_k__BackingField;
          *(undefined8 *)(puVar38 + -0x50) = 0x3fc192e;
          bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                             (__this_13,0xe1,iVar20,"JoinRandomGame",(MethodInfo *)in_R8);
          if ((char)bVar21 != '\0') {
            if (pIVar43 == (Il2CppObject *)0x0) {
              *(undefined8 *)(puVar38 + -0x50) = 0x3fc194a;
              pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OpJoinRandomRoomParams);
              *(undefined8 *)(puVar38 + -0x50) = 0x3fc1957;
              System_Object___ctor(pIVar43,(MethodInfo *)0x0);
            }
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc1966;
            pPVar27 = (Photon_Realtime_EnterRoomParams_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EnterRoomParams);
            *(undefined1 *)&(pPVar27->fields).OnGameServer = 1;
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc1977;
            System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
            ppPVar1 = &(__this_13->fields).enterRoomParamsCache;
            (__this_13->fields).enterRoomParamsCache = pPVar27;
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc1990;
            __this_14 = (Il2CppObject *)ppPVar1;
            il2cpp_runtime_helper_022b4080();
            if (pIVar43 != (Il2CppObject *)0x0) {
              pPVar27 = (__this_13->fields).enterRoomParamsCache;
              __this_14 = (Il2CppObject *)0x0;
              if (pPVar27 != (Photon_Realtime_EnterRoomParams_o *)0x0) {
                (pPVar27->fields).Lobby = (Photon_Realtime_TypedLobby_o *)pIVar43[2].klass;
                *(undefined8 *)(puVar38 + -0x50) = 0x3fc19ba;
                il2cpp_runtime_helper_022b4080(&(pPVar27->fields).Lobby);
                pPVar27 = *ppPVar1;
                __this_14 = (Il2CppObject *)0x0;
                if (pPVar27 != (Photon_Realtime_EnterRoomParams_o *)0x0) {
                  (pPVar27->fields).ExpectedUsers = (System_String_array *)pIVar43[3].klass;
                  *(undefined8 *)(puVar38 + -0x50) = 0x3fc19d7;
                  il2cpp_runtime_helper_022b4080(&(pPVar27->fields).ExpectedUsers);
                  pPVar10 = (__this_13->fields)._LoadBalancingPeer_k__BackingField;
                  __this_14 = (Il2CppObject *)0x0;
                  if (pPVar10 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
                    pMVar33 = (pPVar10->klass->vtable)._22_OpJoinRandomRoom.method;
                    pIVar8 = (pPVar10->klass->vtable)._22_OpJoinRandomRoom.methodPtr;
                    *(undefined8 *)(puVar38 + -0x50) = 0x3fc19f3;
                    cVar19 = (*pIVar8)(pPVar10,pIVar43,pMVar33);
                    if (cVar19 == '\0') {
                      return;
                    }
                    (__this_13->fields).lastJoinType = 2;
                    iVar22 = (__this_13->fields).state;
                    if (iVar22 == 8) {
                      return;
                    }
                    (__this_13->fields).state = 8;
                    pSVar11 = (__this_13->fields).StateChanged;
                    if (pSVar11 == (System_Action_ClientState__ClientState__o *)0x0) {
                      return;
                    }
                    iVar12 = (pSVar11->fields).method;
                    iVar13 = (pSVar11->fields).method_code;
                    vtableDispatch = (code *)(pSVar11->fields).invoke_impl;
                    *(undefined8 *)(puVar38 + -0x50) = 0x3fc1a35;
                    (*vtableDispatch)(iVar13,iVar22,8,iVar12);
                    return;
                  }
                }
              }
            }
            *(undefined8 *)(puVar38 + -0x50) = 0x3fc1a4b;
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor(__this_14,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        pMVar33 = (pPVar44->klass->vtable)._18_OnMessage.method;
        pIVar8 = (pPVar44->klass->vtable)._18_OnMessage.methodPtr;
        *(undefined8 *)(puVar38 + -0x20) = 0x3fc17ff;
        cVar19 = (*pIVar8)(pPVar44,pPVar41,pMVar33);
        if (cVar19 != '\0') {
          (pPVar28->_2).genericContainerHandle = pPVar41;
          *(undefined8 *)(puVar38 + -0x20) = 0x3fc1819;
          il2cpp_runtime_helper_022b4080(&(pPVar28->_2).genericContainerHandle,pPVar41);
          iVar22 = *(int *)&(pPVar28->_1).properties;
          if (iVar22 != 3) {
            *(undefined4 *)&(pPVar28->_1).properties = 3;
            pvVar9 = (pPVar28->_1).methods;
            if (pvVar9 != (void *)0x0) {
              uVar26 = *(undefined8 *)((long)pvVar9 + 0x28);
              uVar40 = *(undefined8 *)((long)pvVar9 + 0x40);
              vtableDispatch = *(code **)((long)pvVar9 + 0x18);
              *(undefined8 *)(puVar38 + -0x20) = 0x3fc184d;
              (*vtableDispatch)(uVar40,iVar22,3,uVar26);
            }
          }
        }
      }
      return;
    }
    puVar32 = &"OpFindFriends skipped: friendsToFind array is null or empty.";
label_03fc1666:
    uVar26 = *puVar32;
    pPVar23 = (pPVar31->_1).image;
    pMVar33 = (pPVar23->vtable)._14_DebugReturn.method;
    uVar40 = 1;
label_03fc167b:
    (*(pPVar23->vtable)._14_DebugReturn.methodPtr)(pPVar31,uVar40,uVar26,pMVar33);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pppMVar39 = &ppMStack_78;
  ppMStack_78 = &TypeInfo_PhotonNetwork;
  pPStack_70 = (Photon_Realtime_LoadBalancingClient_c *)unaff_R15;
  if (g_data_057abebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebf = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe84ee;
label_03fe84a7:
    pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe84a7;
label_03fe84ee:
    il2cpp_runtime_helper_02337ed0();
    pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  }
  if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057abec0 == '\0') {
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8533;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe853f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe854b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8557;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8563;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe856f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe857b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abec0 = '\x01';
    }
    pMVar33 = (MethodInfo *)0x0;
    uVar53 = 0;
    uVar54 = 0;
    pSVar55 = (System_Enum_c *)0x0;
    if (pPVar41 != (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fe8761;
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe85aa;
    pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe85b7;
    ExitGames_Client_Photon_Hashtable___ctor((ExitGames_Client_Photon_Hashtable_o *)pPVar41,(MethodInfo *)0x0)
    ;
    ppMVar37 = &TypeInfo_PhotonNetwork;
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe86e0;
    if (g_data_057abe70 == '\0') goto label_03fe86f2;
label_03fe85db:
    pMVar48 = *ppMVar37;
    if (*(int *)((long)&pMVar48[2].parameters + 4) == 0) goto label_03fe8715;
label_03fe85eb:
    lVar46 = *(long *)pMVar48[2].virtualMethodPointer;
    if (lVar46 != 0) {
      do {
        if (*(int *)((long)&pMVar48[2].parameters + 4) == 0) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe860c;
          il2cpp_runtime_helper_02337ed0();
          lVar46 = *(long *)(*ppMVar37)[2].virtualMethodPointer;
          if (lVar46 == 0) break;
        }
        if ((*(long *)(lVar46 + 0x108) == 0) ||
           (__this_03 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(lVar46 + 0x108) + 0x38),
           __this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe864e;
        __this_10 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
        if (__this_10 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) break;
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe866e;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_b0,__this_10,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pMVar33 = (MethodInfo *)CONCAT44(auStack_b0._4_4_,auStack_b0._0_4_);
        uVar53 = (undefined4)auStack_b0._8_8_;
        uVar54 = SUB84(auStack_b0._8_8_,4);
        pSVar55 = pSStack_a0;
        if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8747;
          __this_05.fields._index = uVar53;
          __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_05.fields._version = uVar54;
          __this_05.fields._currentKey = (Il2CppObject *)pSStack_a0;
          bVar21 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_05,(MethodInfo_3251B20 *)&stack0xffffffffffffff30);
          pSVar55 = pSStack_a0;
          if ((char)bVar21 != '\0') goto label_03fe8838;
label_03fe874f:
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8761;
          __this_06.fields._index = uVar53;
          __this_06.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_06.fields._version = uVar54;
          __this_06.fields._currentKey = (Il2CppObject *)pSVar55;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_06,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
          goto label_03fe8761;
        }
        while( true ) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86b7;
          __this_04.fields._index = uVar53;
          __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_04.fields._version = uVar54;
          __this_04.fields._currentKey = (Il2CppObject *)pSVar55;
          bVar21 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_04,(MethodInfo_3251B20 *)&stack0xffffffffffffff30);
          if ((char)bVar21 == '\0') goto label_03fe874f;
          if ((pSVar55 != (System_Enum_c *)0x0) && ((pSVar55->_1).image != g_data_057b9c00)) break;
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86ac;
          ExitGames_Client_Photon_Hashtable__set_Item
                    ((ExitGames_Client_Photon_Hashtable_o *)pPVar41,(Il2CppObject *)pSVar55,
                     (Il2CppObject *)0x0,(MethodInfo *)0x0);
        }
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86e0;
        il2cpp_runtime_helper_022b2fd0(pSVar55,g_data_057b9c00);
        ppMVar37 = (MethodInfo **)&stack0xffffffffffffff30;
label_03fe86e0:
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86e5;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abe70 != '\0') goto label_03fe85db;
label_03fe86f2:
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86fe;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abe70 = '\x01';
        pMVar48 = *ppMVar37;
        if (*(int *)((long)&pMVar48[2].parameters + 4) != 0) goto label_03fe85eb;
label_03fe8715:
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe871a;
        il2cpp_runtime_helper_02337ed0();
        pMVar48 = *ppMVar37;
        lVar46 = *(long *)pMVar48[2].virtualMethodPointer;
        if (lVar46 == 0) break;
      } while( true );
    }
label_03fe8833:
    do {
      do {
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8838;
        il2cpp_runtime_helper_022b2c90();
label_03fe8838:
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe883d;
        auVar52 = il2cpp_runtime_helper_022b2c90();
        if (auVar52._8_4_ != 1) {
label_03fe8896:
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe88b0;
          __this_08.fields._index = uVar53;
          __this_08.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_08.fields._version = uVar54;
          __this_08.fields._currentKey = (Il2CppObject *)pSVar55;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_08,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe88bd;
          _Unwind_Resume(auVar52._0_8_);
        }
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe886b;
        plVar50 = (long *)__cxa_begin_catch(auVar52._0_8_);
        lVar46 = *plVar50;
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8873;
        __cxa_end_catch();
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8885;
        __this_07.fields._index = uVar53;
        __this_07.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
        __this_07.fields._version = uVar54;
        __this_07.fields._currentKey = (Il2CppObject *)pSVar55;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_07,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
        if (lVar46 != 0) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8896;
          il2cpp_runtime_helper_022fefe0(lVar46);
          goto label_03fe8896;
        }
label_03fe8761:
        if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87ec;
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057abe70 == '\0') goto label_03fe87f5;
label_03fe877d:
          if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe878d;
label_03fe8818:
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe881d;
          il2cpp_runtime_helper_02337ed0();
          lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
        else {
          if (g_data_057abe70 != '\0') goto label_03fe877d;
label_03fe87f5:
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8801;
          il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
          g_data_057abe70 = '\x01';
          if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8818;
label_03fe878d:
          lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
      } while (lVar46 == 0);
      if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87ae;
        il2cpp_runtime_helper_02337ed0();
        lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        if (lVar46 == 0) goto label_03fe8833;
      }
      if (*(Photon_Realtime_Player_o **)(lVar46 + 0x108) != (Photon_Realtime_Player_o *)0x0) {
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87db;
        Photon_Realtime_Player__SetCustomProperties
                  (*(Photon_Realtime_Player_o **)(lVar46 + 0x108),
                   (ExitGames_Client_Photon_Hashtable_o *)pPVar41,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                   (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    } while( true );
  }
  if (g_data_057abd89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Operation GetGameList requires a filter.",pPVar31,pPVar23,0);
    il2cpp_runtime_helper_023445d0(&"Operation GetGameList can only be used for lobbies of type SqlLobby.");
    il2cpp_runtime_helper_023445d0(&"GetGameList");
    g_data_057abd89 = '\x01';
  }
  pPVar28 = "GetGameList";
  bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                     ((Photon_Realtime_LoadBalancingClient_o *)pPVar41,0xd9,*(int32_t *)&(pPVar41->_1).fields,
                      (System_String_o *)"GetGameList",(MethodInfo *)in_R8);
  if ((char)bVar21 == '\0') {
    return;
  }
  uVar49 = 0;
  __this_15 = pPVar23;
  bVar21 = System_String__IsNullOrEmpty((System_String_o *)pPVar23,(MethodInfo *)0x0);
  if ((char)bVar21 != '\0') {
    puVar32 = &"Operation GetGameList requires a filter.";
label_03fc21e5:
    pvVar9 = (pPVar41->_1).image;
    (**(code **)((long)pvVar9 + 0x218))(pPVar41,1,*puVar32,*(undefined8 *)((long)pvVar9 + 0x220));
    return;
  }
  if (pPVar31 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    if (*(char *)&(pPVar31->_1).namespaze != '\x02') {
      puVar32 = &"Operation GetGameList can only be used for lobbies of type SqlLobby.";
      goto label_03fc21e5;
    }
    plVar50 = (long *)(pPVar41->_1).name;
    __this_15 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
    if (plVar50 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar50 + 0x2c8);
      (*vtableDispatch)
                (plVar50,pPVar31,pPVar23,*(undefined8 *)(*plVar50 + 0x2d0),vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar35 = (Photon_Realtime_LoadBalancingClient_c *)(uVar49 & 0xffffffff);
  pPVar34 = pPVar28;
  method_00 = in_R8;
  auStack_b0._8_8_ = pPVar41;
  pSStack_a0 = (System_Enum_c *)unaff_R12;
  if (g_data_057abd8a == '\0') {
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2241;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClientState);
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc224d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2259;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Extensions);
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2265;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2271;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. To use expectedProperties or webForward, you have to be in a room. State: ");
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc227d;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. Only string keys allowed for custom properties.");
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2289;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. propertiesToSet must not be null nor empty.");
    g_data_057abd8a = '\x01';
  }
  if (propertiesToSet != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22ab;
    original = MethodInfo_Int32_get_Count;
    pPVar41 = propertiesToSet;
    iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                       ((System_Collections_Generic_Dictionary_object__object__o *)propertiesToSet,
                        (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
    if (iVar20 != 0) {
      uVar36 = (uint)uVar49;
      if (*(Photon_Realtime_Room_o **)&(__this_15->_2).thread_static_fields_offset ==
          (Photon_Realtime_Room_o *)0x0) {
        if ((((pPVar28 == (Photon_Realtime_LoadBalancingClient_c *)0x0) &&
             (in_R8 == (Photon_Realtime_LoadBalancingClient_c *)0x0)) &&
            (pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)&(__this_15->_2).static_fields_size,
            pPVar41 != (Photon_Realtime_LoadBalancingClient_c *)0x0)) &&
           (*(uint *)&(pPVar41->_1).namespaze == uVar36)) {
          Photon_Realtime_Player__SetCustomProperties
                    ((Photon_Realtime_Player_o *)pPVar41,
                     (ExitGames_Client_Photon_Hashtable_o *)propertiesToSet,
                     (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                     (MethodInfo *)method_00);
          return;
        }
        pPVar10 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(__this_15->_1).name)->
                  _LoadBalancingPeer_k__BackingField;
        if (pPVar10 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
          if (*(char *)&(pPVar10->fields)._SocketImplementation_k__BackingField == '\0') {
            return;
          }
          auStack_b0._0_4_ = *(undefined4 *)&(__this_15->_1).properties;
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc23ea;
          pSVar24 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff40,(MethodInfo *)0x0);
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc23fe;
          pSVar24 = System_String__Concat_3ae5ba0("OpSetCustomPropertiesOfActor() failed. To use expectedProperties or webForward, you have to be in a room. State: ",pSVar24,(MethodInfo *)0x0);
          pPVar31 = (__this_15->_1).image;
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc241a;
          (*(pPVar31->vtable)._14_DebugReturn.methodPtr)
                    (__this_15,1,pSVar24,(pPVar31->vtable)._14_DebugReturn.method);
          return;
        }
label_03fc242b:
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)Photon_Realtime_Player__SetCustomProperties;
        auVar51 = il2cpp_runtime_helper_022b2c90();
        pSVar55 = auVar51._8_8_;
        uStackY_108 = auVar51._0_8_;
        pPStackY_e8 = (Photon_Realtime_LoadBalancingClient_c *)&MethodInfo_Int32_get_Count;
        pppMVar39 = (MethodInfo ***)&uStackY_108;
        pPVar31 = pPVar34;
        pPStackY_100 = pPVar35;
        pPStackY_f8 = pPVar28;
        pPStackY_f0 = __this_15;
        pPStackY_e0 = in_R8;
        pPStackY_d8 = propertiesToSet;
        if (g_data_057abdf5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Extensions);
          g_data_057abdf5 = '\x01';
        }
        if (original == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          return;
        }
        unaff_RBP = &MethodInfo_Int32_get_Count;
        pPVar35 = MethodInfo_Int32_get_Count;
        iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                           ((System_Collections_Generic_Dictionary_object__object__o *)original,
                            (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        if (iVar20 == 0) {
          return;
        }
        if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_15 = original;
        pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)
                  Photon_Realtime_Extensions__StripToStringKeys_3ebd1f0
                            ((ExitGames_Client_Photon_Hashtable_o *)original,(MethodInfo *)pPVar35);
        pPVar10 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                  _LoadBalancingPeer_k__BackingField;
        if (pPVar10 == (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
          if (*(char *)((long)&(pPVar41->_1).namespaze + 4) == '\0') {
            return;
          }
          if (pPVar23 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
            iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                               ((System_Collections_Generic_Dictionary_object__object__o *)pPVar23,
                                (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
            if (pPVar34 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
              return;
            }
            if (pSVar55 != (System_Enum_c *)0x0) {
              return;
            }
            if (iVar20 == 0) {
              return;
            }
            target = *(System_Collections_IDictionary_o **)&(pPVar41->_1).this_arg.bits;
            pMVar33 = extraout_RDX_03;
            if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar33 = extraout_RDX_04;
            }
            Photon_Realtime_Extensions__Merge(target,(System_Collections_IDictionary_o *)pPVar23,pMVar33);
            Photon_Realtime_Extensions__StripKeysWithNullValues_3ebdac0
                      (*(ExitGames_Client_Photon_Hashtable_o **)&(pPVar41->_1).this_arg.bits,
                       (MethodInfo *)pPVar23);
            return;
          }
        }
        else if ((char)(pPVar10->fields).wrapIncomingStructs == '\0') {
          if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_15 = (Photon_Realtime_LoadBalancingClient_c *)pSVar55;
          pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)
                    Photon_Realtime_Extensions__StripToStringKeys_3ebd1f0
                              ((ExitGames_Client_Photon_Hashtable_o *)pSVar55,(MethodInfo *)pPVar35);
          auVar51._8_8_ = pPVar23;
          auVar51._0_8_ = pPVar28;
          pPVar31 = (Photon_Realtime_LoadBalancingClient_c *)
                    ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                    _LoadBalancingPeer_k__BackingField;
          if ((pPVar31 != (Photon_Realtime_LoadBalancingClient_c *)0x0) &&
             (__this_15 = (pPVar31->_1).generic_class,
             __this_15 != (Photon_Realtime_LoadBalancingClient_c *)0x0)) {
            uVar36 = *(uint *)&(pPVar41->_1).namespaze;
            pppMVar39 = (MethodInfo ***)&stack0xffffffffffffff30;
            original = pPStackY_100;
            unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)pPStackY_d8;
            in_R8 = pPVar34;
            pSVar55 = (System_Enum_c *)pPStackY_f8;
            pPVar41 = pPStackY_f0;
            pPVar23 = pPStackY_e8;
            pPVar31 = pPStackY_e0;
            goto Photon_Realtime_LoadBalancingClient__OpSetPropertiesOfActor;
          }
        }
        else if (pPVar23 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                             ((System_Collections_Generic_Dictionary_object__object__o *)pPVar23,
                              (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
          if (iVar20 == 0) {
            return;
          }
          original = *(Photon_Realtime_LoadBalancingClient_c **)&(pPVar41->_1).this_arg.bits;
          pMVar33 = extraout_RDX_01;
          if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar33 = extraout_RDX_02;
          }
          pPVar35 = pPVar23;
          Photon_Realtime_Extensions__Merge
                    ((System_Collections_IDictionary_o *)original,(System_Collections_IDictionary_o *)pPVar23,
                     pMVar33);
          __this_15 = *(Photon_Realtime_LoadBalancingClient_c **)&(pPVar41->_1).this_arg.bits;
          Photon_Realtime_Extensions__StripKeysWithNullValues_3ebdac0
                    ((ExitGames_Client_Photon_Hashtable_o *)__this_15,(MethodInfo *)pPVar35);
          pPVar10 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                    _LoadBalancingPeer_k__BackingField;
          if ((pPVar10 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) &&
             (lVar46 = *(long *)&(pPVar10->fields).reuseEventInstance, lVar46 != 0)) {
            __this_00 = *(Photon_Realtime_InRoomCallbacksContainer_o **)(lVar46 + 0xc0);
            __this_15 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
            if (__this_00 != (Photon_Realtime_InRoomCallbacksContainer_o *)0x0) {
              Photon_Realtime_InRoomCallbacksContainer__OnPlayerPropertiesUpdate
                        (__this_00,(Photon_Realtime_Player_o *)pPVar41,
                         (ExitGames_Client_Photon_Hashtable_o *)pPVar23,(MethodInfo *)pPVar31);
              return;
            }
          }
        }
        uVar36 = (uint)pPVar35;
        auVar51 = il2cpp_runtime_helper_022b2c90();
        pPVar28 = pPVar31;
        in_R8 = method_00;
        pPVar31 = pPVar34;
      }
      else {
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22d4;
        __this_09 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22e1;
        ExitGames_Client_Photon_Hashtable___ctor
                  ((ExitGames_Client_Photon_Hashtable_o *)__this_09,(MethodInfo *)0x0);
        pMVar33 = extraout_RDX;
        if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
          pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22f9;
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_00;
        }
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2304;
        original = propertiesToSet;
        pPVar41 = __this_09;
        Photon_Realtime_Extensions__MergeStringKeys
                  ((System_Collections_IDictionary_o *)__this_09,
                   (System_Collections_IDictionary_o *)propertiesToSet,pMVar33);
        pPVar35 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
        if (__this_09 == (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc242b;
        pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2318;
        iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_09,
                            (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        auVar51._4_4_ = extraout_var;
        auVar51._0_4_ = iVar20;
        auVar51._8_8_ = __this_09;
        original = (Photon_Realtime_LoadBalancingClient_c *)auStack_b0._8_8_;
        pSVar55 = pSStack_a0;
        pPVar41 = unaff_R13;
        if (iVar20 == 0) {
          puVar32 = &"OpSetCustomPropertiesOfActor() failed. Only string keys allowed for custom properties.";
          goto label_03fc234a;
        }
      }
Photon_Realtime_LoadBalancingClient__OpSetPropertiesOfActor:
      pPVar35 = auVar51._8_8_;
      *(Photon_Realtime_LoadBalancingClient_c ***)((long)pppMVar39 + -8) = unaff_RBP;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x10) = pPVar31;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x18) = pPVar23;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x20) = pPVar41;
      *(System_Enum_c **)((long)pppMVar39 + -0x28) = pSVar55;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x30) = original;
      *(long *)((long)pppMVar39 + -0x38) = auVar51._0_8_;
      pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)(ulong)uVar36;
      pPVar31 = in_R8;
      if (g_data_057abd8b == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc264f;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc265b;
        il2cpp_runtime_helper_023445d0(&"OpSetPropertiesOfActor() failed. actorProperties must not be null nor empty.");
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2667;
        il2cpp_runtime_helper_023445d0(&"SetProperties");
        g_data_057abd8b = '\x01';
      }
      iVar20 = *(int32_t *)&(__this_15->_1).fields;
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc268b;
      pPVar41 = "SetProperties";
      bVar21 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                         ((Photon_Realtime_LoadBalancingClient_o *)__this_15,0xfc,iVar20,
                          (System_String_o *)"SetProperties",(MethodInfo *)pPVar31);
      if ((char)bVar21 == '\0') {
        return;
      }
      if (pPVar35 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
label_03fc271c:
        pvVar9 = (__this_15->_1).image;
        uVar26 = *(undefined8 *)((long)pvVar9 + 0x220);
        vtableDispatch = *(code **)((long)pvVar9 + 0x218);
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc273e;
        (*vtableDispatch)(__this_15,1,"OpSetPropertiesOfActor() failed. actorProperties must not be null nor empty.",uVar26);
        return;
      }
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc26af;
      pPVar34 = MethodInfo_Int32_get_Count;
      iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                         ((System_Collections_Generic_Dictionary_object__object__o *)pPVar35,
                          (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
      if (iVar20 == 0) goto label_03fc271c;
      pPVar10 = (Photon_Realtime_LoadBalancingPeer_o *)(__this_15->_1).name;
      if (pPVar10 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc26d1;
        pPVar41 = pPVar28;
        pPVar34 = pPVar23;
        pPVar31 = in_R8;
        bVar21 = Photon_Realtime_LoadBalancingPeer__OpSetPropertiesOfActor
                           (pPVar10,uVar36,(ExitGames_Client_Photon_Hashtable_o *)pPVar35,
                            (ExitGames_Client_Photon_Hashtable_o *)pPVar28,(Photon_Realtime_WebFlags_o *)in_R8
                            ,in_R9);
        if ((char)bVar21 == '\0') {
          return;
        }
        plVar50 = *(long **)&(__this_15->_2).thread_static_fields_offset;
        if (plVar50 != (long *)0x0) {
          uVar18 = (undefined7)((ulong)in_R8 >> 8);
          if ((char)plVar50[0xf] != '\0') {
            return;
          }
          in_R8 = (Photon_Realtime_LoadBalancingClient_c *)
                  CONCAT71(uVar18,pPVar28 != (Photon_Realtime_LoadBalancingClient_c *)0x0);
          if (pPVar28 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
            in_R8 = (Photon_Realtime_LoadBalancingClient_c *)CONCAT71(uVar18,1);
          }
          else {
            *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2703;
            pPVar34 = MethodInfo_Int32_get_Count;
            iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                               ((System_Collections_Generic_Dictionary_object__object__o *)pPVar28,
                                (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
            if (iVar20 != 0) {
              return;
            }
            plVar50 = *(long **)&(__this_15->_2).thread_static_fields_offset;
            if (plVar50 == (long *)0x0) goto label_03fc27a8;
          }
          pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)(*plVar50 + 0x1e0);
          vtableDispatch = *(code **)(*plVar50 + 0x1d8);
          *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2771;
          pPVar23 = (Photon_Realtime_LoadBalancingClient_c *)(*vtableDispatch)(plVar50,uVar36,0);
          if (pPVar23 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
            return;
          }
          pvVar9 = (pPVar23->_1).image;
          uVar26 = *(undefined8 *)((long)pvVar9 + 0x180);
          vtableDispatch = *(code **)((long)pvVar9 + 0x178);
          *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc278f;
          pPVar34 = pPVar35;
          (*vtableDispatch)(pPVar23,pPVar35,uVar26);
          __this_01 = __this_15->rgctx_data;
          if (__this_01 != (Il2CppRGCTXData *)0x0) {
            *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc27a6;
            Photon_Realtime_InRoomCallbacksContainer__OnPlayerPropertiesUpdate
                      ((Photon_Realtime_InRoomCallbacksContainer_o *)__this_01,
                       (Photon_Realtime_Player_o *)pPVar23,(ExitGames_Client_Photon_Hashtable_o *)pPVar35,
                       (MethodInfo *)pPVar41);
            return;
          }
        }
      }
label_03fc27a8:
      pSVar45 = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc27ad;
      il2cpp_runtime_helper_022b2c90();
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x40) = in_R8;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x48) = pPVar23;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x50) = pPVar35;
      *(Photon_Realtime_LoadBalancingClient_c ***)((long)pppMVar39 + -0x58) = &MethodInfo_Int32_get_Count;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x60) = pPVar28;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x68) = __this_15;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x70) = pPVar31;
      pPVar31 = pPVar34;
      __this_16 = (Photon_Realtime_LoadBalancingClient_c **)pSVar45;
      if (g_data_057abdd5 == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27e4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27f0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27fc;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2808;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2814;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2820;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IPhotonPeerListener);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc282c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SendOptions);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2838;
        il2cpp_runtime_helper_023445d0(&"OpSetPropertiesOfActor not sent. ActorNr must be > 0 and actorProperties must be not null nor empty.");
        __this_16 = &"OpSetPropertiesOfActor()";
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2844;
        il2cpp_runtime_helper_023445d0();
        g_data_057abdd5 = '\x01';
      }
      pPVar23 = "OpSetPropertiesOfActor()";
      if (2 < *(byte *)&(pSVar45->fields)._values) {
        pSVar30 = (System_Collections_Generic_Dictionary_byte__object__o *)(pSVar45->fields)._syncRoot;
        if (pSVar30 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_03fc2aef;
        pSVar14 = pSVar30->klass;
        uVar4._0_1_ = (pSVar14->_2).rank;
        uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar15 = (pSVar14->_1).interfaceOffsets;
          lVar46 = 0;
          do {
            if (*(long *)((long)&pIVar15->interfaceType + lVar46) == TypeInfo_IPhotonPeerListener) {
              ppIVar29 = &(&(pSVar14->vtable)._0_Equals)[*(int *)((long)&pIVar15->offset + lVar46)].methodPtr;
              goto label_03fc28bd;
            }
            lVar46 = lVar46 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar46);
        }
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28a9;
        ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IPhotonPeerListener,0);
label_03fc28bd:
        pPVar31 = (Photon_Realtime_LoadBalancingClient_c *)0x3;
        pIVar8 = *ppIVar29;
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28ce;
        (*pIVar8)(pSVar30,3,pPVar23);
        __this_16 = (Photon_Realtime_LoadBalancingClient_c **)pSVar30;
        pPVar35 = pPVar23;
      }
      if ((0 < (int)pPVar34) && (__this_12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0))
      {
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28f2;
        pPVar31 = MethodInfo_Int32_get_Count;
        __this_16 = (Photon_Realtime_LoadBalancingClient_c **)__this_12;
        iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                           (__this_12,(MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        if (iVar20 != 0) {
          *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2909;
          pSVar30 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
          *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc291e;
          pPVar31 = MethodInfo_Dictionary_2_System_Byte_System_Object;
          __this_16 = (Photon_Realtime_LoadBalancingClient_c **)pSVar30;
          System_Collections_Generic_Dictionary_byte__object____ctor
                    (pSVar30,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
          if (pSVar30 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2941;
            System_Collections_Generic_Dictionary_byte__object___Add
                      (pSVar30,0xfb,(Il2CppObject *)__this_12,MethodInfo_Void_Add);
            *(int *)((long)pppMVar39 + -0x74) = (int)pPVar34;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc295c;
            pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)pppMVar39 + -0x74))
            ;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc296f;
            System_Collections_Generic_Dictionary_byte__object___Add(pSVar30,0xfe,pIVar43,MethodInfo_Void_Add);
            *(undefined1 *)((long)pppMVar39 + -0x75) = 1;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2983;
            pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(undefined1 *)((long)pppMVar39 + -0x75))
            ;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2996;
            System_Collections_Generic_Dictionary_byte__object___Add(pSVar30,0xfa,pIVar43,MethodInfo_Void_Add);
            if (pPVar41 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29ad;
              iVar20 = System_Collections_Generic_Dictionary_object__object___get_Count
                                 ((System_Collections_Generic_Dictionary_object__object__o *)pPVar41,
                                  (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
              if (iVar20 != 0) {
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29c4;
                System_Collections_Generic_Dictionary_byte__object___Add
                          (pSVar30,0xe7,(Il2CppObject *)pPVar41,MethodInfo_Void_Add);
              }
            }
            __this_02 = *(Photon_Realtime_WebFlags_o **)((long)pppMVar39 + -0x70);
            if (__this_02 != (Photon_Realtime_WebFlags_o *)0x0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29d8;
              bVar21 = Photon_Realtime_WebFlags__get_HttpForward(__this_02,(MethodInfo *)0x0);
              if ((char)bVar21 != '\0') {
                *(uint8_t *)((long)pppMVar39 + -0x76) = (__this_02->fields).WebhookFlags;
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29f2;
                pIVar43 = (Il2CppObject *)
                          il2cpp_runtime_helper_02304f30(g_data_057b9b88,(undefined1 *)((long)pppMVar39 + -0x76));
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a0c;
                System_Collections_Generic_Dictionary_byte__object___set_Item
                          (pSVar30,0xea,pIVar43,MethodInfo_Void_set_Item);
              }
            }
            if (*(int *)(TypeInfo_SendOptions + 0xe4) == 0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a25;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar26 = **(undefined8 **)(TypeInfo_SendOptions + 0xb8);
            pMVar33 = (pSVar45->klass->vtable)._15_unknown.method;
            pIVar8 = (pSVar45->klass->vtable)._15_unknown.methodPtr;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a4f;
            (*pIVar8)(pSVar45,0xfc,pSVar30,uVar26,pMVar33);
            return;
          }
          goto label_03fc2aef;
        }
      }
      uVar26 = "OpSetPropertiesOfActor not sent. ActorNr must be > 0 and actorProperties must be not null nor empty.";
      if (*(byte *)&(pSVar45->fields)._values < 3) {
        return;
      }
      pIVar43 = (pSVar45->fields)._syncRoot;
      if (pIVar43 != (Il2CppObject *)0x0) {
        pIVar16 = pIVar43->klass;
        uVar5._0_1_ = (pIVar16->_2).rank;
        uVar5._1_1_ = (pIVar16->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar15 = (pIVar16->_1).interfaceOffsets;
          lVar46 = 0;
          do {
            if (*(long *)((long)&pIVar15->interfaceType + lVar46) == TypeInfo_IPhotonPeerListener) {
              ppIVar29 = &pIVar16->vtable[*(int *)((long)&pIVar15->offset + lVar46)].methodPtr;
              goto label_03fc2acd;
            }
            lVar46 = lVar46 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar46);
        }
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2ab9;
        ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar43,TypeInfo_IPhotonPeerListener,0);
label_03fc2acd:
        pMVar33 = (MethodInfo *)ppIVar29[1];
        pIVar8 = *ppIVar29;
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2ade;
        (*pIVar8)(pIVar43,3,uVar26,pMVar33);
        return;
      }
label_03fc2aef:
      *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2af4;
      il2cpp_runtime_helper_022b2c90();
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pppMVar39 + -0x88) = __this_12;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x90) = pPVar41;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x98) = pPVar35;
      *(System_Collections_Generic_Dictionary_byte__object__o **)((long)pppMVar39 + -0xa0) = pSVar45;
      *(ulong *)((long)pppMVar39 + -0xa8) = (ulong)pPVar34 & 0xffffffff;
      *(undefined8 *)((long)pppMVar39 + -0xb0) = 0;
      pPVar23 = pPVar31;
      if (g_data_057abdb8 == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b2c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b38;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b44;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IInRoomCallbacks_get_Current);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b50;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IInRoomCallbacks);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b5c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_IInRoomCallbacks_Get);
        g_data_057abdb8 = '\x01';
      }
      *(undefined8 *)((long)pppMVar39 + -200) = 0;
      *(undefined8 *)((long)pppMVar39 + -0xc0) = 0;
      *(undefined8 *)((long)pppMVar39 + -0xb8) = 0;
      pPVar44 = *(Photon_Realtime_LoadBalancingClient_o **)
                 &(((System_Collections_Generic_Dictionary_byte__object__o *)__this_16)->fields)._freeCount;
      if (pPVar44 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b85;
        Photon_Realtime_LoadBalancingClient__UpdateCallbackTargets(pPVar44,(MethodInfo *)pPVar23);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b9d;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)((long)pppMVar39 + -200),
                   (System_Collections_Generic_List_object__o *)__this_16,MethodInfo_List_1_T_Enumerator_Photon_Realtime_IInRoomCallbacks_Get);
        while( true ) {
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bd8;
          bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o)
                              *(System_Collections_Generic_List_Enumerator_object__Fields *)
                               ((long)pppMVar39 + -200),(MethodInfo_321A1D0 *)((long)pppMVar39 + -200));
          if ((char)bVar21 == '\0') {
            *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c5e;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                       (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
            return;
          }
          plVar50 = *(long **)((long)pppMVar39 + -0xb8);
          if (plVar50 == (long *)0x0) break;
          lVar46 = *plVar50;
          if ((ulong)*(ushort *)(lVar46 + 0x12e) != 0) {
            lVar47 = 0;
            do {
              if (*(long *)(*(long *)(lVar46 + 0xb0) + lVar47) == TypeInfo_IInRoomCallbacks) {
                puVar32 = (undefined8 *)
                          (lVar46 + (long)(*(int *)(*(long *)(lVar46 + 0xb0) + 8 + lVar47) + 3) * 0x10 + 0x138
                          );
                goto label_03fc2bbd;
              }
              lVar47 = lVar47 + 0x10;
            } while ((ulong)*(ushort *)(lVar46 + 0x12e) << 4 != lVar47);
          }
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bbd;
          puVar32 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar50,TypeInfo_IInRoomCallbacks,3);
label_03fc2bbd:
          vtableDispatch = (code *)*puVar32;
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bcc;
          (*vtableDispatch)(plVar50,pPVar31,extraout_RDX_05);
        }
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c72;
        il2cpp_runtime_helper_022b2c90();
      }
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c77;
      auVar52 = il2cpp_runtime_helper_022b2c90();
      if (auVar52._8_4_ == 1) {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c9b;
        plVar50 = (long *)__cxa_begin_catch(auVar52._0_8_);
        lVar46 = *plVar50;
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2ca3;
        __cxa_end_catch();
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cb5;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                   (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
        if (lVar46 == 0) {
          return;
        }
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cc2;
        il2cpp_runtime_helper_022fefe0(lVar46);
      }
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cdb;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                 (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2ce8;
      _Unwind_Resume(auVar52._0_8_);
    }
  }
  puVar32 = &"OpSetCustomPropertiesOfActor() failed. propertiesToSet must not be null nor empty.";
label_03fc234a:
  pPVar31 = (__this_15->_1).image;
  pPStackY_d8 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2366;
  (*(pPVar31->vtable)._14_DebugReturn.methodPtr)
            (__this_15,1,*puVar32,(pPVar31->vtable)._14_DebugReturn.method);
  return;
}


// GameManagers.MainMenuGameManager$$OnConnectedToMaster
// il2cpp: void GameManagers_MainMenuGameManager__OnConnectedToMaster (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4569290

void GameManagers_MainMenuGameManager__OnConnectedToMaster
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  Photon_Realtime_EnterRoomParams_o **ppPVar1;
  int *piVar2;
  code cVar3;
  ushort uVar4;
  ushort uVar5;
  System_Net_NetworkCredential_o *pSVar6;
  Il2CppMethodPointer pIVar7;
  void *pvVar8;
  code *vtableDispatch;
  Photon_Realtime_LoadBalancingPeer_o *pPVar9;
  System_Action_ClientState__ClientState__o *pSVar10;
  intptr_t iVar11;
  intptr_t iVar12;
  Photon_Realtime_InRoomCallbacksContainer_o *__this_00;
  System_Collections_IDictionary_o *target;
  Il2CppRGCTXData *__this_01;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar13;
  Il2CppRuntimeInterfaceOffsetPair *pIVar14;
  Photon_Realtime_WebFlags_o *__this_02;
  Il2CppClass *pIVar15;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined7 uVar16;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_08;
  char cVar17;
  int32_t iVar18;
  bool_conflict bVar19;
  int iVar20;
  Photon_Realtime_LoadBalancingClient_c *pPVar21;
  System_String_o *pSVar22;
  System_Object_array *pSVar23;
  undefined8 uVar24;
  Photon_Realtime_EnterRoomParams_o *pPVar25;
  Photon_Realtime_LoadBalancingClient_c *pPVar26;
  undefined4 extraout_var;
  Photon_Realtime_LoadBalancingClient_c *pPVar27;
  Photon_Realtime_LoadBalancingClient_c *pPVar28;
  Il2CppMethodPointer *ppIVar29;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar30;
  long *plVar31;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_09;
  undefined8 *puVar32;
  MethodInfo *pMVar33;
  Photon_Realtime_LoadBalancingClient_c *pPVar34;
  Photon_Realtime_LoadBalancingClient_c *propertiesToSet;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Photon_Realtime_LoadBalancingClient_c *pPVar35;
  System_Collections_Generic_Dictionary_object__object__o *__this_10;
  undefined8 extraout_RDX_05;
  uint uVar36;
  Photon_Realtime_LoadBalancingClient_c *pPVar37;
  MethodInfo **ppMVar38;
  Photon_Realtime_LoadBalancingClient_c *unaff_RBX;
  MethodInfo ***pppMVar39;
  Photon_Realtime_LoadBalancingClient_c **unaff_RBP;
  undefined8 uVar40;
  Photon_Realtime_LoadBalancingClient_c *pPVar41;
  System_Object_array *pSVar42;
  Il2CppObject *pIVar43;
  Photon_Realtime_LoadBalancingClient_o *pPVar44;
  Photon_Realtime_LoadBalancingClient_o *__this_11;
  Il2CppObject *__this_12;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar45;
  Photon_Realtime_LoadBalancingClient_c **__this_13;
  long lVar46;
  long lVar47;
  MethodInfo *pMVar48;
  Photon_Realtime_LoadBalancingClient_c *in_R8;
  MethodInfo *in_R9;
  Photon_Realtime_LoadBalancingClient_c *unaff_R12;
  ulong uVar49;
  Photon_Realtime_LoadBalancingClient_c *unaff_R13;
  undefined8 unaff_R14;
  Photon_Realtime_LoadBalancingClient_o *unaff_R15;
  undefined1 auVar50 [16];
  undefined1 auVar51 [12];
  uint8_t auStackY_156 [118];
  undefined8 uStackY_e0;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_d8;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_d0;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_c8;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_c0;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_b8;
  Photon_Realtime_LoadBalancingClient_c *pPStackY_b0;
  undefined4 uVar52;
  undefined4 uVar53;
  System_Enum_c *key;
  int32_t iStack_88;
  undefined4 uStack_84;
  Photon_Realtime_LoadBalancingClient_c *pPStack_80;
  System_Enum_c *in_stack_ffffffffffffff88;
  MethodInfo **ppMStack_50;
  
  if (g_data_057af02e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af02e = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_045692f7;
label_045692ad:
    if (g_data_057abf5b != '\0') goto label_045692b6;
label_04569305:
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_04569324;
label_045692c2:
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_045692ad;
label_045692f7:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057abf5b == '\0') goto label_04569305;
label_045692b6:
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_045692c2;
label_04569324:
    il2cpp_runtime_helper_02337ed0();
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  if (cVar3 != (code)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abebb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebb = '\x01';
    iVar20 = *(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4);
  }
  else {
    iVar20 = *(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4);
  }
  if (iVar20 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
  if (g_data_057abebc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebc = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe829f;
label_03fe8223:
    bVar19 = Photon_Pun_PhotonNetwork__get_IsConnected(TypeInfo_PhotonNetwork);
    cVar17 = (char)bVar19;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe8223;
label_03fe829f:
    pMVar33 = TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_02337ed0();
    bVar19 = Photon_Pun_PhotonNetwork__get_IsConnected(pMVar33);
    cVar17 = (char)bVar19;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  if (cVar17 == '\0') {
    TypeInfo_PhotonNetwork = pMVar33;
    return;
  }
  TypeInfo_PhotonNetwork = pMVar33;
  if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar20 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  else {
    iVar20 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  if (iVar20 != 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar27 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if (pPVar27 != (Photon_Realtime_LoadBalancingClient_c *)0x0)
  goto Photon_Realtime_LoadBalancingClient__OpJoinLobby;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abebd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebd = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8360;
label_03fe82ed:
    bVar19 = Photon_Pun_PhotonNetwork__get_IsConnected(TypeInfo_PhotonNetwork);
    cVar17 = (char)bVar19;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe82ed;
label_03fe8360:
    pMVar33 = TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_02337ed0();
    bVar19 = Photon_Pun_PhotonNetwork__get_IsConnected(pMVar33);
    cVar17 = (char)bVar19;
    pMVar33 = TypeInfo_PhotonNetwork;
  }
  if (cVar17 == '\0') {
    TypeInfo_PhotonNetwork = pMVar33;
    return;
  }
  TypeInfo_PhotonNetwork = pMVar33;
  if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar20 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  else {
    iVar20 = Photon_Pun_PhotonNetwork__get_Server(pMVar33);
  }
  if (iVar20 != 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R15 = *(Photon_Realtime_LoadBalancingClient_o **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if (unaff_R15 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
    Photon_Realtime_LoadBalancingClient__OpLeaveLobby(unaff_R15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abebe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebe = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8430;
label_03fe83b3:
    pIVar7 = TypeInfo_PhotonNetwork[2].virtualMethodPointer;
    lVar46 = *(long *)pIVar7;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe83b3;
label_03fe8430:
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = TypeInfo_PhotonNetwork[2].virtualMethodPointer;
    lVar46 = *(long *)pIVar7;
  }
  if (lVar46 == 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar3 = TypeInfo_PhotonNetwork[2].virtualMethodPointer[0x30];
  }
  else {
    cVar3 = pIVar7[0x30];
  }
  if (cVar3 != (code)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_RBX = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  if (unaff_RBX != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    unaff_R14 = 0;
    ppMStack_50 = &TypeInfo_PhotonNetwork;
    if (g_data_057abd7f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add,unaff_R15,0,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      il2cpp_runtime_helper_023445d0(&"FindFriends");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains a null or empty UserId, element at position {0} skipped.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friendsToFind array exceeds allowed length of {0}.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friends list to find is empty.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: friendsToFind array is null or empty.");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains duplicate UserId \"{0}\", element at position {1} skipped.");
      il2cpp_runtime_helper_023445d0(&"OpFindFriends skipped: already fetching friends list.");
      il2cpp_runtime_helper_023445d0(&"friendsToFind array contains local player's UserId \"{0}\", element at position {1} skipped.");
      g_data_057abd7f = '\x01';
    }
    bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                       ((Photon_Realtime_LoadBalancingClient_o *)unaff_RBX,0xde,
                        *(int32_t *)((long)&unaff_RBX->_1 + 0x80),"FindFriends",(MethodInfo *)in_R8);
    if ((char)bVar19 == '\0') {
      return;
    }
    if (*(System_String_array **)&unaff_RBX->vtable != (System_String_array *)0x0) {
      pPVar41 = (unaff_RBX->_1).image;
      pMVar33 = (pPVar41->vtable)._14_DebugReturn.method;
      uVar40 = 2;
      uVar24 = "OpFindFriends skipped: already fetching friends list.";
      goto label_03fc167b;
    }
    if ((unaff_R15 != (Photon_Realtime_LoadBalancingClient_o *)0x0) &&
       (pSVar6 = (unaff_R15->fields).AppVersion, pSVar6 != (System_Net_NetworkCredential_o *)0x0)) {
      if (0x200 < (int)pSVar6) {
        pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffac);
        pSVar22 = System_String__Format("OpFindFriends skipped: friendsToFind array exceeds allowed length of {0}.",pIVar43,(MethodInfo *)0x0);
        pvVar8 = (unaff_RBX->_1).image;
        (**(code **)((long)pvVar8 + 0x218))(unaff_RBX,1,pSVar22,*(undefined8 *)((long)pvVar8 + 0x220));
        return;
      }
      pPVar21 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      uVar36 = *(uint *)&(unaff_R15->fields).AppVersion;
      pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)(ulong)uVar36;
      pPVar27 = pPVar21;
      System_Collections_Generic_List_object____ctor_362b930
                ((System_Collections_Generic_List_object__o *)pPVar21,uVar36,MethodInfo_List_1_System_String);
      pSVar6 = (unaff_R15->fields).AppVersion;
      if ((int)pSVar6 < 1) {
label_03fc16e5:
        if (pPVar21 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          if (*(int *)&(pPVar21->_1).namespaze == 0) {
            puVar32 = &"OpFindFriends skipped: friends list to find is empty.";
            goto label_03fc1666;
          }
          pPVar41 = MethodInfo_String_ToArray;
          pSVar23 = System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)pPVar21,
                               (MethodInfo_362E340 *)MethodInfo_String_ToArray);
          plVar31 = (long *)(unaff_RBX->_1).name;
          pPVar27 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
          if (plVar31 != (long *)0x0) {
            cVar17 = (**(code **)(*plVar31 + 0x2d8))(plVar31,pSVar23,0,*(undefined8 *)(*plVar31 + 0x2e0));
            pSVar42 = (System_Object_array *)0x0;
            if (cVar17 != '\0') {
              pSVar42 = pSVar23;
            }
            (unaff_RBX->vtable)._0_Equals.methodPtr = (Il2CppMethodPointer)pSVar42;
            il2cpp_runtime_helper_022b4080(&unaff_RBX->vtable);
            return;
          }
        }
      }
      else {
        uVar49 = 0;
        if (((ulong)pSVar6 & 0xffffffff) != 0) {
          do {
            unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)
                        (&(unaff_R15->fields)._AppId_k__BackingField)[uVar49];
            pPVar27 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
            bVar19 = System_String__IsNullOrEmpty((System_String_o *)unaff_RBP,(MethodInfo *)0x0);
            if ((char)bVar19 == '\0') {
              pvVar8 = (unaff_RBX->_1).this_arg.data;
              if (pvVar8 == (void *)0x0) {
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
              }
              else {
                pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)((long)pvVar8 + 0x30);
              }
              if ((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP ==
                  (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc1758;
              pPVar27 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
              bVar19 = System_String__Equals_3af4db0
                                 ((System_String_o *)unaff_RBP,(System_String_o *)pPVar41,(MethodInfo *)0x0);
              if ((char)bVar19 != '\0') {
                pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffac);
                puVar32 = &"friendsToFind array contains local player's UserId \"{0}\", element at position {1} skipped.";
label_03fc15e1:
                pSVar22 = System_String__Format_3af78e0
                                    ((System_String_o *)*puVar32,(Il2CppObject *)unaff_RBP,pIVar43,
                                     (MethodInfo *)0x0);
                goto label_03fc14fe;
              }
              if (pPVar21 == (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc1758;
              pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
              pPVar27 = pPVar21;
              bVar19 = System_Collections_Generic_List_object___Contains
                                 ((System_Collections_Generic_List_object__o *)pPVar21,
                                  (Il2CppObject *)unaff_RBP,MethodInfo_Boolean_Contains);
              lVar46 = MethodInfo_Void_Add;
              if ((char)bVar19 != '\0') {
                pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffac);
                puVar32 = &"friendsToFind array contains duplicate UserId \"{0}\", element at position {1} skipped.";
                goto label_03fc15e1;
              }
              piVar2 = (int *)((long)&(pPVar21->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pPVar9 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar21->_1).name)->
                       _LoadBalancingPeer_k__BackingField;
              if (pPVar9 == (Photon_Realtime_LoadBalancingPeer_o *)0x0) goto label_03fc1758;
              uVar36 = *(uint *)&(pPVar21->_1).namespaze;
              if (uVar36 < (uint)(pPVar9->fields).WarningSize) {
                *(uint *)&(pPVar21->_1).namespaze = uVar36 + 1;
                pPVar27 = (Photon_Realtime_LoadBalancingClient_c *)
                          (&(pPVar9->fields).TargetFramework + (long)(int)uVar36 * 2);
                *(Photon_Realtime_LoadBalancingClient_c ***)
                 (&(pPVar9->fields).TargetFramework + (long)(int)uVar36 * 2) = unaff_RBP;
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)unaff_RBP;
                pPVar27 = pPVar21;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pPVar21,(Il2CppObject *)unaff_RBP,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffac);
              pSVar22 = System_String__Format("friendsToFind array contains a null or empty UserId, element at position {0} skipped.",pIVar43,(MethodInfo *)0x0);
label_03fc14fe:
              unaff_RBP = (unaff_RBX->_1).image;
              pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x2;
              pPVar27 = unaff_RBX;
              (*(((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP)->vtable)._14_DebugReturn.methodPtr)
                        (unaff_RBX,2,pSVar22,
                         (((Photon_Realtime_LoadBalancingClient_c *)unaff_RBP)->vtable)._14_DebugReturn.method
                        );
            }
            uVar49 = uVar49 + 1;
            uVar36 = *(uint *)&(unaff_R15->fields).AppVersion;
            if ((long)(int)uVar36 <= (long)uVar49) goto label_03fc16e5;
          } while (uVar49 < uVar36);
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_03fc1758:
      il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffa8;
Photon_Realtime_LoadBalancingClient__OpJoinLobby:
      *(Photon_Realtime_LoadBalancingClient_c ***)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)register0x00000020 + -0x18) = unaff_RBX;
      if (g_data_057abd80 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc177f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_TypedLobby);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc178b;
        il2cpp_runtime_helper_023445d0(&"JoinLobby");
        g_data_057abd80 = '\x01';
      }
      iVar18 = *(int32_t *)&(pPVar27->_1).fields;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc17af;
      bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                         ((Photon_Realtime_LoadBalancingClient_o *)pPVar27,0xe5,iVar18,"JoinLobby",
                          (MethodInfo *)in_R8);
      if ((char)bVar19 != '\0') {
        if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          if (*(int *)(TypeInfo_TypedLobby + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc17d5;
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)**(undefined8 **)(TypeInfo_TypedLobby + 0xb8);
          unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)&TypeInfo_TypedLobby;
        }
        pPVar44 = (Photon_Realtime_LoadBalancingClient_o *)(pPVar27->_1).name;
        if (pPVar44 == (Photon_Realtime_LoadBalancingClient_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc185d;
          il2cpp_runtime_helper_022b2c90();
          *(Photon_Realtime_LoadBalancingClient_c **)((long)register0x00000020 + -0x20) = pPVar27;
          if (g_data_057abd81 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x28) = 0x3fc1879;
            il2cpp_runtime_helper_023445d0(&"LeaveLobby");
            g_data_057abd81 = '\x01';
          }
          iVar18 = (pPVar44->fields)._Server_k__BackingField;
          pIVar43 = (Il2CppObject *)0xe4;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x3fc189d;
          bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                             (pPVar44,0xe4,iVar18,"LeaveLobby",(MethodInfo *)in_R8);
          if ((char)bVar19 == '\0') {
            return;
          }
          __this_11 = (Photon_Realtime_LoadBalancingClient_o *)
                      (pPVar44->fields)._LoadBalancingPeer_k__BackingField;
          if (__this_11 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
            (*(((Photon_Realtime_LoadBalancingPeer_c *)__this_11->klass)->vtable)._19_OpLeaveLobby.methodPtr)
                      (__this_11,
                       (((Photon_Realtime_LoadBalancingPeer_c *)__this_11->klass)->vtable)._19_OpLeaveLobby.
                       method);
            return;
          }
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x3fc18c7;
          uVar24 = il2cpp_runtime_helper_022b2c90();
          *(Photon_Realtime_LoadBalancingClient_c ***)((long)register0x00000020 + -0x28) = unaff_RBP;
          *(Photon_Realtime_LoadBalancingClient_o **)((long)register0x00000020 + -0x30) = unaff_R15;
          *(Photon_Realtime_LoadBalancingClient_c **)((long)register0x00000020 + -0x38) = pPVar41;
          *(Photon_Realtime_LoadBalancingClient_o **)((long)register0x00000020 + -0x40) = pPVar44;
          *(undefined8 *)((long)register0x00000020 + -0x48) = uVar24;
          if (g_data_057abd82 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc18f2;
            il2cpp_runtime_helper_023445d0(&TypeInfo_EnterRoomParams);
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc18fe;
            il2cpp_runtime_helper_023445d0(&TypeInfo_OpJoinRandomRoomParams);
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc190a;
            il2cpp_runtime_helper_023445d0(&"JoinRandomGame");
            g_data_057abd82 = '\x01';
          }
          iVar18 = (__this_11->fields)._Server_k__BackingField;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc192e;
          bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                             (__this_11,0xe1,iVar18,"JoinRandomGame",(MethodInfo *)in_R8);
          if ((char)bVar19 != '\0') {
            if (pIVar43 == (Il2CppObject *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc194a;
              pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OpJoinRandomRoomParams);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1957;
              System_Object___ctor(pIVar43,(MethodInfo *)0x0);
            }
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1966;
            pPVar25 = (Photon_Realtime_EnterRoomParams_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EnterRoomParams);
            *(undefined1 *)&(pPVar25->fields).OnGameServer = 1;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1977;
            System_Object___ctor((Il2CppObject *)pPVar25,(MethodInfo *)0x0);
            ppPVar1 = &(__this_11->fields).enterRoomParamsCache;
            (__this_11->fields).enterRoomParamsCache = pPVar25;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1990;
            __this_12 = (Il2CppObject *)ppPVar1;
            il2cpp_runtime_helper_022b4080();
            if (pIVar43 != (Il2CppObject *)0x0) {
              pPVar25 = (__this_11->fields).enterRoomParamsCache;
              __this_12 = (Il2CppObject *)0x0;
              if (pPVar25 != (Photon_Realtime_EnterRoomParams_o *)0x0) {
                (pPVar25->fields).Lobby = (Photon_Realtime_TypedLobby_o *)pIVar43[2].klass;
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc19ba;
                il2cpp_runtime_helper_022b4080(&(pPVar25->fields).Lobby);
                pPVar25 = *ppPVar1;
                __this_12 = (Il2CppObject *)0x0;
                if (pPVar25 != (Photon_Realtime_EnterRoomParams_o *)0x0) {
                  (pPVar25->fields).ExpectedUsers = (System_String_array *)pIVar43[3].klass;
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc19d7;
                  il2cpp_runtime_helper_022b4080(&(pPVar25->fields).ExpectedUsers);
                  pPVar9 = (__this_11->fields)._LoadBalancingPeer_k__BackingField;
                  __this_12 = (Il2CppObject *)0x0;
                  if (pPVar9 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
                    pMVar33 = (pPVar9->klass->vtable)._22_OpJoinRandomRoom.method;
                    pIVar7 = (pPVar9->klass->vtable)._22_OpJoinRandomRoom.methodPtr;
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc19f3;
                    cVar17 = (*pIVar7)(pPVar9,pIVar43,pMVar33);
                    if (cVar17 == '\0') {
                      return;
                    }
                    (__this_11->fields).lastJoinType = 2;
                    iVar20 = (__this_11->fields).state;
                    if (iVar20 == 8) {
                      return;
                    }
                    (__this_11->fields).state = 8;
                    pSVar10 = (__this_11->fields).StateChanged;
                    if (pSVar10 == (System_Action_ClientState__ClientState__o *)0x0) {
                      return;
                    }
                    iVar11 = (pSVar10->fields).method;
                    iVar12 = (pSVar10->fields).method_code;
                    vtableDispatch = (code *)(pSVar10->fields).invoke_impl;
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1a35;
                    (*vtableDispatch)(iVar12,iVar20,8,iVar11);
                    return;
                  }
                }
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3fc1a4b;
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor(__this_12,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        pMVar33 = (pPVar44->klass->vtable)._18_OnMessage.method;
        pIVar7 = (pPVar44->klass->vtable)._18_OnMessage.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc17ff;
        cVar17 = (*pIVar7)(pPVar44,pPVar41,pMVar33);
        if (cVar17 != '\0') {
          (pPVar27->_2).genericContainerHandle = pPVar41;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc1819;
          il2cpp_runtime_helper_022b4080(&(pPVar27->_2).genericContainerHandle,pPVar41);
          iVar20 = *(int *)&(pPVar27->_1).properties;
          if (iVar20 != 3) {
            *(undefined4 *)&(pPVar27->_1).properties = 3;
            pvVar8 = (pPVar27->_1).methods;
            if (pvVar8 != (void *)0x0) {
              uVar24 = *(undefined8 *)((long)pvVar8 + 0x28);
              uVar40 = *(undefined8 *)((long)pvVar8 + 0x40);
              vtableDispatch = *(code **)((long)pvVar8 + 0x18);
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3fc184d;
              (*vtableDispatch)(uVar40,iVar20,3,uVar24);
            }
          }
        }
      }
      return;
    }
    puVar32 = &"OpFindFriends skipped: friendsToFind array is null or empty.";
label_03fc1666:
    uVar24 = *puVar32;
    pPVar41 = (unaff_RBX->_1).image;
    pMVar33 = (pPVar41->vtable)._14_DebugReturn.method;
    uVar40 = 1;
label_03fc167b:
    (*(pPVar41->vtable)._14_DebugReturn.methodPtr)(unaff_RBX,uVar40,uVar24,pMVar33);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pppMVar39 = &ppMStack_50;
  ppMStack_50 = &TypeInfo_PhotonNetwork;
  if (g_data_057abebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abebf = '\x01';
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe84ee;
label_03fe84a7:
    pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  }
  else {
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe84a7;
label_03fe84ee:
    il2cpp_runtime_helper_02337ed0();
    pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
  }
  if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057abec0 == '\0') {
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8533;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe853f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe854b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8557;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8563;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe856f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe857b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abec0 = '\x01';
    }
    pMVar33 = (MethodInfo *)0x0;
    uVar52 = 0;
    uVar53 = 0;
    key = (System_Enum_c *)0x0;
    if (pPVar41 != (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fe8761;
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe85aa;
    pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe85b7;
    ExitGames_Client_Photon_Hashtable___ctor((ExitGames_Client_Photon_Hashtable_o *)pPVar41,(MethodInfo *)0x0)
    ;
    ppMVar38 = &TypeInfo_PhotonNetwork;
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe86e0;
    if (g_data_057abe70 == '\0') goto label_03fe86f2;
label_03fe85db:
    pMVar48 = *ppMVar38;
    if (*(int *)((long)&pMVar48[2].parameters + 4) == 0) goto label_03fe8715;
label_03fe85eb:
    lVar46 = *(long *)pMVar48[2].virtualMethodPointer;
    if (lVar46 != 0) {
      do {
        if (*(int *)((long)&pMVar48[2].parameters + 4) == 0) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe860c;
          il2cpp_runtime_helper_02337ed0();
          lVar46 = *(long *)(*ppMVar38)[2].virtualMethodPointer;
          if (lVar46 == 0) break;
        }
        if ((*(long *)(lVar46 + 0x108) == 0) ||
           (__this_03 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(lVar46 + 0x108) + 0x38),
           __this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe864e;
        __this_09 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
        if (__this_09 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) break;
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe866e;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   &iStack_88,__this_09,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pMVar33 = (MethodInfo *)CONCAT44(uStack_84,iStack_88);
        uVar52 = SUB84(pPStack_80,0);
        uVar53 = (undefined4)((ulong)pPStack_80 >> 0x20);
        key = in_stack_ffffffffffffff88;
        if (pPVar41 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8747;
          __this_05.fields._index = uVar52;
          __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_05.fields._version = uVar53;
          __this_05.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88;
          bVar19 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_05,(MethodInfo_3251B20 *)&stack0xffffffffffffff58);
          key = in_stack_ffffffffffffff88;
          if ((char)bVar19 != '\0') goto label_03fe8838;
label_03fe874f:
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8761;
          __this_06.fields._index = uVar52;
          __this_06.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_06.fields._version = uVar53;
          __this_06.fields._currentKey = (Il2CppObject *)key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_06,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
          goto label_03fe8761;
        }
        while( true ) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86b7;
          __this_04.fields._index = uVar52;
          __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_04.fields._version = uVar53;
          __this_04.fields._currentKey = (Il2CppObject *)key;
          bVar19 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_04,(MethodInfo_3251B20 *)&stack0xffffffffffffff58);
          if ((char)bVar19 == '\0') goto label_03fe874f;
          if ((key != (System_Enum_c *)0x0) && ((key->_1).image != g_data_057b9c00)) break;
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86ac;
          ExitGames_Client_Photon_Hashtable__set_Item
                    ((ExitGames_Client_Photon_Hashtable_o *)pPVar41,(Il2CppObject *)key,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
        }
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86e0;
        il2cpp_runtime_helper_022b2fd0(key,g_data_057b9c00);
        ppMVar38 = (MethodInfo **)&stack0xffffffffffffff58;
label_03fe86e0:
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86e5;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abe70 != '\0') goto label_03fe85db;
label_03fe86f2:
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe86fe;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abe70 = '\x01';
        pMVar48 = *ppMVar38;
        if (*(int *)((long)&pMVar48[2].parameters + 4) != 0) goto label_03fe85eb;
label_03fe8715:
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe871a;
        il2cpp_runtime_helper_02337ed0();
        pMVar48 = *ppMVar38;
        lVar46 = *(long *)pMVar48[2].virtualMethodPointer;
        if (lVar46 == 0) break;
      } while( true );
    }
label_03fe8833:
    do {
      do {
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8838;
        il2cpp_runtime_helper_022b2c90();
label_03fe8838:
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe883d;
        auVar51 = il2cpp_runtime_helper_022b2c90();
        if (auVar51._8_4_ != 1) {
label_03fe8896:
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe88b0;
          __this_08.fields._index = uVar52;
          __this_08.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
          __this_08.fields._version = uVar53;
          __this_08.fields._currentKey = (Il2CppObject *)key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_08,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe88bd;
          _Unwind_Resume(auVar51._0_8_);
        }
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe886b;
        plVar31 = (long *)__cxa_begin_catch(auVar51._0_8_);
        lVar46 = *plVar31;
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8873;
        __cxa_end_catch();
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8885;
        __this_07.fields._index = uVar52;
        __this_07.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar33;
        __this_07.fields._version = uVar53;
        __this_07.fields._currentKey = (Il2CppObject *)key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_07,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
        if (lVar46 != 0) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8896;
          il2cpp_runtime_helper_022fefe0(lVar46);
          goto label_03fe8896;
        }
label_03fe8761:
        if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87ec;
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057abe70 == '\0') goto label_03fe87f5;
label_03fe877d:
          if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) goto label_03fe878d;
label_03fe8818:
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe881d;
          il2cpp_runtime_helper_02337ed0();
          lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
        else {
          if (g_data_057abe70 != '\0') goto label_03fe877d;
label_03fe87f5:
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe8801;
          il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
          g_data_057abe70 = '\x01';
          if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) goto label_03fe8818;
label_03fe878d:
          lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
      } while (lVar46 == 0);
      if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87ae;
        il2cpp_runtime_helper_02337ed0();
        lVar46 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        if (lVar46 == 0) goto label_03fe8833;
      }
      if (*(Photon_Realtime_Player_o **)(lVar46 + 0x108) != (Photon_Realtime_Player_o *)0x0) {
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fe87db;
        Photon_Realtime_Player__SetCustomProperties
                  (*(Photon_Realtime_Player_o **)(lVar46 + 0x108),
                   (ExitGames_Client_Photon_Hashtable_o *)pPVar41,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                   (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    } while( true );
  }
  if (g_data_057abd89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Operation GetGameList requires a filter.",unaff_RBX,method,0);
    il2cpp_runtime_helper_023445d0(&"Operation GetGameList can only be used for lobbies of type SqlLobby.");
    il2cpp_runtime_helper_023445d0(&"GetGameList");
    g_data_057abd89 = '\x01';
  }
  pPVar27 = "GetGameList";
  bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                     ((Photon_Realtime_LoadBalancingClient_o *)pPVar41,0xd9,*(int32_t *)&(pPVar41->_1).fields,
                      (System_String_o *)"GetGameList",(MethodInfo *)in_R8);
  if ((char)bVar19 == '\0') {
    return;
  }
  uVar49 = 0;
  pPVar21 = (Photon_Realtime_LoadBalancingClient_c *)method;
  bVar19 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    puVar32 = &"Operation GetGameList requires a filter.";
label_03fc21e5:
    pvVar8 = (pPVar41->_1).image;
    (**(code **)((long)pvVar8 + 0x218))(pPVar41,1,*puVar32,*(undefined8 *)((long)pvVar8 + 0x220));
    return;
  }
  if (unaff_RBX != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    if (*(char *)&(unaff_RBX->_1).namespaze != '\x02') {
      puVar32 = &"Operation GetGameList can only be used for lobbies of type SqlLobby.";
      goto label_03fc21e5;
    }
    plVar31 = (long *)(pPVar41->_1).name;
    pPVar21 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
    if (plVar31 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar31 + 0x2c8);
      (*vtableDispatch)
                (plVar31,unaff_RBX,method,*(undefined8 *)(*plVar31 + 0x2d0),vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar35 = (Photon_Realtime_LoadBalancingClient_c *)(uVar49 & 0xffffffff);
  pPVar28 = pPVar27;
  pPVar34 = in_R8;
  pPStack_80 = pPVar41;
  if (g_data_057abd8a == '\0') {
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2241;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClientState);
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc224d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2259;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Extensions);
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2265;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2271;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. To use expectedProperties or webForward, you have to be in a room. State: ");
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc227d;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. Only string keys allowed for custom properties.");
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2289;
    il2cpp_runtime_helper_023445d0(&"OpSetCustomPropertiesOfActor() failed. propertiesToSet must not be null nor empty.");
    g_data_057abd8a = '\x01';
  }
  if (propertiesToSet != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
    pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22ab;
    pPVar37 = MethodInfo_Int32_get_Count;
    pPVar41 = propertiesToSet;
    iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                       ((System_Collections_Generic_Dictionary_object__object__o *)propertiesToSet,
                        (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
    if (iVar18 != 0) {
      uVar36 = (uint)uVar49;
      if (*(Photon_Realtime_Room_o **)&(pPVar21->_2).thread_static_fields_offset ==
          (Photon_Realtime_Room_o *)0x0) {
        if ((((pPVar27 == (Photon_Realtime_LoadBalancingClient_c *)0x0) &&
             (in_R8 == (Photon_Realtime_LoadBalancingClient_c *)0x0)) &&
            (pPVar41 = *(Photon_Realtime_LoadBalancingClient_c **)&(pPVar21->_2).static_fields_size,
            pPVar41 != (Photon_Realtime_LoadBalancingClient_c *)0x0)) &&
           (*(uint *)&(pPVar41->_1).namespaze == uVar36)) {
          Photon_Realtime_Player__SetCustomProperties
                    ((Photon_Realtime_Player_o *)pPVar41,
                     (ExitGames_Client_Photon_Hashtable_o *)propertiesToSet,
                     (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                     (MethodInfo *)pPVar34);
          return;
        }
        pPVar9 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar21->_1).name)->
                 _LoadBalancingPeer_k__BackingField;
        if (pPVar9 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
          if (*(char *)&(pPVar9->fields)._SocketImplementation_k__BackingField == '\0') {
            return;
          }
          iStack_88 = *(int32_t *)&(pPVar21->_1).properties;
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc23ea;
          pSVar22 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff68,(MethodInfo *)0x0);
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc23fe;
          pSVar22 = System_String__Concat_3ae5ba0("OpSetCustomPropertiesOfActor() failed. To use expectedProperties or webForward, you have to be in a room. State: ",pSVar22,(MethodInfo *)0x0);
          pPVar41 = (pPVar21->_1).image;
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc241a;
          (*(pPVar41->vtable)._14_DebugReturn.methodPtr)
                    (pPVar21,1,pSVar22,(pPVar41->vtable)._14_DebugReturn.method);
          return;
        }
label_03fc242b:
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)Photon_Realtime_Player__SetCustomProperties;
        auVar50 = il2cpp_runtime_helper_022b2c90();
        unaff_R12 = auVar50._8_8_;
        uStackY_e0 = auVar50._0_8_;
        pPStackY_c0 = (Photon_Realtime_LoadBalancingClient_c *)&MethodInfo_Int32_get_Count;
        pppMVar39 = (MethodInfo ***)&uStackY_e0;
        pPVar26 = pPVar28;
        pPStackY_d8 = pPVar35;
        pPStackY_d0 = pPVar27;
        pPStackY_c8 = pPVar21;
        pPStackY_b8 = in_R8;
        pPStackY_b0 = propertiesToSet;
        if (g_data_057abdf5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Extensions);
          g_data_057abdf5 = '\x01';
        }
        if (pPVar37 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          return;
        }
        unaff_RBP = &MethodInfo_Int32_get_Count;
        pPVar35 = MethodInfo_Int32_get_Count;
        iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                           ((System_Collections_Generic_Dictionary_object__object__o *)pPVar37,
                            (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        if (iVar18 == 0) {
          return;
        }
        if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pPVar21 = pPVar37;
        method = (MethodInfo *)
                 Photon_Realtime_Extensions__StripToStringKeys_3ebd1f0
                           ((ExitGames_Client_Photon_Hashtable_o *)pPVar37,(MethodInfo *)pPVar35);
        pPVar9 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                 _LoadBalancingPeer_k__BackingField;
        if (pPVar9 == (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
          if (*(char *)((long)&(pPVar41->_1).namespaze + 4) == '\0') {
            return;
          }
          if ((Photon_Realtime_LoadBalancingClient_c *)method != (Photon_Realtime_LoadBalancingClient_c *)0x0)
          {
            iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                               ((System_Collections_Generic_Dictionary_object__object__o *)method,
                                (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
            if (pPVar28 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
              return;
            }
            if (unaff_R12 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
              return;
            }
            if (iVar18 == 0) {
              return;
            }
            target = *(System_Collections_IDictionary_o **)&(pPVar41->_1).this_arg.bits;
            pMVar33 = extraout_RDX_03;
            if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar33 = extraout_RDX_04;
            }
            Photon_Realtime_Extensions__Merge(target,(System_Collections_IDictionary_o *)method,pMVar33);
            Photon_Realtime_Extensions__StripKeysWithNullValues_3ebdac0
                      (*(ExitGames_Client_Photon_Hashtable_o **)&(pPVar41->_1).this_arg.bits,method);
            return;
          }
        }
        else if ((char)(pPVar9->fields).wrapIncomingStructs == '\0') {
          if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar21 = unaff_R12;
          pPVar27 = (Photon_Realtime_LoadBalancingClient_c *)
                    Photon_Realtime_Extensions__StripToStringKeys_3ebd1f0
                              ((ExitGames_Client_Photon_Hashtable_o *)unaff_R12,(MethodInfo *)pPVar35);
          auVar50._8_8_ = method;
          auVar50._0_8_ = pPVar27;
          pPVar26 = (Photon_Realtime_LoadBalancingClient_c *)
                    ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                    _LoadBalancingPeer_k__BackingField;
          if ((pPVar26 != (Photon_Realtime_LoadBalancingClient_c *)0x0) &&
             (pPVar21 = (pPVar26->_1).generic_class, pPVar21 != (Photon_Realtime_LoadBalancingClient_c *)0x0))
          {
            uVar36 = *(uint *)&(pPVar41->_1).namespaze;
            pppMVar39 = (MethodInfo ***)&stack0xffffffffffffff58;
            pPVar37 = pPStackY_d8;
            unaff_RBP = (Photon_Realtime_LoadBalancingClient_c **)pPStackY_b0;
            in_R8 = pPVar28;
            unaff_R12 = pPStackY_d0;
            pPVar41 = pPStackY_c8;
            method = (MethodInfo *)pPStackY_c0;
            pPVar28 = pPStackY_b8;
            goto Photon_Realtime_LoadBalancingClient__OpSetPropertiesOfActor;
          }
        }
        else if ((Photon_Realtime_LoadBalancingClient_c *)method !=
                 (Photon_Realtime_LoadBalancingClient_c *)0x0) {
          iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                             ((System_Collections_Generic_Dictionary_object__object__o *)method,
                              (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
          if (iVar18 == 0) {
            return;
          }
          pPVar37 = *(Photon_Realtime_LoadBalancingClient_c **)&(pPVar41->_1).this_arg.bits;
          pMVar33 = extraout_RDX_01;
          if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar33 = extraout_RDX_02;
          }
          pPVar35 = (Photon_Realtime_LoadBalancingClient_c *)method;
          Photon_Realtime_Extensions__Merge
                    ((System_Collections_IDictionary_o *)pPVar37,(System_Collections_IDictionary_o *)method,
                     pMVar33);
          pPVar21 = *(Photon_Realtime_LoadBalancingClient_c **)&(pPVar41->_1).this_arg.bits;
          Photon_Realtime_Extensions__StripKeysWithNullValues_3ebdac0
                    ((ExitGames_Client_Photon_Hashtable_o *)pPVar21,(MethodInfo *)pPVar35);
          pPVar9 = ((Photon_Realtime_LoadBalancingClient_Fields *)&(pPVar41->_1).name)->
                   _LoadBalancingPeer_k__BackingField;
          if ((pPVar9 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) &&
             (lVar46 = *(long *)&(pPVar9->fields).reuseEventInstance, lVar46 != 0)) {
            __this_00 = *(Photon_Realtime_InRoomCallbacksContainer_o **)(lVar46 + 0xc0);
            pPVar21 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
            if (__this_00 != (Photon_Realtime_InRoomCallbacksContainer_o *)0x0) {
              Photon_Realtime_InRoomCallbacksContainer__OnPlayerPropertiesUpdate
                        (__this_00,(Photon_Realtime_Player_o *)pPVar41,
                         (ExitGames_Client_Photon_Hashtable_o *)method,(MethodInfo *)pPVar26);
              return;
            }
          }
        }
        uVar36 = (uint)pPVar35;
        auVar50 = il2cpp_runtime_helper_022b2c90();
        pPVar27 = pPVar26;
        in_R8 = pPVar34;
      }
      else {
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22d4;
        pPVar26 = (Photon_Realtime_LoadBalancingClient_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22e1;
        ExitGames_Client_Photon_Hashtable___ctor
                  ((ExitGames_Client_Photon_Hashtable_o *)pPVar26,(MethodInfo *)0x0);
        pMVar33 = extraout_RDX;
        if (*(int *)(TypeInfo_Extensions + 0xe4) == 0) {
          pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc22f9;
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_00;
        }
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2304;
        pPVar37 = propertiesToSet;
        pPVar41 = pPVar26;
        Photon_Realtime_Extensions__MergeStringKeys
                  ((System_Collections_IDictionary_o *)pPVar26,
                   (System_Collections_IDictionary_o *)propertiesToSet,pMVar33);
        pPVar35 = (Photon_Realtime_LoadBalancingClient_c *)0x0;
        if (pPVar26 == (Photon_Realtime_LoadBalancingClient_c *)0x0) goto label_03fc242b;
        pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2318;
        iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                           ((System_Collections_Generic_Dictionary_object__object__o *)pPVar26,
                            (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        auVar50._4_4_ = extraout_var;
        auVar50._0_4_ = iVar18;
        auVar50._8_8_ = pPVar26;
        pPVar37 = pPStack_80;
        pPVar41 = unaff_R13;
        pPVar28 = unaff_RBX;
        if (iVar18 == 0) {
          puVar32 = &"OpSetCustomPropertiesOfActor() failed. Only string keys allowed for custom properties.";
          goto label_03fc234a;
        }
      }
Photon_Realtime_LoadBalancingClient__OpSetPropertiesOfActor:
      pPVar35 = auVar50._8_8_;
      *(Photon_Realtime_LoadBalancingClient_c ***)((long)pppMVar39 + -8) = unaff_RBP;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x10) = pPVar28;
      *(MethodInfo **)((long)pppMVar39 + -0x18) = method;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x20) = pPVar41;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x28) = unaff_R12;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x30) = pPVar37;
      *(long *)((long)pppMVar39 + -0x38) = auVar50._0_8_;
      pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)(ulong)uVar36;
      pPVar41 = in_R8;
      if (g_data_057abd8b == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc264f;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc265b;
        il2cpp_runtime_helper_023445d0(&"OpSetPropertiesOfActor() failed. actorProperties must not be null nor empty.");
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2667;
        il2cpp_runtime_helper_023445d0(&"SetProperties");
        g_data_057abd8b = '\x01';
      }
      iVar18 = *(int32_t *)&(pPVar21->_1).fields;
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc268b;
      pPVar34 = "SetProperties";
      bVar19 = Photon_Realtime_LoadBalancingClient__CheckIfOpCanBeSent
                         ((Photon_Realtime_LoadBalancingClient_o *)pPVar21,0xfc,iVar18,
                          (System_String_o *)"SetProperties",(MethodInfo *)pPVar41);
      if ((char)bVar19 == '\0') {
        return;
      }
      if (pPVar35 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
label_03fc271c:
        pvVar8 = (pPVar21->_1).image;
        uVar24 = *(undefined8 *)((long)pvVar8 + 0x220);
        vtableDispatch = *(code **)((long)pvVar8 + 0x218);
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc273e;
        (*vtableDispatch)(pPVar21,1,"OpSetPropertiesOfActor() failed. actorProperties must not be null nor empty.",uVar24);
        return;
      }
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc26af;
      pPVar37 = MethodInfo_Int32_get_Count;
      iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                         ((System_Collections_Generic_Dictionary_object__object__o *)pPVar35,
                          (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
      if (iVar18 == 0) goto label_03fc271c;
      pPVar9 = (Photon_Realtime_LoadBalancingPeer_o *)(pPVar21->_1).name;
      if (pPVar9 != (Photon_Realtime_LoadBalancingPeer_o *)0x0) {
        *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc26d1;
        pPVar34 = pPVar27;
        pPVar37 = pPVar28;
        pPVar41 = in_R8;
        bVar19 = Photon_Realtime_LoadBalancingPeer__OpSetPropertiesOfActor
                           (pPVar9,uVar36,(ExitGames_Client_Photon_Hashtable_o *)pPVar35,
                            (ExitGames_Client_Photon_Hashtable_o *)pPVar27,(Photon_Realtime_WebFlags_o *)in_R8
                            ,in_R9);
        if ((char)bVar19 == '\0') {
          return;
        }
        plVar31 = *(long **)&(pPVar21->_2).thread_static_fields_offset;
        if (plVar31 != (long *)0x0) {
          uVar16 = (undefined7)((ulong)in_R8 >> 8);
          if ((char)plVar31[0xf] != '\0') {
            return;
          }
          in_R8 = (Photon_Realtime_LoadBalancingClient_c *)
                  CONCAT71(uVar16,pPVar27 != (Photon_Realtime_LoadBalancingClient_c *)0x0);
          if (pPVar27 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
            in_R8 = (Photon_Realtime_LoadBalancingClient_c *)CONCAT71(uVar16,1);
          }
          else {
            *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2703;
            pPVar37 = MethodInfo_Int32_get_Count;
            iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                               ((System_Collections_Generic_Dictionary_object__object__o *)pPVar27,
                                (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
            if (iVar18 != 0) {
              return;
            }
            plVar31 = *(long **)&(pPVar21->_2).thread_static_fields_offset;
            if (plVar31 == (long *)0x0) goto label_03fc27a8;
          }
          pPVar34 = *(Photon_Realtime_LoadBalancingClient_c **)(*plVar31 + 0x1e0);
          vtableDispatch = *(code **)(*plVar31 + 0x1d8);
          *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc2771;
          pPVar28 = (Photon_Realtime_LoadBalancingClient_c *)(*vtableDispatch)(plVar31,uVar36,0);
          if (pPVar28 == (Photon_Realtime_LoadBalancingClient_c *)0x0) {
            return;
          }
          pvVar8 = (pPVar28->_1).image;
          uVar24 = *(undefined8 *)((long)pvVar8 + 0x180);
          vtableDispatch = *(code **)((long)pvVar8 + 0x178);
          *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc278f;
          pPVar37 = pPVar35;
          (*vtableDispatch)(pPVar28,pPVar35,uVar24);
          __this_01 = pPVar21->rgctx_data;
          if (__this_01 != (Il2CppRGCTXData *)0x0) {
            *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc27a6;
            Photon_Realtime_InRoomCallbacksContainer__OnPlayerPropertiesUpdate
                      ((Photon_Realtime_InRoomCallbacksContainer_o *)__this_01,
                       (Photon_Realtime_Player_o *)pPVar28,(ExitGames_Client_Photon_Hashtable_o *)pPVar35,
                       (MethodInfo *)pPVar34);
            return;
          }
        }
      }
label_03fc27a8:
      pSVar45 = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
      *(undefined8 *)((long)pppMVar39 + -0x40) = 0x3fc27ad;
      il2cpp_runtime_helper_022b2c90();
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x40) = in_R8;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x48) = pPVar28;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x50) = pPVar35;
      *(Photon_Realtime_LoadBalancingClient_c ***)((long)pppMVar39 + -0x58) = &MethodInfo_Int32_get_Count;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x60) = pPVar27;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x68) = pPVar21;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x70) = pPVar41;
      pPVar41 = pPVar37;
      __this_13 = (Photon_Realtime_LoadBalancingClient_c **)pSVar45;
      if (g_data_057abdd5 == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27e4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27f0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc27fc;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2808;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2814;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2820;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IPhotonPeerListener);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc282c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SendOptions);
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2838;
        il2cpp_runtime_helper_023445d0(&"OpSetPropertiesOfActor not sent. ActorNr must be > 0 and actorProperties must be not null nor empty.");
        __this_13 = &"OpSetPropertiesOfActor()";
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2844;
        il2cpp_runtime_helper_023445d0();
        g_data_057abdd5 = '\x01';
      }
      pPVar27 = "OpSetPropertiesOfActor()";
      if (2 < *(byte *)&(pSVar45->fields)._values) {
        pSVar30 = (System_Collections_Generic_Dictionary_byte__object__o *)(pSVar45->fields)._syncRoot;
        if (pSVar30 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_03fc2aef;
        pSVar13 = pSVar30->klass;
        uVar4._0_1_ = (pSVar13->_2).rank;
        uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar46 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar46) == TypeInfo_IPhotonPeerListener) {
              ppIVar29 = &(&(pSVar13->vtable)._0_Equals)[*(int *)((long)&pIVar14->offset + lVar46)].methodPtr;
              goto label_03fc28bd;
            }
            lVar46 = lVar46 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar46);
        }
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28a9;
        ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IPhotonPeerListener,0);
label_03fc28bd:
        pPVar41 = (Photon_Realtime_LoadBalancingClient_c *)0x3;
        pIVar7 = *ppIVar29;
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28ce;
        (*pIVar7)(pSVar30,3,pPVar27);
        __this_13 = (Photon_Realtime_LoadBalancingClient_c **)pSVar30;
        pPVar35 = pPVar27;
      }
      if ((0 < (int)pPVar37) && (__this_10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0))
      {
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc28f2;
        pPVar41 = MethodInfo_Int32_get_Count;
        __this_13 = (Photon_Realtime_LoadBalancingClient_c **)__this_10;
        iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                           (__this_10,(MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
        if (iVar18 != 0) {
          *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2909;
          pSVar30 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
          *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc291e;
          pPVar41 = MethodInfo_Dictionary_2_System_Byte_System_Object;
          __this_13 = (Photon_Realtime_LoadBalancingClient_c **)pSVar30;
          System_Collections_Generic_Dictionary_byte__object____ctor
                    (pSVar30,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
          if (pSVar30 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2941;
            System_Collections_Generic_Dictionary_byte__object___Add
                      (pSVar30,0xfb,(Il2CppObject *)__this_10,MethodInfo_Void_Add);
            *(int *)((long)pppMVar39 + -0x74) = (int)pPVar37;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc295c;
            pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)pppMVar39 + -0x74))
            ;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc296f;
            System_Collections_Generic_Dictionary_byte__object___Add(pSVar30,0xfe,pIVar43,MethodInfo_Void_Add);
            *(undefined1 *)((long)pppMVar39 + -0x75) = 1;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2983;
            pIVar43 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(undefined1 *)((long)pppMVar39 + -0x75))
            ;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2996;
            System_Collections_Generic_Dictionary_byte__object___Add(pSVar30,0xfa,pIVar43,MethodInfo_Void_Add);
            if (pPVar34 != (Photon_Realtime_LoadBalancingClient_c *)0x0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29ad;
              iVar18 = System_Collections_Generic_Dictionary_object__object___get_Count
                                 ((System_Collections_Generic_Dictionary_object__object__o *)pPVar34,
                                  (MethodInfo_3104A10 *)MethodInfo_Int32_get_Count);
              if (iVar18 != 0) {
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29c4;
                System_Collections_Generic_Dictionary_byte__object___Add
                          (pSVar30,0xe7,(Il2CppObject *)pPVar34,MethodInfo_Void_Add);
              }
            }
            __this_02 = *(Photon_Realtime_WebFlags_o **)((long)pppMVar39 + -0x70);
            if (__this_02 != (Photon_Realtime_WebFlags_o *)0x0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29d8;
              bVar19 = Photon_Realtime_WebFlags__get_HttpForward(__this_02,(MethodInfo *)0x0);
              if ((char)bVar19 != '\0') {
                *(uint8_t *)((long)pppMVar39 + -0x76) = (__this_02->fields).WebhookFlags;
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc29f2;
                pIVar43 = (Il2CppObject *)
                          il2cpp_runtime_helper_02304f30(g_data_057b9b88,(undefined1 *)((long)pppMVar39 + -0x76));
                *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a0c;
                System_Collections_Generic_Dictionary_byte__object___set_Item
                          (pSVar30,0xea,pIVar43,MethodInfo_Void_set_Item);
              }
            }
            if (*(int *)(TypeInfo_SendOptions + 0xe4) == 0) {
              *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a25;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar24 = **(undefined8 **)(TypeInfo_SendOptions + 0xb8);
            pMVar33 = (pSVar45->klass->vtable)._15_unknown.method;
            pIVar7 = (pSVar45->klass->vtable)._15_unknown.methodPtr;
            *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2a4f;
            (*pIVar7)(pSVar45,0xfc,pSVar30,uVar24,pMVar33);
            return;
          }
          goto label_03fc2aef;
        }
      }
      uVar24 = "OpSetPropertiesOfActor not sent. ActorNr must be > 0 and actorProperties must be not null nor empty.";
      if (*(byte *)&(pSVar45->fields)._values < 3) {
        return;
      }
      pIVar43 = (pSVar45->fields)._syncRoot;
      if (pIVar43 != (Il2CppObject *)0x0) {
        pIVar15 = pIVar43->klass;
        uVar5._0_1_ = (pIVar15->_2).rank;
        uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar14 = (pIVar15->_1).interfaceOffsets;
          lVar46 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar46) == TypeInfo_IPhotonPeerListener) {
              ppIVar29 = &pIVar15->vtable[*(int *)((long)&pIVar14->offset + lVar46)].methodPtr;
              goto label_03fc2acd;
            }
            lVar46 = lVar46 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar46);
        }
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2ab9;
        ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar43,TypeInfo_IPhotonPeerListener,0);
label_03fc2acd:
        pMVar33 = (MethodInfo *)ppIVar29[1];
        pIVar7 = *ppIVar29;
        *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2ade;
        (*pIVar7)(pIVar43,3,uVar24,pMVar33);
        return;
      }
label_03fc2aef:
      *(undefined8 *)((long)pppMVar39 + -0x88) = 0x3fc2af4;
      il2cpp_runtime_helper_022b2c90();
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pppMVar39 + -0x88) = __this_10;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x90) = pPVar34;
      *(Photon_Realtime_LoadBalancingClient_c **)((long)pppMVar39 + -0x98) = pPVar35;
      *(System_Collections_Generic_Dictionary_byte__object__o **)((long)pppMVar39 + -0xa0) = pSVar45;
      *(ulong *)((long)pppMVar39 + -0xa8) = (ulong)pPVar37 & 0xffffffff;
      *(undefined8 *)((long)pppMVar39 + -0xb0) = 0;
      pPVar27 = pPVar41;
      if (g_data_057abdb8 == '\0') {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b2c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b38;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b44;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IInRoomCallbacks_get_Current);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b50;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IInRoomCallbacks);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b5c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_IInRoomCallbacks_Get);
        g_data_057abdb8 = '\x01';
      }
      *(undefined8 *)((long)pppMVar39 + -200) = 0;
      *(undefined8 *)((long)pppMVar39 + -0xc0) = 0;
      *(undefined8 *)((long)pppMVar39 + -0xb8) = 0;
      pPVar44 = *(Photon_Realtime_LoadBalancingClient_o **)
                 &(((System_Collections_Generic_Dictionary_byte__object__o *)__this_13)->fields)._freeCount;
      if (pPVar44 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b85;
        Photon_Realtime_LoadBalancingClient__UpdateCallbackTargets(pPVar44,(MethodInfo *)pPVar27);
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2b9d;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)((long)pppMVar39 + -200),
                   (System_Collections_Generic_List_object__o *)__this_13,MethodInfo_List_1_T_Enumerator_Photon_Realtime_IInRoomCallbacks_Get);
        while( true ) {
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bd8;
          bVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o)
                              *(System_Collections_Generic_List_Enumerator_object__Fields *)
                               ((long)pppMVar39 + -200),(MethodInfo_321A1D0 *)((long)pppMVar39 + -200));
          if ((char)bVar19 == '\0') {
            *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c5e;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                       (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
            return;
          }
          plVar31 = *(long **)((long)pppMVar39 + -0xb8);
          if (plVar31 == (long *)0x0) break;
          lVar46 = *plVar31;
          if ((ulong)*(ushort *)(lVar46 + 0x12e) != 0) {
            lVar47 = 0;
            do {
              if (*(long *)(*(long *)(lVar46 + 0xb0) + lVar47) == TypeInfo_IInRoomCallbacks) {
                puVar32 = (undefined8 *)
                          (lVar46 + (long)(*(int *)(*(long *)(lVar46 + 0xb0) + 8 + lVar47) + 3) * 0x10 + 0x138
                          );
                goto label_03fc2bbd;
              }
              lVar47 = lVar47 + 0x10;
            } while ((ulong)*(ushort *)(lVar46 + 0x12e) << 4 != lVar47);
          }
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bbd;
          puVar32 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar31,TypeInfo_IInRoomCallbacks,3);
label_03fc2bbd:
          vtableDispatch = (code *)*puVar32;
          *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2bcc;
          (*vtableDispatch)(plVar31,pPVar41,extraout_RDX_05);
        }
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c72;
        il2cpp_runtime_helper_022b2c90();
      }
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c77;
      auVar51 = il2cpp_runtime_helper_022b2c90();
      if (auVar51._8_4_ == 1) {
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2c9b;
        plVar31 = (long *)__cxa_begin_catch(auVar51._0_8_);
        lVar46 = *plVar31;
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2ca3;
        __cxa_end_catch();
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cb5;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                   (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
        if (lVar46 == 0) {
          return;
        }
        *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cc2;
        il2cpp_runtime_helper_022fefe0(lVar46);
      }
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2cdb;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar39 + -200),
                 (MethodInfo_321A1C0 *)((long)pppMVar39 + -200));
      *(undefined8 *)((long)pppMVar39 + -0xd0) = 0x3fc2ce8;
      _Unwind_Resume(auVar51._0_8_);
    }
  }
  puVar32 = &"OpSetCustomPropertiesOfActor() failed. propertiesToSet must not be null nor empty.";
label_03fc234a:
  pPVar41 = (pPVar21->_1).image;
  pPStackY_b0 = (Photon_Realtime_LoadBalancingClient_c *)0x3fc2366;
  (*(pPVar41->vtable)._14_DebugReturn.methodPtr)(pPVar21,1,*puVar32,(pPVar41->vtable)._14_DebugReturn.method);
  return;
}


// GameManagers.MainMenuGameManager$$Update
// il2cpp: void GameManagers_MainMenuGameManager__Update (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4569360

void GameManagers_MainMenuGameManager__Update(GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedRoom (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4569370

void GameManagers_MainMenuGameManager__OnJoinedRoom
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__c *pSVar5;
  System_Collections_Specialized_OrderedDictionary_o *x;
  void *pvVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  System_String_o *pSVar11;
  Settings_PresetSettingsContainer_o *pSVar12;
  System_Object_array *args;
  long lVar13;
  System_Object_array *pSVar14;
  undefined8 uVar15;
  Photon_Realtime_Player_o *pPVar16;
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar17;
  undefined8 *puVar18;
  System_Collections_Generic_Dictionary_object__object__o *pSVar19;
  long *plVar20;
  Il2CppObject *pIVar21;
  Settings_PresetSettingsContainer_c *pSVar22;
  System_Byte_array *pSVar23;
  int extraout_EDX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar24;
  System_Object_array *pSVar25;
  UnityEngine_Object_o *pUVar26;
  undefined8 *unaff_RBP;
  Il2CppClass *pIVar27;
  Il2CppClass *pIVar28;
  uint weapon;
  System_Collections_Generic_Dictionary_int__object__o *pSVar29;
  Settings_PresetSettingsContainer_o *pSVar30;
  Il2CppClass *pIVar31;
  Il2CppClass **ppIVar32;
  undefined8 *unaff_R13;
  System_Collections_Generic_Dictionary_int__object__o *unaff_R14;
  GameProgress_KillMethod_o GVar33;
  Il2CppClass *pIStackY_128;
  int32_t iStackY_120;
  undefined1 auStackY_11c [44];
  undefined8 uStackY_f0;
  undefined1 auStackY_dc [52];
  undefined8 *puStackY_a8;
  undefined8 *puStackY_a0;
  System_Collections_Generic_Dictionary_int__object__o *pSStackY_98;
  Settings_PresetSettingsContainer_o *pSStackY_90;
  int iStackY_7c;
  System_Object_array *pSStackY_78;
  System_Collections_Generic_Dictionary_int__object__o *pSStackY_70;
  
  if (g_data_057af02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af02f = '\x01';
    iVar3 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  else {
    iVar3 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aefe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Motd");
    il2cpp_runtime_helper_023445d0(&"InGame");
    il2cpp_runtime_helper_023445d0(&"Chat");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"single player");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aefe3 = '\x01';
  }
  if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_AnticheatManager__Reset((MethodInfo *)0x0);
  pIVar27 = TypeInfo_InGameManager;
  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_InGameManager__ResetPlayerInfo((MethodInfo *)pIVar27);
  GameManagers_InGameManager__ResetPersistentPlayerProperties((MethodInfo *)pIVar27);
  *(undefined1 *)((long)TypeInfo_InGameManager->static_fields + 0x50) = 1;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__SyncPMPartnersOnJoin((MethodInfo *)0x0);
  pSVar12 = "single player";
  pSVar25 = (System_Object_array *)&TypeInfo_PhotonNetwork;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057abf5b == '\0') goto label_0455c922;
label_0455c85f:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0455c86f;
label_0455c945:
    il2cpp_runtime_helper_02337ed0();
    if (*(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30) == '\0') goto label_0455c880;
label_0455c95e:
    unaff_R13 = &TypeInfo_object;
    args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (args == (System_Object_array *)0x0) goto label_0455caf1;
    pSVar14 = args;
    if ((pSVar12 == (Settings_PresetSettingsContainer_o *)0x0) ||
       (lVar13 = il2cpp_runtime_helper_023051f0(pSVar12), lVar13 != 0)) {
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar12;
        il2cpp_runtime_helper_022b4080(args->m_Items,pSVar12);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = &"InGame";
        unaff_R14 = (System_Collections_Generic_Dictionary_int__object__o *)
                    UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","Motd",args,(MethodInfo *)0x0);
        pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
        pSVar25 = args;
        if (pSVar14 == (System_Object_array *)0x0) goto label_0455caf1;
        if ((pSVar12 != (Settings_PresetSettingsContainer_o *)0x0) &&
           (lVar13 = il2cpp_runtime_helper_023051f0(pSVar12), lVar13 == 0)) goto label_0455cafb;
        if ((int)pSVar14->max_length != 0) {
          pSVar14->m_Items[0] = (Il2CppObject *)pSVar12;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pSVar12);
          pSVar11 = UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","Help",pSVar14,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_3af7150
                              ((System_String_o *)unaff_R14,"\n",pSVar11,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStackY_70 = (System_Collections_Generic_Dictionary_int__object__o *)0x455cad3;
          GameManagers_ChatManager__AddLine
                    (pSVar11,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_0455caf6;
    }
  }
  else {
    if (g_data_057abf5b != '\0') goto label_0455c85f;
label_0455c922:
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0455c945;
label_0455c86f:
    if (*(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30) != '\0') goto label_0455c95e;
label_0455c880:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar25 = (System_Object_array *)Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    unaff_RBP = &TypeInfo_RoomProperty;
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = PhotonExtensions__GetStringProperty_3f67f30
                        ((Photon_Realtime_RoomInfo_o *)pSVar25,
                         (System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                         (MethodInfo *)0x0);
    if (pSVar11 != (System_String_o *)0x0) {
      pSVar25 = (System_Object_array *)System_String__Trim(pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (Settings_PresetSettingsContainer_o *)
                MiscExtensions__HexColor((System_String_o *)pSVar25,(MethodInfo *)0x0);
      goto label_0455c95e;
    }
label_0455caf1:
    pSVar14 = pSVar25;
    il2cpp_runtime_helper_022b2c90();
label_0455caf6:
    il2cpp_runtime_helper_022b2ca0();
  }
label_0455cafb:
  uVar15 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar15);
  if (g_data_057af00a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057af00a = '\x01';
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455cbc5;
label_0455cb39:
    pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)
               ((long)TypeInfo_InGameManager->static_fields + 0x18);
    if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
    }
    else {
label_0455cbe2:
      System_Collections_Generic_Dictionary_int__object___Clear(pSVar29,MethodInfo_Void_Clear);
      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20);
      pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        pSVar14 = (System_Object_array *)&MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_int___Clear(pSVar4,MethodInfo_Void_Clear);
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          System_Collections_Generic_HashSet_int___Clear(pSVar4,MethodInfo_Void_Clear);
          pSVar12 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
          if (g_data_057af051 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
            g_data_057af051 = '\x01';
          }
          pSVar14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
          Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)pSVar14,(MethodInfo *)0x0);
          unaff_R14 = (System_Collections_Generic_Dictionary_int__object__o *)(pSVar12 + 1);
          pSVar12[1].klass = (Settings_PresetSettingsContainer_c *)pSVar14;
          il2cpp_runtime_helper_022b4080(unaff_R14);
          pSVar30 = pSVar12;
          Settings_BaseSettingsContainer___ctor(pSVar12,(MethodInfo *)0x0);
          if (pSVar12 != (Settings_PresetSettingsContainer_o *)0x0) {
            pSVar5 = unaff_R14->klass;
            pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
            if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__c *)0x0) {
              pvVar6 = (pSVar5->_1).image;
              (**(code **)((long)pvVar6 + 0x1c8))
                        (pSVar5,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8),
                         *(undefined8 *)((long)pvVar6 + 0x1d0));
              unaff_R14 = *(System_Collections_Generic_Dictionary_int__object__o **)
                           ((long)TypeInfo_InGameManager->static_fields + 0x18);
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
              pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
              if ((pPVar16 != (Photon_Realtime_Player_o *)0x0) &&
                 (unaff_R14 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                System_Collections_Generic_Dictionary_int__object___Add
                          (unaff_R14,(pPVar16->fields).actorNumber,(Il2CppObject *)pSVar12,MethodInfo_Void_Add);
                *(Settings_PresetSettingsContainer_o **)((long)TypeInfo_InGameManager->static_fields + 0x40) = pSVar12;
                il2cpp_runtime_helper_022b4080();
                pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
                pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                if (pPVar16 != (Photon_Realtime_Player_o *)0x0) {
                  iVar10 = (pPVar16->fields).actorNumber;
                  if (g_data_057af00c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
                    g_data_057af00c = '\x01';
                    iVar3 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
                  }
                  else {
                    iVar3 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
                  }
                  if (iVar3 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar13 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
                  }
                  else {
                    lVar13 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
                  }
                  if (lVar13 == 0) {
                    return;
                  }
                  (**(code **)(lVar13 + 0x18))
                            (*(undefined8 *)(lVar13 + 0x40),iVar10,*(undefined8 *)(lVar13 + 0x28),
                             *(code **)(lVar13 + 0x18));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455cb39;
label_0455cbc5:
    il2cpp_runtime_helper_02337ed0();
    pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)
               ((long)TypeInfo_InGameManager->static_fields + 0x18);
    pSVar30 = (Settings_PresetSettingsContainer_o *)0x0;
    if (pSVar29 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455cbe2;
  }
  puVar18 = &TypeInfo_InGameManager;
  il2cpp_runtime_helper_022b2c90();
  pSStackY_78 = pSVar14;
  pSStackY_70 = unaff_R14;
  if (g_data_057aefe4 == '\0') {
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aefe4 = '\x01';
  }
  pIVar27 = TypeInfo_InGameManager;
  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce65;
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)pIVar27);
  x = pSVar30[3].fields.Settings;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce81;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = (Il2CppClass *)0x0;
  pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455ce8d;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf8e;
    il2cpp_runtime_helper_02337ed0();
    lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) {
label_0455cee5:
    if (*(char *)(lVar13 + 0x82) != '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf0a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf11;
      pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf2c;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
      pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf41;
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf5b;
      iVar10 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                          (MethodInfo *)0x0);
      iStackY_7c = iVar10 + 1;
      pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf77;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStackY_7c);
      pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cf87;
      PhotonExtensions__SetCustomProperty(pPVar16,pSVar11,pIVar17,(MethodInfo *)0x0);
    }
    return;
  }
  pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cece;
  il2cpp_runtime_helper_02337ed0();
  lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar13 != 0) goto label_0455cee5;
  pSStackY_90 = (Settings_PresetSettingsContainer_o *)0x455cfb4;
  il2cpp_runtime_helper_022b2c90();
  puStackY_a8 = &TypeInfo_InGameManager;
  auStackY_dc._44_8_ = &TypeInfo_CustomLogicManager;
  puStackY_a0 = unaff_R13;
  pSStackY_98 = unaff_R14;
  pSStackY_90 = pSVar12;
  if (g_data_057af009 == '\0') {
    auStackY_dc._36_8_ = 0x455cfe2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStackY_dc._36_8_ = 0x455cfee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    auStackY_dc._36_8_ = 0x455cffa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    auStackY_dc._36_8_ = 0x455d006;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    auStackY_dc._36_8_ = 0x455d012;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    auStackY_dc._36_8_ = 0x455d01e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    auStackY_dc._36_8_ = 0x455d02a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    auStackY_dc._36_8_ = 0x455d036;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    auStackY_dc._36_8_ = 0x455d042;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    auStackY_dc._36_8_ = 0x455d04e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    auStackY_dc._36_8_ = 0x455d05a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    auStackY_dc._36_8_ = 0x455d066;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057af009 = '\x01';
  }
  pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0455d0b9:
    pSVar12 = (Settings_PresetSettingsContainer_o *)&TypeInfo_SettingsManager;
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x20), lVar13 != 0)) {
      if (*(int *)(lVar13 + 0x14) == 2) {
        if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0455d313;
        unaff_R14 = *(System_Collections_Generic_Dictionary_int__object__o **)&pSVar19[1].fields._count;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          auStackY_dc._36_8_ = 0x455d10f;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar27 = (Il2CppClass *)0x0;
        auStackY_dc._36_8_ = 0x455d11b;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          lVar13 = *(long *)&pSVar19[1].fields._count;
          if (lVar13 == 0) goto label_0455d313;
          if (*(char *)(lVar13 + 0x68) == '\0') {
            if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
              auStackY_dc._36_8_ = 0x455d304;
              il2cpp_runtime_helper_02337ed0();
            }
            puVar18 = *(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
            goto label_0455d184;
          }
        }
        if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
          auStackY_dc._36_8_ = 0x455d14e;
          il2cpp_runtime_helper_02337ed0();
        }
        puVar18 = (undefined8 *)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
      }
      else {
        if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
          auStackY_dc._36_8_ = 0x455d176;
          il2cpp_runtime_helper_02337ed0();
        }
        puVar18 = (undefined8 *)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
      }
label_0455d184:
      unaff_R14 = (System_Collections_Generic_Dictionary_int__object__o *)*puVar18;
      auStackY_dc._36_8_ = 0x455d196;
      pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
      auStackY_dc._36_8_ = 0x455d1ab;
      pIVar27 = MethodInfo_Dictionary_2_System_String_System_Object;
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar19,(MethodInfo_31041B0 *)MethodInfo_Dictionary_2_System_String_System_Object)
      ;
      puVar18 = &TypeInfo_PlayerProperty;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        auStackY_dc._36_8_ = 0x455d1c4;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10);
        unaff_R13 = &MethodInfo_Void_Add;
        auStackY_dc._36_8_ = 0x455d1f2;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar19,(Il2CppObject *)pIVar27,(Il2CppObject *)unaff_R14,MethodInfo_Void_Add);
        lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
        if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x28), lVar13 != 0)) {
          pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20);
          auStackY_dc._36_8_ = 0x455d235;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar19,(Il2CppObject *)pIVar27,*(Il2CppObject **)(lVar13 + 0x18),MethodInfo_Void_Add);
          lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
          if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x30), lVar13 != 0)) {
            pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48);
            auStackY_dc._36_8_ = 0x455d278;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar19,(Il2CppObject *)pIVar27,*(Il2CppObject **)(lVar13 + 0x18),MethodInfo_Void_Add);
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
            if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x50), lVar13 != 0)) {
              auStackY_dc._36_8_ = 0x455d2b7;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar19,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                         *(Il2CppObject **)(lVar13 + 0x18),MethodInfo_Void_Add);
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                auStackY_dc._36_8_ = 0x455d2cf;
                il2cpp_runtime_helper_02337ed0();
              }
              auStackY_dc._36_8_ = 0x455d2d6;
              pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
              PhotonExtensions__SetCustomProperties
                        (pPVar16,(System_Collections_Generic_Dictionary_string__object__o *)pSVar19,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
label_0455d313:
    auStackY_dc._36_8_ = 0x455d318;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar27 = TypeInfo_InGameManager;
    if ((bVar1 <= (pSVar19->klass->_2).naturalAligment) &&
       ((pSVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) goto label_0455d0b9;
  }
  auStackY_dc._36_8_ = GameManagers_InGameManager__RegisterMainCharacterKill;
  pSVar24 = pSVar19;
  il2cpp_runtime_helper_022b2fd0();
  auStackY_dc._4_8_ = pSVar19;
  auStackY_dc._12_8_ = puVar18;
  auStackY_dc._20_8_ = unaff_R14;
  auStackY_dc._28_8_ = pSVar12;
  auStackY_dc._36_8_ = unaff_RBP;
  if (g_data_057aefe5 == '\0') {
    uStackY_f0 = (undefined8 *)0x455d347;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    uStackY_f0 = (undefined8 *)0x455d353;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    uStackY_f0 = (undefined8 *)0x455d35f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStackY_f0 = (undefined8 *)0x455d36b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    uStackY_f0 = (undefined8 *)0x455d377;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    uStackY_f0 = (undefined8 *)0x455d383;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    uStackY_f0 = (undefined8 *)0x455d38f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    uStackY_f0 = (undefined8 *)0x455d39b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStackY_f0 = (undefined8 *)0x455d3a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    uStackY_f0 = (undefined8 *)0x455d3b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aefe5 = '\x01';
  }
  pUVar26 = *(UnityEngine_Object_o **)&pSVar24[1].fields._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_f0 = (undefined8 *)0x455d3d6;
    il2cpp_runtime_helper_02337ed0();
  }
  uStackY_f0 = (undefined8 *)0x455d3e2;
  bVar9 = UnityEngine_Object__op_Equality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pIVar28 = *(Il2CppClass **)&pSVar24[1].fields._count;
  weapon = 4;
  if (pIVar28 == (Il2CppClass *)0x0) {
joined_r0x0455d47c:
    if (pIVar27 == (Il2CppClass *)0x0) {
label_0455d5d7:
      uStackY_f0 = (undefined8 *)0x455d5e6;
      pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
      uStackY_f0 = (undefined8 *)0x455d5fb;
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar19,(MethodInfo_31041B0 *)MethodInfo_Dictionary_2_System_String_System_Object)
      ;
      puVar18 = &TypeInfo_PlayerProperty;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        uStackY_f0 = (undefined8 *)0x455d614;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        uStackY_f0 = (undefined8 *)0x455d63b;
        il2cpp_runtime_helper_02337ed0();
      }
      uStackY_f0 = (undefined8 *)0x455d642;
      pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      uStackY_f0 = (undefined8 *)0x455d65d;
      iVar10 = PhotonExtensions__GetIntProperty
                         (pPVar16,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                          (MethodInfo *)0x0);
      auStackY_dc._0_4_ = iVar10 + 1;
      pIVar28 = (Il2CppClass *)auStackY_dc;
      uStackY_f0 = (undefined8 *)0x455d679;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      pUVar26 = (UnityEngine_Object_o *)0x0;
      if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStackY_f0 = (undefined8 *)0x455d696;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar19,(Il2CppObject *)pIVar27,pIVar17,MethodInfo_Void_Add);
        uStackY_f0 = (undefined8 *)0x455d69d;
        pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        uStackY_f0 = (undefined8 *)0x455d6aa;
        PhotonExtensions__SetCustomProperties
                  (pPVar16,(System_Collections_Generic_Dictionary_string__object__o *)pSVar19,
                   (MethodInfo *)0x0);
        return;
      }
      goto label_0455d6b7;
    }
label_0455d4c3:
    pIVar28 = (pIVar27->_1).image;
    bVar1 = (pIVar28->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar28->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      puVar18 = &TypeInfo_BasicTitan;
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar28->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BasicTitan)) {
        uStackY_f0 = (undefined8 *)0x455d51e;
        GVar33 = GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
        pSVar24 = (System_Collections_Generic_Dictionary_object__object__o *)GVar33.fields.Special;
        pUVar26 = (UnityEngine_Object_o *)(ulong)(uint)GVar33.fields.Weapon;
        if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
          uStackY_f0 = (undefined8 *)0x455d53b;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar31 = (pIVar27->_1).image;
        bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
        pIVar28 = TypeInfo_BasicTitan;
        if (((pIVar31->_2).naturalAligment < bVar1) ||
           ((pIVar31->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan)) goto label_0455d6bc;
        uStackY_f0 = (undefined8 *)0x455d576;
        GameProgress_GameProgressManager__RegisterTitanKill();
      }
      goto label_0455d5d7;
    }
    uStackY_f0 = (undefined8 *)0x455d57f;
    GVar33 = GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
    pSVar24 = (System_Collections_Generic_Dictionary_object__object__o *)GVar33.fields.Special;
    puVar18 = (undefined8 *)(ulong)(uint)GVar33.fields.Weapon;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
      uStackY_f0 = (undefined8 *)0x455d59c;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar31 = (pIVar27->_1).image;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    pIVar28 = TypeInfo_Human;
    if ((bVar1 <= (pIVar31->_2).naturalAligment) &&
       ((pIVar31->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      uStackY_f0 = (undefined8 *)0x455d5d7;
      GameProgress_GameProgressManager__RegisterHumanKill();
      goto label_0455d5d7;
    }
  }
  else {
    pvVar6 = (pIVar28->_1).image;
    bVar1 = *(byte *)((long)pvVar6 + 0x130);
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    puVar18 = (undefined8 *)(ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (pUVar26 = *(UnityEngine_Object_o **)((long)pvVar6 + 200),
       *(Il2CppClass **)((long)pUVar26 + (long)puVar18 * 8 + -8) != TypeInfo_Human)) {
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 < bVar2) ||
         (pUVar26 = *(UnityEngine_Object_o **)((long)pvVar6 + 200),
         *(Il2CppClass **)((long)pUVar26 + (ulong)bVar2 * 8 + -8) != TypeInfo_BasicTitan)) {
        if (*(byte *)(TypeInfo_BaseShifter + 0x130) <= bVar1) {
          weapon = *(long *)(*(long *)((long)pvVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseShifter + 0x130) * 8)
                   == TypeInfo_BaseShifter | 4;
        }
      }
      else {
        weapon = 6;
      }
      goto joined_r0x0455d47c;
    }
    lVar13 = *(long *)&(pIVar28->_2).naturalAligment;
    if (lVar13 != 0) {
      weapon = *(uint *)(lVar13 + 0x1d0);
      if (weapon < 3) goto joined_r0x0455d47c;
      weapon = 4 - (weapon == 3);
      if (pIVar27 != (Il2CppClass *)0x0) goto label_0455d4c3;
      goto label_0455d5d7;
    }
label_0455d6b7:
    uStackY_f0 = (undefined8 *)0x455d6bc;
    il2cpp_runtime_helper_022b2c90();
  }
label_0455d6bc:
  uStackY_f0 = (undefined8 *)0x455d6c4;
  pIVar31 = pIVar27;
  il2cpp_runtime_helper_022b2fd0();
  auStackY_11c._12_8_ = &TypeInfo_Human;
  auStackY_11c._4_8_ = pUVar26;
  auStackY_11c._20_8_ = unaff_R13;
  auStackY_11c._28_8_ = pIVar27;
  auStackY_11c._36_8_ = pSVar24;
  uStackY_f0 = puVar18;
  if (g_data_057aefe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aefe6 = '\x01';
  }
  pIStackY_128 = (Il2CppClass *)0x0;
  pUVar26 = (pIVar31->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  ppIVar32 = (Il2CppClass **)&g_data_00000004;
  pIVar27 = (Il2CppClass *)0x0;
  GVar33 = GameProgress_KillMethod__op_Implicit(4,(MethodInfo *)0x0);
  pIStackY_128 = (Il2CppClass *)GVar33.fields.Special;
  plVar20 = (pIVar31->_1).interopData;
  if (plVar20 == (long *)0x0) {
label_0455d8a3:
    if (pIVar28 != (Il2CppClass *)0x0) {
label_0455d8ac:
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar28,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameProgress_GameProgressManager__RegisterDamage();
      pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar19,(MethodInfo_31041B0 *)MethodInfo_Dictionary_2_System_String_System_Object)
      ;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar17 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      iVar10 = PhotonExtensions__GetIntProperty
                         (pPVar16,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                          (MethodInfo *)0x0);
      auStackY_11c._0_4_ = iVar10 + extraout_EDX;
      pIVar27 = (Il2CppClass *)auStackY_11c;
      ppIVar32 = g_data_057b9bb8;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add(pSVar19,pIVar17,pIVar21,MethodInfo_Void_Add);
        pIVar17 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
        pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        iVar10 = PhotonExtensions__GetIntProperty
                           (pPVar16,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                            (MethodInfo *)0x0);
        iStackY_120 = extraout_EDX;
        if (extraout_EDX <= iVar10) {
          iStackY_120 = iVar10;
        }
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStackY_120);
        System_Collections_Generic_Dictionary_object__object___Add(pSVar19,pIVar17,pIVar21,MethodInfo_Void_Add);
        pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        PhotonExtensions__SetCustomProperties
                  (pPVar16,(System_Collections_Generic_Dictionary_string__object__o *)pSVar19,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    lVar13 = *plVar20;
    bVar1 = *(byte *)(lVar13 + 0x130);
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    ppIVar32 = (Il2CppClass **)(ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (*(Il2CppClass **)(*(long *)(lVar13 + 200) + -8 + (long)ppIVar32 * 8) != TypeInfo_Human)) {
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 < bVar2) ||
         (ppIVar32 = *(Il2CppClass ***)(lVar13 + 200), ppIVar32[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
        pIVar27 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_BaseShifter + 0x130);
        if ((bVar1 < *(byte *)(TypeInfo_BaseShifter + 0x130)) ||
           (*(long *)(*(long *)(lVar13 + 200) + -8 + (long)pIVar27 * 8) != TypeInfo_BaseShifter)) goto label_0455d8a3;
        ppIVar32 = (Il2CppClass **)&g_data_00000005;
      }
      else {
        ppIVar32 = (Il2CppClass **)0x6;
      }
      pIVar27 = (Il2CppClass *)0x0;
      GVar33 = GameProgress_KillMethod__op_Implicit((int32_t)ppIVar32,(MethodInfo *)0x0);
      pIStackY_128 = (Il2CppClass *)GVar33.fields.Special;
      goto label_0455d8a3;
    }
    pIVar27 = TypeInfo_Human;
    if (plVar20[0x26] != 0) {
      ppIVar32 = &pIStackY_128;
      if ((int)plVar20[0x2b] == 9) {
        plVar20 = plVar20 + 0x2c;
      }
      else {
        plVar20 = (long *)&"";
      }
      pIVar27 = (Il2CppClass *)*plVar20;
      pIStackY_128 = pIVar27;
      il2cpp_runtime_helper_022b4080();
      if (pIVar28 == (Il2CppClass *)0x0) goto label_0455da49;
      goto label_0455d8ac;
    }
  }
label_0455da49:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aefe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"GameSettingsRPC");
    il2cpp_runtime_helper_023445d0(&"PauseGameRPC");
    il2cpp_runtime_helper_023445d0(&"PlayerInfoRPC");
    g_data_057aefe7 = '\x01';
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455dcfb;
label_0455da86:
    if (pIVar27 == (Il2CppClass *)0x0) goto label_0455dec5;
label_0455da8f:
    pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)
               ((long)TypeInfo_InGameManager->static_fields + 0x18);
    if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455dec5;
    bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar29,*(int32_t *)&(pIVar27->_1).namespaze,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((long)TypeInfo_InGameManager->static_fields + 0x18);
      iVar10 = *(int32_t *)&(pIVar27->_1).namespaze;
      pSVar12 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
      if (g_data_057af051 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
        g_data_057af051 = '\x01';
      }
      pSVar22 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
      Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)pSVar22,(MethodInfo *)0x0);
      pSVar12[1].klass = pSVar22;
      il2cpp_runtime_helper_022b4080(pSVar12 + 1);
      Settings_BaseSettingsContainer___ctor(pSVar12,(MethodInfo *)0x0);
      if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455dec5;
      System_Collections_Generic_Dictionary_int__object___Add
                (pSVar29,iVar10,(Il2CppObject *)pSVar12,MethodInfo_Void_Add);
    }
    pIVar28 = TypeInfo_InGameManager;
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar23 = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)pIVar28);
    pPVar7 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pSVar25 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (pSVar25 == (System_Object_array *)0x0) goto label_0455dec5;
    if ((pSVar23 != (System_Byte_array *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pSVar23), lVar13 == 0))
    goto label_0455decf;
    if ((int)pSVar25->max_length != 0) {
      pSVar25->m_Items[0] = &pSVar23->obj;
      il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_3efa220
                  (pPVar7,"PlayerInfoRPC",(Photon_Realtime_Player_o *)pIVar27,pSVar25,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar8 = (char)bVar9;
        }
        else {
          bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar8 = (char)bVar9;
        }
        if (cVar8 == '\0') goto label_0455de62;
        pPVar7 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        pSVar25 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar20 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (plVar20 != (long *)0x0) {
          __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
          pSVar11 = (System_String_o *)(**(code **)(*plVar20 + 0x1a8))(plVar20);
          if ((__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
             (pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                  (__this_00,pSVar11,1,(MethodInfo *)0x0),
             pSVar25 != (System_Object_array *)0x0)) {
            if ((pSVar23 != (System_Byte_array *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pSVar23), lVar13 == 0))
            goto label_0455decf;
            if ((int)pSVar25->max_length == 0) goto label_0455deca;
            pSVar25->m_Items[0] = &pSVar23->obj;
            il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
            if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_3efa220
                        (pPVar7,"GameSettingsRPC",(Photon_Realtime_Player_o *)pIVar27,pSVar25,(MethodInfo *)0x0);
              if (*(char *)((long)ppIVar32 + 0x7a) == '\0') {
label_0455de62:
                if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  bVar9 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                  cVar8 = (char)bVar9;
                }
                else {
                  bVar9 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                  cVar8 = (char)bVar9;
                }
                if (cVar8 == '\0') {
                  return;
                }
                if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                return;
              }
              pPVar7 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
              pSVar25 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
              if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_3efa220
                          (pPVar7,"PauseGameRPC",(Photon_Realtime_Player_o *)pIVar27,pSVar25,(MethodInfo *)0x0);
                goto label_0455de62;
              }
            }
          }
        }
      }
      goto label_0455dec5;
    }
  }
  else {
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455da86;
label_0455dcfb:
    il2cpp_runtime_helper_02337ed0();
    if (pIVar27 != (Il2CppClass *)0x0) goto label_0455da8f;
label_0455dec5:
    il2cpp_runtime_helper_022b2c90();
  }
label_0455deca:
  il2cpp_runtime_helper_022b2ca0();
label_0455decf:
  pSVar12 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057af051 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
    g_data_057af051 = '\x01';
  }
  pSVar22 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
  Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)pSVar22,(MethodInfo *)0x0);
  pSVar12[1].klass = pSVar22;
  il2cpp_runtime_helper_022b4080(pSVar12 + 1);
  Settings_BaseSettingsContainer___ctor(pSVar12,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x45693d0

void GameManagers_MainMenuGameManager__OnJoinRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057af030 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057af030 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnCreateRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnCreateRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x4569440

void GameManagers_MainMenuGameManager__OnCreateRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057af031 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057af031 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$UpdateCachedRoomList
// il2cpp: void GameManagers_MainMenuGameManager__UpdateCachedRoomList (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x45694b0

void GameManagers_MainMenuGameManager__UpdateCachedRoomList
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value;
  MethodInfo *method_00;
  uint index;
  System_Collections_Generic_List_RoomInfo__o *roomList_00;
  
  roomList_00 = roomList;
  if (g_data_057af032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Item);
    __this = (GameManagers_MainMenuGameManager_o *)&TypeInfo_MainMenuGameManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057af032 = '\x01';
  }
  if (roomList != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    if (0 < (roomList->fields)._size) {
      index = 0;
      do {
        while( true ) {
          roomList_00 = (System_Collections_Generic_List_RoomInfo__o *)(ulong)index;
          __this = (GameManagers_MainMenuGameManager_o *)roomList;
          value = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)roomList,index,MethodInfo_RoomInfo_get_Item);
          if (value == (Il2CppObject *)0x0) goto label_045695bb;
          cVar1 = *(char *)&value[1].klass;
          if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
          __this = (GameManagers_MainMenuGameManager_o *)0x0;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045695bb;
          if (cVar1 == '\0') break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_00,(Il2CppObject *)value[4].klass,MethodInfo_Boolean_Remove);
          index = index + 1;
          if ((roomList->fields)._size <= (int)index) {
            return;
          }
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)value[4].klass,value,MethodInfo_Void_set_Item);
        index = index + 1;
      } while ((int)index < (roomList->fields)._size);
    }
    return;
  }
label_045695bb:
  il2cpp_runtime_helper_022b2c90();
  GameManagers_MainMenuGameManager__UpdateCachedRoomList(__this,roomList_00,method_00);
  ApplicationManagers_HeadlessManager__OnRoomListUpdate((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnRoomListUpdate
// il2cpp: void GameManagers_MainMenuGameManager__OnRoomListUpdate (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x45695c0

void GameManagers_MainMenuGameManager__OnRoomListUpdate
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  GameManagers_MainMenuGameManager__UpdateCachedRoomList(__this,roomList,method);
  ApplicationManagers_HeadlessManager__OnRoomListUpdate((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.ctor
// il2cpp: void GameManagers_MainMenuGameManager___ctor (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x45695d0

void GameManagers_MainMenuGameManager___ctor(GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.cctor
// il2cpp: void GameManagers_MainMenuGameManager___cctor (const MethodInfo* method);
// 0x45695e0

void GameManagers_MainMenuGameManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057af033 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    g_data_057af033 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomInfo);
  lVar1 = *(long *)(TypeInfo_MainMenuGameManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,__this);
  return;
}



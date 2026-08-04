// Type: Gisketch.Aottg2UI.Game.AottgActiveProfile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgActiveProfile.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgActiveProfile$$get_UsesRemote
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote (const MethodInfo* method);
// 0x44f8d70

bool_conflict Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (g_data_057aeccb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aeccb = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$PlayerName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName (const MethodInfo* method);
// 0x44f8dd0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *pMVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar8;
  
  if (g_data_057aeccc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"GUEST");
    g_data_057aeccc = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f8ea4;
label_044f8df1:
    pMVar5 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f8df1;
label_044f8ea4:
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = (MethodInfo *)ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)pMVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      goto label_044f8f13;
    }
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar2 == 0) {
    puVar7 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeccd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"GUEST");
        pMVar5 = (MethodInfo *)&"name";
        il2cpp_runtime_helper_023445d0();
        g_data_057aeccd = '\x01';
      }
      a = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar5);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044f90b8:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aecf3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057aecf3 = '\x01';
            iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar5 = (MethodInfo *)0x0;
            bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
            cVar3 = (char)bVar4;
          }
          else {
            pMVar5 = (MethodInfo *)0x0;
            bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
            cVar3 = (char)bVar4;
          }
          if (cVar3 != '\0') {
            pMVar5 = (MethodInfo *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)pMVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (System_String_o *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
            }
          }
          pSVar6 = (System_String_o *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(pMVar5);
          return pSVar6;
        }
        a_00 = (SimpleJSONFixed_JSONNode_o *)
               (*(a->klass->vtable)._7_get_Item.methodPtr)
                         (a,"name",(a->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          plVar8 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                     (a,"name",(a->klass->vtable)._7_get_Item.method);
          if (plVar8 == (long *)0x0) goto label_044f90b8;
          pSVar6 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
          goto label_044f9067;
        }
      }
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044f9067:
      bVar4 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return "GUEST";
      }
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = MiscExtensions__StripHex(pSVar6,(MethodInfo *)0x0);
      return pSVar6;
    }
    puVar7 = (undefined8 *)(lVar2 + 0x18);
  }
  pSVar6 = (System_String_o *)*puVar7;
  bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return "GUEST";
  }
label_044f8f13:
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) {
    pSVar6 = MiscExtensions__StripHex(pSVar6,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_02337ed0();
  pSVar6 = MiscExtensions__StripHex(pSVar6,(MethodInfo *)0x0);
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName (const MethodInfo* method);
// 0x44f8f50

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  
  if (g_data_057aeccd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"GUEST");
    method = (MethodInfo *)&"name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeccd = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044f90b8:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecf3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057aecf3 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = (MethodInfo *)0x0;
        bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
        cVar2 = (char)bVar3;
      }
      else {
        method_00 = (MethodInfo *)0x0;
        bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
        cVar2 = (char)bVar3;
      }
      if (cVar2 != '\0') {
        method_00 = (MethodInfo *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)method_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return (System_String_o *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
        }
      }
      pSVar5 = (System_String_o *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(method_00);
      return pSVar5;
    }
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (*(a->klass->vtable)._7_get_Item.methodPtr)(a,"name",(a->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      plVar4 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"name",(a->klass->vtable)._7_get_Item.method);
      if (plVar4 == (long *)0x0) goto label_044f90b8;
      pSVar5 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4);
      goto label_044f9067;
    }
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044f9067:
  bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = MiscExtensions__StripHex(pSVar5,(MethodInfo *)0x0);
    return pSVar5;
  }
  return "GUEST";
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AccountName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName (const MethodInfo* method);
// 0x44f91a0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  if (g_data_057aecce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"Local profile");
    g_data_057aecce = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) {
        pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
        return pSVar4;
      }
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return "Local profile";
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AuthHandle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle (const MethodInfo* method);
// 0x44f92b0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  if (g_data_057aeccf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"Local profile");
    g_data_057aeccf = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) {
        pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
        return pSVar4;
      }
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return "Local profile";
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey (const MethodInfo* method);
// 0x44f93c0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar6;
  System_Action_AottgUi__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Code_AottgUi_o *in_RSI;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar14;
  MethodInfo *pMVar15;
  
  if (g_data_057aecd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd0 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f94bd;
label_044f93e5:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f93e5;
label_044f94bd:
    il2cpp_runtime_helper_02337ed0();
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar2 == 0) goto label_044f94fe;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 != 0) {
      return *(System_String_o **)(lVar2 + 0x18);
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aecd1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057aecd1 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f969d;
label_044f95c5:
      pMVar15 = (MethodInfo *)0x0;
      bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f95c5;
label_044f969d:
      il2cpp_runtime_helper_02337ed0();
      pMVar15 = (MethodInfo *)0x0;
      bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 == '\0') {
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 != 0) {
          return *(System_String_o **)(lVar2 + 0x18);
        }
        il2cpp_runtime_helper_022b2c90();
        pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(pMVar15);
        pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar5,(MethodInfo *)0x0);
        return pSVar5;
      }
      goto label_044f96de;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aedc8 == '\0') goto label_044f96f8;
label_044f95f1:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057aedc8 != '\0') goto label_044f95f1;
label_044f96f8:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aedc8 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    in_RSI = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    bVar4 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aedc8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aedc8 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
      }
      return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
    }
label_044f96de:
    pMVar15 = (MethodInfo *)0x0;
    if (g_data_057aee6a == '\0') {
      pMVar15 = (MethodInfo *)&"MainBackground2Texture";
      il2cpp_runtime_helper_023445d0();
      g_data_057aee6a = '\x01';
    }
    pGVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar15);
    pSVar5 = "MainBackground2Texture";
    if ((pGVar6 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar6->max_length != 0)) {
      if ((int)pGVar6->max_length == 0) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aee6d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0(&"profile-preview-card");
          il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
          g_data_057aee6d = '\x01';
        }
        pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
        pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (in_RSI != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                              (in_RSI,"profilePreviewCard",pSVar7,"profile-preview-card",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee6e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
          il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
          il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
          il2cpp_runtime_helper_023445d0(&"Center");
          il2cpp_runtime_helper_023445d0(&"Row");
          il2cpp_runtime_helper_023445d0(&"profile-preview-body");
          g_data_057aee6e = '\x01';
        }
        pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
        pGVar13 = "Center";
        pGVar14 = "Column";
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)"Center",
                            (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                            pGVar8,pGVar11,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if ((pGVar12 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
           (pGVar13 = "profilePreviewBannerFrame", pGVar14 = pGVar12,
           pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (pGVar12,(System_String_o *)"profilePreviewBannerFrame",pSVar7,"profile-preview-banner-frame",pGVar9,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
           pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          *(undefined1 *)((long)&(pGVar10->fields).hasIcon + 1) = 1;
          pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                              (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                              (pGVar12,"profilePreviewBody",pSVar7,"profile-preview-body",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee6f == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0();
          g_data_057aee6f = '\x01';
        }
        sprite = (pGVar14->fields)._actions;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
        pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar11,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Image
                              (pGVar13,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee70 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          il2cpp_runtime_helper_023445d0(&"profile-preview-names");
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0(&"default");
          il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
          il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
          g_data_057aee70 = '\x01';
        }
        pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
        pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar11,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            28.0,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar12 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (pGVar12,"profilePreviewAvatarFrame",pSVar7,"profile-preview-avatar-frame",pGVar9,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = "default";
          pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
            System_Action_object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar7);
          }
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,1.0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                              (pGVar12,pSVar5,pSVar7,"profile-preview-names",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee71 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
          il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
          g_data_057aee71 = '\x01';
        }
        pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
        pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        pGVar12 = "Column";
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar11,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                              (pGVar13,"profileCardAvatarBg",pSVar7,"profile-preview-avatar-bg",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee72 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
          il2cpp_runtime_helper_023445d0();
          g_data_057aee72 = '\x01';
        }
        sprite_00 = (pGVar12->fields)._children;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar11,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Image
                              (pGVar14,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar10;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aee73 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aee73 = '\x01';
        }
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
        return pSVar5;
      }
      pSVar5 = pGVar6->m_Items[0].fields.Key;
    }
    return pSVar5;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aedc7 == '\0') goto label_044f9518;
label_044f9411:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aedc7 != '\0') goto label_044f9411;
label_044f9518:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aedc7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aedc7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aedc7 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
  }
label_044f94fe:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey((MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey (const MethodInfo* method);
// 0x44f95a0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  char cVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Il2CppObject *__this;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *in_RSI;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar14;
  MethodInfo *pMVar15;
  
  if (g_data_057aecd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd1 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f969d;
label_044f95c5:
    pMVar15 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f95c5;
label_044f969d:
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 != 0) {
        return *(System_String_o **)(lVar2 + 0x18);
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar11 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(pMVar15);
      pSVar11 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar11,(MethodInfo *)0x0);
      return pSVar11;
    }
    goto label_044f96de;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aedc8 == '\0') goto label_044f96f8;
label_044f95f1:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aedc8 != '\0') goto label_044f95f1;
label_044f96f8:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aedc8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  in_RSI = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aedc8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aedc8 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
  }
label_044f96de:
  pMVar15 = (MethodInfo *)0x0;
  if (g_data_057aee6a == '\0') {
    pMVar15 = (MethodInfo *)&"MainBackground2Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee6a = '\x01';
  }
  pGVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar15);
  pSVar11 = "MainBackground2Texture";
  if ((pGVar5 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar5->max_length != 0)) {
    if ((int)pGVar5->max_length == 0) {
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057aee6d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profile-preview-card");
        il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
        g_data_057aee6d = '\x01';
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
      pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (in_RSI != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (in_RSI,"profilePreviewCard",pSVar6,"profile-preview-card",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
        il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
        il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
        il2cpp_runtime_helper_023445d0(&"Center");
        il2cpp_runtime_helper_023445d0(&"Row");
        il2cpp_runtime_helper_023445d0(&"profile-preview-body");
        g_data_057aee6e = '\x01';
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
      pGVar13 = "Center";
      pGVar14 = "Column";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)"Center",
                          (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          pGVar7,pGVar10,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if ((pGVar12 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar13 = "profilePreviewBannerFrame", pGVar14 = pGVar12,
         pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                            (pGVar12,(System_String_o *)"profilePreviewBannerFrame",pSVar6,"profile-preview-banner-frame",pGVar8,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
         pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        *(undefined1 *)((long)&(pGVar9->fields).hasIcon + 1) = 1;
        pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar7,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,1.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar12,"profilePreviewBody",pSVar6,"profile-preview-body",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee6f == '\0') {
        il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0();
        g_data_057aee6f = '\x01';
      }
      sprite = (pGVar14->fields)._actions;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
      pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Image
                           (pGVar13,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"profile-preview-names");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
        il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
        g_data_057aee70 = '\x01';
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
      pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar12 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pGVar12,"profilePreviewAvatarFrame",pSVar6,"profile-preview-avatar-frame",pGVar8,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = "default";
        pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
        }
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar12,pSVar11,pSVar6,"profile-preview-names",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee71 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
        il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
        g_data_057aee71 = '\x01';
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar12 = "Column";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar13,"profileCardAvatarBg",pSVar6,"profile-preview-avatar-bg",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee72 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
        il2cpp_runtime_helper_023445d0();
        g_data_057aee72 = '\x01';
      }
      sprite_00 = (pGVar12->fields)._children;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Image
                           (pGVar14,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee73 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aee73 = '\x01';
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
      return pSVar11;
    }
    pSVar11 = pGVar5->m_Items[0].fields.Key;
  }
  return pSVar11;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite (const MethodInfo* method);
// 0x44f9780

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite (const MethodInfo* method);
// 0x44f97a0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$Bio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio (const MethodInfo* method);
// 0x44f97c0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar5;
  uint uVar6;
  undefined8 *puVar7;
  System_Collections_Generic_List_string__o *__this_05;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string__o *__this_06;
  System_Object_array *pSVar9;
  long *plVar10;
  System_String_o *item;
  MethodInfo *method_00;
  undefined1 auVar11 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppType **ppIVar13;
  Il2CppRGCTXData *pIVar14;
  _union_231609 _Var15;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar16;
  undefined1 auStack_78 [16];
  Il2CppRGCTXData *pIStack_68;
  _union_231609 _Stack_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_58;
  System_Collections_Generic_List_string__o *pSStack_50;
  
  if (g_data_057aecd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"No bio yet.");
    g_data_057aecd2 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f985c;
label_044f97dd:
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_044f97ec;
label_044f986c:
    __this_05 = (System_Collections_Generic_List_string__o *)&TypeInfo_AccountManager;
    if (g_data_057aecd3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057aecd3 = '\x01';
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar3 == 0) {
      pSVar8 = (System_String_o *)0x0;
      goto label_044f98be;
    }
    lVar3 = *(long *)(lVar3 + 0x58);
    if (lVar3 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecd3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057aecd3 = '\x01';
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (lVar3 == 0) {
        return (System_String_o *)0x0;
      }
      lVar3 = *(long *)(lVar3 + 0x58);
      if (lVar3 != 0) {
        return *(System_String_o **)(lVar3 + 0x18);
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecd4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aecd4 = '\x01';
      }
      if (g_data_057aecd3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057aecd3 = '\x01';
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (lVar3 == 0) {
        pSVar8 = (System_String_o *)0x0;
        iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x044f9aa9:
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (System_String_o *)0x0;
        }
        __this_05 = (System_Collections_Generic_List_string__o *)0x0;
        bVar5 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (System_String_o *)0x0;
        }
        if (pSVar8 != (System_String_o *)0x0) {
          __this_05 = (System_Collections_Generic_List_string__o *)
                      System_String__Trim(pSVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (g_data_057aedc9 == '\0') goto label_044f9ac2;
label_044f9a70:
            if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9a7c;
label_044f9ae1:
            il2cpp_runtime_helper_02337ed0();
            pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
          }
          else {
            if (g_data_057aedc9 != '\0') goto label_044f9a70;
label_044f9ac2:
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            g_data_057aedc9 = '\x01';
            if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9ae1;
label_044f9a7c:
            pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
          }
          if ((pSVar8 != (System_String_o *)0x0) ||
             (pSVar8 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar8 != (System_String_o *)0x0))
          {
            pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
            uVar6 = System_String__Equals_3af50f0((System_String_o *)__this_05,pSVar8,4,(MethodInfo *)0x0);
            return (System_String_o *)((ulong)uVar6 ^ 1);
          }
        }
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x58);
        if (lVar3 != 0) {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
          goto joined_r0x044f9aa9;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pSStack_50 = __this_05;
      if (g_data_057aecd5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057aecd5 = '\x01';
      }
      pIVar14 = (Il2CppRGCTXData *)0x0;
      _Var15.genericMethod = (char *)0x0;
      pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      ppIVar13 = (Il2CppType **)0x0;
      pSVar16 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = (MethodInfo *)0x0;
        bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto label_044f9c89;
label_044f9c18:
        __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aea29 == '\0') goto label_044f9cb7;
label_044f9c51:
          iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        else {
          if (g_data_057aea29 != '\0') goto label_044f9c51;
label_044f9cb7:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          g_data_057aea29 = '\x01';
          iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
        }
        else {
          __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
        }
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78,__this,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
          pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_78._0_8_;
          ppIVar13 = (Il2CppType **)auStack_78._8_8_;
          pIVar14 = pIStack_68;
          _Var15 = _Stack_60;
          pSVar16 = pSStack_58;
          if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
            __this_01.fields._version = auStack_78._8_4_;
            __this_01.fields._index = auStack_78._12_4_;
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_78._0_8_;
            __this_01.fields._current.fields.key = (Il2CppObject *)pIStack_68;
            __this_01.fields._current.fields.value = _Stack_60.genericMethod;
            __this_01.fields._32_8_ = pSStack_58;
            bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff60);
            pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_78._0_8_;
            ppIVar13 = (Il2CppType **)auStack_78._8_8_;
            pIVar14 = pIStack_68;
            _Var15 = _Stack_60;
            pSVar16 = pSStack_58;
            if ((char)bVar5 != '\0') goto label_044f9e16;
          }
          else {
            while (__this_00.fields._8_8_ = ppIVar13, __this_00.fields._dictionary = pSVar12,
                  __this_00.fields._current.fields.key = (Il2CppObject *)pIVar14,
                  __this_00.fields._current.fields.value = _Var15.genericMethod,
                  __this_00.fields._32_8_ = pSVar16,
                  bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                    (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff60),
                  (char)bVar5 != '\0') {
              il2cpp_runtime_helper_03343020(&stack0xffffffffffffff60,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
              lVar3 = MethodInfo_Void_Add;
              piVar1 = &(__this_05->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_05->fields)._items;
              if (pSVar4 == (System_String_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_044f9e11;
              }
              uVar6 = (__this_05->fields)._size;
              if (uVar6 < (uint)pSVar4->max_length) {
                (__this_05->fields)._size = uVar6 + 1;
                pSVar4->m_Items[(int)uVar6] = item;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar6,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          __this_02.fields._8_8_ = ppIVar13;
          __this_02.fields._dictionary = pSVar12;
          __this_02.fields._current.fields.key = (Il2CppObject *)pIVar14;
          __this_02.fields._current.fields.value = _Var15.genericMethod;
          __this_02.fields._32_8_ = pSVar16;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
          goto label_044f9de7;
        }
      }
      else {
        method_00 = (MethodInfo *)0x0;
        bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_044f9c18;
label_044f9c89:
        __this_06 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(method_00);
        if (__this_06 != (System_Collections_Generic_List_string__o *)0x0) goto label_044f9df9;
      }
label_044f9e11:
      do {
        il2cpp_runtime_helper_022b2c90();
label_044f9e16:
        il2cpp_runtime_helper_03343020(&stack0xffffffffffffff60,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
        auVar11 = il2cpp_runtime_helper_022b2c90();
        if (auVar11._8_4_ != 1) {
label_044f9e9a:
          __this_04.fields._8_8_ = ppIVar13;
          __this_04.fields._dictionary = pSVar12;
          __this_04.fields._current.fields.key = (Il2CppObject *)pIVar14;
          __this_04.fields._current.fields.value = _Var15.genericMethod;
          __this_04.fields._32_8_ = pSVar16;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
          _Unwind_Resume(auVar11._0_8_);
        }
        plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar3 = *plVar10;
        __cxa_end_catch();
        __this_03.fields._8_8_ = ppIVar13;
        __this_03.fields._dictionary = pSVar12;
        __this_03.fields._current.fields.key = (Il2CppObject *)pIVar14;
        __this_03.fields._current.fields.value = _Var15.genericMethod;
        __this_03.fields._32_8_ = pSVar16;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
        if (lVar3 != 0) {
          il2cpp_runtime_helper_022fefe0(lVar3);
          goto label_044f9e9a;
        }
label_044f9de7:
        __this_06 = __this_05;
      } while (__this_05 == (System_Collections_Generic_List_string__o *)0x0);
label_044f9df9:
      pSVar9 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_String_ToArray);
      return (System_String_o *)pSVar9;
    }
    puVar7 = (undefined8 *)(lVar3 + 0x18);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f97dd;
label_044f985c:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_044f986c;
label_044f97ec:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aedc9 == '\0') goto label_044f98ed;
label_044f9809:
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057aedc9 != '\0') goto label_044f9809;
label_044f98ed:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aedc9 = '\x01';
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    puVar7 = (undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
  }
  pSVar8 = (System_String_o *)*puVar7;
label_044f98be:
  bVar5 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar8 = "No bio yet.";
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalBio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio (const MethodInfo* method);
// 0x44f9930

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar5;
  uint uVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_string__o *__this_05;
  System_Object_array *pSVar8;
  long *plVar9;
  System_String_o *item;
  System_Collections_Generic_List_string__o *unaff_RBX;
  MethodInfo *method_00;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppType **ppIVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231609 _Var14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar15;
  undefined1 auStack_70 [16];
  Il2CppRGCTXData *pIStack_60;
  _union_231609 _Stack_58;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_50;
  System_Collections_Generic_List_string__o *pSStack_48;
  
  if (g_data_057aecd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd3 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    return *(System_String_o **)(lVar3 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aecd4 = '\x01';
  }
  if (g_data_057aecd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd3 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    pSVar7 = (System_String_o *)0x0;
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x044f9aa9:
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return (System_String_o *)0x0;
    }
    unaff_RBX = (System_Collections_Generic_List_string__o *)0x0;
    bVar5 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (System_String_o *)0x0;
    }
    if (pSVar7 != (System_String_o *)0x0) {
      unaff_RBX = (System_Collections_Generic_List_string__o *)System_String__Trim(pSVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aedc9 == '\0') goto label_044f9ac2;
label_044f9a70:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9a7c;
label_044f9ae1:
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
      }
      else {
        if (g_data_057aedc9 != '\0') goto label_044f9a70;
label_044f9ac2:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aedc9 = '\x01';
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9ae1;
label_044f9a7c:
        pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
      }
      if ((pSVar7 != (System_String_o *)0x0) ||
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 != (System_String_o *)0x0)) {
        pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
        uVar6 = System_String__Equals_3af50f0((System_String_o *)unaff_RBX,pSVar7,4,(MethodInfo *)0x0);
        return (System_String_o *)((ulong)uVar6 ^ 1);
      }
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x58);
    if (lVar3 != 0) {
      pSVar7 = *(System_String_o **)(lVar3 + 0x18);
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
      goto joined_r0x044f9aa9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_48 = unaff_RBX;
  if (g_data_057aecd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aecd5 = '\x01';
  }
  pIVar13 = (Il2CppRGCTXData *)0x0;
  _Var14.genericMethod = (char *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  ppIVar12 = (Il2CppType **)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_044f9c89;
label_044f9c18:
    unaff_RBX = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea29 == '\0') goto label_044f9cb7;
label_044f9c51:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9c5d;
label_044f9cd6:
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    else {
      if (g_data_057aea29 != '\0') goto label_044f9c51;
label_044f9cb7:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea29 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9cd6;
label_044f9c5d:
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_70,__this,
                 MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
      pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_70._0_8_;
      ppIVar12 = (Il2CppType **)auStack_70._8_8_;
      pIVar13 = pIStack_60;
      _Var14 = _Stack_58;
      pSVar15 = pSStack_50;
      if (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0) {
        __this_01.fields._version = auStack_70._8_4_;
        __this_01.fields._index = auStack_70._12_4_;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_70._0_8_;
        __this_01.fields._current.fields.key = (Il2CppObject *)pIStack_60;
        __this_01.fields._current.fields.value = _Stack_58.genericMethod;
        __this_01.fields._32_8_ = pSStack_50;
        bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff68);
        pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_70._0_8_;
        ppIVar12 = (Il2CppType **)auStack_70._8_8_;
        pIVar13 = pIStack_60;
        _Var14 = _Stack_58;
        pSVar15 = pSStack_50;
        if ((char)bVar5 != '\0') goto label_044f9e16;
      }
      else {
        while (__this_00.fields._8_8_ = ppIVar12, __this_00.fields._dictionary = pSVar11,
              __this_00.fields._current.fields.key = (Il2CppObject *)pIVar13,
              __this_00.fields._current.fields.value = _Var14.genericMethod, __this_00.fields._32_8_ = pSVar15
              , bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff68),
              (char)bVar5 != '\0') {
          il2cpp_runtime_helper_03343020(&stack0xffffffffffffff68,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (unaff_RBX->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044f9e11;
          }
          uVar6 = (unaff_RBX->fields)._size;
          if (uVar6 < (uint)pSVar4->max_length) {
            (unaff_RBX->fields)._size = uVar6 + 1;
            pSVar4->m_Items[(int)uVar6] = item;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar6,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = ppIVar12;
      __this_02.fields._dictionary = pSVar11;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar13;
      __this_02.fields._current.fields.value = _Var14.genericMethod;
      __this_02.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
      goto label_044f9de7;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_044f9c18;
label_044f9c89:
    __this_05 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(method_00);
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) goto label_044f9df9;
  }
label_044f9e11:
  do {
    il2cpp_runtime_helper_022b2c90();
label_044f9e16:
    il2cpp_runtime_helper_03343020(&stack0xffffffffffffff68,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_044f9e9a:
      __this_04.fields._8_8_ = ppIVar12;
      __this_04.fields._dictionary = pSVar11;
      __this_04.fields._current.fields.key = (Il2CppObject *)pIVar13;
      __this_04.fields._current.fields.value = _Var14.genericMethod;
      __this_04.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = ppIVar12;
    __this_03.fields._dictionary = pSVar11;
    __this_03.fields._current.fields.key = (Il2CppObject *)pIVar13;
    __this_03.fields._current.fields.value = _Var14.genericMethod;
    __this_03.fields._32_8_ = pSVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_044f9e9a;
    }
label_044f9de7:
    __this_05 = unaff_RBX;
  } while (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0);
label_044f9df9:
  pSVar8 = System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_String_ToArray);
  return (System_String_o *)pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CanImportLocalBio
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio (const MethodInfo* method);
// 0x44f9990

bool_conflict Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar5;
  uint uVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_string__o *__this_05;
  System_Object_array *pSVar8;
  long *plVar9;
  System_String_o *item;
  System_Collections_Generic_List_string__o *unaff_RBX;
  MethodInfo *method_00;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppType **ppIVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231609 _Var14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar15;
  undefined1 auStack_68 [16];
  Il2CppRGCTXData *pIStack_58;
  _union_231609 _Stack_50;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_48;
  System_Collections_Generic_List_string__o *pSStack_40;
  
  if (g_data_057aecd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aecd4 = '\x01';
  }
  if (g_data_057aecd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd3 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    pSVar7 = (System_String_o *)0x0;
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x044f9aa9:
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return 0;
    }
    unaff_RBX = (System_Collections_Generic_List_string__o *)0x0;
    bVar5 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return 0;
    }
    if (pSVar7 != (System_String_o *)0x0) {
      unaff_RBX = (System_Collections_Generic_List_string__o *)System_String__Trim(pSVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aedc9 == '\0') goto label_044f9ac2;
label_044f9a70:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9a7c;
label_044f9ae1:
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
      }
      else {
        if (g_data_057aedc9 != '\0') goto label_044f9a70;
label_044f9ac2:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aedc9 = '\x01';
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9ae1;
label_044f9a7c:
        pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
      }
      if ((pSVar7 != (System_String_o *)0x0) ||
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 != (System_String_o *)0x0)) {
        pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
        uVar6 = System_String__Equals_3af50f0((System_String_o *)unaff_RBX,pSVar7,4,(MethodInfo *)0x0);
        return uVar6 ^ 1;
      }
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x58);
    if (lVar3 != 0) {
      pSVar7 = *(System_String_o **)(lVar3 + 0x18);
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
      goto joined_r0x044f9aa9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = unaff_RBX;
  if (g_data_057aecd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aecd5 = '\x01';
  }
  pIVar13 = (Il2CppRGCTXData *)0x0;
  _Var14.genericMethod = (char *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  ppIVar12 = (Il2CppType **)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_044f9c89;
label_044f9c18:
    unaff_RBX = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea29 == '\0') goto label_044f9cb7;
label_044f9c51:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9c5d;
label_044f9cd6:
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    else {
      if (g_data_057aea29 != '\0') goto label_044f9c51;
label_044f9cb7:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea29 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9cd6;
label_044f9c5d:
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_68,__this,
                 MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
      pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_68._0_8_;
      ppIVar12 = (Il2CppType **)auStack_68._8_8_;
      pIVar13 = pIStack_58;
      _Var14 = _Stack_50;
      pSVar15 = pSStack_48;
      if (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0) {
        __this_01.fields._version = auStack_68._8_4_;
        __this_01.fields._index = auStack_68._12_4_;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_68._0_8_;
        __this_01.fields._current.fields.key = (Il2CppObject *)pIStack_58;
        __this_01.fields._current.fields.value = _Stack_50.genericMethod;
        __this_01.fields._32_8_ = pSStack_48;
        bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff70);
        pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_68._0_8_;
        ppIVar12 = (Il2CppType **)auStack_68._8_8_;
        pIVar13 = pIStack_58;
        _Var14 = _Stack_50;
        pSVar15 = pSStack_48;
        if ((char)bVar5 != '\0') goto label_044f9e16;
      }
      else {
        while (__this_00.fields._8_8_ = ppIVar12, __this_00.fields._dictionary = pSVar11,
              __this_00.fields._current.fields.key = (Il2CppObject *)pIVar13,
              __this_00.fields._current.fields.value = _Var14.genericMethod, __this_00.fields._32_8_ = pSVar15
              , bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff70),
              (char)bVar5 != '\0') {
          il2cpp_runtime_helper_03343020(&stack0xffffffffffffff70,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (unaff_RBX->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044f9e11;
          }
          uVar6 = (unaff_RBX->fields)._size;
          if (uVar6 < (uint)pSVar4->max_length) {
            (unaff_RBX->fields)._size = uVar6 + 1;
            pSVar4->m_Items[(int)uVar6] = item;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar6,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = ppIVar12;
      __this_02.fields._dictionary = pSVar11;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar13;
      __this_02.fields._current.fields.value = _Var14.genericMethod;
      __this_02.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff70);
      goto label_044f9de7;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_044f9c18;
label_044f9c89:
    __this_05 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(method_00);
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) goto label_044f9df9;
  }
label_044f9e11:
  do {
    il2cpp_runtime_helper_022b2c90();
label_044f9e16:
    il2cpp_runtime_helper_03343020(&stack0xffffffffffffff70,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_044f9e9a:
      __this_04.fields._8_8_ = ppIVar12;
      __this_04.fields._dictionary = pSVar11;
      __this_04.fields._current.fields.key = (Il2CppObject *)pIVar13;
      __this_04.fields._current.fields.value = _Var14.genericMethod;
      __this_04.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = ppIVar12;
    __this_03.fields._dictionary = pSVar11;
    __this_03.fields._current.fields.key = (Il2CppObject *)pIVar13;
    __this_03.fields._current.fields.value = _Var14.genericMethod;
    __this_03.fields._32_8_ = pSVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff70);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_044f9e9a;
    }
label_044f9de7:
    __this_05 = unaff_RBX;
  } while (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0);
label_044f9df9:
  pSVar8 = System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_String_ToArray);
  return (bool_conflict)pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SocialLinks
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks (const MethodInfo* method);
// 0x44f9b50

System_String_array * Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_string__o *__this_05;
  System_String_array *pSVar5;
  long *plVar6;
  System_String_o *item;
  System_Collections_Generic_List_string__o *unaff_RBX;
  MethodInfo *method_00;
  undefined1 auVar7 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppType **ppIVar9;
  Il2CppRGCTXData *pIVar10;
  _union_231609 _Var11;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar12;
  undefined1 local_50 [16];
  Il2CppRGCTXData *local_40;
  _union_231609 _Stack_38;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_30;
  
  if (g_data_057aecd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aecd5 = '\x01';
  }
  pIVar10 = (Il2CppRGCTXData *)0x0;
  _Var11.genericMethod = (char *)0x0;
  pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  ppIVar9 = (Il2CppType **)0x0;
  pSVar12 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto label_044f9c18;
label_044f9c89:
    __this_05 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(method_00);
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) goto label_044f9df9;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_044f9c89;
label_044f9c18:
    unaff_RBX = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea29 != '\0') goto label_044f9c51;
label_044f9cb7:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea29 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044f9c5d;
label_044f9cd6:
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    else {
      if (g_data_057aea29 == '\0') goto label_044f9cb7;
label_044f9c51:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044f9cd6;
label_044f9c5d:
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    }
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,__this,
                 MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
      pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
      ppIVar9 = (Il2CppType **)local_50._8_8_;
      pIVar10 = local_40;
      _Var11 = _Stack_38;
      pSVar12 = local_30;
      if (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0) {
        __this_01.fields._version = local_50._8_4_;
        __this_01.fields._index = local_50._12_4_;
        __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_
        ;
        __this_01.fields._current.fields.key = (Il2CppObject *)local_40;
        __this_01.fields._current.fields.value = _Stack_38.genericMethod;
        __this_01.fields._32_8_ = local_30;
        bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff88);
        pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
        ppIVar9 = (Il2CppType **)local_50._8_8_;
        pIVar10 = local_40;
        _Var11 = _Stack_38;
        pSVar12 = local_30;
        if ((char)bVar4 != '\0') goto label_044f9e16;
      }
      else {
        while (__this_00.fields._8_8_ = ppIVar9, __this_00.fields._dictionary = pSVar8,
              __this_00.fields._current.fields.key = (Il2CppObject *)pIVar10,
              __this_00.fields._current.fields.value = _Var11.genericMethod, __this_00.fields._32_8_ = pSVar12
              , bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff88),
              (char)bVar4 != '\0') {
          il2cpp_runtime_helper_03343020(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (unaff_RBX->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044f9e11;
          }
          uVar2 = (unaff_RBX->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (unaff_RBX->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = ppIVar9;
      __this_02.fields._dictionary = pSVar8;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar10;
      __this_02.fields._current.fields.value = _Var11.genericMethod;
      __this_02.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
      goto label_044f9de7;
    }
  }
label_044f9e11:
  do {
    il2cpp_runtime_helper_022b2c90();
label_044f9e16:
    il2cpp_runtime_helper_03343020(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_044f9e9a:
      __this_04.fields._8_8_ = ppIVar9;
      __this_04.fields._dictionary = pSVar8;
      __this_04.fields._current.fields.key = (Il2CppObject *)pIVar10;
      __this_04.fields._current.fields.value = _Var11.genericMethod;
      __this_04.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = ppIVar9;
    __this_03.fields._dictionary = pSVar8;
    __this_03.fields._current.fields.key = (Il2CppObject *)pIVar10;
    __this_03.fields._current.fields.value = _Var11.genericMethod;
    __this_03.fields._32_8_ = pSVar12;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_044f9e9a;
    }
label_044f9de7:
    __this_05 = unaff_RBX;
  } while (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0);
label_044f9df9:
  pSVar5 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_String_ToArray);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalSocialLinks
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks (const MethodInfo* method);
// 0x44f9ee0

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_String_array *pSVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  System_String_o *unaff_RBX;
  long *unaff_RBP;
  long lVar12;
  undefined1 auVar13 [12];
  long local_38;
  
  if (g_data_057aecd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecd6 = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    puVar8 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044f9fe9:
    unaff_RBX = (System_String_o *)*puVar8;
    bVar7 = System_String__IsNullOrWhiteSpace(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar9 = SimpleJSONFixed_JSON__Parse(unaff_RBX,(MethodInfo *)0x0);
      if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044fa406:
        il2cpp_runtime_helper_022b2c90();
label_044fa40b:
        il2cpp_runtime_helper_022b2c90();
label_044fa410:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        in_RCX = pSVar9->klass;
        unaff_RBX = (System_String_o *)(*(in_RCX->vtable)._45_get_AsArray.methodPtr)(pSVar9);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') goto label_044fa32c;
        if (unaff_RBX == (System_String_o *)0x0) goto label_044fa40b;
        plVar10 = (long *)(*unaff_RBX->klass[1]._1.image)();
        if (plVar10 == (long *)0x0) goto label_044fa410;
        lVar3 = *plVar10;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
              in_RCX = (SimpleJSONFixed_JSONNode_c *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
              goto label_044fa0e1;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
        }
        in_RCX = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerable_JSONNode,0);
label_044fa0e1:
        unaff_RBP = (long *)(*(in_RCX->_1).image)();
        if (unaff_RBP != (long *)0x0) {
          local_38 = 0;
label_044fa13a:
          lVar3 = *unaff_RBP;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                in_RCX = (SimpleJSONFixed_JSONNode_c *)
                         ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
                goto label_044fa193;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
          }
          in_RCX = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IEnumerator,0);
label_044fa193:
          cVar6 = (*(in_RCX->_1).image)();
          if (cVar6 == '\0') {
            unaff_RBX = (System_String_o *)&g_data_00000005;
            goto label_044fa2a2;
          }
          lVar3 = *unaff_RBP;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
                in_RCX = (SimpleJSONFixed_JSONNode_c *)
                         ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
                goto label_044fa203;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
          }
          in_RCX = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IEnumerator_JSONNode,0);
label_044fa203:
          plVar10 = (long *)(*(in_RCX->_1).image)(unaff_RBP);
          if (plVar10 != (long *)0x0) {
            pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
            bVar7 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
              pSVar5 = MethodInfo_Void_Add;
              if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_044fa3fc;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this->fields)._items;
              in_RCX = (SimpleJSONFixed_JSONNode_c *)0x0;
              if (pSVar4 == (System_String_array *)0x0) goto label_044fa401;
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = pSVar11;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar11);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)(pSVar5->_1).byval_arg.data + 0xc0) + 0x70));
              }
            }
            goto label_044fa13a;
          }
          il2cpp_runtime_helper_022b2c90();
label_044fa3fc:
          il2cpp_runtime_helper_022b2c90();
label_044fa401:
          il2cpp_runtime_helper_022b2c90();
          goto label_044fa406;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      do {
        auVar13 = il2cpp_runtime_helper_022fefe0();
        unaff_RBX = (System_String_o *)0x0;
        if (auVar13._8_4_ != 1) {
          if (unaff_RBP == (long *)0x0) goto label_044fa4e2;
          lVar3 = *unaff_RBP;
          in_RCX = (SimpleJSONFixed_JSONNode_c *)0x0;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto label_044fa4bb;
          in_RCX = (SimpleJSONFixed_JSONNode_c *)((ulong)*(ushort *)(lVar3 + 0x12e) << 4);
          lVar12 = 0;
          goto label_044fa4ac;
        }
        plVar10 = (long *)__cxa_begin_catch();
        local_38 = *plVar10;
        __cxa_end_catch();
label_044fa2a2:
        if (unaff_RBP != (long *)0x0) {
          lVar3 = *unaff_RBP;
          in_RCX = (SimpleJSONFixed_JSONNode_c *)0x0;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
            in_RCX = (SimpleJSONFixed_JSONNode_c *)((ulong)*(ushort *)(lVar3 + 0x12e) << 4);
            lVar12 = 0;
            do {
              if (*(long *)(lVar12 + *(long *)(lVar3 + 0xb0)) == TypeInfo_IDisposable) {
                in_RCX = (SimpleJSONFixed_JSONNode_c *)
                         ((long)*(int *)(lVar12 + *(long *)(lVar3 + 0xb0) + 8) * 0x10);
                puVar8 = (undefined8 *)((long)&(in_RCX->vtable)._0_Equals.methodPtr + lVar3);
                goto label_044fa30d;
              }
              lVar12 = lVar12 + 0x10;
            } while (in_RCX != (SimpleJSONFixed_JSONNode_c *)lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IDisposable,0);
label_044fa30d:
          (*(code *)*puVar8)(unaff_RBP);
        }
      } while (local_38 != 0);
      if (((int)unaff_RBX != 0) && ((int)unaff_RBX != 5)) {
        return __this;
      }
    }
    goto label_044fa32c;
  }
  lVar3 = *(long *)(lVar3 + 0x50);
  if (lVar3 != 0) {
    puVar8 = (undefined8 *)(lVar3 + 0x18);
    goto label_044f9fe9;
  }
  goto label_044fa3c6;
  while (lVar12 = lVar12 + 0x10, in_RCX != (SimpleJSONFixed_JSONNode_c *)lVar12) {
label_044fa4ac:
    if (*(long *)(lVar12 + *(long *)(lVar3 + 0xb0)) == TypeInfo_IDisposable) {
      in_RCX = (SimpleJSONFixed_JSONNode_c *)((long)*(int *)(lVar12 + *(long *)(lVar3 + 0xb0) + 8) * 0x10);
      puVar8 = (undefined8 *)((long)&(in_RCX->vtable)._0_Equals.methodPtr + lVar3);
      goto label_044fa4d9;
    }
  }
label_044fa4bb:
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IDisposable,0);
label_044fa4d9:
  (*(code *)*puVar8)(unaff_RBP,puVar8[1]);
label_044fa4e2:
  if (auVar13._8_4_ != 1) {
    _Unwind_Resume(auVar13._0_8_);
  }
  unaff_RBX = (System_String_o *)__cxa_begin_catch(auVar13._0_8_);
  cVar6 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar6 == '\0') {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = unaff_RBX->klass;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
label_044fa32c:
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    puVar8 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x48);
    if (lVar3 == 0) goto label_044fa3c6;
    puVar8 = (undefined8 *)(lVar3 + 0x18);
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size != 0) {
      return __this;
    }
    unaff_RBX = (System_String_o *)*puVar8;
    bVar7 = System_String__IsNullOrWhiteSpace(unaff_RBX,(MethodInfo *)0x0);
    in_RCX = MethodInfo_Void_Add;
    if ((char)bVar7 != '\0') {
      return __this;
    }
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = unaff_RBX;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,unaff_RBX);
        return __this;
      }
      goto label_044fa3cb;
    }
  }
label_044fa3c6:
  il2cpp_runtime_helper_022b2c90();
label_044fa3cb:
  System_Collections_Generic_List_object___AddWithResize
            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)unaff_RBX,
             *(MethodInfo_362C220 **)(*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SerializeSocialLinks
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks (System_Collections_Generic_IEnumerable_string__o* links, const MethodInfo* method);
// 0x44fa580

System_String_o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks
          (System_Collections_Generic_IEnumerable_string__o *links,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  long in_RAX;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *unaff_R13;
  undefined1 auVar14 [12];
  long local_38;
  
  if (g_data_057aecd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aecd7 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  local_38 = in_RAX;
  if (links != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar2 = links->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar12) == TypeInfo_IEnumerable_string) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
          goto label_044fa671;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(links,TypeInfo_IEnumerable_string,0);
label_044fa671:
    unaff_R13 = (long *)(*pVVar6->methodPtr)(links,pVVar6->method);
    if (unaff_R13 != (long *)0x0) {
      local_38 = 0;
label_044fa6b0:
      do {
        lVar12 = *unaff_R13;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 + 0x138);
              goto label_044fa713;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044fa713:
        cVar4 = (*(code *)*puVar7)(unaff_R13,puVar7[1]);
        if (cVar4 == '\0') goto label_044fa878;
        lVar12 = *unaff_R13;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator_string) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 + 0x138);
              goto label_044fa783;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_string,0);
label_044fa783:
        pSVar8 = (System_String_o *)(*(code *)*puVar7)(unaff_R13);
        bVar5 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
      } while ((char)bVar5 != '\0');
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044fa7f3;
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar9,(__this->klass->vtable)._21_Add.method);
        goto label_044fa6b0;
      }
      il2cpp_runtime_helper_022b2c90();
label_044fa7f3:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar14 = il2cpp_runtime_helper_022b2c90();
    uVar11 = auVar14._0_8_;
    if (auVar14._8_4_ != 1) {
      local_38 = 0;
      if (unaff_R13 == (long *)0x0) goto label_044fa986;
      goto label_044fa927;
    }
    plVar10 = (long *)__cxa_begin_catch();
    local_38 = *plVar10;
    __cxa_end_catch();
label_044fa878:
    if (unaff_R13 != (long *)0x0) {
      lVar12 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
            puVar7 = (undefined8 *)
                     (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
            goto label_044fa8dd;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044fa8dd:
      (*(code *)*puVar7)(unaff_R13,puVar7[1]);
    }
    if (local_38 != 0) goto label_044fa9a3;
  }
  if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar8;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_044fa9a3:
    uVar11 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R13 != (long *)0x0) {
label_044fa927:
      lVar12 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
            puVar7 = (undefined8 *)
                     (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
            goto label_044fa97d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044fa97d:
      (*(code *)*puVar7)(unaff_R13,puVar7[1]);
    }
label_044fa986:
    if (local_38 == 0) {
      _Unwind_Resume(uVar11);
    }
    il2cpp_runtime_helper_022fefe0(local_38);
  } while( true );
}



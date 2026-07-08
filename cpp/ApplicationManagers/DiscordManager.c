// Type: ApplicationManagers.DiscordManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/DiscordManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/DiscordManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.DiscordManager$$Init
// il2cpp: void ApplicationManagers_DiscordManager__Init (const MethodInfo* method);
// 0x419c3f0

void ApplicationManagers_DiscordManager__Init(MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Discord_Discord_o *__this;
  int64_t iVar5;
  System_DateTimeOffset_o SVar6;
  System_DateTimeOffset_o __this_00;
  System_DateTime_Fields local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  
  if (DAT_05704c66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    il2cpp_init_method_metadata(&TypeInfo_Discord);
    il2cpp_init_method_metadata(&MethodInfo_DiscordManager_CreateSingleton_DiscordManager);
    DAT_05704c66 = '\x01';
  }
  local_38._dateData = 0;
  uStack_30 = 0;
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DiscordManager + 0xb8),MethodInfo_DiscordManager_CreateSingleton_DiscordManager);
  **(undefined8 **)(TypeInfo_DiscordManager + 0xb8) = pIVar4;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DiscordManager + 0xb8),pIVar4);
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar5 = *(int64_t *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x10);
  __this = (Discord_Discord_o *)il2cpp_runtime_glue(TypeInfo_Discord);
  Discord_Discord___ctor(__this,iVar5,1,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DiscordManager + 0xb8);
  *(Discord_Discord_o **)(lVar1 + 8) = __this;
  il2cpp_runtime_glue(lVar1 + 8,__this);
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar6 = System_DateTimeOffset__get_Now((MethodInfo *)0x0);
  local_38._dateData = (uint64_t)SVar6.fields._dateTime.fields._dateData;
  local_20 = local_1a;
  local_24 = local_1e;
  uStack_30 = CONCAT26(local_1a,CONCAT42(local_1e,SVar6.fields._offsetMinutes));
  __this_00.fields._8_8_ = 0;
  __this_00.fields._dateTime.fields._dateData =
       (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
  iVar5 = System_DateTimeOffset__ToUnixTimeMilliseconds(__this_00,SVar6.fields._8_8_);
  lVar3 = TypeInfo_DiscordManager;
  plVar2 = *(long **)(TypeInfo_DiscordManager + 0xb8);
  plVar2[4] = iVar5;
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    lVar1 = **(long **)(lVar3 + 0xb8);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x150) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined8 *)(lVar1 + 0x148) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      *(undefined8 *)(lVar1 + 0x120) = 0;
      *(undefined8 *)(lVar1 + 0x128) = 0;
      *(undefined8 *)(lVar1 + 0x110) = 0;
      *(undefined8 *)(lVar1 + 0x118) = 0;
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
      *(undefined8 *)(lVar1 + 0xf0) = 0;
      *(undefined8 *)(lVar1 + 0xf8) = 0;
      *(undefined8 *)(lVar1 + 0xe0) = 0;
      *(undefined8 *)(lVar1 + 0xe8) = 0;
      *(undefined8 *)(lVar1 + 0xd0) = 0;
      *(undefined8 *)(lVar1 + 0xd8) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DiscordManager$$Update
// il2cpp: void ApplicationManagers_DiscordManager__Update (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x419c740

void ApplicationManagers_DiscordManager__Update
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  Discord_Discord_o *__this_00;
  
  if (DAT_05704c67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    DAT_05704c67 = '\x01';
  }
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 != (Discord_Discord_o *)0x0) {
    Discord_Discord__RunCallbacks(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DiscordManager$$LateUpdate
// il2cpp: void ApplicationManagers_DiscordManager__LateUpdate (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x419c860

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_DiscordManager__LateUpdate
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  Discord_Discord_o *__this_00;
  Discord_ActivityManager_o *pDVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Photon_Realtime_Room_o *pPVar10;
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  long lVar13;
  ulong uVar14;
  System_String_o **ppSVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  Discord_Activity_Fields in_stack_fffffffffffffdc8;
  System_String_o *pSStack_198;
  undefined8 uStack_190;
  System_String_o *pSStack_188;
  undefined8 uStack_180;
  Discord_ActivityManager_o *pDStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  System_String_o *pSStack_150;
  System_String_o *pSStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  System_String_o *pSStack_130;
  undefined8 uStack_128;
  System_String_o *pSStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  System_String_o **ppSStack_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  undefined8 auStack_c0 [18];
  
  bVar18 = 0;
  if (DAT_05704c68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"] ");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Creating a room");
    il2cpp_init_method_metadata(&"SinglePlayer");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"0");
    DAT_05704c68 = '\x01';
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  pSStack_120 = (System_String_o *)0x0;
  uStack_138 = 0;
  pSStack_130 = (System_String_o *)0x0;
  pSStack_148 = (System_String_o *)0x0;
  uStack_140 = 0;
  uStack_158 = 0;
  pSStack_150 = (System_String_o *)0x0;
  uStack_168 = 0;
  uStack_160 = 0;
  pSStack_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  pSStack_198 = (System_String_o *)0x0;
  uStack_190 = 0;
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 == (Discord_Discord_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pDStack_170 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x30);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = *(System_String_o **)(lVar13 + 0x18);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = MiscExtensions__StripHex(pSVar9,(MethodInfo *)0x0);
  pSVar9 = "";
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x38);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar5 = System_String__op_Inequality
                    (*(System_String_o **)(lVar13 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar13 = *(long *)(lVar13 + 0x38);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = *(System_String_o **)(lVar13 + 0x18);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = MiscExtensions__StripHex(pSVar8,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,"[",pSVar8,"] ",(MethodInfo *)0x0);
  }
  pSVar8 = "Creating a room";
  pSVar9 = System_String__Concat(pSVar9,pSVar7,(MethodInfo *)0x0);
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = *(System_String_o **)(lVar13 + 0x18);
  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
    uStack_158 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    pSStack_120 = (System_String_o *)0x0;
    uStack_138 = 0;
    pSStack_130 = (System_String_o *)0x0;
    pSStack_148 = (System_String_o *)0x0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    pSStack_150 = pSVar8;
    il2cpp_runtime_glue(&pSStack_150,pSVar8);
    pSStack_148 = pSVar9;
    il2cpp_runtime_glue(&pSStack_148,pSVar9);
    uStack_190 = 0;
    pSStack_188 = (System_String_o *)0x0;
    uStack_180 = 0;
    pSStack_198 = (__this->fields).largeImage;
    il2cpp_runtime_glue(&pSStack_198);
    pSStack_188 = pSVar7;
    il2cpp_runtime_glue(&pSStack_188,pSVar7);
    pSStack_120 = pSStack_188;
    uStack_118 = uStack_180;
    pSStack_130 = pSStack_198;
    uStack_128 = uStack_190;
    il2cpp_runtime_glue(&pSStack_130,0);
    if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
    memcpy(auStack_c0,&uStack_168,0x90);
    pDVar4 = pDStack_170;
    if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
      puVar16 = auStack_c0;
      puVar17 = (undefined8 *)&stack0xfffffffffffffdc8;
      for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
      }
      Discord_ActivityManager__UpdateActivity
                (pDVar4,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                 (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = Photon_Realtime_Room__get_PlayerCount(pPVar10,(MethodInfo *)0x0);
  (__this->fields).playerCount = iVar6;
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  iVar6 = 1;
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar6 = (pPVar10->fields).maxPlayers;
  }
  (__this->fields).maxPlayerCount = iVar6;
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x38);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x50);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  ppSVar15 = &(__this->fields).roomName;
  (__this->fields).roomName = *(System_String_o **)(lVar13 + 0x18);
  il2cpp_runtime_glue(ppSVar15);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppSStack_d8 = ppSVar15;
  pSStack_d0 = pSVar7;
  pSStack_c8 = pSVar9;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar12 = (__this->fields).trackedProperties;
  if (pSVar12 == (System_String_array *)0x0) {
LAB_0419d197:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  uVar14 = 0;
  uVar3 = (uint)pSVar12->max_length;
  if (0 < (int)uVar3) {
    do {
      if (uVar3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar11 = PhotonExtensions__GetCustomProperty
                          (player,pSVar12->m_Items[uVar14],(MethodInfo *)0x0);
      pSVar7 = "0";
      if (pIVar11 != (Il2CppObject *)0x0) {
        pSVar7 = (System_String_o *)
                 (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
      }
      pSVar9 = System_String__Concat(pSVar9,pSVar7,(MethodInfo *)0x0);
      pSVar12 = (__this->fields).trackedProperties;
      if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((long)uVar14 < (long)((pSVar12->max_length << 0x20) + -0x100000000) >> 0x20) {
        pSVar9 = System_String__Concat(pSVar9," / ",(MethodInfo *)0x0);
        pSVar12 = (__this->fields).trackedProperties;
      }
      uVar14 = uVar14 + 1;
      if (pSVar12 == (System_String_array *)0x0) goto LAB_0419d197;
      uVar3 = (uint)pSVar12->max_length;
    } while ((long)uVar14 < (long)(int)uVar3);
  }
  pSVar9 = System_String__Concat(pSStack_c8," ",pSVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = pSStack_d0;
  ppSVar15 = ppSStack_d8;
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    ppSVar15 = (System_String_o **)&"SinglePlayer";
  }
  pSStack_150 = *ppSVar15;
  uStack_158 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  pSStack_120 = (System_String_o *)0x0;
  uStack_138 = 0;
  pSStack_130 = (System_String_o *)0x0;
  pSStack_148 = (System_String_o *)0x0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  il2cpp_runtime_glue(&pSStack_150);
  pSStack_148 = pSVar9;
  il2cpp_runtime_glue(&pSStack_148,pSVar9);
  uStack_190 = 0;
  pSStack_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  pSStack_198 = (__this->fields).largeImage;
  il2cpp_runtime_glue(&pSStack_198);
  pSStack_188 = pSVar7;
  il2cpp_runtime_glue(&pSStack_188,pSVar7);
  pSStack_120 = pSStack_188;
  uStack_118 = uStack_180;
  pSStack_130 = pSStack_198;
  uStack_128 = uStack_190;
  il2cpp_runtime_glue(&pSStack_130,0);
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
  uStack_108._0_4_ = (__this->fields).playerCount;
  uStack_108._4_4_ = (__this->fields).maxPlayerCount;
  memcpy(auStack_c0,&uStack_168,0x90);
  pDVar4 = pDStack_170;
  if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
    puVar16 = auStack_c0;
    puVar17 = (undefined8 *)&stack0xfffffffffffffdc8;
    for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
      puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
    }
    Discord_ActivityManager__UpdateActivity
              (pDVar4,(Discord_Activity_o)in_stack_fffffffffffffdc8,
               (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DiscordManager$$SetRoomActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetRoomActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, int32_t playerCount, int32_t maxPlayers, const MethodInfo* method);
// 0x419d630

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_DiscordManager__SetRoomActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,
               System_String_o *details,System_String_o *profileIcon,int64_t startTime,
               int32_t playerCount,int32_t maxPlayers,MethodInfo *method)

{
  (__this->fields).roomActivity.fields.State = state;
  il2cpp_runtime_glue(&(__this->fields).roomActivity.fields.State);
  (__this->fields).roomActivity.fields.Details = details;
  il2cpp_runtime_glue(&(__this->fields).roomActivity.fields.Details,details);
  (__this->fields).roomActivity.fields.Assets.fields.LargeImage = (__this->fields).largeImage;
  il2cpp_runtime_glue(&(__this->fields).roomActivity.fields.Assets);
  (__this->fields).roomActivity.fields.Assets.fields.SmallImage = profileIcon;
  il2cpp_runtime_glue(&(__this->fields).roomActivity.fields.Assets.fields.SmallImage,profileIcon);
  (__this->fields).roomActivity.fields.Timestamps.fields.Start = startTime;
  (__this->fields).roomActivity.fields.Party.fields.Size.fields.CurrentSize = playerCount;
  *(int32_t *)((long)&(__this->fields).roomActivity.fields.Party.fields.Size.fields + 4) =
       maxPlayers;
  return;
}


// ApplicationManagers.DiscordManager$$SetMenuActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetMenuActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, const MethodInfo* method);
// 0x419d6c0

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_DiscordManager__SetMenuActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,
               System_String_o *details,System_String_o *profileIcon,int64_t startTime,
               MethodInfo *method)

{
  (__this->fields).mainMenuActivity.fields.State = state;
  il2cpp_runtime_glue(&(__this->fields).mainMenuActivity.fields.State);
  (__this->fields).mainMenuActivity.fields.Details = details;
  il2cpp_runtime_glue(&(__this->fields).mainMenuActivity.fields.Details,details);
  (__this->fields).mainMenuActivity.fields.Assets.fields.LargeImage = (__this->fields).largeImage;
  il2cpp_runtime_glue(&(__this->fields).mainMenuActivity.fields.Assets);
  (__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage = profileIcon;
  il2cpp_runtime_glue(&(__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage,profileIcon)
  ;
  (__this->fields).mainMenuActivity.fields.Timestamps.fields.Start = startTime;
  return;
}


// ApplicationManagers.DiscordManager$$UpdateStatus
// il2cpp: void ApplicationManagers_DiscordManager__UpdateStatus (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x419c870

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_DiscordManager__UpdateStatus
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  Discord_Discord_o *__this_00;
  Discord_ActivityManager_o *pDVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Photon_Realtime_Room_o *pPVar10;
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  long lVar13;
  ulong uVar14;
  System_String_o **ppSVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  Discord_Activity_Fields in_stack_fffffffffffffdc8;
  System_String_o *pSStack_198;
  undefined8 uStack_190;
  System_String_o *pSStack_188;
  undefined8 uStack_180;
  Discord_ActivityManager_o *pDStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  System_String_o *pSStack_150;
  System_String_o *pSStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  System_String_o *pSStack_130;
  undefined8 uStack_128;
  System_String_o *pSStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  System_String_o **ppSStack_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  undefined8 auStack_c0 [18];
  
  bVar18 = 0;
  if (DAT_05704c68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"] ");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Creating a room");
    il2cpp_init_method_metadata(&"SinglePlayer");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"0");
    DAT_05704c68 = '\x01';
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  pSStack_120 = (System_String_o *)0x0;
  uStack_138 = 0;
  pSStack_130 = (System_String_o *)0x0;
  pSStack_148 = (System_String_o *)0x0;
  uStack_140 = 0;
  uStack_158 = 0;
  pSStack_150 = (System_String_o *)0x0;
  uStack_168 = 0;
  uStack_160 = 0;
  pSStack_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  pSStack_198 = (System_String_o *)0x0;
  uStack_190 = 0;
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 == (Discord_Discord_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pDStack_170 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x30);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = *(System_String_o **)(lVar13 + 0x18);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = MiscExtensions__StripHex(pSVar9,(MethodInfo *)0x0);
  pSVar9 = "";
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x38);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar5 = System_String__op_Inequality
                    (*(System_String_o **)(lVar13 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar13 = *(long *)(lVar13 + 0x38);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = *(System_String_o **)(lVar13 + 0x18);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = MiscExtensions__StripHex(pSVar8,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,"[",pSVar8,"] ",(MethodInfo *)0x0);
  }
  pSVar8 = "Creating a room";
  pSVar9 = System_String__Concat(pSVar9,pSVar7,(MethodInfo *)0x0);
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = *(System_String_o **)(lVar13 + 0x18);
  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
    uStack_158 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    pSStack_120 = (System_String_o *)0x0;
    uStack_138 = 0;
    pSStack_130 = (System_String_o *)0x0;
    pSStack_148 = (System_String_o *)0x0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    pSStack_150 = pSVar8;
    il2cpp_runtime_glue(&pSStack_150,pSVar8);
    pSStack_148 = pSVar9;
    il2cpp_runtime_glue(&pSStack_148,pSVar9);
    uStack_190 = 0;
    pSStack_188 = (System_String_o *)0x0;
    uStack_180 = 0;
    pSStack_198 = (__this->fields).largeImage;
    il2cpp_runtime_glue(&pSStack_198);
    pSStack_188 = pSVar7;
    il2cpp_runtime_glue(&pSStack_188,pSVar7);
    pSStack_120 = pSStack_188;
    uStack_118 = uStack_180;
    pSStack_130 = pSStack_198;
    uStack_128 = uStack_190;
    il2cpp_runtime_glue(&pSStack_130,0);
    if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
    memcpy(auStack_c0,&uStack_168,0x90);
    pDVar4 = pDStack_170;
    if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
      puVar16 = auStack_c0;
      puVar17 = (undefined8 *)&stack0xfffffffffffffdc8;
      for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
      }
      Discord_ActivityManager__UpdateActivity
                (pDVar4,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                 (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = Photon_Realtime_Room__get_PlayerCount(pPVar10,(MethodInfo *)0x0);
  (__this->fields).playerCount = iVar6;
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  iVar6 = 1;
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar6 = (pPVar10->fields).maxPlayers;
  }
  (__this->fields).maxPlayerCount = iVar6;
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x38);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar13 = *(long *)(lVar13 + 0x50);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  ppSVar15 = &(__this->fields).roomName;
  (__this->fields).roomName = *(System_String_o **)(lVar13 + 0x18);
  il2cpp_runtime_glue(ppSVar15);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppSStack_d8 = ppSVar15;
  pSStack_d0 = pSVar7;
  pSStack_c8 = pSVar9;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar12 = (__this->fields).trackedProperties;
  if (pSVar12 == (System_String_array *)0x0) {
LAB_0419d197:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  uVar14 = 0;
  uVar3 = (uint)pSVar12->max_length;
  if (0 < (int)uVar3) {
    do {
      if (uVar3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar11 = PhotonExtensions__GetCustomProperty
                          (player,pSVar12->m_Items[uVar14],(MethodInfo *)0x0);
      pSVar7 = "0";
      if (pIVar11 != (Il2CppObject *)0x0) {
        pSVar7 = (System_String_o *)
                 (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
      }
      pSVar9 = System_String__Concat(pSVar9,pSVar7,(MethodInfo *)0x0);
      pSVar12 = (__this->fields).trackedProperties;
      if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((long)uVar14 < (long)((pSVar12->max_length << 0x20) + -0x100000000) >> 0x20) {
        pSVar9 = System_String__Concat(pSVar9," / ",(MethodInfo *)0x0);
        pSVar12 = (__this->fields).trackedProperties;
      }
      uVar14 = uVar14 + 1;
      if (pSVar12 == (System_String_array *)0x0) goto LAB_0419d197;
      uVar3 = (uint)pSVar12->max_length;
    } while ((long)uVar14 < (long)(int)uVar3);
  }
  pSVar9 = System_String__Concat(pSStack_c8," ",pSVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = pSStack_d0;
  ppSVar15 = ppSStack_d8;
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    ppSVar15 = (System_String_o **)&"SinglePlayer";
  }
  pSStack_150 = *ppSVar15;
  uStack_158 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  pSStack_120 = (System_String_o *)0x0;
  uStack_138 = 0;
  pSStack_130 = (System_String_o *)0x0;
  pSStack_148 = (System_String_o *)0x0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  il2cpp_runtime_glue(&pSStack_150);
  pSStack_148 = pSVar9;
  il2cpp_runtime_glue(&pSStack_148,pSVar9);
  uStack_190 = 0;
  pSStack_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  pSStack_198 = (__this->fields).largeImage;
  il2cpp_runtime_glue(&pSStack_198);
  pSStack_188 = pSVar7;
  il2cpp_runtime_glue(&pSStack_188,pSVar7);
  pSStack_120 = pSStack_188;
  uStack_118 = uStack_180;
  pSStack_130 = pSStack_198;
  uStack_128 = uStack_190;
  il2cpp_runtime_glue(&pSStack_130,0);
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
  uStack_108._0_4_ = (__this->fields).playerCount;
  uStack_108._4_4_ = (__this->fields).maxPlayerCount;
  memcpy(auStack_c0,&uStack_168,0x90);
  pDVar4 = pDStack_170;
  if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
    puVar16 = auStack_c0;
    puVar17 = (undefined8 *)&stack0xfffffffffffffdc8;
    for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
      puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
    }
    Discord_ActivityManager__UpdateActivity
              (pDVar4,(Discord_Activity_o)in_stack_fffffffffffffdc8,
               (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DiscordManager$$.ctor
// il2cpp: void ApplicationManagers_DiscordManager___ctor (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x419d740

void ApplicationManagers_DiscordManager___ctor
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_05704c69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"aottg2-logo2");
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_05704c69 = '\x01';
  }
  (__this->fields).largeImage = "aottg2-logo2";
  il2cpp_runtime_glue(&(__this->fields).largeImage);
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Kills";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Deaths";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "HighestDamage";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "TotalDamage";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            (__this->fields).trackedProperties = pSVar1;
            il2cpp_runtime_glue(&(__this->fields).trackedProperties);
            UnityEngine_MonoBehaviour___ctor
                      ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DiscordManager$$.cctor
// il2cpp: void ApplicationManagers_DiscordManager___cctor (const MethodInfo* method);
// 0x419d890

void ApplicationManagers_DiscordManager___cctor(MethodInfo *method)

{
  if (DAT_05704c6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    DAT_05704c6a = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x10) = 0x115181d372441070;
  return;
}



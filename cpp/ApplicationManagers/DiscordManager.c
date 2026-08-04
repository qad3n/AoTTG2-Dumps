// Type: ApplicationManagers.DiscordManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DiscordManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// --------------------------------

// ApplicationManagers.DiscordManager$$Init
// il2cpp: void ApplicationManagers_DiscordManager__Init (const MethodInfo* method);
// 0x44b5570

void ApplicationManagers_DiscordManager__Init(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Object_o *obj;
  long lVar2;
  char cVar3;
  Il2CppObject *pIVar4;
  Discord_Discord_o *__this;
  int64_t iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [12];
  System_DateTimeOffset_o SVar10;
  System_DateTimeOffset_o __this_00;
  System_DateTime_Fields local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  
  if (g_data_057aea34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Discord);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DiscordManager_CreateSingleton_DiscordManager);
    g_data_057aea34 = '\x01';
  }
  local_38._dateData = 0;
  uStack_30 = 0;
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DiscordManager + 0xb8),MethodInfo_DiscordManager_CreateSingleton_DiscordManager);
  **(undefined8 **)(TypeInfo_DiscordManager + 0xb8) = pIVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DiscordManager + 0xb8),pIVar4);
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar5 = *(int64_t *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x10);
  __this = (Discord_Discord_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Discord);
  Discord_Discord___ctor(__this,iVar5,1,(MethodInfo *)0x0);
  lVar7 = *(long *)(TypeInfo_DiscordManager + 0xb8);
  *(Discord_Discord_o **)(lVar7 + 8) = __this;
  il2cpp_runtime_helper_022b4080(lVar7 + 8,__this);
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar10 = System_DateTimeOffset__get_Now((MethodInfo *)0x0);
  local_38._dateData = (uint64_t)SVar10.fields._dateTime.fields._dateData;
  local_20 = local_1a;
  local_24 = local_1e;
  uStack_30 = CONCAT26(local_1a,CONCAT42(local_1e,SVar10.fields._offsetMinutes));
  __this_00.fields._8_8_ = 0;
  __this_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
  iVar5 = System_DateTimeOffset__ToUnixTimeMilliseconds(__this_00,SVar10.fields._8_8_);
  lVar2 = TypeInfo_DiscordManager;
  plVar1 = *(long **)(TypeInfo_DiscordManager + 0xb8);
  plVar1[4] = iVar5;
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(undefined8 *)(lVar7 + 200) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined8 *)(lVar7 + 0x98) = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
    *(undefined8 *)(lVar7 + 0x88) = 0;
    *(undefined8 *)(lVar7 + 0x70) = 0;
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined8 *)(lVar7 + 0x60) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    lVar7 = **(long **)(lVar2 + 0xb8);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x150) = 0;
      *(undefined8 *)(lVar7 + 0x158) = 0;
      *(undefined8 *)(lVar7 + 0x140) = 0;
      *(undefined8 *)(lVar7 + 0x148) = 0;
      *(undefined8 *)(lVar7 + 0x130) = 0;
      *(undefined8 *)(lVar7 + 0x138) = 0;
      *(undefined8 *)(lVar7 + 0x120) = 0;
      *(undefined8 *)(lVar7 + 0x128) = 0;
      *(undefined8 *)(lVar7 + 0x110) = 0;
      *(undefined8 *)(lVar7 + 0x118) = 0;
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *(undefined8 *)(lVar7 + 0x108) = 0;
      *(undefined8 *)(lVar7 + 0xf0) = 0;
      *(undefined8 *)(lVar7 + 0xf8) = 0;
      *(undefined8 *)(lVar7 + 0xe0) = 0;
      *(undefined8 *)(lVar7 + 0xe8) = 0;
      *(undefined8 *)(lVar7 + 0xd0) = 0;
      *(undefined8 *)(lVar7 + 0xd8) = 0;
      return;
    }
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    puVar6 = (undefined8 *)__cxa_begin_catch(auVar9._0_8_);
    cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
    if (cVar3 != '\0') {
      __cxa_end_catch();
      lVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar7);
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&"Unable to initialize discord manager.");
      UnityEngine_Debug__Log(pIVar4,(MethodInfo *)0x0);
      lVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar7);
      }
      lVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
      obj = (UnityEngine_Object_o *)**(undefined8 **)(lVar7 + 0xb8);
      lVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar7);
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar6;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar9._0_8_);
}


// ApplicationManagers.DiscordManager$$Update
// il2cpp: void ApplicationManagers_DiscordManager__Update (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x44b58c0

void ApplicationManagers_DiscordManager__Update
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  Discord_Discord_o *__this_00;
  char cVar1;
  undefined8 *puVar2;
  UnityEngine_Object_o *obj;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [12];
  
  if (g_data_057aea35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    g_data_057aea35 = '\x01';
  }
  if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 != (Discord_Discord_o *)0x0) {
    Discord_Discord__RunCallbacks(__this_00,(MethodInfo *)0x0);
    return;
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ != 1) {
    _Unwind_Resume(auVar5._0_8_);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(auVar5._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar1 != '\0') {
    __cxa_end_catch();
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    lVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar3);
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar2;
  __cxa_throw(puVar4,&PTR_PTR_05215060,0);
}


// ApplicationManagers.DiscordManager$$LateUpdate
// il2cpp: void ApplicationManagers_DiscordManager__LateUpdate (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x44b59e0

void ApplicationManagers_DiscordManager__LateUpdate
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  Discord_Discord_o *__this_00;
  Discord_ActivityManager_o *pDVar2;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Photon_Realtime_Room_o *pPVar9;
  Photon_Realtime_Player_o *player;
  undefined8 *puVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Object_o *obj;
  undefined8 *puVar12;
  System_String_array *pSVar13;
  long lVar14;
  ulong uVar15;
  System_String_o **ppSVar16;
  byte bVar17;
  undefined1 auVar18 [12];
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
  
  bVar17 = 0;
  if (g_data_057aea36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"] ");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Creating a room");
    il2cpp_runtime_helper_023445d0(&"SinglePlayer");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057aea36 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 == (Discord_Discord_o *)0x0) {
label_044b6321:
    il2cpp_runtime_helper_022b2c90();
label_044b6326:
    il2cpp_runtime_helper_022b2c90();
label_044b632b:
    il2cpp_runtime_helper_022b2c90();
label_044b6330:
    il2cpp_runtime_helper_022b2c90();
label_044b6335:
    il2cpp_runtime_helper_022b2c90();
label_044b633a:
    il2cpp_runtime_helper_022b2c90();
label_044b633f:
    il2cpp_runtime_helper_022b2c90();
label_044b6344:
    il2cpp_runtime_helper_022b2c90();
label_044b6349:
    il2cpp_runtime_helper_022b2c90();
label_044b634e:
    il2cpp_runtime_helper_022b2c90();
label_044b6353:
    il2cpp_runtime_helper_022b2c90();
label_044b6358:
    il2cpp_runtime_helper_022b2c90();
label_044b635d:
    il2cpp_runtime_helper_022b2c90();
label_044b6362:
    il2cpp_runtime_helper_022b2c90();
label_044b6367:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pDStack_170 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b6326;
    lVar14 = *(long *)(lVar14 + 0x30);
    if (lVar14 == 0) goto label_044b632b;
    pSVar8 = *(System_String_o **)(lVar14 + 0x18);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = MiscExtensions__StripHex(pSVar8,(MethodInfo *)0x0);
    pSVar8 = "";
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b6330;
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) goto label_044b6335;
    bVar4 = System_String__op_Inequality(*(System_String_o **)(lVar14 + 0x18),"",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (lVar14 == 0) goto label_044b6362;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 != 0) {
        pSVar7 = *(System_String_o **)(lVar14 + 0x18);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = MiscExtensions__StripHex(pSVar7,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3af7470(pSVar8,"[",pSVar7,"] ",(MethodInfo *)0x0);
        goto label_044b5c53;
      }
      goto label_044b6367;
    }
label_044b5c53:
    pSVar7 = "Creating a room";
    pSVar8 = System_String__Concat_3ae5ba0(pSVar8,pSVar6,(MethodInfo *)0x0);
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b633a;
    lVar14 = *(long *)(lVar14 + 0x20);
    if (lVar14 == 0) goto label_044b633f;
    pSVar6 = *(System_String_o **)(lVar14 + 0x18);
    if (pSVar6 == (System_String_o *)0x0) goto label_044b6344;
    pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar9 != (Photon_Realtime_Room_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto label_044b6349;
      iVar5 = Photon_Realtime_Room__get_PlayerCount(pPVar9,(MethodInfo *)0x0);
      (__this->fields).playerCount = iVar5;
      if (g_data_057abf5b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_044b5efa;
label_044b5d2a:
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_044b5d2a;
label_044b5efa:
        il2cpp_runtime_helper_02337ed0();
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      iVar5 = 1;
      if (cVar3 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto label_044b6371;
        iVar5 = (pPVar9->fields).maxPlayers;
      }
      (__this->fields).maxPlayerCount = iVar5;
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (lVar14 == 0) goto label_044b634e;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto label_044b6353;
      lVar14 = *(long *)(lVar14 + 0x50);
      if (lVar14 == 0) goto label_044b6358;
      ppSVar16 = &(__this->fields).roomName;
      (__this->fields).roomName = *(System_String_o **)(lVar14 + 0x18);
      il2cpp_runtime_helper_022b4080(ppSVar16);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppSStack_d8 = ppSVar16;
      pSStack_d0 = pSVar6;
      pSStack_c8 = pSVar8;
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pSVar13 = (__this->fields).trackedProperties;
      if (pSVar13 == (System_String_array *)0x0) {
label_044b6317:
        il2cpp_runtime_helper_022b2c90();
label_044b631c:
        il2cpp_runtime_helper_022b2c90();
        goto label_044b6321;
      }
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar15 = 0;
      uVar1 = (uint)pSVar13->max_length;
      if (0 < (int)uVar1) {
        do {
          if (uVar1 <= uVar15) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_044b6317;
          }
          pIVar11 = PhotonExtensions__GetCustomProperty(player,pSVar13->m_Items[uVar15],(MethodInfo *)0x0);
          pSVar6 = "0";
          if (pIVar11 != (Il2CppObject *)0x0) {
            pSVar6 = (System_String_o *)
                     (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
          }
          pSVar8 = System_String__Concat_3ae5ba0(pSVar8,pSVar6,(MethodInfo *)0x0);
          pSVar13 = (__this->fields).trackedProperties;
          if (pSVar13 == (System_String_array *)0x0) goto label_044b631c;
          if ((long)uVar15 < (long)((pSVar13->max_length << 0x20) + -0x100000000) >> 0x20) {
            pSVar8 = System_String__Concat_3ae5ba0(pSVar8," / ",(MethodInfo *)0x0);
            pSVar13 = (__this->fields).trackedProperties;
          }
          uVar15 = uVar15 + 1;
          if (pSVar13 == (System_String_array *)0x0) goto label_044b6317;
          uVar1 = (uint)pSVar13->max_length;
        } while ((long)uVar15 < (long)(int)uVar1);
      }
      pSVar8 = System_String__Concat_3af7150(pSStack_c8," ",pSVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = pSStack_d0;
      ppSVar16 = ppSStack_d8;
      if (g_data_057abf5b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_044b62f4;
label_044b6124:
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_044b6124;
label_044b62f4:
        il2cpp_runtime_helper_02337ed0();
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar3 != '\0') {
        ppSVar16 = (System_String_o **)&"SinglePlayer";
      }
      pSStack_150 = *ppSVar16;
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
      il2cpp_runtime_helper_022b4080(&pSStack_150);
      pSStack_148 = pSVar8;
      il2cpp_runtime_helper_022b4080(&pSStack_148,pSVar8);
      uStack_190 = 0;
      pSStack_188 = (System_String_o *)0x0;
      uStack_180 = 0;
      pSStack_198 = (__this->fields).largeImage;
      il2cpp_runtime_helper_022b4080(&pSStack_198);
      pSStack_188 = pSVar6;
      il2cpp_runtime_helper_022b4080(&pSStack_188,pSVar6);
      pSStack_120 = pSStack_188;
      uStack_118 = uStack_180;
      pSStack_130 = pSStack_198;
      uStack_128 = uStack_190;
      il2cpp_runtime_helper_022b4080(&pSStack_130,0);
      if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
      uStack_108._0_4_ = (__this->fields).playerCount;
      uStack_108._4_4_ = (__this->fields).maxPlayerCount;
      memcpy(auStack_c0,&uStack_168,0x90);
      pDVar2 = pDStack_170;
      if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
        puVar10 = auStack_c0;
        puVar12 = (undefined8 *)&stack0xfffffffffffffdc8;
        for (lVar14 = 0x12; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (ulong)bVar17 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar17 * -2 + 1;
        }
        Discord_ActivityManager__UpdateActivity
                  (pDVar2,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                   (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_044b635d;
    }
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
    pSStack_150 = pSVar7;
    il2cpp_runtime_helper_022b4080(&pSStack_150,pSVar7);
    pSStack_148 = pSVar8;
    il2cpp_runtime_helper_022b4080(&pSStack_148,pSVar8);
    uStack_190 = 0;
    pSStack_188 = (System_String_o *)0x0;
    uStack_180 = 0;
    pSStack_198 = (__this->fields).largeImage;
    il2cpp_runtime_helper_022b4080(&pSStack_198);
    pSStack_188 = pSVar6;
    il2cpp_runtime_helper_022b4080(&pSStack_188,pSVar6);
    pSStack_120 = pSStack_188;
    uStack_118 = uStack_180;
    pSStack_130 = pSStack_198;
    uStack_128 = uStack_190;
    il2cpp_runtime_helper_022b4080(&pSStack_130,0);
    if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
    memcpy(auStack_c0,&uStack_168,0x90);
    pDVar2 = pDStack_170;
    if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
      puVar10 = auStack_c0;
      puVar12 = (undefined8 *)&stack0xfffffffffffffdc8;
      for (lVar14 = 0x12; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar17 * -2 + 1;
        puVar12 = puVar12 + (ulong)bVar17 * -2 + 1;
      }
      Discord_ActivityManager__UpdateActivity
                (pDVar2,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                 (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044b6371:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ != 1) {
    _Unwind_Resume(auVar18._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar18._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar3 == '\0') {
    puVar12 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar12 = *puVar10;
    __cxa_throw(puVar12,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&"Discord activity update Failed");
  UnityEngine_Debug__Log(pIVar11,(MethodInfo *)0x0);
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DiscordManager$$SetRoomActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetRoomActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, int32_t playerCount, int32_t maxPlayers, const MethodInfo* method);
// 0x44b67b0

void ApplicationManagers_DiscordManager__SetRoomActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,System_String_o *details,
               System_String_o *profileIcon,int64_t startTime,int32_t playerCount,int32_t maxPlayers,
               MethodInfo *method)

{
  (__this->fields).roomActivity.fields.State = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields).roomActivity.fields.State);
  (__this->fields).roomActivity.fields.Details = details;
  il2cpp_runtime_helper_022b4080(&(__this->fields).roomActivity.fields.Details,details);
  (__this->fields).roomActivity.fields.Assets.fields.LargeImage = (__this->fields).largeImage;
  il2cpp_runtime_helper_022b4080(&(__this->fields).roomActivity.fields.Assets);
  (__this->fields).roomActivity.fields.Assets.fields.SmallImage = profileIcon;
  il2cpp_runtime_helper_022b4080(&(__this->fields).roomActivity.fields.Assets.fields.SmallImage,profileIcon);
  (__this->fields).roomActivity.fields.Timestamps.fields.Start = startTime;
  (__this->fields).roomActivity.fields.Party.fields.Size.fields.CurrentSize = playerCount;
  *(int32_t *)((long)&(__this->fields).roomActivity.fields.Party.fields.Size.fields + 4) = maxPlayers;
  return;
}


// ApplicationManagers.DiscordManager$$SetMenuActivity
// il2cpp: void ApplicationManagers_DiscordManager__SetMenuActivity (ApplicationManagers_DiscordManager_o* __this, System_String_o* state, System_String_o* details, System_String_o* profileIcon, int64_t startTime, const MethodInfo* method);
// 0x44b6840

void ApplicationManagers_DiscordManager__SetMenuActivity
               (ApplicationManagers_DiscordManager_o *__this,System_String_o *state,System_String_o *details,
               System_String_o *profileIcon,int64_t startTime,MethodInfo *method)

{
  (__this->fields).mainMenuActivity.fields.State = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields).mainMenuActivity.fields.State);
  (__this->fields).mainMenuActivity.fields.Details = details;
  il2cpp_runtime_helper_022b4080(&(__this->fields).mainMenuActivity.fields.Details,details);
  (__this->fields).mainMenuActivity.fields.Assets.fields.LargeImage = (__this->fields).largeImage;
  il2cpp_runtime_helper_022b4080(&(__this->fields).mainMenuActivity.fields.Assets);
  (__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage = profileIcon;
  il2cpp_runtime_helper_022b4080(&(__this->fields).mainMenuActivity.fields.Assets.fields.SmallImage,profileIcon);
  (__this->fields).mainMenuActivity.fields.Timestamps.fields.Start = startTime;
  return;
}


// ApplicationManagers.DiscordManager$$UpdateStatus
// il2cpp: void ApplicationManagers_DiscordManager__UpdateStatus (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x44b59f0

void ApplicationManagers_DiscordManager__UpdateStatus
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  Discord_Discord_o *__this_00;
  Discord_ActivityManager_o *pDVar2;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Photon_Realtime_Room_o *pPVar9;
  Photon_Realtime_Player_o *player;
  undefined8 *puVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Object_o *obj;
  undefined8 *puVar12;
  System_String_array *pSVar13;
  long lVar14;
  ulong uVar15;
  System_String_o **ppSVar16;
  byte bVar17;
  undefined1 auVar18 [12];
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
  
  bVar17 = 0;
  if (g_data_057aea36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"] ");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Creating a room");
    il2cpp_runtime_helper_023445d0(&"SinglePlayer");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057aea36 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Discord_Discord_o **)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 8);
  if (__this_00 == (Discord_Discord_o *)0x0) {
label_044b6321:
    il2cpp_runtime_helper_022b2c90();
label_044b6326:
    il2cpp_runtime_helper_022b2c90();
label_044b632b:
    il2cpp_runtime_helper_022b2c90();
label_044b6330:
    il2cpp_runtime_helper_022b2c90();
label_044b6335:
    il2cpp_runtime_helper_022b2c90();
label_044b633a:
    il2cpp_runtime_helper_022b2c90();
label_044b633f:
    il2cpp_runtime_helper_022b2c90();
label_044b6344:
    il2cpp_runtime_helper_022b2c90();
label_044b6349:
    il2cpp_runtime_helper_022b2c90();
label_044b634e:
    il2cpp_runtime_helper_022b2c90();
label_044b6353:
    il2cpp_runtime_helper_022b2c90();
label_044b6358:
    il2cpp_runtime_helper_022b2c90();
label_044b635d:
    il2cpp_runtime_helper_022b2c90();
label_044b6362:
    il2cpp_runtime_helper_022b2c90();
label_044b6367:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pDStack_170 = Discord_Discord__GetActivityManager(__this_00,(MethodInfo *)0x0);
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b6326;
    lVar14 = *(long *)(lVar14 + 0x30);
    if (lVar14 == 0) goto label_044b632b;
    pSVar8 = *(System_String_o **)(lVar14 + 0x18);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = MiscExtensions__StripHex(pSVar8,(MethodInfo *)0x0);
    pSVar8 = "";
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b6330;
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) goto label_044b6335;
    bVar4 = System_String__op_Inequality(*(System_String_o **)(lVar14 + 0x18),"",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (lVar14 == 0) goto label_044b6362;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 != 0) {
        pSVar7 = *(System_String_o **)(lVar14 + 0x18);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = MiscExtensions__StripHex(pSVar7,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3af7470(pSVar8,"[",pSVar7,"] ",(MethodInfo *)0x0);
        goto label_044b5c53;
      }
      goto label_044b6367;
    }
label_044b5c53:
    pSVar7 = "Creating a room";
    pSVar8 = System_String__Concat_3ae5ba0(pSVar8,pSVar6,(MethodInfo *)0x0);
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar14 == 0) goto label_044b633a;
    lVar14 = *(long *)(lVar14 + 0x20);
    if (lVar14 == 0) goto label_044b633f;
    pSVar6 = *(System_String_o **)(lVar14 + 0x18);
    if (pSVar6 == (System_String_o *)0x0) goto label_044b6344;
    pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar9 != (Photon_Realtime_Room_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto label_044b6349;
      iVar5 = Photon_Realtime_Room__get_PlayerCount(pPVar9,(MethodInfo *)0x0);
      (__this->fields).playerCount = iVar5;
      if (g_data_057abf5b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_044b5efa;
label_044b5d2a:
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_044b5d2a;
label_044b5efa:
        il2cpp_runtime_helper_02337ed0();
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      iVar5 = 1;
      if (cVar3 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto label_044b6371;
        iVar5 = (pPVar9->fields).maxPlayers;
      }
      (__this->fields).maxPlayerCount = iVar5;
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (lVar14 == 0) goto label_044b634e;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto label_044b6353;
      lVar14 = *(long *)(lVar14 + 0x50);
      if (lVar14 == 0) goto label_044b6358;
      ppSVar16 = &(__this->fields).roomName;
      (__this->fields).roomName = *(System_String_o **)(lVar14 + 0x18);
      il2cpp_runtime_helper_022b4080(ppSVar16);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppSStack_d8 = ppSVar16;
      pSStack_d0 = pSVar6;
      pSStack_c8 = pSVar8;
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pSVar13 = (__this->fields).trackedProperties;
      if (pSVar13 == (System_String_array *)0x0) {
label_044b6317:
        il2cpp_runtime_helper_022b2c90();
label_044b631c:
        il2cpp_runtime_helper_022b2c90();
        goto label_044b6321;
      }
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar15 = 0;
      uVar1 = (uint)pSVar13->max_length;
      if (0 < (int)uVar1) {
        do {
          if (uVar1 <= uVar15) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_044b6317;
          }
          pIVar11 = PhotonExtensions__GetCustomProperty(player,pSVar13->m_Items[uVar15],(MethodInfo *)0x0);
          pSVar6 = "0";
          if (pIVar11 != (Il2CppObject *)0x0) {
            pSVar6 = (System_String_o *)
                     (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
          }
          pSVar8 = System_String__Concat_3ae5ba0(pSVar8,pSVar6,(MethodInfo *)0x0);
          pSVar13 = (__this->fields).trackedProperties;
          if (pSVar13 == (System_String_array *)0x0) goto label_044b631c;
          if ((long)uVar15 < (long)((pSVar13->max_length << 0x20) + -0x100000000) >> 0x20) {
            pSVar8 = System_String__Concat_3ae5ba0(pSVar8," / ",(MethodInfo *)0x0);
            pSVar13 = (__this->fields).trackedProperties;
          }
          uVar15 = uVar15 + 1;
          if (pSVar13 == (System_String_array *)0x0) goto label_044b6317;
          uVar1 = (uint)pSVar13->max_length;
        } while ((long)uVar15 < (long)(int)uVar1);
      }
      pSVar8 = System_String__Concat_3af7150(pSStack_c8," ",pSVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = pSStack_d0;
      ppSVar16 = ppSStack_d8;
      if (g_data_057abf5b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_044b62f4;
label_044b6124:
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_044b6124;
label_044b62f4:
        il2cpp_runtime_helper_02337ed0();
        cVar3 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar3 != '\0') {
        ppSVar16 = (System_String_o **)&"SinglePlayer";
      }
      pSStack_150 = *ppSVar16;
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
      il2cpp_runtime_helper_022b4080(&pSStack_150);
      pSStack_148 = pSVar8;
      il2cpp_runtime_helper_022b4080(&pSStack_148,pSVar8);
      uStack_190 = 0;
      pSStack_188 = (System_String_o *)0x0;
      uStack_180 = 0;
      pSStack_198 = (__this->fields).largeImage;
      il2cpp_runtime_helper_022b4080(&pSStack_198);
      pSStack_188 = pSVar6;
      il2cpp_runtime_helper_022b4080(&pSStack_188,pSVar6);
      pSStack_120 = pSStack_188;
      uStack_118 = uStack_180;
      pSStack_130 = pSStack_198;
      uStack_128 = uStack_190;
      il2cpp_runtime_helper_022b4080(&pSStack_130,0);
      if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
      uStack_108._0_4_ = (__this->fields).playerCount;
      uStack_108._4_4_ = (__this->fields).maxPlayerCount;
      memcpy(auStack_c0,&uStack_168,0x90);
      pDVar2 = pDStack_170;
      if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
        puVar10 = auStack_c0;
        puVar12 = (undefined8 *)&stack0xfffffffffffffdc8;
        for (lVar14 = 0x12; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (ulong)bVar17 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar17 * -2 + 1;
        }
        Discord_ActivityManager__UpdateActivity
                  (pDVar2,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                   (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_044b635d;
    }
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
    pSStack_150 = pSVar7;
    il2cpp_runtime_helper_022b4080(&pSStack_150,pSVar7);
    pSStack_148 = pSVar8;
    il2cpp_runtime_helper_022b4080(&pSStack_148,pSVar8);
    uStack_190 = 0;
    pSStack_188 = (System_String_o *)0x0;
    uStack_180 = 0;
    pSStack_198 = (__this->fields).largeImage;
    il2cpp_runtime_helper_022b4080(&pSStack_198);
    pSStack_188 = pSVar6;
    il2cpp_runtime_helper_022b4080(&pSStack_188,pSVar6);
    pSStack_120 = pSStack_188;
    uStack_118 = uStack_180;
    pSStack_130 = pSStack_198;
    uStack_128 = uStack_190;
    il2cpp_runtime_helper_022b4080(&pSStack_130,0);
    if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_140 = *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x20);
    memcpy(auStack_c0,&uStack_168,0x90);
    pDVar2 = pDStack_170;
    if (pDStack_170 != (Discord_ActivityManager_o *)0x0) {
      puVar10 = auStack_c0;
      puVar12 = (undefined8 *)&stack0xfffffffffffffdc8;
      for (lVar14 = 0x12; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar17 * -2 + 1;
        puVar12 = puVar12 + (ulong)bVar17 * -2 + 1;
      }
      Discord_ActivityManager__UpdateActivity
                (pDVar2,(Discord_Activity_o)in_stack_fffffffffffffdc8,
                 (Discord_ActivityManager_UpdateActivityHandler_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044b6371:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ != 1) {
    _Unwind_Resume(auVar18._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar18._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar3 == '\0') {
    puVar12 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar12 = *puVar10;
    __cxa_throw(puVar12,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&"Discord activity update Failed");
  UnityEngine_Debug__Log(pIVar11,(MethodInfo *)0x0);
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DiscordManager$$.ctor
// il2cpp: void ApplicationManagers_DiscordManager___ctor (ApplicationManagers_DiscordManager_o* __this, const MethodInfo* method);
// 0x44b68c0

void ApplicationManagers_DiscordManager___ctor
               (ApplicationManagers_DiscordManager_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (g_data_057aea37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"aottg2-logo2");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057aea37 = '\x01';
  }
  (__this->fields).largeImage = "aottg2-logo2";
  il2cpp_runtime_helper_022b4080(&(__this->fields).largeImage);
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Kills";
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Deaths";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "HighestDamage";
          il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "TotalDamage";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 3);
            (__this->fields).trackedProperties = pSVar1;
            il2cpp_runtime_helper_022b4080(&(__this->fields).trackedProperties);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    g_data_057aea38 = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x10) = 0x115181d372441070;
  return;
}


// ApplicationManagers.DiscordManager$$.cctor
// il2cpp: void ApplicationManagers_DiscordManager___cctor (const MethodInfo* method);
// 0x44b6a10

void ApplicationManagers_DiscordManager___cctor(MethodInfo *method)

{
  if (g_data_057aea38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    g_data_057aea38 = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_DiscordManager + 0xb8) + 0x10) = 0x115181d372441070;
  return;
}



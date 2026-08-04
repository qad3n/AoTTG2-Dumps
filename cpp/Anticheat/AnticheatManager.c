// Type: Anticheat.AnticheatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/AnticheatManager.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.AnticheatManager$$Init
// il2cpp: void Anticheat_AnticheatManager__Init (const MethodInfo* method);
// 0x44d00f0

void Anticheat_AnticheatManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnLoadScene_o *value;
  
  if (g_data_057aeb20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnticheatManager_CreateSingleton_AnticheatManager);
    g_data_057aeb20 = '\x01';
  }
  if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AnticheatManager + 0xb8),MethodInfo_AnticheatManager_CreateSingleton_AnticheatManager);
  **(undefined8 **)(TypeInfo_AnticheatManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AnticheatManager + 0xb8));
  value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$Reset
// il2cpp: void Anticheat_AnticheatManager__Reset (const MethodInfo* method);
// 0x44d01c0

void Anticheat_AnticheatManager__Reset(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Anticheat_BallotBox_o *__this;
  System_Int32_array *__this_00;
  System_Collections_Generic_HashSet_Slot_T__array *__this_01;
  System_TimeSpan_o SVar3;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  if (g_data_057aeb21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BallotBox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aeb21 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_02 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
    method_00 = MethodInfo_Void_Clear;
  }
  else {
    __this_02 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
    method_00 = MethodInfo_Void_Clear;
  }
  MethodInfo_Void_Clear = method_00;
  if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear(__this_02,(MethodInfo_33E0DA0 *)method_00);
    __this = (Anticheat_BallotBox_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BallotBox);
    Anticheat_BallotBox___ctor(__this,method_00);
    lVar2 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
    *(Anticheat_BallotBox_o **)(lVar2 + 0x10) = __this;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_Anticheat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Player_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Player_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb2e = '\x01';
  }
  __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Player_HashSet_Ballot);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_Anticheat);
  (__this_02->fields)._buckets = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_02->fields,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_Slot_T__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Player_DateTime);
  System_Collections_Generic_Dictionary_object__DateTime____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateTime);
  (__this_02->fields)._slots = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._slots);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar3 = System_TimeSpan__FromMinutes(5.0,(MethodInfo *)0x0);
  *(System_TimeSpan_Fields *)&(__this_02->fields)._count = SVar3.fields._ticks;
  SVar3 = System_TimeSpan__FromMinutes(1.0,(MethodInfo *)0x0);
  *(System_TimeSpan_Fields *)&(__this_02->fields)._freeList = SVar3.fields._ticks;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$OnLoadScene
// il2cpp: void Anticheat_AnticheatManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44d03c0

void Anticheat_AnticheatManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  void *pvVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  System_Int32_array *player;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  int32_t iVar13;
  System_Collections_Generic_Dictionary_int__object__o **__this_01;
  System_Collections_Generic_Dictionary_int__object__o *pSVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  Photon_Realtime_Room_o *__this_02;
  System_Int32_array *pSVar17;
  System_DateTime_o SVar18;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar19;
  System_Int32_array *in_RCX;
  MethodInfo *pMVar20;
  System_Collections_Generic_Dictionary_int__object__o *a;
  MethodInfo *target;
  System_Int32_array *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_int__object__o *unaff_RBP;
  System_Collections_Generic_HashSet_object__o *__this_03;
  MethodInfo *pMVar21;
  MethodInfo *pMVar22;
  System_Collections_Generic_Dictionary_int__object__o *pSVar23;
  System_Collections_Generic_Dictionary_int__object__o *pSVar24;
  MethodInfo *in_R8;
  int32_t iVar25;
  System_Collections_Generic_Dictionary_int__object__o **ppSVar26;
  int iVar27;
  System_Int32_array *key;
  undefined1 auVar28 [16];
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  System_Int32_array *pSStack_150;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_148;
  int32_t iStack_13c;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_138;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_130;
  System_Int32_array *pSStack_128;
  System_Int32_array *pSStack_120;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_118;
  System_Collections_Generic_Dictionary_int__object__o **ppSStack_110;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_108;
  MethodInfo *pMStack_100;
  MethodInfo *pMStack_f8;
  System_Collections_Generic_HashSet_object__o *pSStack_f0;
  System_ValueTuple_int__int__Fields SStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  Anticheat_BallotBox_Result_o AStack_c8;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_a8;
  MethodInfo *pMStack_a0;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_98;
  long *plStack_90;
  System_Collections_Generic_HashSet_object__o *pSStack_88;
  undefined4 uStack_74;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_70;
  MethodInfo *pMStack_68;
  System_Collections_Generic_Dictionary_int__object__o **ppSStack_60;
  ulong uStack_58;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_50;
  undefined8 uStack_48;
  MethodInfo *pMStack_40;
  System_Collections_Generic_Dictionary_int__object__o **ppSStack_38;
  
  if (g_data_057aeb22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aeb22 = '\x01';
    if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) goto label_044d042f;
label_044d03dd:
    pSVar23 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
  }
  else {
    if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) != 0) goto label_044d03dd;
label_044d042f:
    il2cpp_runtime_helper_02337ed0();
    pSVar23 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
  }
  if (pSVar23 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear(pSVar23,MethodInfo_Void_Clear);
    return;
  }
  __this_01 = &TypeInfo_AnticheatManager;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  ppSVar26 = auVar28._8_8_;
  pMStack_40 = auVar28._0_8_;
  ppSStack_38 = &TypeInfo_AnticheatManager;
  pMVar22 = method;
  if (g_data_057aeb23 == '\0') {
    uStack_48 = 0x44d061b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    uStack_48 = 0x44d0627;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_48 = 0x44d0633;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_48 = 0x44d063f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_48 = 0x44d064b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_48 = 0x44d0657;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
    uStack_48 = 0x44d0663;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseEventFilter_get_Item);
    uStack_48 = 0x44d066f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
    uStack_48 = 0x44d067b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_PhotonEventType_BaseEventFilter);
    uStack_48 = 0x44d0687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InstantiateEventFilter);
    g_data_057aeb23 = '\x01';
    iVar27 = *(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4);
  }
  else {
    iVar27 = *(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4);
  }
  if (iVar27 == 0) {
    uStack_48 = 0x44d06aa;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = TypeInfo_AnticheatManager;
  if (pSVar23 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pSVar14 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
    pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (pSVar14 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      uVar1 = *(uint *)&(pSVar23->fields)._entries;
      pMVar21 = (MethodInfo *)(ulong)uVar1;
      uStack_48 = 0x44d04b8;
      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar14,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 == '\0') {
        pMStack_40 = (MethodInfo *)ppSVar26;
        if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
          uStack_48 = 0x44d04d1;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
        uVar1 = *(uint *)&(pSVar23->fields)._entries;
        pMVar21 = (MethodInfo *)(ulong)uVar1;
        uStack_48 = 0x44d04f2;
        __this_01 = (System_Collections_Generic_Dictionary_int__object__o **)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_PhotonEventType_BaseEventFilter);
        uStack_48 = 0x44d0507;
        pMVar22 = MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve;
        pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)__this_01;
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (MethodInfo_30D3800 *)MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
        ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)pMVar21;
        if (unaff_RBP == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d06b6;
        uStack_48 = 0x44d0528;
        in_RCX = MethodInfo_Void_Add;
        System_Collections_Generic_Dictionary_int__object___Add
                  (unaff_RBP,uVar1,(Il2CppObject *)__this_01,(MethodInfo_3086D40 *)MethodInfo_Void_Add);
        ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)pMStack_40;
      }
      pMVar22 = pMVar21;
      if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
        uStack_48 = 0x44d053d;
        il2cpp_runtime_helper_02337ed0();
        pMVar22 = pMVar21;
      }
      pSVar24 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
      if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar1 = *(uint *)&(pSVar23->fields)._entries;
        pMVar22 = (MethodInfo *)(ulong)uVar1;
        uStack_48 = 0x44d0567;
        pSVar14 = (System_Collections_Generic_Dictionary_int__object__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item(pSVar24,uVar1,MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
        if (pSVar14 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar27 = (int)method;
          uStack_48 = 0x44d0588;
          bVar10 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar27,
                              MethodInfo_Boolean_ContainsKey);
          if ((iVar27 == 0) && ((char)bVar10 == '\0')) {
            uStack_48 = 0x44d05a0;
            __this_01 = (System_Collections_Generic_Dictionary_int__object__o **)
                        il2cpp_runtime_helper_023052d0(TypeInfo_InstantiateEventFilter);
            uStack_48 = 0x44d05b2;
            Anticheat_InstantiateEventFilter___ctor
                      ((Anticheat_InstantiateEventFilter_o *)__this_01,(Photon_Realtime_Player_o *)pSVar23,0,
                       (MethodInfo *)0x0);
            uStack_48 = 0x44d05c9;
            in_RCX = MethodInfo_Void_Add;
            System_Collections_Generic_Dictionary_Int32Enum__object___Add
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,0,
                       (Il2CppObject *)__this_01,(MethodInfo_30D4480 *)MethodInfo_Void_Add);
          }
          pMVar22 = (MethodInfo *)((ulong)method & 0xffffffff);
          uStack_48 = 0x44d05de;
          pSVar24 = pSVar14;
          pIVar15 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar27,
                               MethodInfo_BaseEventFilter_get_Item);
          unaff_RBP = pSVar14;
          if (pIVar15 != (Il2CppObject *)0x0) {
            pIVar2 = pIVar15->klass;
            vtableDispatch = pIVar2->vtable[6].methodPtr;
            (*vtableDispatch)(pIVar15,ppSVar26,pIVar2->vtable[6].method,pIVar2,vtableDispatch);
            return;
          }
        }
      }
    }
  }
label_044d06b6:
  uStack_48 = 0x44d06bb;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb24 == '\0') {
    pSStack_50 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d06d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)&MethodInfo_String_get_Value;
    pSStack_50 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d06e2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb24 = '\x01';
  }
  if ((**(long **)(TypeInfo_SettingsManager + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar3 != 0)) {
    System_String__op_Inequality
              (*(System_String_o **)(lVar3 + 0x18),(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  pSStack_50 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d0734;
  il2cpp_runtime_helper_022b2c90();
  ppSStack_60 = &TypeInfo_AnticheatManager;
  __this_03 = (System_Collections_Generic_HashSet_object__o *)((ulong)pMVar22 & 0xffffffff);
  pSStack_70 = (System_Collections_Generic_Dictionary_int__object__o *)__this_01;
  pMStack_68 = (MethodInfo *)ppSVar26;
  uStack_58 = (ulong)method & 0xffffffff;
  pSStack_50 = unaff_RBP;
  if (g_data_057aeb25 == '\0') {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d076d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0779;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0791;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d079d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07cd;
    il2cpp_runtime_helper_023445d0(&"Attempting to ban myself for: ");
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07d9;
    il2cpp_runtime_helper_023445d0(&", please report this to the devs.");
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07e5;
    il2cpp_runtime_helper_023445d0(&" was autobanned. Reason:");
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d07f1;
    il2cpp_runtime_helper_023445d0(&"Player ");
    g_data_057aeb25 = '\x01';
  }
  uStack_74 = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0860;
    il2cpp_runtime_helper_02337ed0();
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0867;
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar9 = (char)bVar10;
  }
  else {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d081a;
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar9 = (char)bVar10;
  }
  if (cVar9 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0875;
    il2cpp_runtime_helper_02337ed0();
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d087c;
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar9 = (char)bVar10;
  }
  else {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0835;
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar9 = (char)bVar10;
  }
  if (cVar9 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0887;
      il2cpp_runtime_helper_02337ed0();
      pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d088e;
      pSVar14 = (System_Collections_Generic_Dictionary_int__object__o *)
                Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0850;
      pSVar14 = (System_Collections_Generic_Dictionary_int__object__o *)
                Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pSVar14 == pSVar24) {
      pMVar22 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d08b5;
      bVar10 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)pMVar22,(MethodInfo *)0x0)
      ;
      if ((char)bVar10 != '\0') {
        pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d08d7;
        pSVar16 = System_String__Concat_3af7150
                            ("Attempting to ban myself for: ",(System_String_o *)a,", please report this to the devs.",(MethodInfo *)0x0);
        goto label_044d0a64;
      }
    }
  }
  if ((char)__this_03 == '\0') goto label_044d09df;
  ppSVar26 = &TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
    pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d08fe;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = TypeInfo_InGameManager;
  if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             (TypeInfo_InGameManager[2].fields._entries)->max_length;
    pSVar14 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      uVar1 = *(uint *)&(pSVar24->fields)._entries;
      pMVar22 = (MethodInfo *)(ulong)uVar1;
      pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0931;
      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey(__this,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 == '\0') {
label_044d09df:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d09f0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d09fa;
        Photon_Pun_PhotonNetwork__DestroyPlayerObjects((Photon_Realtime_Player_o *)pSVar24,(MethodInfo *)0x0);
        pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a04;
        Photon_Pun_PhotonNetwork__CloseConnection((Photon_Realtime_Player_o *)pSVar24,(MethodInfo *)0x0);
        pMVar22 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a26;
        pSVar14 = a;
        bVar10 = System_String__op_Inequality
                           ((System_String_o *)a,(System_String_o *)pMVar22,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uStack_74 = *(undefined4 *)&(pSVar24->fields)._entries;
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a42;
          pSVar16 = System_Int32__ToString((int32_t)&uStack_74,(MethodInfo *)0x0);
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a64;
          pSVar16 = System_String__Concat_3af7470
                              ("Player ",pSVar16," was autobanned. Reason:",(System_String_o *)a,(MethodInfo *)0x0);
label_044d0a64:
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a7f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0a8e;
          ApplicationManagers_DebugConsole__Log(pSVar16,1,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0952;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (System_Collections_Generic_HashSet_object__o *)
                    (TypeInfo_AnticheatManager[2].fields._entries)->max_length;
        if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d0973;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (TypeInfo_InGameManager[2].fields._entries)->max_length;
        if (pSVar14 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uVar1 = *(uint *)&(pSVar24->fields)._entries;
          pMVar22 = (MethodInfo *)(ulong)uVar1;
          pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d099d;
          pIVar15 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar14,uVar1,MethodInfo_PlayerInfo_get_Item);
          if ((((pIVar15 != (Il2CppObject *)0x0) && (pIVar15[2].klass != (Il2CppClass *)0x0)) &&
              (pvVar4 = ((pIVar15[2].klass)->_1).typeMetadataHandle, pvVar4 != (void *)0x0)) &&
             (__this_03 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            pSStack_88 = (System_Collections_Generic_HashSet_object__o *)0x44d09df;
            System_Collections_Generic_HashSet_object___Add
                      (__this_03,*(Il2CppObject **)((long)pvVar4 + 0x18),MethodInfo_Boolean_Add);
            goto label_044d09df;
          }
        }
      }
    }
  }
  pSStack_88 = (System_Collections_Generic_HashSet_object__o *)Anticheat_AnticheatManager__TryVoteKickPlayer;
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_PhotonNetwork;
  pSStack_a8 = pSVar24;
  pMStack_a0 = (MethodInfo *)ppSVar26;
  pSStack_98 = a;
  pSStack_88 = __this_03;
  if (g_data_057aeb26 == '\0') {
    pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0aca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0ad6;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb26 = '\x01';
  }
  uStack_d8 = 0;
  uStack_d4 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  SStack_e8.Item1 = 0;
  SStack_e8.Item2 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
    pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0b02;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)(TypeInfo_AnticheatManager[2].fields._entries)->bounds;
  if (pMVar21 != (MethodInfo *)0x0) {
    pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0b26;
    pMVar20 = target;
    Anticheat_BallotBox__TryCastBallot
              (&AStack_c8,(Anticheat_BallotBox_o *)pMVar21,(Photon_Realtime_Player_o *)pMVar22,
               (Photon_Realtime_Player_o *)target,in_R8);
    SStack_e8 = AStack_c8.fields.progress.fields;
    uStack_e0 = AStack_c8.fields._12_4_;
    uStack_dc = AStack_c8.fields.target._0_4_;
    uStack_d8 = AStack_c8.fields.target._4_4_;
    uStack_d4 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                CONCAT44(AStack_c8.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)AStack_c8.fields.cooldown.fields._ticks);
    if (AStack_c8.fields.type == 0) {
      if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
        pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0b53;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0b67;
      Anticheat_AnticheatManager__KickPlayer((Photon_Realtime_Player_o *)target,0,"",pMVar20);
    }
    *(int32_t *)&pSVar14->klass = AStack_c8.fields.type;
    *(System_ValueTuple_int__int__Fields *)((long)&pSVar14->klass + 4) = SStack_e8;
    *(ulong *)((long)&pSVar14->monitor + 4) = CONCAT44(uStack_dc,uStack_e0);
    (pSVar14->fields)._buckets = (System_Int32_array *)CONCAT44(uStack_d8,uStack_dc);
    (pSVar14->fields)._entries = uStack_d4;
    return;
  }
  pSStack_f0 = (System_Collections_Generic_HashSet_object__o *)0x44d0b8f;
  pSVar24 = TypeInfo_AnticheatManager;
  il2cpp_runtime_helper_022b2c90();
  ppSStack_110 = &TypeInfo_AnticheatManager;
  pMVar20 = pMVar21;
  pSStack_120 = extraout_RDX;
  pSStack_118 = pSVar14;
  pSStack_108 = pSVar23;
  pMStack_100 = target;
  pMStack_f8 = pMVar22;
  pSStack_f0 = __this_03;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  pSStack_130 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots((Anticheat_BallotBox_o *)pMVar21,pMVar20);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_02 == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  iVar25 = 0;
  pSStack_138 = pSVar24;
  iVar11 = Photon_Realtime_Room__get_PlayerCount(__this_02,(MethodInfo *)0x0);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           ((Anticheat_BallotBox_Fields *)&pMVar21->invoker_method)->BallotsByTargetPlayer;
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  pSStack_128 = in_RCX;
  bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     (pSVar5,&in_RCX->obj,(Il2CppObject **)&pSStack_130,MethodInfo_Boolean_TryGetValue);
  if (pSStack_130 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    iVar25 = (pSStack_130->fields)._count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar27 = iVar11 / 2 + 1;
  bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    uStack_168 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&uStack_168,iVar25,iVar27,MethodInfo_ValueTuple_2_Int32_Int32);
    uStack_160 = 4;
    uStack_15c = (undefined4)uStack_168;
    uStack_158 = (undefined4)((ulong)uStack_168 >> 0x20);
    pSStack_150 = pSStack_128;
  }
  else {
    iStack_13c = iVar27;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = (System_Int32_array *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = pSStack_120;
    key = pSStack_128;
    if ((pSStack_128 == pSStack_120) || (pSVar17 == pSStack_128)) {
      uStack_168 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_168,iVar25,iStack_13c,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_160 = 5;
    }
    else {
      bVar12 = Anticheat_BallotBox__HasCooldown
                         ((Anticheat_BallotBox_o *)pMVar21,(Photon_Realtime_Player_o *)pSStack_120,method_00);
      if ((char)bVar12 != '\0') {
        uStack_168 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_168,iVar25,iStack_13c,MethodInfo_ValueTuple_2_Int32_Int32);
        pSVar6 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 (((System_TimeSpan_o *)&pMVar21->return_type)->fields)._ticks;
        uStack_154 = 0;
        pSStack_148 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        uStack_160 = 3;
        uStack_15c = (undefined4)uStack_168;
        uStack_158 = (undefined4)((ulong)uStack_168 >> 0x20);
        pSStack_150 = (System_Int32_array *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_150,0);
        pSStack_148 = pSVar6;
        goto label_044d0ec7;
      }
      iVar13 = Anticheat_BallotBox__CountBallotsCast
                         ((Anticheat_BallotBox_o *)pMVar21,(Photon_Realtime_Player_o *)player,method_01);
      pSVar19 = pSStack_130;
      if (0 < iVar13) {
        uStack_168 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_168,iVar25,iStack_13c,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_160 = 2;
        uStack_15c = (undefined4)uStack_168;
        uStack_158 = (undefined4)((ulong)uStack_168 >> 0x20);
        pSStack_150 = (System_Int32_array *)0x0;
        goto label_044d0eb9;
      }
      uStack_160 = SUB84(player,0);
      uVar7 = uStack_160;
      uStack_15c = (undefined4)((ulong)player >> 0x20);
      uVar8 = uStack_15c;
      if ((char)bVar10 == '\0') {
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&pMVar21->invoker_method)->BallotsByTargetPlayer;
        pSVar19 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor(pSVar19,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        uStack_160 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_160 = uVar7;
        uStack_15c = uVar8;
        il2cpp_runtime_helper_022b4080(&uStack_160,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SVar18 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar19 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_15c, item_00.fields.Voter._0_4_ = uStack_160,
           item_00.fields.Timestamp.fields._dateData = SVar18.fields._dateData,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add(pSVar19,item_00,MethodInfo_Boolean_Add),
           key = pSStack_128, pSStack_130 = pSVar19,
           pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar5,&pSStack_128->obj,(Il2CppObject *)pSVar19,MethodInfo_Void_Add);
      }
      else {
        uStack_160 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_160 = uVar7;
        uStack_15c = uVar8;
        il2cpp_runtime_helper_022b4080(&uStack_160,player);
        key = pSStack_128;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SVar18 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar19 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_15c;
        item.fields.Voter._0_4_ = uStack_160;
        item.fields.Timestamp.fields._dateData = SVar18.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add(pSVar19,item,MethodInfo_Boolean_Add);
      }
      __this_00 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)pMVar21->name;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar18 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,&player->obj,SVar18,
                     MethodInfo_Boolean_TryAdd), pSVar23 = pSStack_138,
         pSStack_130 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0)) goto label_044d11b9;
      iVar25 = (pSStack_130->fields)._count;
      if (iVar11 / 2 < iVar25) {
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&pMVar21->invoker_method)->BallotsByTargetPlayer;
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove(pSVar5,&key->obj,MethodInfo_Boolean_Remove);
          iVar25 = iStack_13c;
          if (g_data_057aeb31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
            g_data_057aeb31 = '\x01';
          }
          uStack_168 = 0;
          System_ValueTuple_int__int____ctor
                    ((System_ValueTuple_int__int__o)&uStack_168,iVar25,iVar25,MethodInfo_ValueTuple_2_Int32_Int32);
          uStack_154 = 0;
          pSStack_148 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          uStack_160 = 0;
          uStack_15c = (undefined4)uStack_168;
          uStack_158 = (undefined4)((ulong)uStack_168 >> 0x20);
          pSStack_150 = key;
          il2cpp_runtime_helper_022b4080(&pSStack_150,key);
          (pSVar23->fields)._buckets = pSStack_150;
          (pSVar23->fields)._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          pSVar23->klass =
               (System_Collections_Generic_Dictionary_int__object__c *)CONCAT44(uStack_15c,uStack_160);
          pSVar23->monitor = (void *)CONCAT44(uStack_154,uStack_158);
          return;
        }
        goto label_044d11b9;
      }
      uStack_168 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_168,iVar25,iStack_13c,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_160 = 1;
    }
    uStack_15c = (undefined4)uStack_168;
    uStack_158 = (undefined4)((ulong)uStack_168 >> 0x20);
    pSStack_150 = key;
  }
label_044d0eb9:
  uStack_154 = 0;
  pSStack_148 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  il2cpp_runtime_helper_022b4080(&pSStack_150,pSStack_150);
  pSStack_148 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
label_044d0ec7:
  pSStack_138->klass = (System_Collections_Generic_Dictionary_int__object__c *)CONCAT44(uStack_15c,uStack_160)
  ;
  pSStack_138->monitor = (void *)CONCAT44(uStack_154,uStack_158);
  (pSStack_138->fields)._buckets = pSStack_150;
  (pSStack_138->fields)._entries = pSStack_148;
  return;
}


// Anticheat.AnticheatManager$$CheckPhotonEvent
// il2cpp: bool Anticheat_AnticheatManager__CheckPhotonEvent (Photon_Realtime_Player_o* sender, int32_t eventType, System_Object_array* data, const MethodInfo* method);
// 0x44d0450

bool_conflict
Anticheat_AnticheatManager__CheckPhotonEvent
          (Photon_Realtime_Player_o *sender,int32_t eventType,System_Object_array *data,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  long lVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  void *pvVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  System_Int32_array *player;
  char cVar10;
  bool_conflict bVar11;
  bool_conflict extraout_EAX;
  int32_t iVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_Object_array *in_RAX;
  System_Collections_Generic_Dictionary_int__object__o *pSVar15;
  Il2CppObject *pIVar16;
  System_String_o *pSVar17;
  Photon_Realtime_Room_o *__this_00;
  System_Int32_array *pSVar18;
  System_DateTime_o SVar19;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar20;
  undefined8 uVar21;
  MethodInfo *pMVar22;
  System_Collections_Generic_Dictionary_int__object__o *a;
  MethodInfo *target;
  System_Int32_array *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_int__object__o *unaff_RBX;
  System_Collections_Generic_Dictionary_int__object__o *unaff_RBP;
  System_Collections_Generic_HashSet_object__o *__this_01;
  undefined4 in_register_00000034;
  System_Object_array *voter;
  MethodInfo *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *pSVar23;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar24;
  MethodInfo *in_R8;
  int32_t iVar25;
  System_Collections_Generic_Dictionary_int__object__o **ppSVar26;
  System_Int32_array *key;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  System_Int32_array *pSStack_148;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_140;
  int32_t iStack_134;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_130;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSStack_128;
  System_Int32_array *pSStack_120;
  System_Int32_array *pSStack_118;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_110;
  System_Collections_Generic_Dictionary_int__object__o **ppSStack_108;
  Photon_Realtime_Player_o *pPStack_100;
  MethodInfo *pMStack_f8;
  System_Object_array *pSStack_f0;
  System_Collections_Generic_HashSet_object__o *pSStack_e8;
  System_ValueTuple_int__int__Fields SStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  Anticheat_BallotBox_Result_o AStack_c0;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_a0;
  System_Object_array *pSStack_98;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_90;
  long *plStack_88;
  System_Collections_Generic_HashSet_object__o *pSStack_80;
  undefined4 uStack_6c;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_68;
  System_Object_array *pSStack_60;
  System_Collections_Generic_Dictionary_int__object__o **ppSStack_58;
  ulong uStack_50;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_48;
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  
  voter = (System_Object_array *)CONCAT44(in_register_00000034,eventType);
  pSStack_38 = in_RAX;
  if (g_data_057aeb23 == '\0') {
    uStack_40 = 0x44d061b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    uStack_40 = 0x44d0627;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40 = 0x44d0633;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40 = 0x44d063f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_40 = 0x44d064b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_40 = 0x44d0657;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
    uStack_40 = 0x44d0663;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseEventFilter_get_Item);
    uStack_40 = 0x44d066f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
    uStack_40 = 0x44d067b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_PhotonEventType_BaseEventFilter);
    uStack_40 = 0x44d0687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InstantiateEventFilter);
    g_data_057aeb23 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4);
  }
  if (iVar1 == 0) {
    uStack_40 = 0x44d06aa;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar23 = TypeInfo_AnticheatManager;
  ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)data;
  if (sender != (Photon_Realtime_Player_o *)0x0) {
    pSVar15 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
    pSVar23 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (pSVar15 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      uVar2 = (sender->fields).actorNumber;
      ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)(ulong)uVar2;
      uStack_40 = 0x44d04b8;
      bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar15,uVar2,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        pSStack_38 = data;
        if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
          uStack_40 = 0x44d04d1;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
        uVar2 = (sender->fields).actorNumber;
        ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)(ulong)uVar2;
        uStack_40 = 0x44d04f2;
        unaff_RBX = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_PhotonEventType_BaseEventFilter);
        uStack_40 = 0x44d0507;
        voter = MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve;
        pSVar23 = unaff_RBX;
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,
                   (MethodInfo_30D3800 *)MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
        if (unaff_RBP == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d06b6;
        uStack_40 = 0x44d0528;
        method = (MethodInfo *)MethodInfo_Void_Add;
        System_Collections_Generic_Dictionary_int__object___Add
                  (unaff_RBP,uVar2,(Il2CppObject *)unaff_RBX,(MethodInfo_3086D40 *)MethodInfo_Void_Add);
        data = pSStack_38;
      }
      voter = (System_Object_array *)ppSVar26;
      if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
        uStack_40 = 0x44d053d;
        il2cpp_runtime_helper_02337ed0();
        voter = (System_Object_array *)ppSVar26;
      }
      pSVar23 = ((TypeInfo_AnticheatManager[2].fields._entries)->obj).monitor;
      ppSVar26 = (System_Collections_Generic_Dictionary_int__object__o **)data;
      if (pSVar23 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar2 = (sender->fields).actorNumber;
        voter = (System_Object_array *)(ulong)uVar2;
        uStack_40 = 0x44d0567;
        pSVar15 = (System_Collections_Generic_Dictionary_int__object__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item(pSVar23,uVar2,MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat_BaseEve);
        if (pSVar15 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uStack_40 = 0x44d0588;
          bVar11 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,eventType,
                              MethodInfo_Boolean_ContainsKey);
          if ((eventType == 0) && ((char)bVar11 == '\0')) {
            uStack_40 = 0x44d05a0;
            unaff_RBX = (System_Collections_Generic_Dictionary_int__object__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_InstantiateEventFilter);
            uStack_40 = 0x44d05b2;
            Anticheat_InstantiateEventFilter___ctor
                      ((Anticheat_InstantiateEventFilter_o *)unaff_RBX,sender,0,(MethodInfo *)0x0);
            uStack_40 = 0x44d05c9;
            method = (MethodInfo *)MethodInfo_Void_Add;
            System_Collections_Generic_Dictionary_Int32Enum__object___Add
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,0,
                       (Il2CppObject *)unaff_RBX,(MethodInfo_30D4480 *)MethodInfo_Void_Add);
          }
          voter = (System_Object_array *)(ulong)(uint)eventType;
          uStack_40 = 0x44d05de;
          pSVar23 = pSVar15;
          pIVar16 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,eventType,
                               MethodInfo_BaseEventFilter_get_Item);
          unaff_RBP = pSVar15;
          if (pIVar16 != (Il2CppObject *)0x0) {
            pIVar3 = pIVar16->klass;
            vtableDispatch = pIVar3->vtable[6].methodPtr;
            bVar11 = (*vtableDispatch)
                               (pIVar16,data,pIVar3->vtable[6].method,pIVar3,vtableDispatch);
            return bVar11;
          }
        }
      }
    }
  }
label_044d06b6:
  uStack_40 = 0x44d06bb;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb24 == '\0') {
    pSStack_48 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d06d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar23 = (System_Collections_Generic_Dictionary_int__object__o *)&MethodInfo_String_get_Value;
    pSStack_48 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d06e2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb24 = '\x01';
  }
  if ((**(long **)(TypeInfo_SettingsManager + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar4 != 0)) {
    bVar11 = System_String__op_Inequality
                       (*(System_String_o **)(lVar4 + 0x18),
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    return bVar11;
  }
  pSStack_48 = (System_Collections_Generic_Dictionary_int__object__o *)0x44d0734;
  il2cpp_runtime_helper_022b2c90();
  ppSStack_58 = &TypeInfo_AnticheatManager;
  __this_01 = (System_Collections_Generic_HashSet_object__o *)((ulong)voter & 0xffffffff);
  pSStack_68 = unaff_RBX;
  pSStack_60 = (System_Object_array *)ppSVar26;
  uStack_50 = (ulong)(uint)eventType;
  pSStack_48 = unaff_RBP;
  if (g_data_057aeb25 == '\0') {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d076d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0779;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0791;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d079d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07cd;
    il2cpp_runtime_helper_023445d0(&"Attempting to ban myself for: ");
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07d9;
    il2cpp_runtime_helper_023445d0(&", please report this to the devs.");
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07e5;
    il2cpp_runtime_helper_023445d0(&" was autobanned. Reason:");
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d07f1;
    il2cpp_runtime_helper_023445d0(&"Player ");
    g_data_057aeb25 = '\x01';
  }
  uStack_6c = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0860;
    il2cpp_runtime_helper_02337ed0();
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0867;
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar10 = (char)bVar11;
  }
  else {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d081a;
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar10 = (char)bVar11;
  }
  if (cVar10 == '\0') {
    return bVar11;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0875;
    il2cpp_runtime_helper_02337ed0();
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d087c;
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar10 = (char)bVar11;
  }
  else {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0835;
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar10 = (char)bVar11;
  }
  if (cVar10 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0887;
      il2cpp_runtime_helper_02337ed0();
      pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d088e;
      pSVar15 = (System_Collections_Generic_Dictionary_int__object__o *)
                Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0850;
      pSVar15 = (System_Collections_Generic_Dictionary_int__object__o *)
                Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pSVar15 == pSVar23) {
      voter = (System_Object_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d08b5;
      bVar11 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)voter,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d08d7;
        pSVar17 = System_String__Concat_3af7150
                            ("Attempting to ban myself for: ",(System_String_o *)a,", please report this to the devs.",(MethodInfo *)0x0);
        goto label_044d0a64;
      }
    }
  }
  if ((char)__this_01 == '\0') goto label_044d09df;
  ppSVar26 = &TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
    pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d08fe;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = TypeInfo_InGameManager;
  if (pSVar23 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             (TypeInfo_InGameManager[2].fields._entries)->max_length;
    pSVar15 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      uVar2 = *(uint *)&(pSVar23->fields)._entries;
      voter = (System_Object_array *)(ulong)uVar2;
      pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0931;
      bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey(__this,uVar2,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
label_044d09df:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d09f0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d09fa;
        Photon_Pun_PhotonNetwork__DestroyPlayerObjects((Photon_Realtime_Player_o *)pSVar23,(MethodInfo *)0x0);
        pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a04;
        Photon_Pun_PhotonNetwork__CloseConnection((Photon_Realtime_Player_o *)pSVar23,(MethodInfo *)0x0);
        voter = (System_Object_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a26;
        pSVar15 = a;
        bVar11 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)voter,(MethodInfo *)0x0)
        ;
        if ((char)bVar11 == '\0') {
          return bVar11;
        }
        if (pSVar23 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uStack_6c = *(undefined4 *)&(pSVar23->fields)._entries;
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a42;
          pSVar17 = System_Int32__ToString((int32_t)&uStack_6c,(MethodInfo *)0x0);
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a64;
          pSVar17 = System_String__Concat_3af7470
                              ("Player ",pSVar17," was autobanned. Reason:",(System_String_o *)a,(MethodInfo *)0x0);
label_044d0a64:
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a7f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0a8e;
          ApplicationManagers_DebugConsole__Log(pSVar17,1,(MethodInfo *)0x0);
          return extraout_EAX;
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0952;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_01 = (System_Collections_Generic_HashSet_object__o *)
                    (TypeInfo_AnticheatManager[2].fields._entries)->max_length;
        if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d0973;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (TypeInfo_InGameManager[2].fields._entries)->max_length;
        if (pSVar15 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uVar2 = *(uint *)&(pSVar23->fields)._entries;
          voter = (System_Object_array *)(ulong)uVar2;
          pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d099d;
          pIVar16 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar15,uVar2,MethodInfo_PlayerInfo_get_Item);
          if ((((pIVar16 != (Il2CppObject *)0x0) && (pIVar16[2].klass != (Il2CppClass *)0x0)) &&
              (pvVar5 = ((pIVar16[2].klass)->_1).typeMetadataHandle, pvVar5 != (void *)0x0)) &&
             (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            pSStack_80 = (System_Collections_Generic_HashSet_object__o *)0x44d09df;
            System_Collections_Generic_HashSet_object___Add
                      (__this_01,*(Il2CppObject **)((long)pvVar5 + 0x18),MethodInfo_Boolean_Add);
            goto label_044d09df;
          }
        }
      }
    }
  }
  pSStack_80 = (System_Collections_Generic_HashSet_object__o *)Anticheat_AnticheatManager__TryVoteKickPlayer;
  il2cpp_runtime_helper_022b2c90();
  plStack_88 = &TypeInfo_PhotonNetwork;
  pSStack_a0 = pSVar23;
  pSStack_98 = (System_Object_array *)ppSVar26;
  pSStack_90 = a;
  pSStack_80 = __this_01;
  if (g_data_057aeb26 == '\0') {
    pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0aca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0ad6;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb26 = '\x01';
  }
  uStack_d0 = 0;
  uStack_cc = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  SStack_e0.Item1 = 0;
  SStack_e0.Item2 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
    pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0b02;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (MethodInfo *)(TypeInfo_AnticheatManager[2].fields._entries)->bounds;
  if (__this_02 != (MethodInfo *)0x0) {
    pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0b26;
    pMVar22 = target;
    Anticheat_BallotBox__TryCastBallot
              (&AStack_c0,(Anticheat_BallotBox_o *)__this_02,(Photon_Realtime_Player_o *)voter,
               (Photon_Realtime_Player_o *)target,in_R8);
    SStack_e0 = AStack_c0.fields.progress.fields;
    uStack_d8 = AStack_c0.fields._12_4_;
    uStack_d4 = AStack_c0.fields.target._0_4_;
    uStack_d0 = AStack_c0.fields.target._4_4_;
    uStack_cc = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                CONCAT44(AStack_c0.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)AStack_c0.fields.cooldown.fields._ticks);
    if (AStack_c0.fields.type == 0) {
      if (*(int *)((long)&TypeInfo_AnticheatManager[2].fields._values + 4) == 0) {
        pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0b53;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0b67;
      Anticheat_AnticheatManager__KickPlayer((Photon_Realtime_Player_o *)target,0,"",pMVar22);
    }
    *(int32_t *)&pSVar15->klass = AStack_c0.fields.type;
    *(System_ValueTuple_int__int__Fields *)((long)&pSVar15->klass + 4) = SStack_e0;
    *(ulong *)((long)&pSVar15->monitor + 4) = CONCAT44(uStack_d4,uStack_d8);
    (pSVar15->fields)._buckets = (System_Int32_array *)CONCAT44(uStack_d0,uStack_d4);
    (pSVar15->fields)._entries = uStack_cc;
    return (bool_conflict)pSVar15;
  }
  pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x44d0b8f;
  pSVar23 = TypeInfo_AnticheatManager;
  il2cpp_runtime_helper_022b2c90();
  ppSStack_108 = &TypeInfo_AnticheatManager;
  pMVar22 = __this_02;
  pSStack_118 = extraout_RDX;
  pSStack_110 = pSVar15;
  pPStack_100 = sender;
  pMStack_f8 = target;
  pSStack_f0 = voter;
  pSStack_e8 = __this_01;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  pSStack_128 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots((Anticheat_BallotBox_o *)__this_02,pMVar22);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  __this_00 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_00 == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    uVar21 = il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)CONCAT71((int7)((ulong)uVar21 >> 8),*(int *)&pSVar24->klass == 0);
  }
  iVar25 = 0;
  pSStack_130 = pSVar23;
  iVar12 = Photon_Realtime_Room__get_PlayerCount(__this_00,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           ((Anticheat_BallotBox_Fields *)&__this_02->invoker_method)->BallotsByTargetPlayer;
  pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  pSStack_120 = (System_Int32_array *)method;
  bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     (pSVar6,(Il2CppObject *)method,(Il2CppObject **)&pSStack_128,MethodInfo_Boolean_TryGetValue);
  if (pSStack_128 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    iVar25 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_128->fields)->_count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = iVar12 / 2 + 1;
  bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    uStack_160 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&uStack_160,iVar25,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
    uStack_158 = 4;
    uStack_154 = (undefined4)uStack_160;
    uStack_150 = (undefined4)((ulong)uStack_160 >> 0x20);
    pSStack_148 = pSStack_120;
label_044d0eb9:
    uStack_14c = 0;
    pSStack_140 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    il2cpp_runtime_helper_022b4080(&pSStack_148,pSStack_148);
    pSStack_140 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  }
  else {
    iStack_134 = iVar1;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Int32_array *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = pSStack_118;
    key = pSStack_120;
    if ((pSStack_120 == pSStack_118) || (pSVar18 == pSStack_120)) {
      uStack_160 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_160,iVar25,iStack_134,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_158 = 5;
label_044d0e44:
      uStack_154 = (undefined4)uStack_160;
      uStack_150 = (undefined4)((ulong)uStack_160 >> 0x20);
      pSStack_148 = key;
      goto label_044d0eb9;
    }
    bVar13 = Anticheat_BallotBox__HasCooldown
                       ((Anticheat_BallotBox_o *)__this_02,(Photon_Realtime_Player_o *)pSStack_118,method_00);
    if ((char)bVar13 == '\0') {
      iVar14 = Anticheat_BallotBox__CountBallotsCast
                         ((Anticheat_BallotBox_o *)__this_02,(Photon_Realtime_Player_o *)player,method_01);
      pSVar20 = pSStack_128;
      if (0 < iVar14) {
        uStack_160 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_160,iVar25,iStack_134,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_158 = 2;
        uStack_154 = (undefined4)uStack_160;
        uStack_150 = (undefined4)((ulong)uStack_160 >> 0x20);
        pSStack_148 = (System_Int32_array *)0x0;
        goto label_044d0eb9;
      }
      uStack_158 = SUB84(player,0);
      uVar8 = uStack_158;
      uStack_154 = (undefined4)((ulong)player >> 0x20);
      uVar9 = uStack_154;
      if ((char)bVar11 == '\0') {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_02->invoker_method)->BallotsByTargetPlayer;
        pSVar20 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar20,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_158 = uVar8;
        uStack_154 = uVar9;
        il2cpp_runtime_helper_022b4080(&uStack_158,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar19 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar20 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_154, item_00.fields.Voter._0_4_ = uStack_158,
           item_00.fields.Timestamp.fields._dateData = SVar19.fields._dateData, pSVar24 = pSVar20,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                     ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar20,item_00,MethodInfo_Boolean_Add),
           key = pSStack_120, pSStack_128 = pSVar20,
           pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar6,&pSStack_120->obj,(Il2CppObject *)pSVar20,MethodInfo_Void_Add);
      }
      else {
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_158 = uVar8;
        uStack_154 = uVar9;
        il2cpp_runtime_helper_022b4080(&uStack_158,player);
        key = pSStack_120;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar19 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar20 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_154;
        item.fields.Voter._0_4_ = uStack_158;
        item.fields.Timestamp.fields._dateData = SVar19.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar20,item,MethodInfo_Boolean_Add);
      }
      pSVar20 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)__this_02->name;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
      SVar19 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((pSVar20 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20,&player->obj,SVar19,
                     MethodInfo_Boolean_TryAdd), pSVar23 = pSStack_130, pSVar24 = pSVar20,
         pSStack_128 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0)) goto label_044d11b9;
      iVar25 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_128->fields)->_count;
      if (iVar12 / 2 < iVar25) {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_02->invoker_method)->BallotsByTargetPlayer;
        pSVar24 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Remove(pSVar6,&key->obj,MethodInfo_Boolean_Remove);
        iVar25 = iStack_134;
        if (g_data_057aeb31 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
          g_data_057aeb31 = '\x01';
        }
        uStack_160 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_160,iVar25,iVar25,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_14c = 0;
        pSStack_140 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        uStack_158 = 0;
        uStack_154 = (undefined4)uStack_160;
        uStack_150 = (undefined4)((ulong)uStack_160 >> 0x20);
        pSStack_148 = key;
        il2cpp_runtime_helper_022b4080(&pSStack_148,key);
        (pSVar23->fields)._buckets = pSStack_148;
        (pSVar23->fields)._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        pSVar23->klass =
             (System_Collections_Generic_Dictionary_int__object__c *)CONCAT44(uStack_154,uStack_158);
        pSVar23->monitor = (void *)CONCAT44(uStack_14c,uStack_150);
        goto label_044d0ee7;
      }
      uStack_160 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_160,iVar25,iStack_134,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_158 = 1;
      goto label_044d0e44;
    }
    uStack_160 = 0;
    System_ValueTuple_int__int____ctor
              ((System_ValueTuple_int__int__o)&uStack_160,iVar25,iStack_134,MethodInfo_ValueTuple_2_Int32_Int32);
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
             (((System_TimeSpan_o *)&__this_02->return_type)->fields)._ticks;
    uStack_14c = 0;
    pSStack_140 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    uStack_158 = 3;
    uStack_154 = (undefined4)uStack_160;
    uStack_150 = (undefined4)((ulong)uStack_160 >> 0x20);
    pSStack_148 = (System_Int32_array *)0x0;
    il2cpp_runtime_helper_022b4080(&pSStack_148,0);
    pSStack_140 = pSVar7;
  }
  pSStack_130->klass = (System_Collections_Generic_Dictionary_int__object__c *)CONCAT44(uStack_154,uStack_158)
  ;
  pSStack_130->monitor = (void *)CONCAT44(uStack_14c,uStack_150);
  (pSStack_130->fields)._buckets = pSStack_148;
  (pSStack_130->fields)._entries = pSStack_140;
  pSVar23 = pSStack_130;
label_044d0ee7:
  return (bool_conflict)pSVar23;
}


// Anticheat.AnticheatManager$$HasModPassword
// il2cpp: bool Anticheat_AnticheatManager__HasModPassword (const MethodInfo* method);
// 0x44d06c0

bool_conflict Anticheat_AnticheatManager__HasModPassword(MethodInfo *method)

{
  int item2;
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  void *pvVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  int64_t iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Photon_Realtime_Player_o *player;
  char cVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  int32_t iVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  MethodInfo *pMVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  Photon_Realtime_Room_o *__this_00;
  Photon_Realtime_Player_o *pPVar15;
  System_DateTime_o SVar16;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar17;
  undefined8 uVar18;
  Photon_Realtime_Player_o *in_RCX;
  MethodInfo *pMVar19;
  System_Collections_Generic_Dictionary_int__object__o *a;
  MethodInfo *target;
  Photon_Realtime_Player_o *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_object__o *__this_01;
  undefined8 *puVar20;
  Photon_Realtime_Player_o *in_RSI;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar21;
  MethodInfo *in_R8;
  int32_t iVar22;
  undefined8 *unaff_R12;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  Photon_Realtime_Player_o *pPStack_110;
  int64_t iStack_108;
  int32_t iStack_fc;
  undefined8 *puStack_f8;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSStack_f0;
  Photon_Realtime_Player_o *pPStack_e8;
  Photon_Realtime_Player_o *pPStack_e0;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_94;
  Anticheat_BallotBox_Result_o AStack_88;
  MethodInfo *pMStack_68;
  undefined8 *puStack_60;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_58;
  undefined8 *puStack_50;
  System_Collections_Generic_HashSet_object__o *pSStack_48;
  undefined4 uStack_34;
  
  if (g_data_057aeb24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb24 = '\x01';
  }
  if ((**(long **)(TypeInfo_SettingsManager + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar1 != 0)) {
    bVar8 = System_String__op_Inequality
                      (*(System_String_o **)(lVar1 + 0x18),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    return bVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (System_Collections_Generic_HashSet_object__o *)((ulong)in_RSI & 0xffffffff);
  if (g_data_057aeb25 == '\0') {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d076d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0779;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0791;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d079d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07cd;
    il2cpp_runtime_helper_023445d0(&"Attempting to ban myself for: ");
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07d9;
    il2cpp_runtime_helper_023445d0(&", please report this to the devs.");
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07e5;
    il2cpp_runtime_helper_023445d0(&" was autobanned. Reason:");
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d07f1;
    il2cpp_runtime_helper_023445d0(&"Player ");
    g_data_057aeb25 = '\x01';
  }
  uStack_34 = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0860;
    il2cpp_runtime_helper_02337ed0();
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0867;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d081a;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 == '\0') {
    return bVar8;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0875;
    il2cpp_runtime_helper_02337ed0();
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d087c;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0835;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0887;
      il2cpp_runtime_helper_02337ed0();
      pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d088e;
      pMVar12 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0850;
      pMVar12 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pMVar12 == method) {
      in_RSI = (Photon_Realtime_Player_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d08b5;
      bVar8 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)in_RSI,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d08d7;
        pSVar13 = System_String__Concat_3af7150
                            ("Attempting to ban myself for: ",(System_String_o *)a,", please report this to the devs.",(MethodInfo *)0x0);
        goto label_044d0a64;
      }
    }
  }
  if ((char)__this_01 == '\0') goto label_044d09df;
  unaff_R12 = &TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d08fe;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = TypeInfo_InGameManager;
  if (method != (MethodInfo *)0x0) {
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             (TypeInfo_InGameManager[2].fields._entries)->max_length;
    __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      in_RSI = (Photon_Realtime_Player_o *)(ulong)*(uint *)&method->name;
      pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0931;
      bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (__this,*(uint *)&method->name,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 == '\0') {
label_044d09df:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d09f0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d09fa;
        Photon_Pun_PhotonNetwork__DestroyPlayerObjects((Photon_Realtime_Player_o *)method,(MethodInfo *)0x0);
        pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a04;
        Photon_Pun_PhotonNetwork__CloseConnection((Photon_Realtime_Player_o *)method,(MethodInfo *)0x0);
        in_RSI = (Photon_Realtime_Player_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a26;
        __this_02 = a;
        bVar8 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)in_RSI,(MethodInfo *)0x0)
        ;
        if ((char)bVar8 == '\0') {
          return bVar8;
        }
        if (method != (MethodInfo *)0x0) {
          uStack_34 = *(undefined4 *)&method->name;
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a42;
          pSVar13 = System_Int32__ToString((int32_t)&uStack_34,(MethodInfo *)0x0);
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a64;
          pSVar13 = System_String__Concat_3af7470
                              ("Player ",pSVar13," was autobanned. Reason:",(System_String_o *)a,(MethodInfo *)0x0);
label_044d0a64:
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a7f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0a8e;
          ApplicationManagers_DebugConsole__Log(pSVar13,1,(MethodInfo *)0x0);
          return extraout_EAX;
        }
      }
      else {
        if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0952;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_01 = *(System_Collections_Generic_HashSet_object__o **)(TypeInfo_AnticheatManager[0x17] + 0x18);
        if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d0973;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                    (TypeInfo_InGameManager[2].fields._entries)->max_length;
        if (__this_02 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          in_RSI = (Photon_Realtime_Player_o *)(ulong)*(uint *)&method->name;
          pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d099d;
          pIVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_02,*(uint *)&method->name,MethodInfo_PlayerInfo_get_Item);
          if ((((pIVar14 != (Il2CppObject *)0x0) && (pIVar14[2].klass != (Il2CppClass *)0x0)) &&
              (pvVar2 = ((pIVar14[2].klass)->_1).typeMetadataHandle, pvVar2 != (void *)0x0)) &&
             (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x44d09df;
            System_Collections_Generic_HashSet_object___Add
                      (__this_01,*(Il2CppObject **)((long)pvVar2 + 0x18),MethodInfo_Boolean_Add);
            goto label_044d09df;
          }
        }
      }
    }
  }
  pSStack_48 = (System_Collections_Generic_HashSet_object__o *)Anticheat_AnticheatManager__TryVoteKickPlayer;
  il2cpp_runtime_helper_022b2c90();
  puStack_50 = &TypeInfo_PhotonNetwork;
  pMStack_68 = method;
  puStack_60 = unaff_R12;
  pSStack_58 = a;
  pSStack_48 = __this_01;
  if (g_data_057aeb26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb26 = '\x01';
  }
  if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = *(MethodInfo **)(TypeInfo_AnticheatManager[0x17] + 0x10);
  if (pMVar12 != (MethodInfo *)0x0) {
    pMVar19 = target;
    Anticheat_BallotBox__TryCastBallot
              (&AStack_88,(Anticheat_BallotBox_o *)pMVar12,in_RSI,(Photon_Realtime_Player_o *)target,in_R8);
    uStack_94 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                CONCAT44(AStack_88.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)AStack_88.fields.cooldown.fields._ticks);
    if (AStack_88.fields.type == 0) {
      if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_AnticheatManager__KickPlayer((Photon_Realtime_Player_o *)target,0,"",pMVar19);
    }
    *(int32_t *)&__this_02->klass = AStack_88.fields.type;
    *(System_ValueTuple_int__int__Fields *)((long)&__this_02->klass + 4) = AStack_88.fields.progress.fields;
    *(ulong *)((long)&__this_02->monitor + 4) =
         CONCAT44(AStack_88.fields.target._0_4_,AStack_88.fields._12_4_);
    (__this_02->fields)._buckets =
         (System_Int32_array *)CONCAT44(AStack_88.fields.target._4_4_,AStack_88.fields.target._0_4_);
    (__this_02->fields)._entries = uStack_94;
    return (bool_conflict)__this_02;
  }
  puVar20 = TypeInfo_AnticheatManager;
  il2cpp_runtime_helper_022b2c90();
  puStack_d0 = &TypeInfo_AnticheatManager;
  pMVar19 = pMVar12;
  pPStack_e0 = extraout_RDX;
  pSStack_d8 = __this_02;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  pSStack_f0 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots((Anticheat_BallotBox_o *)pMVar12,pMVar19);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  __this_00 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_00 == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    uVar18 = il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)CONCAT71((int7)((ulong)uVar18 >> 8),*(int *)&pSVar21->klass == 0);
  }
  iVar22 = 0;
  puStack_f8 = puVar20;
  iVar9 = Photon_Realtime_Room__get_PlayerCount(__this_00,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           ((Anticheat_BallotBox_Fields *)&pMVar12->invoker_method)->BallotsByTargetPlayer;
  pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  pPStack_e8 = in_RCX;
  bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar3,(Il2CppObject *)in_RCX,(Il2CppObject **)&pSStack_f0,MethodInfo_Boolean_TryGetValue);
  if (pSStack_f0 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    iVar22 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_f0->fields)->_count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  item2 = iVar9 / 2 + 1;
  bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    uStack_128 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&uStack_128,iVar22,item2,MethodInfo_ValueTuple_2_Int32_Int32);
    uStack_120 = 4;
    uStack_11c = (undefined4)uStack_128;
    uStack_118 = (undefined4)((ulong)uStack_128 >> 0x20);
    pPStack_110 = pPStack_e8;
label_044d0eb9:
    uStack_114 = 0;
    iStack_108 = 0;
    il2cpp_runtime_helper_022b4080(&pPStack_110,pPStack_110);
    iStack_108 = 0;
  }
  else {
    iStack_fc = item2;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar15 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = pPStack_e0;
    if ((pPStack_e8 == pPStack_e0) || (pPVar15 == pPStack_e8)) {
      uStack_128 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_128,iVar22,iStack_fc,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_120 = 5;
label_044d0e44:
      uStack_11c = (undefined4)uStack_128;
      uStack_118 = (undefined4)((ulong)uStack_128 >> 0x20);
      pPStack_110 = pPStack_e8;
      goto label_044d0eb9;
    }
    bVar10 = Anticheat_BallotBox__HasCooldown((Anticheat_BallotBox_o *)pMVar12,pPStack_e0,method_00);
    if ((char)bVar10 == '\0') {
      iVar11 = Anticheat_BallotBox__CountBallotsCast((Anticheat_BallotBox_o *)pMVar12,player,method_01);
      pSVar17 = pSStack_f0;
      if (0 < iVar11) {
        uStack_128 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_128,iVar22,iStack_fc,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_120 = 2;
        uStack_11c = (undefined4)uStack_128;
        uStack_118 = (undefined4)((ulong)uStack_128 >> 0x20);
        pPStack_110 = (Photon_Realtime_Player_o *)0x0;
        goto label_044d0eb9;
      }
      uStack_120 = SUB84(player,0);
      uVar5 = uStack_120;
      uStack_11c = (undefined4)((ulong)player >> 0x20);
      uVar6 = uStack_11c;
      if ((char)bVar8 == '\0') {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&pMVar12->invoker_method)->BallotsByTargetPlayer;
        pSVar17 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar17,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_120 = uVar5;
        uStack_11c = uVar6;
        il2cpp_runtime_helper_022b4080(&uStack_120,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar17 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_11c, item_00.fields.Voter._0_4_ = uStack_120,
           item_00.fields.Timestamp.fields._dateData = SVar16.fields._dateData, pSVar21 = pSVar17,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                     ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar17,item_00,MethodInfo_Boolean_Add),
           pSStack_f0 = pSVar17, pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)pPStack_e8,(Il2CppObject *)pSVar17,MethodInfo_Void_Add);
        pPVar15 = pPStack_e8;
      }
      else {
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_120 = uVar5;
        uStack_11c = uVar6;
        il2cpp_runtime_helper_022b4080(&uStack_120,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar17 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_11c;
        item.fields.Voter._0_4_ = uStack_120;
        item.fields.Timestamp.fields._dateData = SVar16.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar17,item,MethodInfo_Boolean_Add);
        pPVar15 = pPStack_e8;
      }
      pSVar17 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)pMVar12->name;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
      SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((pSVar17 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17,(Il2CppObject *)player,
                     SVar16,MethodInfo_Boolean_TryAdd), puVar20 = puStack_f8, pSVar21 = pSVar17,
         pSStack_f0 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0)) goto label_044d11b9;
      iVar22 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_f0->fields)->_count;
      if (iVar9 / 2 < iVar22) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&pMVar12->invoker_method)->BallotsByTargetPlayer;
        pSVar21 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar3,(Il2CppObject *)pPVar15,MethodInfo_Boolean_Remove);
        iVar22 = iStack_fc;
        if (g_data_057aeb31 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
          g_data_057aeb31 = '\x01';
        }
        uStack_128 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_128,iVar22,iVar22,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_114 = 0;
        iStack_108 = 0;
        uStack_120 = 0;
        uStack_11c = (undefined4)uStack_128;
        uStack_118 = (undefined4)((ulong)uStack_128 >> 0x20);
        pPStack_110 = pPVar15;
        il2cpp_runtime_helper_022b4080(&pPStack_110,pPVar15);
        puVar20[2] = pPStack_110;
        puVar20[3] = 0;
        *puVar20 = CONCAT44(uStack_11c,uStack_120);
        puVar20[1] = CONCAT44(uStack_114,uStack_118);
        goto label_044d0ee7;
      }
      uStack_128 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_128,iVar22,iStack_fc,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_120 = 1;
      pPStack_e8 = pPVar15;
      goto label_044d0e44;
    }
    uStack_128 = 0;
    System_ValueTuple_int__int____ctor
              ((System_ValueTuple_int__int__o)&uStack_128,iVar22,iStack_fc,MethodInfo_ValueTuple_2_Int32_Int32);
    iVar4 = (((System_TimeSpan_o *)&pMVar12->return_type)->fields)._ticks;
    uStack_114 = 0;
    iStack_108 = 0;
    uStack_120 = 3;
    uStack_11c = (undefined4)uStack_128;
    uStack_118 = (undefined4)((ulong)uStack_128 >> 0x20);
    pPStack_110 = (Photon_Realtime_Player_o *)0x0;
    il2cpp_runtime_helper_022b4080(&pPStack_110,0);
    iStack_108 = iVar4;
  }
  *puStack_f8 = CONCAT44(uStack_11c,uStack_120);
  puStack_f8[1] = CONCAT44(uStack_114,uStack_118);
  puStack_f8[2] = pPStack_110;
  puStack_f8[3] = iStack_108;
  puVar20 = puStack_f8;
label_044d0ee7:
  return (bool_conflict)puVar20;
}


// Anticheat.AnticheatManager$$KickPlayer
// il2cpp: void Anticheat_AnticheatManager__KickPlayer (Photon_Realtime_Player_o* player, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x44d0740

void Anticheat_AnticheatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool_conflict ban,System_String_o *reason,MethodInfo *method)

{
  int item2;
  uint uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  void *pvVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  int64_t iVar4;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  MethodInfo *player_00;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  Photon_Realtime_Player_o *pPVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  Photon_Realtime_Room_o *__this_01;
  MethodInfo *pMVar15;
  System_DateTime_o SVar16;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar17;
  MethodInfo *pMVar18;
  MethodInfo *target;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  undefined4 in_register_00000034;
  Photon_Realtime_Player_o *voter;
  MethodInfo *__this_03;
  System_Collections_Generic_Dictionary_int__object__o *__this_04;
  undefined8 *puVar19;
  MethodInfo *in_R8;
  int32_t iVar20;
  undefined8 *unaff_R12;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  MethodInfo *pMStack_108;
  int64_t iStack_100;
  int32_t iStack_f4;
  undefined8 *puStack_f0;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_e8;
  MethodInfo *pMStack_e0;
  MethodInfo *pMStack_d8;
  System_Collections_Generic_Dictionary_int__object__o *pSStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_8c;
  Anticheat_BallotBox_Result_o AStack_80;
  Photon_Realtime_Player_o *pPStack_60;
  undefined8 *puStack_58;
  System_String_o *pSStack_50;
  undefined8 *puStack_48;
  System_Collections_Generic_HashSet_object__o *pSStack_40;
  int32_t local_2c;
  
  voter = (Photon_Realtime_Player_o *)CONCAT44(in_register_00000034,ban);
  __this_02 = (System_Collections_Generic_HashSet_object__o *)(ulong)(uint)ban;
  if (g_data_057aeb25 == '\0') {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d076d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0779;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0791;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d079d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07cd;
    il2cpp_runtime_helper_023445d0(&"Attempting to ban myself for: ");
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07d9;
    il2cpp_runtime_helper_023445d0(&", please report this to the devs.");
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07e5;
    il2cpp_runtime_helper_023445d0(&" was autobanned. Reason:");
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d07f1;
    il2cpp_runtime_helper_023445d0(&"Player ");
    g_data_057aeb25 = '\x01';
  }
  local_2c = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0860;
    il2cpp_runtime_helper_02337ed0();
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0867;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d081a;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0875;
    il2cpp_runtime_helper_02337ed0();
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d087c;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0835;
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0887;
      il2cpp_runtime_helper_02337ed0();
      pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d088e;
      pPVar12 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0850;
      pPVar12 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar12 == player) {
      voter = (Photon_Realtime_Player_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d08b5;
      bVar8 = System_String__op_Inequality(reason,(System_String_o *)voter,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d08d7;
        pSVar13 = System_String__Concat_3af7150("Attempting to ban myself for: ",reason,", please report this to the devs.",(MethodInfo *)0x0);
        goto label_044d0a64;
      }
    }
  }
  if ((char)ban == '\0') goto label_044d09df;
  unaff_R12 = &TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
    pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d08fe;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = TypeInfo_InGameManager;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             (TypeInfo_InGameManager[2].fields._entries)->max_length;
    __this_04 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      uVar1 = (player->fields).actorNumber;
      voter = (Photon_Realtime_Player_o *)(ulong)uVar1;
      pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0931;
      bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey(__this,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 == '\0') {
label_044d09df:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d09f0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d09fa;
        Photon_Pun_PhotonNetwork__DestroyPlayerObjects(player,(MethodInfo *)0x0);
        pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a04;
        Photon_Pun_PhotonNetwork__CloseConnection(player,(MethodInfo *)0x0);
        voter = (Photon_Realtime_Player_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a26;
        __this_04 = (System_Collections_Generic_Dictionary_int__object__o *)reason;
        bVar8 = System_String__op_Inequality(reason,(System_String_o *)voter,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        if (player != (Photon_Realtime_Player_o *)0x0) {
          local_2c = (player->fields).actorNumber;
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a42;
          pSVar13 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a64;
          pSVar13 = System_String__Concat_3af7470("Player ",pSVar13," was autobanned. Reason:",reason,(MethodInfo *)0x0);
label_044d0a64:
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a7f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0a8e;
          ApplicationManagers_DebugConsole__Log(pSVar13,1,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0952;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = *(System_Collections_Generic_HashSet_object__o **)(TypeInfo_AnticheatManager[0x17] + 0x18);
        if (*(int *)((long)&TypeInfo_InGameManager[2].fields._values + 4) == 0) {
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d0973;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_04 = (System_Collections_Generic_Dictionary_int__object__o *)
                    (TypeInfo_InGameManager[2].fields._entries)->max_length;
        if (__this_04 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uVar1 = (player->fields).actorNumber;
          voter = (Photon_Realtime_Player_o *)(ulong)uVar1;
          pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d099d;
          pIVar14 = System_Collections_Generic_Dictionary_int__object___get_Item(__this_04,uVar1,MethodInfo_PlayerInfo_get_Item)
          ;
          if ((((pIVar14 != (Il2CppObject *)0x0) && (pIVar14[2].klass != (Il2CppClass *)0x0)) &&
              (pvVar2 = ((pIVar14[2].klass)->_1).typeMetadataHandle, pvVar2 != (void *)0x0)) &&
             (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            pSStack_40 = (System_Collections_Generic_HashSet_object__o *)0x44d09df;
            System_Collections_Generic_HashSet_object___Add
                      (__this_02,*(Il2CppObject **)((long)pvVar2 + 0x18),MethodInfo_Boolean_Add);
            goto label_044d09df;
          }
        }
      }
    }
  }
  pSStack_40 = (System_Collections_Generic_HashSet_object__o *)Anticheat_AnticheatManager__TryVoteKickPlayer;
  il2cpp_runtime_helper_022b2c90();
  puStack_48 = &TypeInfo_PhotonNetwork;
  pPStack_60 = player;
  puStack_58 = unaff_R12;
  pSStack_50 = reason;
  pSStack_40 = __this_02;
  if (g_data_057aeb26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb26 = '\x01';
  }
  if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = *(MethodInfo **)(TypeInfo_AnticheatManager[0x17] + 0x10);
  if (__this_03 != (MethodInfo *)0x0) {
    pMVar18 = target;
    Anticheat_BallotBox__TryCastBallot
              (&AStack_80,(Anticheat_BallotBox_o *)__this_03,voter,(Photon_Realtime_Player_o *)target,in_R8);
    uStack_8c = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                CONCAT44(AStack_80.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)AStack_80.fields.cooldown.fields._ticks);
    if (AStack_80.fields.type == 0) {
      if (*(int *)((long)TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_AnticheatManager__KickPlayer((Photon_Realtime_Player_o *)target,0,"",pMVar18);
    }
    *(int32_t *)&__this_04->klass = AStack_80.fields.type;
    *(System_ValueTuple_int__int__Fields *)((long)&__this_04->klass + 4) = AStack_80.fields.progress.fields;
    *(ulong *)((long)&__this_04->monitor + 4) =
         CONCAT44(AStack_80.fields.target._0_4_,AStack_80.fields._12_4_);
    (__this_04->fields)._buckets =
         (System_Int32_array *)CONCAT44(AStack_80.fields.target._4_4_,AStack_80.fields.target._0_4_);
    (__this_04->fields)._entries = uStack_8c;
    return;
  }
  puVar19 = TypeInfo_AnticheatManager;
  il2cpp_runtime_helper_022b2c90();
  puStack_c8 = &TypeInfo_AnticheatManager;
  pMVar18 = __this_03;
  pMStack_d8 = extraout_RDX;
  pSStack_d0 = __this_04;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  pSStack_e8 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots((Anticheat_BallotBox_o *)__this_03,pMVar18);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_01 == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  iVar20 = 0;
  puStack_f0 = puVar19;
  iVar9 = Photon_Realtime_Room__get_PlayerCount(__this_01,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           ((Anticheat_BallotBox_Fields *)&__this_03->invoker_method)->BallotsByTargetPlayer;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  pMStack_e0 = method;
  bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar3,(Il2CppObject *)method,(Il2CppObject **)&pSStack_e8,MethodInfo_Boolean_TryGetValue);
  if (pSStack_e8 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    iVar20 = (pSStack_e8->fields)._count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  item2 = iVar9 / 2 + 1;
  bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    uStack_120 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&uStack_120,iVar20,item2,MethodInfo_ValueTuple_2_Int32_Int32);
    uStack_118 = 4;
    uStack_114 = (undefined4)uStack_120;
    uStack_110 = (undefined4)((ulong)uStack_120 >> 0x20);
    pMStack_108 = pMStack_e0;
  }
  else {
    iStack_f4 = item2;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar15 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player_00 = pMStack_d8;
    pMVar18 = pMStack_e0;
    if ((pMStack_e0 == pMStack_d8) || (pMVar15 == pMStack_e0)) {
      uStack_120 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_120,iVar20,iStack_f4,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_118 = 5;
    }
    else {
      bVar10 = Anticheat_BallotBox__HasCooldown
                         ((Anticheat_BallotBox_o *)__this_03,(Photon_Realtime_Player_o *)pMStack_d8,method_00)
      ;
      if ((char)bVar10 != '\0') {
        uStack_120 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_120,iVar20,iStack_f4,MethodInfo_ValueTuple_2_Int32_Int32);
        iVar4 = (((System_TimeSpan_o *)&__this_03->return_type)->fields)._ticks;
        uStack_10c = 0;
        iStack_100 = 0;
        uStack_118 = 3;
        uStack_114 = (undefined4)uStack_120;
        uStack_110 = (undefined4)((ulong)uStack_120 >> 0x20);
        pMStack_108 = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b4080(&pMStack_108,0);
        iStack_100 = iVar4;
        goto label_044d0ec7;
      }
      iVar11 = Anticheat_BallotBox__CountBallotsCast
                         ((Anticheat_BallotBox_o *)__this_03,(Photon_Realtime_Player_o *)player_00,method_01);
      pSVar17 = pSStack_e8;
      if (0 < iVar11) {
        uStack_120 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_120,iVar20,iStack_f4,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_118 = 2;
        uStack_114 = (undefined4)uStack_120;
        uStack_110 = (undefined4)((ulong)uStack_120 >> 0x20);
        pMStack_108 = (MethodInfo *)0x0;
        goto label_044d0eb9;
      }
      uStack_118 = SUB84(player_00,0);
      uVar5 = uStack_118;
      uStack_114 = (undefined4)((ulong)player_00 >> 0x20);
      uVar6 = uStack_114;
      if ((char)bVar8 == '\0') {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_03->invoker_method)->BallotsByTargetPlayer;
        pSVar17 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor(pSVar17,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_118 = uVar5;
        uStack_114 = uVar6;
        il2cpp_runtime_helper_022b4080(&uStack_118,player_00);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar17 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_114, item_00.fields.Voter._0_4_ = uStack_118,
           item_00.fields.Timestamp.fields._dateData = SVar16.fields._dateData,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add(pSVar17,item_00,MethodInfo_Boolean_Add),
           pMVar18 = pMStack_e0, pSStack_e8 = pSVar17,
           pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)pMStack_e0,(Il2CppObject *)pSVar17,MethodInfo_Void_Add);
      }
      else {
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_118 = uVar5;
        uStack_114 = uVar6;
        il2cpp_runtime_helper_022b4080(&uStack_118,player_00);
        pMVar18 = pMStack_e0;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar17 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_114;
        item.fields.Voter._0_4_ = uStack_118;
        item.fields.Timestamp.fields._dateData = SVar16.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add(pSVar17,item,MethodInfo_Boolean_Add);
      }
      __this_00 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)__this_03->name;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar16 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)player_00,SVar16,MethodInfo_Boolean_TryAdd), puVar19 = puStack_f0,
         pSStack_e8 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0)) goto label_044d11b9;
      iVar20 = (pSStack_e8->fields)._count;
      if (iVar9 / 2 < iVar20) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_03->invoker_method)->BallotsByTargetPlayer;
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar3,(Il2CppObject *)pMVar18,MethodInfo_Boolean_Remove);
          iVar20 = iStack_f4;
          if (g_data_057aeb31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
            g_data_057aeb31 = '\x01';
          }
          uStack_120 = 0;
          System_ValueTuple_int__int____ctor
                    ((System_ValueTuple_int__int__o)&uStack_120,iVar20,iVar20,MethodInfo_ValueTuple_2_Int32_Int32);
          uStack_10c = 0;
          iStack_100 = 0;
          uStack_118 = 0;
          uStack_114 = (undefined4)uStack_120;
          uStack_110 = (undefined4)((ulong)uStack_120 >> 0x20);
          pMStack_108 = pMVar18;
          il2cpp_runtime_helper_022b4080(&pMStack_108,pMVar18);
          puVar19[2] = pMStack_108;
          puVar19[3] = 0;
          *puVar19 = CONCAT44(uStack_114,uStack_118);
          puVar19[1] = CONCAT44(uStack_10c,uStack_110);
          return;
        }
        goto label_044d11b9;
      }
      uStack_120 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_120,iVar20,iStack_f4,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_118 = 1;
    }
    uStack_114 = (undefined4)uStack_120;
    uStack_110 = (undefined4)((ulong)uStack_120 >> 0x20);
    pMStack_108 = pMVar18;
  }
label_044d0eb9:
  uStack_10c = 0;
  iStack_100 = 0;
  il2cpp_runtime_helper_022b4080(&pMStack_108,pMStack_108);
  iStack_100 = 0;
label_044d0ec7:
  *puStack_f0 = CONCAT44(uStack_114,uStack_118);
  puStack_f0[1] = CONCAT44(uStack_10c,uStack_110);
  puStack_f0[2] = pMStack_108;
  puStack_f0[3] = iStack_100;
  return;
}


// Anticheat.AnticheatManager$$TryVoteKickPlayer
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_AnticheatManager__TryVoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d0aa0

Anticheat_BallotBox_Result_o *
Anticheat_AnticheatManager__TryVoteKickPlayer
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Photon_Realtime_Player_o *voter,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int64_t iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  MethodInfo *player;
  int32_t iVar6;
  bool_conflict bVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  Photon_Realtime_Room_o *__this;
  MethodInfo *pMVar10;
  System_DateTime_o SVar11;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar12;
  undefined8 uVar13;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *__this_00;
  Anticheat_BallotBox_Result_o *pAVar15;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar16;
  MethodInfo *in_R8;
  int32_t iVar17;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  MethodInfo *pMStack_d0;
  int64_t iStack_c8;
  int iStack_bc;
  Anticheat_BallotBox_Result_o *pAStack_b8;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSStack_b0;
  MethodInfo *pMStack_a8;
  MethodInfo *pMStack_a0;
  Anticheat_BallotBox_Result_o *pAStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_54;
  Anticheat_BallotBox_Result_o local_48;
  
  if (g_data_057aeb26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb26 = '\x01';
  }
  if (TypeInfo_AnticheatManager[7].fields.progress.fields.Item1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(MethodInfo **)(TypeInfo_AnticheatManager[5].fields.cooldown.fields._ticks + 0x10);
  if (__this_00 != (MethodInfo *)0x0) {
    pMVar14 = (MethodInfo *)target;
    Anticheat_BallotBox__TryCastBallot(&local_48,(Anticheat_BallotBox_o *)__this_00,voter,target,in_R8);
    uStack_54 = CONCAT44(local_48.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)local_48.fields.cooldown.fields._ticks);
    if (local_48.fields.type == 0) {
      if (TypeInfo_AnticheatManager[7].fields.progress.fields.Item1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_AnticheatManager__KickPlayer(target,0,"",pMVar14);
    }
    (__return_storage_ptr__->fields).type = local_48.fields.type;
    (__return_storage_ptr__->fields).progress.fields = local_48.fields.progress.fields;
    *(ulong *)&(__return_storage_ptr__->fields).field_0xc =
         CONCAT44(local_48.fields.target._0_4_,local_48.fields._12_4_);
    (__return_storage_ptr__->fields).target =
         (Photon_Realtime_Player_o *)CONCAT44(local_48.fields.target._4_4_,local_48.fields.target._0_4_);
    (__return_storage_ptr__->fields).cooldown.fields._ticks = uStack_54;
    return __return_storage_ptr__;
  }
  pAVar15 = TypeInfo_AnticheatManager;
  il2cpp_runtime_helper_022b2c90();
  puStack_90 = &TypeInfo_AnticheatManager;
  pMVar14 = __this_00;
  pMStack_a0 = extraout_RDX;
  pAStack_98 = __return_storage_ptr__;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  pSStack_b0 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots((Anticheat_BallotBox_o *)__this_00,pMVar14);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  __this = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    uVar13 = il2cpp_runtime_helper_022b2c90();
    return (Anticheat_BallotBox_Result_o *)CONCAT71((int7)((ulong)uVar13 >> 8),*(int *)&pSVar16->klass == 0);
  }
  iVar17 = 0;
  pAStack_b8 = pAVar15;
  iVar6 = Photon_Realtime_Room__get_PlayerCount(__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           ((Anticheat_BallotBox_Fields *)&__this_00->invoker_method)->BallotsByTargetPlayer;
  pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  pMStack_a8 = method;
  bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,(Il2CppObject *)method,(Il2CppObject **)&pSStack_b0,MethodInfo_Boolean_TryGetValue);
  if (pSStack_b0 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    iVar17 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_b0->fields)->_count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = iVar6 / 2 + 1;
  bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    uStack_e8 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&uStack_e8,iVar17,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
    uStack_e0 = 4;
    uStack_dc = (undefined4)uStack_e8;
    uStack_d8 = (undefined4)((ulong)uStack_e8 >> 0x20);
    pMStack_d0 = pMStack_a8;
  }
  else {
    iStack_bc = iVar1;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = pMStack_a0;
    pMVar14 = pMStack_a8;
    if ((pMStack_a8 == pMStack_a0) || (pMVar10 == pMStack_a8)) {
      uStack_e8 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_e8,iVar17,iStack_bc,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_e0 = 5;
    }
    else {
      bVar8 = Anticheat_BallotBox__HasCooldown
                        ((Anticheat_BallotBox_o *)__this_00,(Photon_Realtime_Player_o *)pMStack_a0,method_00);
      if ((char)bVar8 != '\0') {
        uStack_e8 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_e8,iVar17,iStack_bc,MethodInfo_ValueTuple_2_Int32_Int32);
        iVar3 = (((System_TimeSpan_o *)&__this_00->return_type)->fields)._ticks;
        uStack_d4 = 0;
        iStack_c8 = 0;
        uStack_e0 = 3;
        uStack_dc = (undefined4)uStack_e8;
        uStack_d8 = (undefined4)((ulong)uStack_e8 >> 0x20);
        pMStack_d0 = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b4080(&pMStack_d0,0);
        iStack_c8 = iVar3;
        goto label_044d0ec7;
      }
      iVar9 = Anticheat_BallotBox__CountBallotsCast
                        ((Anticheat_BallotBox_o *)__this_00,(Photon_Realtime_Player_o *)player,method_01);
      pSVar12 = pSStack_b0;
      if (0 < iVar9) {
        uStack_e8 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&uStack_e8,iVar17,iStack_bc,MethodInfo_ValueTuple_2_Int32_Int32);
        uStack_e0 = 2;
        uStack_dc = (undefined4)uStack_e8;
        uStack_d8 = (undefined4)((ulong)uStack_e8 >> 0x20);
        pMStack_d0 = (MethodInfo *)0x0;
        goto label_044d0eb9;
      }
      uStack_e0 = SUB84(player,0);
      uVar4 = uStack_e0;
      uStack_dc = (undefined4)((ulong)player >> 0x20);
      uVar5 = uStack_dc;
      if ((char)bVar7 == '\0') {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_00->invoker_method)->BallotsByTargetPlayer;
        pSVar12 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar12,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_e0 = uVar4;
        uStack_dc = uVar5;
        il2cpp_runtime_helper_022b4080(&uStack_e0,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar11 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar12 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_dc, item_00.fields.Voter._0_4_ = uStack_e0,
           item_00.fields.Timestamp.fields._dateData = SVar11.fields._dateData, pSVar16 = pSVar12,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                     ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar12,item_00,MethodInfo_Boolean_Add),
           pMVar14 = pMStack_a8, pSStack_b0 = pSVar12,
           pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)pMStack_a8,(Il2CppObject *)pSVar12,MethodInfo_Void_Add);
      }
      else {
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        uStack_e0 = uVar4;
        uStack_dc = uVar5;
        il2cpp_runtime_helper_022b4080(&uStack_e0,player);
        pMVar14 = pMStack_a8;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar11 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar12 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_dc;
        item.fields.Voter._0_4_ = uStack_e0;
        item.fields.Timestamp.fields._dateData = SVar11.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar12,item,MethodInfo_Boolean_Add);
      }
      pSVar12 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)__this_00->name;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
      SVar11 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((pSVar12 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(Il2CppObject *)player,
                     SVar11,MethodInfo_Boolean_TryAdd), pAVar15 = pAStack_b8, pSVar16 = pSVar12,
         pSStack_b0 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0)) goto label_044d11b9;
      iVar17 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&pSStack_b0->fields)->_count;
      if (iVar6 / 2 < iVar17) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((Anticheat_BallotBox_Fields *)&__this_00->invoker_method)->BallotsByTargetPlayer;
        pSVar16 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar2,(Il2CppObject *)pMVar14,MethodInfo_Boolean_Remove);
          iVar1 = iStack_bc;
          if (g_data_057aeb31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
            g_data_057aeb31 = '\x01';
          }
          uStack_e8 = 0;
          System_ValueTuple_int__int____ctor
                    ((System_ValueTuple_int__int__o)&uStack_e8,iVar1,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
          uStack_d4 = 0;
          iStack_c8 = 0;
          uStack_e0 = 0;
          uStack_dc = (undefined4)uStack_e8;
          uStack_d8 = (undefined4)((ulong)uStack_e8 >> 0x20);
          pMStack_d0 = pMVar14;
          il2cpp_runtime_helper_022b4080(&pMStack_d0,pMVar14);
          (pAVar15->fields).target = (Photon_Realtime_Player_o *)pMStack_d0;
          (pAVar15->fields).cooldown.fields._ticks = 0;
          (pAVar15->fields).type = uStack_e0;
          (pAVar15->fields).progress.fields.Item1 = uStack_dc;
          *(ulong *)&(pAVar15->fields).progress.fields.Item2 = CONCAT44(uStack_d4,uStack_d8);
          return pAVar15;
        }
        goto label_044d11b9;
      }
      uStack_e8 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&uStack_e8,iVar17,iStack_bc,MethodInfo_ValueTuple_2_Int32_Int32);
      uStack_e0 = 1;
    }
    uStack_dc = (undefined4)uStack_e8;
    uStack_d8 = (undefined4)((ulong)uStack_e8 >> 0x20);
    pMStack_d0 = pMVar14;
  }
label_044d0eb9:
  uStack_d4 = 0;
  iStack_c8 = 0;
  il2cpp_runtime_helper_022b4080(&pMStack_d0,pMStack_d0);
  iStack_c8 = 0;
label_044d0ec7:
  (pAStack_b8->fields).type = uStack_e0;
  (pAStack_b8->fields).progress.fields.Item1 = uStack_dc;
  *(ulong *)&(pAStack_b8->fields).progress.fields.Item2 = CONCAT44(uStack_d4,uStack_d8);
  (pAStack_b8->fields).target = (Photon_Realtime_Player_o *)pMStack_d0;
  (pAStack_b8->fields).cooldown.fields._ticks = iStack_c8;
  return pAStack_b8;
}


// Anticheat.AnticheatManager$$ResetVoteKicks
// il2cpp: void Anticheat_AnticheatManager__ResetVoteKicks (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x44d11d0

void Anticheat_AnticheatManager__ResetVoteKicks(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_DateTime_o SVar3;
  long *plVar4;
  undefined8 *unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *pMVar5;
  long lVar6;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  Photon_Realtime_Player_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar7 [12];
  Anticheat_BallotBox_Ballot_o item;
  undefined1 auStack_18 [8];
  
  if (g_data_057aeb27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    g_data_057aeb27 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x10);
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x10);
  }
  pMVar5 = (MethodInfo *)voter;
  if (lVar6 == 0) {
    unaff_RBX = &TypeInfo_AnticheatManager;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)auStack_18;
    pMVar5 = method;
    unaff_R14 = voter;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057aeb2a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1295;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d12a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d12ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d12b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d12c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057aeb2a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x10);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d12f8;
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values(__this,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1316;
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 ((long)register0x00000020 + -0x68),__this_01,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      while( true ) {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d133c;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)
                           *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__Fields
                             *)((long)register0x00000020 + -0x68),
                           (MethodInfo_3251CB0 *)((long)register0x00000020 + -0x68));
        if ((char)bVar2 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d13ba;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)
                     *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__Fields *
                      )((long)register0x00000020 + -0x68),
                     (MethodInfo_3251CA0 *)((long)register0x00000020 + -0x68));
          return;
        }
        __this_00 = *(System_Collections_Generic_HashSet_BallotBox_Ballot__o **)
                     ((long)register0x00000020 + -0x58);
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        if (g_data_057aeb33 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d135e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        *(MethodInfo **)((long)register0x00000020 + -0x48) = pMVar5;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1375;
        il2cpp_runtime_helper_022b4080((undefined1 *)((long)register0x00000020 + -0x48),pMVar5);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1387;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d138e;
        SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d13a6;
        item.fields.Timestamp.fields._dateData = SVar3.fields._dateData;
        item.fields.Voter = *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x48);
        System_Collections_Generic_HashSet_BallotBox_Ballot___Remove(__this_00,item,MethodInfo_Boolean_Remove);
      }
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d13ce;
      il2cpp_runtime_helper_022b2c90();
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d13d3;
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1401;
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar6 = *plVar4;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1409;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d141b;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)
               *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__Fields *)
                ((long)register0x00000020 + -0x68),(MethodInfo_3251CA0 *)((long)register0x00000020 + -0x68));
    if (lVar6 == 0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1428;
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d1441;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)
             *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__Fields *)
              ((long)register0x00000020 + -0x68),(MethodInfo_3251CA0 *)((long)register0x00000020 + -0x68));
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44d144e;
  _Unwind_Resume(auVar7._0_8_);
}


// Anticheat.AnticheatManager$$.ctor
// il2cpp: void Anticheat_AnticheatManager___ctor (Anticheat_AnticheatManager_o* __this, const MethodInfo* method);
// 0x44d1460

void Anticheat_AnticheatManager___ctor(Anticheat_AnticheatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$.cctor
// il2cpp: void Anticheat_AnticheatManager___cctor (const MethodInfo* method);
// 0x44d1470

void Anticheat_AnticheatManager___cctor(MethodInfo *method)

{
  ulong *puVar1;
  long lVar2;
  MethodInfo *method_00;
  Anticheat_BallotBox_o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  ulong uVar3;
  
  if (cRam00000000057aeb28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BallotBox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_Dictionary_2_Anticheat_PhotonE);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    cRam00000000057aeb28 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(_DAT_05570630);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)method_00,_DAT_05587e00);
  lVar2 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(MethodInfo **)(lVar2 + 8) = method_00;
  il2cpp_runtime_helper_022b4080(lVar2 + 8);
  __this = (Anticheat_BallotBox_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BallotBox);
  Anticheat_BallotBox___ctor(__this,method_00);
  lVar2 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(Anticheat_BallotBox_o **)(lVar2 + 0x10) = __this;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,__this);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  lVar2 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar2 + 0x18) = __this_00;
  uVar3 = lVar2 + 0x18;
  if (g_data_057ba470 != 0) {
    LOCK();
    puVar1 = (ulong *)((long)&g_data_05803fe8 + (ulong)((uint)(uVar3 >> 0xf) & 0x3fff8));
    *puVar1 = *puVar1 | 1L << ((byte)(uVar3 >> 0xc) & 0x3f);
    UNLOCK();
  }
  return;
}



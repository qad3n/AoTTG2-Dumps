// Type: PhotonExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PhotonExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// --------------------------------

// PhotonExtensions$$SetCustomProperty
// il2cpp: void PhotonExtensions__SetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
// 0x40675f0

void PhotonExtensions__SetCustomProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  ExitGames_Client_Photon_Hashtable_o *pEVar3;
  
  if (g_data_057ac2c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    g_data_057ac2c5 = '\x01';
  }
  if (g_data_057ac2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) goto label_0406770b;
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            &(player->fields)._IsInactive_k__BackingField;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406770b;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 == '\0') goto label_04067710;
  pEVar3 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
  if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_0406770b;
  pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
  if (pIVar2 != value) {
    do {
      pEVar3 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
      ExitGames_Client_Photon_Hashtable___ctor(pEVar3,(MethodInfo *)0x0);
      if (pEVar3 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pEVar3,(Il2CppObject *)key,value
                   ,MethodInfo_Void_Add);
        Photon_Realtime_Player__SetCustomProperties
                  (player,pEVar3,(ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
label_0406770b:
      il2cpp_runtime_helper_022b2c90();
label_04067710:
    } while (value != (Il2CppObject *)0x0);
  }
  return;
}


// PhotonExtensions$$SetCustomProperties
// il2cpp: void PhotonExtensions__SetCustomProperties (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, const MethodInfo* method);
// 0x40677b0

void PhotonExtensions__SetCustomProperties
               (Photon_Realtime_Player_o *player,
               System_Collections_Generic_Dictionary_string__object__o *dictionary,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *__this;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  bool_conflict bVar3;
  int32_t iVar4;
  ExitGames_Client_Photon_Hashtable_o *pEVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  long *plVar8;
  MethodInfo_3251B20 *unaff_R12;
  undefined1 auVar9 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  ExitGames_Client_Photon_Hashtable_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ac2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057ac2c6 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  pEVar5 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(pEVar5,(MethodInfo *)0x0);
  if ((dictionary == (System_Collections_Generic_Dictionary_string__object__o *)0x0) ||
     (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                             MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
     __this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
  goto label_04067aed;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_50 = pEVar5;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    __this_01.fields._index = local_48._8_4_;
    __this_01.fields._version = local_48._12_4_;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
    __this_01.fields._currentKey = local_38;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
    pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_
    ;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pIVar12 = local_38;
    if ((char)bVar3 == '\0') {
label_04067a86:
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
      __this_03.fields._currentKey = pIVar12;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      goto label_04067a98;
    }
    System_Collections_Generic_Dictionary_object__object___get_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,local_38,MethodInfo_Object_get_Item);
    pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_
    ;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pIVar13 = local_38;
    if (g_data_057ac2c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      g_data_057ac2c7 = '\x01';
      pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                local_48._0_8_;
      pIVar11 = (Il2CppType *)local_48._8_8_;
      pIVar13 = local_38;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_
    ;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pIVar13 = local_38;
    unaff_R12 = (MethodInfo_3251B20 *)&stack0xffffffffffffff98;
    if (pEVar5 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
label_040678e0:
      while (pIVar13 = local_38, __this_00.fields._8_8_ = pIVar11,
            __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
            __this_00.fields._currentKey = pIVar13,
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98), pIVar12 = pIVar13,
            (char)bVar3 != '\0') {
        pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,pIVar13,
                            MethodInfo_Object_get_Item);
        if (g_data_057ac2c7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          g_data_057ac2c7 = '\x01';
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  &(player->fields)._IsInactive_k__BackingField;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067ade;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar1,pIVar13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') goto label_04067970;
        __this = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
        if (__this == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067ae3;
        pIVar7 = ExitGames_Client_Photon_Hashtable__get_Item(__this,pIVar13,(MethodInfo *)0x0);
        local_38 = pIVar12;
        if (pIVar7 != pIVar6) goto label_0406797b;
      }
      goto label_04067a86;
    }
  }
  do {
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
    __this_02.fields._currentKey = pIVar13;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_02,unaff_R12);
    pIVar12 = pIVar13;
    if ((char)bVar3 == '\0') goto label_04067a86;
    pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,pIVar13,
                        MethodInfo_Object_get_Item);
    if (g_data_057ac2c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      g_data_057ac2c7 = '\x01';
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player->fields)._IsInactive_k__BackingField;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067ade;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar1,pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      pIVar7 = (Il2CppObject *)0x0;
    }
    else {
      pEVar5 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
      if (pEVar5 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067ae3;
      pIVar7 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar5,pIVar13,(MethodInfo *)0x0);
    }
    pIVar13 = pIVar12;
  } while (pIVar7 == pIVar6);
  goto label_04067ae8;
label_04067970:
  local_38 = pIVar12;
  if (pIVar6 != (Il2CppObject *)0x0) {
label_0406797b:
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pEVar5,pIVar13,pIVar6,MethodInfo_Void_Add);
    local_38 = pIVar12;
  }
  goto label_040678e0;
label_04067ade:
  il2cpp_runtime_helper_022b2c90();
label_04067ae3:
  il2cpp_runtime_helper_022b2c90();
label_04067ae8:
  il2cpp_runtime_helper_022b2c90();
label_04067aed:
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_04067ba7:
      __this_05.fields._8_8_ = pIVar11;
      __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
      __this_05.fields._currentKey = pIVar12;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
    __this_04.fields._currentKey = pIVar12;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_04067ba7;
    }
label_04067a98:
    if (local_50 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count
                        ((System_Collections_Generic_Dictionary_object__object__o *)local_50,MethodInfo_Int32_get_Count);
      if (iVar4 < 1) {
        return;
      }
      if (player != (Photon_Realtime_Player_o *)0x0) {
        Photon_Realtime_Player__SetCustomProperties
                  (player,local_50,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                   (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  } while( true );
}


// PhotonExtensions$$GetCustomProperty
// il2cpp: Il2CppObject* PhotonExtensions__GetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, const MethodInfo* method);
// 0x4067730

Il2CppObject *
PhotonExtensions__GetCustomProperty(Photon_Realtime_Player_o *player,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *__this;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  bool_conflict bVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  ExitGames_Client_Photon_Hashtable_o *pEVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long *plVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  Photon_Realtime_Player_o *__this_08;
  MethodInfo_3251B20 *unaff_R12;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  ExitGames_Client_Photon_Hashtable_o *pEStack_68;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)key;
  __this_08 = player;
  if (g_data_057ac2c7 == '\0') {
    __this_08 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player->fields)._IsInactive_k__BackingField;
    __this_08 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)key;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return (Il2CppObject *)0x0;
      }
      pEVar6 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
      __this_08 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar6 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar6,(Il2CppObject *)key,(MethodInfo *)0x0);
        return pIVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)player;
  if (g_data_057ac2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057ac2c6 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar5 = (Il2CppObject *)0x0;
  pEVar6 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(pEVar6,(MethodInfo *)0x0);
  if ((__this_07 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
     __this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
  goto label_04067aed;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_60,
             __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pEStack_68 = pEVar6;
  if (__this_08 == (Photon_Realtime_Player_o *)0x0) {
    __this_01.fields._index = auStack_60._8_4_;
    __this_01.fields._version = auStack_60._12_4_;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_60._0_8_;
    __this_01.fields._currentKey = pIStack_50;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff80);
    pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
              auStack_60._0_8_;
    pIVar12 = (Il2CppType *)auStack_60._8_8_;
    pIVar5 = pIStack_50;
    if ((char)bVar3 == '\0') {
label_04067a86:
      __this_03.fields._8_8_ = pIVar12;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_03.fields._currentKey = pIVar5;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
      goto label_04067a98;
    }
    System_Collections_Generic_Dictionary_object__object___get_Item(__this_07,pIStack_50,MethodInfo_Object_get_Item);
    pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
              auStack_60._0_8_;
    pIVar12 = (Il2CppType *)auStack_60._8_8_;
    pIVar13 = pIStack_50;
    if (g_data_057ac2c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      g_data_057ac2c7 = '\x01';
      pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                auStack_60._0_8_;
      pIVar12 = (Il2CppType *)auStack_60._8_8_;
      pIVar13 = pIStack_50;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
              auStack_60._0_8_;
    pIVar12 = (Il2CppType *)auStack_60._8_8_;
    pIVar13 = pIStack_50;
    unaff_R12 = (MethodInfo_3251B20 *)&stack0xffffffffffffff80;
    if (pEVar6 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
label_040678e0:
      while (pIVar13 = pIStack_50, __this_00.fields._8_8_ = pIVar12,
            __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
            __this_00.fields._currentKey = pIVar13,
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff80), pIVar5 = pIVar13,
            (char)bVar3 != '\0') {
        pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_07,pIVar13,MethodInfo_Object_get_Item);
        if (g_data_057ac2c7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          g_data_057ac2c7 = '\x01';
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  &(__this_08->fields)._IsInactive_k__BackingField;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067ade;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar1,pIVar13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') goto label_04067970;
        __this = *(ExitGames_Client_Photon_Hashtable_o **)&(__this_08->fields)._IsInactive_k__BackingField;
        if (__this == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067ae3;
        pIVar8 = ExitGames_Client_Photon_Hashtable__get_Item(__this,pIVar13,(MethodInfo *)0x0);
        pIStack_50 = pIVar5;
        if (pIVar8 != pIVar7) goto label_0406797b;
      }
      goto label_04067a86;
    }
  }
  do {
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_02.fields._currentKey = pIVar13;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_02,unaff_R12);
    pIVar5 = pIVar13;
    if ((char)bVar3 == '\0') goto label_04067a86;
    pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item(__this_07,pIVar13,MethodInfo_Object_get_Item);
    if (g_data_057ac2c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      g_data_057ac2c7 = '\x01';
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(__this_08->fields)._IsInactive_k__BackingField;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067ade;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar1,pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      pIVar8 = (Il2CppObject *)0x0;
    }
    else {
      pEVar6 = *(ExitGames_Client_Photon_Hashtable_o **)&(__this_08->fields)._IsInactive_k__BackingField;
      if (pEVar6 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067ae3;
      pIVar8 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar6,pIVar13,(MethodInfo *)0x0);
    }
    pIVar13 = pIVar5;
  } while (pIVar8 == pIVar7);
  goto label_04067ae8;
label_04067970:
  pIStack_50 = pIVar5;
  if (pIVar7 != (Il2CppObject *)0x0) {
label_0406797b:
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pEVar6,pIVar13,pIVar7,MethodInfo_Void_Add);
    pIStack_50 = pIVar5;
  }
  goto label_040678e0;
label_04067ade:
  il2cpp_runtime_helper_022b2c90();
label_04067ae3:
  il2cpp_runtime_helper_022b2c90();
label_04067ae8:
  il2cpp_runtime_helper_022b2c90();
label_04067aed:
  do {
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_04067ba7:
      __this_05.fields._8_8_ = pIVar12;
      __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_05.fields._currentKey = pIVar5;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar2 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar12;
    __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_04.fields._currentKey = pIVar5;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_04067ba7;
    }
label_04067a98:
    if (pEStack_68 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count
                        ((System_Collections_Generic_Dictionary_object__object__o *)pEStack_68,MethodInfo_Int32_get_Count);
      if (iVar4 < 1) {
        return (Il2CppObject *)CONCAT44(extraout_var,iVar4);
      }
      if (__this_08 != (Photon_Realtime_Player_o *)0x0) {
        bVar3 = Photon_Realtime_Player__SetCustomProperties
                          (__this_08,pEStack_68,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                           (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
        return (Il2CppObject *)CONCAT44(extraout_var_00,bVar3);
      }
    }
  } while( true );
}


// PhotonExtensions$$GetIntProperty
// il2cpp: int32_t PhotonExtensions__GetIntProperty (Photon_Realtime_Player_o* player, System_String_o* key, int32_t defaultValue, const MethodInfo* method);
// 0x4067be0

int32_t PhotonExtensions__GetIntProperty
                  (Photon_Realtime_Player_o *player,System_String_o *key,int32_t defaultValue,
                  MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  bool_conflict bVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  int32_t *piVar6;
  char *pcVar7;
  System_String_o *pSVar8;
  undefined8 extraout_RDX;
  System_String_o *extraout_RDX_00;
  System_String_o *pSVar9;
  Photon_Realtime_Player_o *pPVar10;
  Photon_Realtime_Player_o *pPVar11;
  int32_t iVar12;
  System_String_o *unaff_R15;
  
  pSVar8 = key;
  pPVar10 = player;
  if (g_data_057ac2c7 == '\0') {
    pPVar10 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player->fields)._IsInactive_k__BackingField;
    pPVar10 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar8 = key;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return defaultValue;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
      pPVar10 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar5 == (Il2CppObject *)0x0) {
          return defaultValue;
        }
        if (pIVar5->klass != g_data_057b9bb8) {
          return defaultValue;
        }
        piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar5);
        return *piVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = pSVar8;
  pPVar11 = pPVar10;
  if (g_data_057ac2c7 == '\0') {
    pPVar11 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (pPVar10 != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(pPVar10->fields)._IsInactive_k__BackingField;
    pPVar11 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar9 = pSVar8;
      uVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
      pIVar5 = (Il2CppObject *)(ulong)uVar4;
      if ((char)uVar4 == '\0') {
label_04067cfa:
        return (int32_t)pIVar5;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(pPVar10->fields)._IsInactive_k__BackingField;
      pPVar11 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
        if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5->klass == g_data_057b9be8)) {
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02305440(pIVar5);
        }
        goto label_04067cfa;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar12 = (int32_t)extraout_RDX;
  pSVar8 = pSVar9;
  pPVar10 = pPVar11;
  if (g_data_057ac2c7 == '\0') {
    pPVar10 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (pPVar11 != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(pPVar11->fields)._IsInactive_k__BackingField;
    pPVar10 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar8 = pSVar9;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)pSVar9,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return iVar12;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(pPVar11->fields)._IsInactive_k__BackingField;
      pPVar10 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
        if (pIVar5 == (Il2CppObject *)0x0) {
          return iVar12;
        }
        if (pIVar5->klass != g_data_057b9b98) {
          return iVar12;
        }
        pcVar7 = (char *)il2cpp_runtime_helper_02305440(pIVar5);
        return (int32_t)CONCAT71((int7)((ulong)extraout_RDX >> 8),*pcVar7 != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    g_data_057ac2c8 = '\x01';
    if (g_data_057ac2c7 != '\0') goto label_04067dd7;
label_04067e6c:
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
    if (pPVar10 == (Photon_Realtime_Player_o *)0x0) goto label_04067e88;
label_04067de0:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(pPVar10->fields)._IsInactive_k__BackingField;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067e88;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
    pSVar9 = extraout_RDX_00;
    if ((char)bVar3 == '\0') goto label_04067e31;
    pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(pPVar10->fields)._IsInactive_k__BackingField;
    if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067e88;
    unaff_R15 = (System_String_o *)
                ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((unaff_R15 == (System_String_o *)0x0) || ((Il2CppClass *)unaff_R15->klass != g_data_057b9c00))
    goto label_04067e31;
  }
  else {
    if (g_data_057ac2c7 == '\0') goto label_04067e6c;
label_04067dd7:
    if (pPVar10 != (Photon_Realtime_Player_o *)0x0) goto label_04067de0;
label_04067e88:
    il2cpp_runtime_helper_022b2c90();
  }
  pSVar9 = unaff_R15;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__op_Equality
                    (pSVar8,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
label_04067e31:
      return (int32_t)pSVar9;
    }
  }
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(pPVar10,pSVar9,(MethodInfo *)0x0);
  return (int32_t)pSVar8;
}


// PhotonExtensions$$GetFloatProperty
// il2cpp: float PhotonExtensions__GetFloatProperty (Photon_Realtime_Player_o* player, System_String_o* key, float defaultValue, const MethodInfo* method);
// 0x4067c70

float PhotonExtensions__GetFloatProperty
                (Photon_Realtime_Player_o *player,System_String_o *key,float defaultValue,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  System_String_o *key_00;
  System_String_o *a;
  Photon_Realtime_Player_o *pPVar6;
  Photon_Realtime_Player_o *player_00;
  System_String_o *unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  
  key_00 = key;
  pPVar6 = player;
  if (g_data_057ac2c7 == '\0') {
    pPVar6 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player->fields)._IsInactive_k__BackingField;
    pPVar6 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      key_00 = key;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return defaultValue;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
      pPVar6 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar4 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) {
          return defaultValue;
        }
        if (pIVar4->klass != g_data_057b9be8) {
          return defaultValue;
        }
        pfVar5 = (float *)il2cpp_runtime_helper_02305440(pIVar4);
        return *pfVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  a = key_00;
  player_00 = pPVar6;
  if (g_data_057ac2c7 == '\0') {
    player_00 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(pPVar6->fields)._IsInactive_k__BackingField;
    player_00 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      a = key_00;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(pPVar6->fields)._IsInactive_k__BackingField;
      player_00 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar4 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key_00,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) {
          return extraout_XMM0_Da_00;
        }
        if (pIVar4->klass != g_data_057b9b98) {
          return extraout_XMM0_Da_00;
        }
        fVar7 = (float)il2cpp_runtime_helper_02305440(pIVar4);
        return fVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    g_data_057ac2c8 = '\x01';
  }
  if (g_data_057ac2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
  }
  if ((player_00 != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player_00->fields)._IsInactive_k__BackingField,
     pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return extraout_XMM0_Da_01;
    }
    pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(player_00->fields)._IsInactive_k__BackingField;
    if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      unaff_R15 = (System_String_o *)
                  ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
      if (unaff_R15 == (System_String_o *)0x0) {
        return extraout_XMM0_Da_02;
      }
      if ((Il2CppClass *)unaff_R15->klass != g_data_057b9c00) {
        return extraout_XMM0_Da_02;
      }
      goto label_04067e8d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04067e8d:
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__op_Equality
                    (a,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return extraout_XMM0_Da_03;
    }
  }
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(player_00,unaff_R15,(MethodInfo *)0x0);
  return extraout_XMM0_Da_04;
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_Player_o* player, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x4067d10

bool_conflict
PhotonExtensions__GetBoolProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,bool_conflict defaultValue,MethodInfo *method
          )

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  System_String_o *pSVar6;
  System_String_o *extraout_RDX;
  Photon_Realtime_Player_o *player_00;
  System_String_o *text;
  System_String_o *unaff_R15;
  
  pSVar6 = key;
  player_00 = player;
  if (g_data_057ac2c7 == '\0') {
    player_00 = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c7 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player->fields)._IsInactive_k__BackingField;
    player_00 = (Photon_Realtime_Player_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar6 = key;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return defaultValue;
      }
      pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
      player_00 = (Photon_Realtime_Player_o *)0x0;
      if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pIVar4 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) {
          return defaultValue;
        }
        if (pIVar4->klass != g_data_057b9b98) {
          return defaultValue;
        }
        pcVar5 = (char *)il2cpp_runtime_helper_02305440(pIVar4);
        return CONCAT31((int3)((uint)defaultValue >> 8),*pcVar5 != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    g_data_057ac2c8 = '\x01';
    if (g_data_057ac2c7 != '\0') goto label_04067dd7;
label_04067e6c:
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
    if (player_00 == (Photon_Realtime_Player_o *)0x0) goto label_04067e88;
label_04067de0:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(player_00->fields)._IsInactive_k__BackingField;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04067e88;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar6,MethodInfo_Boolean_ContainsKey);
    text = extraout_RDX;
    if ((char)bVar3 == '\0') goto label_04067e31;
    pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)&(player_00->fields)._IsInactive_k__BackingField;
    if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_04067e88;
    unaff_R15 = (System_String_o *)
                ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    if ((unaff_R15 == (System_String_o *)0x0) || ((Il2CppClass *)unaff_R15->klass != g_data_057b9c00))
    goto label_04067e31;
  }
  else {
    if (g_data_057ac2c7 == '\0') goto label_04067e6c;
label_04067dd7:
    if (player_00 != (Photon_Realtime_Player_o *)0x0) goto label_04067de0;
label_04067e88:
    il2cpp_runtime_helper_022b2c90();
  }
  text = unaff_R15;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__op_Equality
                    (pSVar6,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      (pSVar6,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
label_04067e31:
      return (bool_conflict)text;
    }
  }
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(player_00,text,(MethodInfo *)0x0);
  return (bool_conflict)pSVar6;
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x4067db0

System_String_o *
PhotonExtensions__GetStringProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *unaff_R15;
  
  if (g_data_057ac2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    g_data_057ac2c8 = '\x01';
  }
  if (g_data_057ac2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      return defaultValue;
    }
    __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)&(player->fields)._IsInactive_k__BackingField;
    if (__this_00 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      unaff_R15 = (System_String_o *)
                  ExitGames_Client_Photon_Hashtable__get_Item(__this_00,(Il2CppObject *)key,(MethodInfo *)0x0)
      ;
      if (unaff_R15 == (System_String_o *)0x0) {
        return defaultValue;
      }
      if ((Il2CppClass *)unaff_R15->klass != g_data_057b9c00) {
        return defaultValue;
      }
      goto label_04067e8d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04067e8d:
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_String__op_Equality
                    (key,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_String__op_Equality
                      (key,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return unaff_R15;
    }
  }
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(player,unaff_R15,(MethodInfo *)0x0);
  return pSVar2;
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x4067f30

System_String_o *
PhotonExtensions__GetStringProperty_3f67f30
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  undefined4 extraout_var;
  ulong extraout_RDX;
  Photon_Realtime_RoomInfo_o *pPVar6;
  Photon_Realtime_RoomInfo_o *player;
  System_String_o *pSVar7;
  
  pSVar3 = key;
  pPVar6 = room;
  if (g_data_057ac2c9 == '\0') {
    pPVar6 = (Photon_Realtime_RoomInfo_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c9 = '\x01';
  }
  if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar1 = (room->fields).customProperties;
    pPVar6 = (Photon_Realtime_RoomInfo_o *)0x0;
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      pSVar3 = key;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key
                         ,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        return defaultValue;
      }
      pEVar1 = (room->fields).customProperties;
      pPVar6 = (Photon_Realtime_RoomInfo_o *)0x0;
      if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        pSVar3 = (System_String_o *)
                 ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) {
          return defaultValue;
        }
        if ((Il2CppClass *)pSVar3->klass != g_data_057b9c00) {
          return defaultValue;
        }
        return pSVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = (System_String_o *)(extraout_RDX & 0xffffffff);
  player = pPVar6;
  if (g_data_057ac2ca == '\0') {
    player = (Photon_Realtime_RoomInfo_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ca = '\x01';
  }
  if (pPVar6 != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar1 = (pPVar6->fields).customProperties;
    player = (Photon_Realtime_RoomInfo_o *)0x0;
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                         (Il2CppObject *)pSVar3,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        pEVar1 = (pPVar6->fields).customProperties;
        player = (Photon_Realtime_RoomInfo_o *)0x0;
        if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_0406804c;
        pIVar4 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4->klass == g_data_057b9b98)) {
          pcVar5 = (char *)il2cpp_runtime_helper_02305440(pIVar4);
          pSVar7 = (System_String_o *)CONCAT71((int7)((ulong)pSVar7 >> 8),*pcVar5 != '\0');
        }
      }
      return pSVar7;
    }
  }
label_0406804c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ac2cb = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null",method);
  bVar2 = System_String__op_Inequality(pSVar3,"null",(MethodInfo *)0x0);
  return (System_String_o *)CONCAT44(extraout_var,bVar2);
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x4067fc0

bool_conflict
PhotonExtensions__GetBoolProperty_3f67fc0
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,bool_conflict defaultValue,MethodInfo *method
          )

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *a;
  Photon_Realtime_RoomInfo_o *player;
  
  player = room;
  if (g_data_057ac2ca == '\0') {
    player = (Photon_Realtime_RoomInfo_o *)&MethodInfo_Boolean_ContainsKey;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ca = '\x01';
  }
  if ((room != (Photon_Realtime_RoomInfo_o *)0x0) &&
     (pEVar1 = (room->fields).customProperties, player = (Photon_Realtime_RoomInfo_o *)0x0,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                       MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pEVar1 = (room->fields).customProperties;
      player = (Photon_Realtime_RoomInfo_o *)0x0;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_0406804c;
      pIVar3 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3->klass == g_data_057b9b98)) {
        pcVar4 = (char *)il2cpp_runtime_helper_02305440(pIVar3);
        defaultValue = CONCAT31((int3)((uint)defaultValue >> 8),*pcVar4 != '\0');
      }
    }
    return defaultValue;
  }
label_0406804c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ac2cb = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = PhotonExtensions__GetStringProperty
                ((Photon_Realtime_Player_o *)player,
                 *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null",method);
  bVar2 = System_String__op_Inequality(a,"null",(MethodInfo *)0x0);
  return bVar2;
}


// PhotonExtensions$$HasSpawnPoint
// il2cpp: bool PhotonExtensions__HasSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4068060

bool_conflict PhotonExtensions__HasSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  MethodInfo *in_RCX;
  
  if (g_data_057ac2cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ac2cb = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = PhotonExtensions__GetStringProperty
                (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null",in_RCX);
  bVar1 = System_String__op_Inequality(a,"null",(MethodInfo *)0x0);
  return bVar1;
}


// PhotonExtensions$$GetSpawnPoint
// il2cpp: UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40680e0

UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  long lVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  int32_t key;
  System_String_o *__this_00;
  System_String_array *pSVar4;
  UnityEngine_Transform_o *__this_01;
  System_Type_o *pSVar5;
  MethodInfo *in_RCX;
  System_RuntimeTypeHandle_o handle;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  Il2CppObject *local_40;
  float local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (g_data_057ac2cc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"0,0,0");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac2cc = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  local_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uStack_20 = 0;
  local_38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = PhotonExtensions__GetStringProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"0,0,0",
                         in_RCX);
  if (__this_00 != (System_String_o *)0x0) {
    bVar3 = System_String__Contains(__this_00,",",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      key = System_Int32__Parse(__this_00,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                          (__this,key,&local_40,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar3 == '\0') {
label_040682dc:
          UVar8.fields.y = local_28._4_4_;
          UVar8.fields.x = (float)local_28;
          UVar8.fields.z = local_38;
          return (UnityEngine_Vector3_o)UVar8.fields;
        }
        in_XMM1_Da = local_38;
        if ((local_40 != (Il2CppObject *)0x0) && (local_40[1].monitor != (UnityEngine_GameObject_o *)0x0)) {
          __this_01 = UnityEngine_GameObject__get_transform(local_40[1].monitor,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UVar8 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
            local_38 = UVar8.fields.z;
            local_28._0_4_ = UVar8.fields.x;
            local_28._4_4_ = UVar8.fields.y;
            goto label_040682dc;
          }
        }
      }
    }
    else {
      pSVar4 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        if ((int)pSVar4->max_length != 0) {
          fVar6 = System_Single__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0);
          local_28 = CONCAT44(extraout_XMM0_Db,fVar6);
          uStack_20 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          if (1 < (uint)pSVar4->max_length) {
            local_38 = System_Single__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar4->max_length) {
              fVar6 = System_Single__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0);
              UVar7.fields.y = local_38;
              UVar7.fields.x = (float)local_28;
              UVar7.fields.z = fVar6;
              return (UnityEngine_Vector3_o)UVar7.fields;
            }
          }
        }
        goto label_040682e9;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040682e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac2cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ReflectionExtensions);
    g_data_057ac2cd = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8) = pSVar5;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ReflectionExtensions + 0xb8));
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(g_data_057b9be8 + 0x20),(MethodInfo *)0x0)
  ;
  lVar1 = *(long *)(TypeInfo_ReflectionExtensions + 0xb8);
  *(System_Type_o **)(lVar1 + 8) = pSVar5;
  uVar2 = il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar5);
  UVar9.fields.z = in_XMM1_Da;
  UVar9.fields.x = (float)(int)uVar2;
  UVar9.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  return (UnityEngine_Vector3_o)UVar9.fields;
}



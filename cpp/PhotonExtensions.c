// Type: PhotonExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PhotonExtensions.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs  [unchanged since prior version]
// --------------------------------

// PhotonExtensions$$SetCustomProperty
// il2cpp: void PhotonExtensions__SetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
// 0x3d71ca0

void PhotonExtensions__SetCustomProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  ExitGames_Client_Photon_Hashtable_o *pEVar3;
  
  if (DAT_05702615 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Hashtable);
    DAT_05702615 = '\x01';
  }
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      if (value == (Il2CppObject *)0x0) {
        return;
      }
    }
    else {
      pEVar3 = *(ExitGames_Client_Photon_Hashtable_o **)
                &(player->fields)._IsInactive_k__BackingField;
      if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d71dbb;
      pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item
                         (pEVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pIVar2 == value) {
        return;
      }
    }
    pEVar3 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_glue(TypeInfo_Hashtable);
    ExitGames_Client_Photon_Hashtable___ctor(pEVar3,(MethodInfo *)0x0);
    if (pEVar3 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pEVar3,
                 (Il2CppObject *)key,value,MethodInfo_Void_Add);
      Photon_Realtime_Player__SetCustomProperties
                (player,pEVar3,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                 (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d71dbb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$SetCustomProperties
// il2cpp: void PhotonExtensions__SetCustomProperties (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, const MethodInfo* method);
// 0x3d71e60

void PhotonExtensions__SetCustomProperties
               (Photon_Realtime_Player_o *player,
               System_Collections_Generic_Dictionary_string__object__o *dictionary,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar3;
  int32_t iVar4;
  ExitGames_Client_Photon_Hashtable_o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05702616 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Hashtable);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    DAT_05702616 = '\x01';
  }
  __this_03 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_glue(TypeInfo_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(__this_03,(MethodInfo *)0x0);
  if ((dictionary != (System_Collections_Generic_Dictionary_string__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                             MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    if (player == (Photon_Realtime_Player_o *)0x0) {
      __this_00.fields._index = local_48._8_4_;
      __this_00.fields._version = local_48._12_4_;
      __this_00.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
      __this_00.fields._currentKey = local_38;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                        (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
      if ((char)bVar3 != '\0') {
        System_Collections_Generic_Dictionary<object__object>__get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,local_38,
                   MethodInfo_Object_get_Item);
        if (DAT_05702617 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
          DAT_05702617 = '\x01';
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
               local_48._0_8_;
      pIVar8 = (Il2CppType *)local_48._8_8_;
      pIVar9 = local_38;
      if (__this_03 == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        while (__this_01.fields._8_8_ = pIVar8,
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
              __this_01.fields._currentKey = pIVar9,
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
              local_48._0_8_ = pSVar7, local_48._8_8_ = pIVar8, local_38 = pIVar9,
              (char)bVar3 != '\0') {
          pIVar10 = pIVar9;
          pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                              pIVar9,MethodInfo_Object_get_Item);
          if (DAT_05702617 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
            DAT_05702617 = '\x01';
          }
          pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    &(player->fields)._IsInactive_k__BackingField;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03d7218e;
          bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar1,pIVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar3 == '\0') {
            pIVar6 = (Il2CppObject *)0x0;
          }
          else {
            pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)
                      &(player->fields)._IsInactive_k__BackingField;
            if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d72193;
            pIVar6 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,pIVar9,(MethodInfo *)0x0);
          }
          pIVar9 = pIVar10;
          if (pIVar6 != pIVar5) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
LAB_03d71f90:
        while (pIVar9 = local_38, __this.fields._8_8_ = pIVar8,
              __this.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
              __this.fields._currentKey = pIVar9,
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
              local_48._0_8_ = pSVar7, local_48._8_8_ = pIVar8, local_38 = pIVar9,
              (char)bVar3 != '\0') {
          pIVar10 = pIVar9;
          pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                              pIVar9,MethodInfo_Object_get_Item);
          if (DAT_05702617 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
            DAT_05702617 = '\x01';
          }
          pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    &(player->fields)._IsInactive_k__BackingField;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03d7218e:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar1,pIVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar3 == '\0') goto LAB_03d72020;
          pEVar2 = *(ExitGames_Client_Photon_Hashtable_o **)
                    &(player->fields)._IsInactive_k__BackingField;
          if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
LAB_03d72193:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar6 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,pIVar9,(MethodInfo *)0x0);
          local_38 = pIVar10;
          if (pIVar6 != pIVar5) goto LAB_03d7202b;
        }
      }
    }
    __this_02.fields._8_8_ = local_48._8_8_;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
    __this_02.fields._currentKey = local_38;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
    if (__this_03 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      iVar4 = System_Collections_Generic_Dictionary<object__object>__get_Count
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                         MethodInfo_Int32_get_Count);
      if (0 < iVar4) {
        if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_03d7219d;
        Photon_Realtime_Player__SetCustomProperties
                  (player,__this_03,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                   (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03d7219d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03d72020:
  local_38 = pIVar10;
  if (pIVar5 != (Il2CppObject *)0x0) {
LAB_03d7202b:
    System_Collections_Generic_Dictionary<object__object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar9,pIVar5,
               MethodInfo_Void_Add);
    local_38 = pIVar10;
  }
  goto LAB_03d71f90;
}


// PhotonExtensions$$GetCustomProperty
// il2cpp: Il2CppObject* PhotonExtensions__GetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, const MethodInfo* method);
// 0x3d71de0

Il2CppObject *
PhotonExtensions__GetCustomProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      return (Il2CppObject *)0x0;
    }
    __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)
                 &(player->fields)._IsInactive_k__BackingField;
    if (__this_00 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item
                         (__this_00,(Il2CppObject *)key,(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetIntProperty
// il2cpp: int32_t PhotonExtensions__GetIntProperty (Photon_Realtime_Player_o* player, System_String_o* key, int32_t defaultValue, const MethodInfo* method);
// 0x3d72290

int32_t PhotonExtensions__GetIntProperty
                  (Photon_Realtime_Player_o *player,System_String_o *key,int32_t defaultValue,
                  MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  int32_t *piVar3;
  
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)
                   &(player->fields)._IsInactive_k__BackingField;
      if (__this_00 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d72318;
      pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item
                         (__this_00,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == DAT_05711068)) {
        piVar3 = (int32_t *)il2cpp_glue_022c7330(pIVar2);
        defaultValue = *piVar3;
      }
    }
    return defaultValue;
  }
LAB_03d72318:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetFloatProperty
// il2cpp: float PhotonExtensions__GetFloatProperty (Photon_Realtime_Player_o* player, System_String_o* key, float defaultValue, const MethodInfo* method);
// 0x3d72320

float PhotonExtensions__GetFloatProperty
                (Photon_Realtime_Player_o *player,System_String_o *key,float defaultValue,
                MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  float *pfVar3;
  float local_14;
  
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    local_14 = defaultValue;
    if ((char)bVar1 != '\0') {
      __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)
                   &(player->fields)._IsInactive_k__BackingField;
      if (__this_00 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d723b8;
      pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item
                         (__this_00,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == DAT_05711098)) {
        pfVar3 = (float *)il2cpp_glue_022c7330(pIVar2);
        local_14 = *pfVar3;
      }
    }
    return local_14;
  }
LAB_03d723b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_Player_o* player, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x3d723c0

bool_conflict
PhotonExtensions__GetBoolProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,bool_conflict defaultValue,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)
                   &(player->fields)._IsInactive_k__BackingField;
      if (__this_00 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d7244c;
      pIVar2 = ExitGames_Client_Photon_Hashtable__get_Item
                         (__this_00,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == DAT_05711048)) {
        pcVar3 = (char *)il2cpp_glue_022c7330(pIVar2);
        defaultValue = CONCAT31((int3)((uint)defaultValue >> 8),*pcVar3 != '\0');
      }
    }
    return defaultValue;
  }
LAB_03d7244c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x3d72460

System_String_o *
PhotonExtensions__GetStringProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05702618 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_05702618 = '\x01';
  }
  if (DAT_05702617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702617 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(player->fields)._IsInactive_k__BackingField,
     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      __this_00 = *(ExitGames_Client_Photon_Hashtable_o **)
                   &(player->fields)._IsInactive_k__BackingField;
      if (__this_00 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d72538;
      pSVar2 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (__this_00,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pSVar2 != (System_String_o *)0x0) && (pSVar2->klass == DAT_057110b0)) {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = System_String__op_Equality
                          (key,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = System_String__op_Equality
                            (key,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),
                             (MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return pSVar2;
          }
        }
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                           (player,pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    return defaultValue;
  }
LAB_03d72538:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x3d725e0

System_String_o *
PhotonExtensions__GetStringProperty
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05702619 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05702619 = '\x01';
  }
  if ((room != (Photon_Realtime_RoomInfo_o *)0x0) &&
     (pEVar1 = (room->fields).customProperties, pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0
     )) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                       (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pEVar1 = (room->fields).customProperties;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d72664;
      pSVar3 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pSVar3 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar3->klass == DAT_057110b0)) {
        defaultValue = pSVar3;
      }
    }
    return defaultValue;
  }
LAB_03d72664:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x3d72670

bool_conflict
PhotonExtensions__GetBoolProperty
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,bool_conflict defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  
  if (DAT_0570261a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_0570261a = '\x01';
  }
  if ((room != (Photon_Realtime_RoomInfo_o *)0x0) &&
     (pEVar1 = (room->fields).customProperties, pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0
     )) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                       (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pEVar1 = (room->fields).customProperties;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03d726fc;
      pIVar3 = ExitGames_Client_Photon_Hashtable__get_Item
                         (pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3->klass == DAT_05711048)) {
        pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
        defaultValue = CONCAT31((int3)((uint)defaultValue >> 8),*pcVar4 != '\0');
      }
    }
    return defaultValue;
  }
LAB_03d726fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PhotonExtensions$$HasSpawnPoint
// il2cpp: bool PhotonExtensions__HasSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3d72710

bool_conflict PhotonExtensions__HasSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  MethodInfo *in_RCX;
  
  if (DAT_0570261b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"null");
    DAT_0570261b = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = PhotonExtensions__GetStringProperty
                (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null",
                 in_RCX);
  bVar1 = System_String__op_Inequality(a,"null",(MethodInfo *)0x0);
  return bVar1;
}


// PhotonExtensions$$GetSpawnPoint
// il2cpp: UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3d72790

UnityEngine_Vector3_o
PhotonExtensions__GetSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool_conflict bVar1;
  int32_t key;
  System_String_o *__this_00;
  System_String_array *pSVar2;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *in_RCX;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  Il2CppObject *local_40;
  float local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_0570261c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"0,0,0");
    il2cpp_init_method_metadata(&",");
    DAT_0570261c = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  local_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uStack_20 = 0;
  local_38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = PhotonExtensions__GetStringProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),
                         "0,0,0",in_RCX);
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(__this_00,",",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      key = System_Int32__Parse(__this_00,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                          (__this,key,&local_40,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar1 == '\0') {
LAB_03d7298c:
          UVar5.fields.y = local_28._4_4_;
          UVar5.fields.x = (float)local_28;
          UVar5.fields.z = local_38;
          return (UnityEngine_Vector3_o)UVar5.fields;
        }
        if ((local_40 != (Il2CppObject *)0x0) &&
           (local_40[1].monitor != (UnityEngine_GameObject_o *)0x0)) {
          __this_01 = UnityEngine_GameObject__get_transform(local_40[1].monitor,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
            local_38 = UVar5.fields.z;
            local_28._0_4_ = UVar5.fields.x;
            local_28._4_4_ = UVar5.fields.y;
            goto LAB_03d7298c;
          }
        }
      }
    }
    else {
      pSVar2 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((int)pSVar2->max_length != 0) {
          fVar3 = System_Single__Parse(pSVar2->m_Items[0],(MethodInfo *)0x0);
          local_28 = CONCAT44(extraout_XMM0_Db,fVar3);
          uStack_20 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          if (1 < (uint)pSVar2->max_length) {
            local_38 = System_Single__Parse(pSVar2->m_Items[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar2->max_length) {
              fVar3 = System_Single__Parse(pSVar2->m_Items[2],(MethodInfo *)0x0);
              UVar4.fields.y = local_38;
              UVar4.fields.x = (float)local_28;
              UVar4.fields.z = fVar3;
              return (UnityEngine_Vector3_o)UVar4.fields;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



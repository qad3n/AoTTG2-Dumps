// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$OpenAddDialog
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenAddDialog (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445eec0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenAddDialog
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ae770 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-playlist-add-song");
    g_data_057ae770 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar1[8].monitor,"setting-playlist-add-song",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$Clear
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Clear (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445ef30

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Clear
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_TypedSetting_T__o *__this;
  System_Object_array *pSVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_String_o *value;
  long lVar9;
  MethodInfo *__this_01;
  MethodInfo *method_00;
  int iVar10;
  System_String_o *unaff_R12;
  
  if (g_data_057ae771 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae771 = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (lVar9 == 0) {
label_0445efb5:
    if ((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                    UnityEngine_GameObject__GetComponentInParent_object_
                              (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
       __this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  __this_01 = *(MethodInfo **)(lVar9 + 0xa0);
  if (__this_01 != (MethodInfo *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
               MethodInfo_Void_set_Value);
    goto label_0445efb5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae772 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ae772 = '\x01';
  }
  if ((*(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80) == 0) ||
     (method_00 = __this_01,
     bVar3 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0), (char)bVar3 != '\0'
     )) {
    return;
  }
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method_00);
  lVar9 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (pSVar5->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar4 = (pSVar5->fields)._size;
      if (uVar4 < (uint)pSVar6->max_length) {
        (pSVar5->fields)._size = uVar4 + 1;
        pSVar6->m_Items[(int)uVar4] = (System_String_o *)__this_01;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4,__this_01);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_01,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if (lVar9 != 0) {
        __this = *(Settings_TypedSetting_T__o **)(lVar9 + 0xa0);
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_String_ToArray);
        pSVar7 = System_String__Join(",",pSVar6,(MethodInfo *)0x0);
        if (__this != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting_object___set_Value(__this,(Il2CppObject *)pSVar7,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae773 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae773 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (lVar9 == 0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
joined_r0x0445f222:
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pSVar6 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0), pSVar6 != (System_String_array *)0x0))
    {
      uVar4 = (uint)pSVar6->max_length;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar4) {
          lVar9 = 0;
          do {
            if (uVar4 <= (uint)lVar9) goto label_0445f374;
            unaff_R12 = pSVar6->m_Items[lVar9];
            if (unaff_R12 == (System_String_o *)0x0) goto label_0445f36f;
            pSVar7 = System_String__Trim(unaff_R12,(MethodInfo *)0x0);
            bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') goto label_0445f379;
            uVar4 = (uint)pSVar6->max_length;
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar4);
        }
        return;
      }
      if ((int)uVar4 < 1) {
        return;
      }
      unaff_R12 = (System_String_o *)0x0;
      if (uVar4 != 0) {
        do {
          iVar10 = (int)unaff_R12;
          pSVar7 = pSVar6->m_Items[iVar10];
          if (pSVar7 == (System_String_o *)0x0) goto label_0445f36f;
          value = System_String__Trim(pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar2 = (pSVar8->fields)._items;
            if (pSVar2 == (System_Object_array *)0x0) goto label_0445f36f;
            uVar4 = (pSVar8->fields)._size;
            if ((uint)pSVar2->max_length <= uVar4) {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar8,(Il2CppObject *)pSVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              goto label_0445f28a;
            }
            (pSVar8->fields)._size = uVar4 + 1;
            pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar10 + 1) {
              return;
            }
          }
          else {
label_0445f28a:
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar10 + 1) {
              return;
            }
          }
          unaff_R12 = (System_String_o *)(ulong)(iVar10 + 1U);
        } while (iVar10 + 1U < uVar4);
      }
      goto label_0445f374;
    }
  }
  else {
    lVar9 = *(long *)(lVar9 + 0xa0);
    if (lVar9 != 0) {
      pSVar7 = *(System_String_o **)(lVar9 + 0x18);
      goto joined_r0x0445f222;
    }
  }
label_0445f36f:
  il2cpp_runtime_helper_022b2c90();
label_0445f374:
  il2cpp_runtime_helper_022b2ca0();
label_0445f379:
  System_String__Trim(unaff_R12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae774 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae774 = '\x01';
  }
  pSVar5 = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong (System_String_o* song, const MethodInfo* method);
// 0x445eff0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong(System_String_o *song,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_TypedSetting_T__o *__this;
  System_Object_array *pSVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_String_o *value;
  long lVar9;
  MethodInfo *method_00;
  int iVar10;
  System_String_o *unaff_R12;
  
  if (g_data_057ae772 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ae772 = '\x01';
  }
  if ((*(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80) == 0) ||
     (method_00 = (MethodInfo *)song, bVar3 = System_String__IsNullOrEmpty(song,(MethodInfo *)0x0),
     (char)bVar3 != '\0')) {
    return;
  }
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method_00);
  lVar9 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (pSVar5->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar4 = (pSVar5->fields)._size;
      if (uVar4 < (uint)pSVar6->max_length) {
        (pSVar5->fields)._size = uVar4 + 1;
        pSVar6->m_Items[(int)uVar4] = song;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4,song);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)song,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if (lVar9 != 0) {
        __this = *(Settings_TypedSetting_T__o **)(lVar9 + 0xa0);
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_String_ToArray);
        pSVar7 = System_String__Join(",",pSVar6,(MethodInfo *)0x0);
        if (__this != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting_object___set_Value(__this,(Il2CppObject *)pSVar7,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae773 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae773 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (lVar9 == 0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
joined_r0x0445f222:
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pSVar6 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0), pSVar6 != (System_String_array *)0x0))
    {
      uVar4 = (uint)pSVar6->max_length;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar4) {
          lVar9 = 0;
          do {
            if (uVar4 <= (uint)lVar9) goto label_0445f374;
            unaff_R12 = pSVar6->m_Items[lVar9];
            if (unaff_R12 == (System_String_o *)0x0) goto label_0445f36f;
            pSVar7 = System_String__Trim(unaff_R12,(MethodInfo *)0x0);
            bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') goto label_0445f379;
            uVar4 = (uint)pSVar6->max_length;
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar4);
        }
        return;
      }
      if ((int)uVar4 < 1) {
        return;
      }
      unaff_R12 = (System_String_o *)0x0;
      if (uVar4 != 0) {
        do {
          iVar10 = (int)unaff_R12;
          pSVar7 = pSVar6->m_Items[iVar10];
          if (pSVar7 == (System_String_o *)0x0) goto label_0445f36f;
          value = System_String__Trim(pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar2 = (pSVar8->fields)._items;
            if (pSVar2 == (System_Object_array *)0x0) goto label_0445f36f;
            uVar4 = (pSVar8->fields)._size;
            if ((uint)pSVar2->max_length <= uVar4) {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar8,(Il2CppObject *)pSVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              goto label_0445f28a;
            }
            (pSVar8->fields)._size = uVar4 + 1;
            pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar10 + 1) {
              return;
            }
          }
          else {
label_0445f28a:
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar10 + 1) {
              return;
            }
          }
          unaff_R12 = (System_String_o *)(ulong)(iVar10 + 1U);
        } while (iVar10 + 1U < uVar4);
      }
      goto label_0445f374;
    }
  }
  else {
    lVar9 = *(long *)(lVar9 + 0xa0);
    if (lVar9 != 0) {
      pSVar7 = *(System_String_o **)(lVar9 + 0x18);
      goto joined_r0x0445f222;
    }
  }
label_0445f36f:
  il2cpp_runtime_helper_022b2c90();
label_0445f374:
  il2cpp_runtime_helper_022b2ca0();
label_0445f379:
  System_String__Trim(unaff_R12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae774 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae774 = '\x01';
  }
  pSVar5 = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CurrentSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs (const MethodInfo* method);
// 0x445f150

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *value;
  System_String_o *pSVar7;
  long lVar8;
  int iVar9;
  System_String_o *unaff_R12;
  
  if (g_data_057ae773 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae773 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_System_String);
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (lVar8 == 0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
joined_r0x0445f222:
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pSVar6 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0), pSVar6 != (System_String_array *)0x0))
    {
      uVar4 = (uint)pSVar6->max_length;
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            if (uVar4 <= (uint)lVar8) goto label_0445f374;
            unaff_R12 = pSVar6->m_Items[lVar8];
            if (unaff_R12 == (System_String_o *)0x0) goto label_0445f36f;
            pSVar7 = System_String__Trim(unaff_R12,(MethodInfo *)0x0);
            bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') goto label_0445f379;
            uVar4 = (uint)pSVar6->max_length;
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar4);
        }
        return (System_Collections_Generic_List_string__o *)0x0;
      }
      if ((int)uVar4 < 1) {
        return pSVar5;
      }
      unaff_R12 = (System_String_o *)0x0;
      if (uVar4 != 0) {
        do {
          iVar9 = (int)unaff_R12;
          pSVar7 = pSVar6->m_Items[iVar9];
          if (pSVar7 == (System_String_o *)0x0) goto label_0445f36f;
          value = System_String__Trim(pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar2 = (pSVar5->fields)._items;
            if (pSVar2 == (System_String_array *)0x0) goto label_0445f36f;
            uVar4 = (pSVar5->fields)._size;
            if ((uint)pSVar2->max_length <= uVar4) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              goto label_0445f28a;
            }
            (pSVar5->fields)._size = uVar4 + 1;
            pSVar2->m_Items[(int)uVar4] = pSVar7;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar9 + 1) {
              return pSVar5;
            }
          }
          else {
label_0445f28a:
            uVar4 = (uint)pSVar6->max_length;
            if ((int)uVar4 <= iVar9 + 1) {
              return pSVar5;
            }
          }
          unaff_R12 = (System_String_o *)(ulong)(iVar9 + 1U);
        } while (iVar9 + 1U < uVar4);
      }
      goto label_0445f374;
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0xa0);
    if (lVar8 != 0) {
      pSVar7 = *(System_String_o **)(lVar8 + 0x18);
      goto joined_r0x0445f222;
    }
  }
label_0445f36f:
  il2cpp_runtime_helper_022b2c90();
label_0445f374:
  il2cpp_runtime_helper_022b2ca0();
label_0445f379:
  System_String__Trim(unaff_R12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae774 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae774 = '\x01';
  }
  pSVar5 = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    pSVar5 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_System_String);
  }
  return pSVar5;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AllSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs (const MethodInfo* method);
// 0x445f390

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  
  if (g_data_057ae774 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae774 = '\x01';
  }
  __this = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  }
  return __this;
}



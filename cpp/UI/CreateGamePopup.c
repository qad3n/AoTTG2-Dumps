// Type: UI.CreateGamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CreateGamePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGamePopup.cs
// --------------------------------

// UI.CreateGamePopup.<>c$$.cctor
// il2cpp: void UI_CreateGamePopup___c___cctor (const MethodInfo* method);
// 0x437c8a0

void UI_CreateGamePopup___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae21a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae21a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CreateGamePopup.<>c$$.ctor
// il2cpp: void UI_CreateGamePopup___c___ctor (UI_CreateGamePopup___c_o* __this, const MethodInfo* method);
// 0x437c910

void UI_CreateGamePopup___c___ctor(UI_CreateGamePopup___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c$$<SyncAddonSettings>b__26_0
// il2cpp: System_String_o* UI_CreateGamePopup___c___SyncAddonSettings_b__26_0 (UI_CreateGamePopup___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x437c920

System_String_o *
UI_CreateGamePopup___c___SyncAddonSettings_b__26_0
          (UI_CreateGamePopup___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UI_ImportPopup_o *__this_00;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UI_SelectListPopup_o *pUVar6;
  Settings_BoolSetting_o *__this_01;
  UI_ExportPopup_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *item;
  System_Object_array *pSVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  uint32_t uVar8;
  bool_conflict bVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  UI_CreateGamePopup_o *onDelete;
  System_Collections_Generic_List_string__o *pSVar13;
  Settings_InGameSet_o *__this_09;
  UnityEngine_Events_UnityAction_o *onDelete_00;
  System_Collections_Generic_List_object__o *__this_10;
  Il2CppObject *pIVar14;
  long *plVar15;
  System_String_o *pSVar16;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *extraout_RDX_00;
  UI_BasePopup_o *__this_11;
  MethodInfo *method_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar17;
  UI_CreateGamePopup_o *pUVar18;
  undefined1 auVar19 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar20;
  Il2CppType *pIVar21;
  Il2CppObject *pIVar22;
  undefined1 auStack_80 [16];
  Il2CppObject *pIStack_70;
  
  pSVar17 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)x;
  if (g_data_057ae21b == '\0') {
    __this = (UI_CreateGamePopup___c_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae21b = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar15 = __this[1].monitor;
  if (plVar15 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 0x2f8);
    pSVar16 = (System_String_o *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (plVar15,__this[1].klass,*(undefined8 *)(*plVar15 + 0x300),UNRECOVERED_JUMPTABLE_00);
    return pSVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_11 = (UI_BasePopup_o *)plVar15[3];
  if (__this_11 == (UI_BasePopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_11[1].fields.killPopupKeyframesIn = pSVar17;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.killPopupKeyframesIn);
    __this_11[1].fields.killPopupKeyframesOut = extraout_RDX_00;
    pSVar16 = (System_String_o *)
              il2cpp_runtime_helper_022b4080(&__this_11[1].fields.killPopupKeyframesOut,extraout_RDX_00);
    return pSVar16;
  }
  pUVar18 = (UI_CreateGamePopup_o *)plVar15[2];
  if (g_data_057ae213 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae213 = '\x01';
  }
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pUVar18,(MethodInfo *)0x0);
  if (uVar8 < 0x573e0af5) {
    if (uVar8 == 0xae8097f) {
      bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"Start",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0437b572;
      ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
      ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x1c8))
                  (plVar15,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   *(undefined8 *)(*plVar15 + 0x1d0));
        if (*(char *)&__this_11[1].monitor == '\0') {
          if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
              (Settings_MultiplayerSettings_o *)0x0) goto label_0437b5d0;
          Settings_MultiplayerSettings__ConnectOffline
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
            (Settings_MultiplayerSettings_o *)0x0) {
          Settings_MultiplayerSettings__StartRoom
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
          goto label_0437b572;
        }
      }
    }
    else {
      if (uVar8 == 0x2f44ed8c) {
        bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"Restart",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar15 == (long *)0x0) goto label_0437b5d0;
          if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu)) goto label_0437b5d5;
          *(undefined1 *)(plVar15 + 0x2f) = 1;
        }
      }
      else if ((uVar8 == 0x573e0af4) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"Import",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_00 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_00,pUVar10,1,"",(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
label_0437b572:
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
        if (plVar15 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 0x248);
          pSVar16 = (System_String_o *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (plVar15,*(undefined8 *)(*plVar15 + 0x250),extraout_RDX,UNRECOVERED_JUMPTABLE_00
                              );
          return pSVar16;
        }
      }
    }
label_0437b5d0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (0xc2954bc2 < uVar8) {
      if (uVar8 == 0xd4005f17) {
        method_00 = "SavePreset";
        bVar9 = System_String__op_Equality
                          ((System_String_o *)pUVar18,(System_String_o *)"SavePreset",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pSVar12 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar18,method_00);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
             (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
             pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
            pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
            pSVar13 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            onDelete_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
              pIStack_70 = (Il2CppObject *)0x437b464;
              UI_SelectListPopup__ShowSave
                        (pUVar6,pSVar13,"","",pUVar10,pSVar12,onDelete_00,pSVar12,
                         (MethodInfo *)0x0);
              goto label_0437b572;
            }
          }
          goto label_0437b5d0;
        }
      }
      else if ((uVar8 == 0xe86349d3) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"Export",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        __this_09 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
        Settings_InGameSet___ctor(__this_09,(MethodInfo *)0x0);
        if (__this_09 != (Settings_InGameSet_o *)0x0) {
          (*(__this_09->klass->vtable)._9_Copy.methodPtr)
                    (__this_09,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                     (__this_09->klass->vtable)._9_Copy.method);
          __this_01 = (__this_09->fields).Preset;
          if (__this_01 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((lVar3 != 0) &&
               (plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), plVar15 != (long *)0x0)) {
              __this_02 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              pSVar16 = (System_String_o *)
                        (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
              if (__this_02 != (UI_ExportPopup_o *)0x0) {
                UI_ExportPopup__Show(__this_02,pSVar16,(MethodInfo *)0x0);
                goto label_0437b572;
              }
            }
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    if (uVar8 != 0xc2954bc2) {
      if ((uVar8 == 0x5cb46baa) &&
         (bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"LoadPreset",(MethodInfo *)0x0),
         (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
           (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
           pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
          pSVar12 = (System_Collections_Generic_List_string__o *)
                    System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          onDelete = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pUVar18 = onDelete;
          UnityEngine_Events_UnityAction___ctor();
          pSVar13 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar18,(MethodInfo *)__this_11);
          if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (pUVar6,pSVar12,"",pUVar10,(UnityEngine_Events_UnityAction_o *)onDelete,
                       pSVar13,(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    bVar9 = System_String__op_Equality((System_String_o *)pUVar18,"Back",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_0437b572;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
          TypeInfo_InGameMenu)) goto label_0437b5d5;
      *(undefined1 *)(plVar15 + 0x2f) = 1;
      UI_BasePopup__Hide(__this_11,(MethodInfo *)0x0);
      goto label_0437b572;
    }
    if (*(char *)&__this_11[1].monitor == '\0') {
      (*(__this_11->klass->vtable)._22_Hide.methodPtr)(__this_11,(__this_11->klass->vtable)._22_Hide.method);
      goto label_0437b572;
    }
    UI_BasePopup__Hide(__this_11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar15 == (long *)0x0) goto label_0437b5d0;
    if ((*(byte *)(TypeInfo_MainMenu + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) == TypeInfo_MainMenu
       )) {
      plVar15 = (long *)plVar15[0x18];
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
          TypeInfo_MultiplayerRoomListPopup)) {
        lVar3 = *plVar15;
        if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
            TypeInfo_MultiplayerRoomListPopup)) {
          (**(code **)(lVar3 + 0x288))(plVar15,*(undefined8 *)(lVar3 + 0x290));
          goto label_0437b572;
        }
      }
    }
  }
label_0437b5d5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae215 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameSet_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae215 = '\x01';
  }
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar21 = (Il2CppType *)0x0;
  pIVar22 = (Il2CppObject *)0x0;
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_03 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0437b841;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,__this_03,MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_80._0_8_;
  pIVar21 = (Il2CppType *)auStack_80._8_8_;
  pIVar14 = pIStack_70;
  if (__this_10 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_05.fields._8_8_ = pIVar21,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar20,
          __this_05.fields._current = pIVar14,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), lVar3 = MethodInfo_Void_Add,
          (char)bVar9 != '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
      pIVar22 = pIVar14;
      if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
      if (*(char *)((long)pIVar14[2].monitor + 0x11) != '\0') {
        if (pIVar14[2].klass == (Il2CppClass *)0x0) goto label_0437b832;
        item = (Il2CppObject *)((pIVar14[2].klass)->_1).namespaze;
        piVar1 = &(__this_10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_10->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_0437b837;
        uVar2 = (__this_10->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_10->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_10,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
    }
label_0437b800:
    __this_06.fields._8_8_ = pIVar21;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
    __this_06.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    return (System_String_o *)__this_10;
  }
  do {
    __this_04.fields._8_8_ = pIVar21;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
    __this_04.fields._current = pIVar14;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
    if ((char)bVar9 == '\0') goto label_0437b800;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
    pIVar22 = pIVar14;
    if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
  } while (*(char *)((long)pIVar14[2].monitor + 0x11) == '\0');
  goto label_0437b82b;
label_0437b821:
  il2cpp_runtime_helper_022b2c90();
  pIVar22 = pIVar14;
label_0437b826:
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0437b82b:
  if (pIVar14[2].klass == (Il2CppClass *)0x0) {
label_0437b832:
    il2cpp_runtime_helper_022b2c90();
label_0437b837:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437b841:
  auVar19 = il2cpp_runtime_helper_022b2c90();
  if (auVar19._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar3 = *plVar15;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar21;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
    __this_07.fields._current = pIVar22;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar3 == 0) {
      return (System_String_o *)__this_10;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_08.fields._8_8_ = pIVar21;
  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
  __this_08.fields._current = pIVar22;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar19._0_8_);
}


// UI.CreateGamePopup.<>c__DisplayClass28_0$$.ctor
// il2cpp: void UI_CreateGamePopup___c__DisplayClass28_0___ctor (UI_CreateGamePopup___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x437a2f0

void UI_CreateGamePopup___c__DisplayClass28_0___ctor
               (UI_CreateGamePopup___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c__DisplayClass28_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CreateGamePopup___c__DisplayClass28_0___SetupTopButtons_b__0 (UI_CreateGamePopup___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x437c950

void UI_CreateGamePopup___c__DisplayClass28_0___SetupTopButtons_b__0
               (UI_CreateGamePopup___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UI_ImportPopup_o *__this_00;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UI_SelectListPopup_o *pUVar6;
  Settings_BoolSetting_o *__this_01;
  UI_ExportPopup_o *__this_02;
  code *vtableDispatch;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *item;
  System_Object_array *pSVar7;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  uint32_t uVar8;
  bool_conflict bVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  UI_CreateGamePopup_o *onDelete;
  System_Collections_Generic_List_string__o *pSVar13;
  Settings_InGameSet_o *__this_09;
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *onDelete_00;
  System_Collections_Generic_List_object__o *__this_10;
  Il2CppObject *pIVar14;
  long *plVar15;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *extraout_RDX_00;
  UI_BasePopup_o *__this_11;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *pUVar16;
  undefined1 auVar17 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  Il2CppObject *pIVar20;
  undefined1 auStack_78 [16];
  Il2CppObject *pIStack_68;
  
  pUVar16 = (__this->fields).__4__this;
  if (pUVar16 != (UI_CreateGamePopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar16->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar16,(__this->fields).buttonName,(pUVar16->klass->vtable)._28_SetCategoryPanel.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_11 = (UI_BasePopup_o *)(pUVar16->fields).m_CancellationTokenSource;
  if (__this_11 == (UI_BasePopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_11[1].fields.killPopupKeyframesIn =
         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)method;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.killPopupKeyframesIn);
    __this_11[1].fields.killPopupKeyframesOut = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.killPopupKeyframesOut,extraout_RDX_00);
    return;
  }
  pUVar16 = (UI_CreateGamePopup_o *)(pUVar16->fields).m_CachedPtr;
  if (g_data_057ae213 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae213 = '\x01';
  }
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pUVar16,(MethodInfo *)0x0);
  if (uVar8 < 0x573e0af5) {
    if (uVar8 == 0xae8097f) {
      bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Start",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0437b572;
      ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
      ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x1c8))
                  (plVar15,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   *(undefined8 *)(*plVar15 + 0x1d0));
        if (*(char *)&__this_11[1].monitor == '\0') {
          if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
              (Settings_MultiplayerSettings_o *)0x0) goto label_0437b5d0;
          Settings_MultiplayerSettings__ConnectOffline
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
            (Settings_MultiplayerSettings_o *)0x0) {
          Settings_MultiplayerSettings__StartRoom
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
          goto label_0437b572;
        }
      }
    }
    else {
      if (uVar8 == 0x2f44ed8c) {
        bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Restart",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar15 == (long *)0x0) goto label_0437b5d0;
          if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu)) goto label_0437b5d5;
          *(undefined1 *)(plVar15 + 0x2f) = 1;
        }
      }
      else if ((uVar8 == 0x573e0af4) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Import",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_00 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_00,pUVar10,1,"",(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
label_0437b572:
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
        if (plVar15 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar15 + 0x248);
          (*vtableDispatch)
                    (plVar15,*(undefined8 *)(*plVar15 + 0x250),extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
label_0437b5d0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (0xc2954bc2 < uVar8) {
      if (uVar8 == 0xd4005f17) {
        method_00 = "SavePreset";
        bVar9 = System_String__op_Equality
                          ((System_String_o *)pUVar16,(System_String_o *)"SavePreset",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pSVar12 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar16,method_00);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
             (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
             pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
            pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
            pSVar13 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            onDelete_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
              pIStack_68 = (Il2CppObject *)0x437b464;
              UI_SelectListPopup__ShowSave
                        (pUVar6,pSVar13,"","",pUVar10,pSVar12,onDelete_00,pSVar12,
                         (MethodInfo *)0x0);
              goto label_0437b572;
            }
          }
          goto label_0437b5d0;
        }
      }
      else if ((uVar8 == 0xe86349d3) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Export",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        __this_09 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
        Settings_InGameSet___ctor(__this_09,(MethodInfo *)0x0);
        if (__this_09 != (Settings_InGameSet_o *)0x0) {
          (*(__this_09->klass->vtable)._9_Copy.methodPtr)
                    (__this_09,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                     (__this_09->klass->vtable)._9_Copy.method);
          __this_01 = (__this_09->fields).Preset;
          if (__this_01 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((lVar3 != 0) &&
               (plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), plVar15 != (long *)0x0)) {
              __this_02 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              value = (System_String_o *)
                      (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
              if (__this_02 != (UI_ExportPopup_o *)0x0) {
                UI_ExportPopup__Show(__this_02,value,(MethodInfo *)0x0);
                goto label_0437b572;
              }
            }
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    if (uVar8 != 0xc2954bc2) {
      if ((uVar8 == 0x5cb46baa) &&
         (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"LoadPreset",(MethodInfo *)0x0),
         (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
           (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
           pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
          pSVar12 = (System_Collections_Generic_List_string__o *)
                    System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          onDelete = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pUVar16 = onDelete;
          UnityEngine_Events_UnityAction___ctor();
          pSVar13 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar16,(MethodInfo *)__this_11);
          if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (pUVar6,pSVar12,"",pUVar10,(UnityEngine_Events_UnityAction_o *)onDelete,
                       pSVar13,(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Back",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_0437b572;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
          TypeInfo_InGameMenu)) goto label_0437b5d5;
      *(undefined1 *)(plVar15 + 0x2f) = 1;
      UI_BasePopup__Hide(__this_11,(MethodInfo *)0x0);
      goto label_0437b572;
    }
    if (*(char *)&__this_11[1].monitor == '\0') {
      (*(__this_11->klass->vtable)._22_Hide.methodPtr)(__this_11,(__this_11->klass->vtable)._22_Hide.method);
      goto label_0437b572;
    }
    UI_BasePopup__Hide(__this_11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar15 == (long *)0x0) goto label_0437b5d0;
    if ((*(byte *)(TypeInfo_MainMenu + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) == TypeInfo_MainMenu
       )) {
      plVar15 = (long *)plVar15[0x18];
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
          TypeInfo_MultiplayerRoomListPopup)) {
        lVar3 = *plVar15;
        if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
            TypeInfo_MultiplayerRoomListPopup)) {
          (**(code **)(lVar3 + 0x288))(plVar15,*(undefined8 *)(lVar3 + 0x290));
          goto label_0437b572;
        }
      }
    }
  }
label_0437b5d5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae215 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameSet_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae215 = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_03 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0437b841;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,__this_03,MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._0_8_;
  pIVar19 = (Il2CppType *)auStack_78._8_8_;
  pIVar14 = pIStack_68;
  if (__this_10 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_05.fields._8_8_ = pIVar19,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar18,
          __this_05.fields._current = pIVar14,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68), lVar3 = MethodInfo_Void_Add,
          (char)bVar9 != '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
      pIVar20 = pIVar14;
      if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
      if (*(char *)((long)pIVar14[2].monitor + 0x11) != '\0') {
        if (pIVar14[2].klass == (Il2CppClass *)0x0) goto label_0437b832;
        item = (Il2CppObject *)((pIVar14[2].klass)->_1).namespaze;
        piVar1 = &(__this_10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_10->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_0437b837;
        uVar2 = (__this_10->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_10->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_10,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
    }
label_0437b800:
    __this_06.fields._8_8_ = pIVar19;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_06.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    return;
  }
  do {
    __this_04.fields._8_8_ = pIVar19;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_04.fields._current = pIVar14;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
    if ((char)bVar9 == '\0') goto label_0437b800;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
    pIVar20 = pIVar14;
    if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
  } while (*(char *)((long)pIVar14[2].monitor + 0x11) == '\0');
  goto label_0437b82b;
label_0437b821:
  il2cpp_runtime_helper_022b2c90();
  pIVar20 = pIVar14;
label_0437b826:
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0437b82b:
  if (pIVar14[2].klass == (Il2CppClass *)0x0) {
label_0437b832:
    il2cpp_runtime_helper_022b2c90();
label_0437b837:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437b841:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar3 = *plVar15;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar19;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_07.fields._current = pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_08.fields._8_8_ = pIVar19;
  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
  __this_08.fields._current = pIVar20;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar17._0_8_);
}


// UI.CreateGamePopup.<>c__DisplayClass31_0$$.ctor
// il2cpp: void UI_CreateGamePopup___c__DisplayClass31_0___ctor (UI_CreateGamePopup___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x437a950

void UI_CreateGamePopup___c__DisplayClass31_0___ctor
               (UI_CreateGamePopup___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c__DisplayClass31_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_CreateGamePopup___c__DisplayClass31_0___SetupBottomButtons_b__0 (UI_CreateGamePopup___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x437c980

void UI_CreateGamePopup___c__DisplayClass31_0___SetupBottomButtons_b__0
               (UI_CreateGamePopup___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UI_ImportPopup_o *__this_00;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UI_SelectListPopup_o *pUVar6;
  Settings_BoolSetting_o *__this_01;
  UI_ExportPopup_o *__this_02;
  code *vtableDispatch;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *item;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  uint32_t uVar8;
  bool_conflict bVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  UI_CreateGamePopup_o *onDelete;
  System_Collections_Generic_List_string__o *pSVar13;
  Settings_InGameSet_o *__this_09;
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *onDelete_00;
  System_Collections_Generic_List_object__o *__this_10;
  Il2CppObject *pIVar14;
  long *plVar15;
  undefined8 extraout_RDX;
  UnityEngine_UI_RawImage_o *extraout_RDX_00;
  UI_CreateGamePopup_o *__this_11;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *pUVar16;
  undefined1 auVar17 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  Il2CppObject *pIVar20;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  
  __this_11 = (__this->fields).__4__this;
  if (__this_11 == (UI_CreateGamePopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_11[1].fields._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)method;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields._categoryPanelTypes);
    __this_11[1].fields.MaskBackground = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.MaskBackground,extraout_RDX_00);
    return;
  }
  pUVar16 = (UI_CreateGamePopup_o *)(__this->fields).buttonName;
  if (g_data_057ae213 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae213 = '\x01';
  }
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pUVar16,(MethodInfo *)0x0);
  if (uVar8 < 0x573e0af5) {
    if (uVar8 == 0xae8097f) {
      bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Start",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0437b572;
      ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
      ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x1c8))
                  (plVar15,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   *(undefined8 *)(*plVar15 + 0x1d0));
        if ((char)(__this_11->fields).IsMultiplayer == '\0') {
          if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
              (Settings_MultiplayerSettings_o *)0x0) goto label_0437b5d0;
          Settings_MultiplayerSettings__ConnectOffline
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
            (Settings_MultiplayerSettings_o *)0x0) {
          Settings_MultiplayerSettings__StartRoom
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
          goto label_0437b572;
        }
      }
    }
    else {
      if (uVar8 == 0x2f44ed8c) {
        bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Restart",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar15 == (long *)0x0) goto label_0437b5d0;
          if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu)) goto label_0437b5d5;
          *(undefined1 *)(plVar15 + 0x2f) = 1;
        }
      }
      else if ((uVar8 == 0x573e0af4) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Import",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_00 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_00,pUVar10,1,"",(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
label_0437b572:
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
        if (plVar15 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar15 + 0x248);
          (*vtableDispatch)
                    (plVar15,*(undefined8 *)(*plVar15 + 0x250),extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
label_0437b5d0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (0xc2954bc2 < uVar8) {
      if (uVar8 == 0xd4005f17) {
        method_00 = "SavePreset";
        bVar9 = System_String__op_Equality
                          ((System_String_o *)pUVar16,(System_String_o *)"SavePreset",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pSVar12 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar16,method_00);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
             (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
             pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
            pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
            pSVar13 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            onDelete_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
              pIStack_60 = (Il2CppObject *)0x437b464;
              UI_SelectListPopup__ShowSave
                        (pUVar6,pSVar13,"","",pUVar10,pSVar12,onDelete_00,pSVar12,
                         (MethodInfo *)0x0);
              goto label_0437b572;
            }
          }
          goto label_0437b5d0;
        }
      }
      else if ((uVar8 == 0xe86349d3) &&
              (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Export",(MethodInfo *)0x0),
              (char)bVar9 != '\0')) {
        __this_09 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
        Settings_InGameSet___ctor(__this_09,(MethodInfo *)0x0);
        if (__this_09 != (Settings_InGameSet_o *)0x0) {
          (*(__this_09->klass->vtable)._9_Copy.methodPtr)
                    (__this_09,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                     (__this_09->klass->vtable)._9_Copy.method);
          __this_01 = (__this_09->fields).Preset;
          if (__this_01 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((lVar3 != 0) &&
               (plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), plVar15 != (long *)0x0)) {
              __this_02 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              value = (System_String_o *)
                      (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
              if (__this_02 != (UI_ExportPopup_o *)0x0) {
                UI_ExportPopup__Show(__this_02,value,(MethodInfo *)0x0);
                goto label_0437b572;
              }
            }
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    if (uVar8 != 0xc2954bc2) {
      if ((uVar8 == 0x5cb46baa) &&
         (bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"LoadPreset",(MethodInfo *)0x0),
         (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
           (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
           pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
          pSVar12 = (System_Collections_Generic_List_string__o *)
                    System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          onDelete = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pUVar16 = onDelete;
          UnityEngine_Events_UnityAction___ctor();
          pSVar13 = UI_CreateGamePopup__GetPresetDisallowedDelete(pUVar16,(MethodInfo *)__this_11);
          if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (pUVar6,pSVar12,"",pUVar10,(UnityEngine_Events_UnityAction_o *)onDelete,
                       pSVar13,(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    bVar9 = System_String__op_Equality((System_String_o *)pUVar16,"Back",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_0437b572;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
          TypeInfo_InGameMenu)) goto label_0437b5d5;
      *(undefined1 *)(plVar15 + 0x2f) = 1;
      UI_BasePopup__Hide((UI_BasePopup_o *)__this_11,(MethodInfo *)0x0);
      goto label_0437b572;
    }
    if ((char)(__this_11->fields).IsMultiplayer == '\0') {
      (*(((UI_BasePopup_c *)__this_11->klass)->vtable)._22_Hide.methodPtr)
                (__this_11,(((UI_BasePopup_c *)__this_11->klass)->vtable)._22_Hide.method);
      goto label_0437b572;
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this_11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar15 == (long *)0x0) goto label_0437b5d0;
    if ((*(byte *)(TypeInfo_MainMenu + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) == TypeInfo_MainMenu
       )) {
      plVar15 = (long *)plVar15[0x18];
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
          TypeInfo_MultiplayerRoomListPopup)) {
        lVar3 = *plVar15;
        if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
            TypeInfo_MultiplayerRoomListPopup)) {
          (**(code **)(lVar3 + 0x288))(plVar15,*(undefined8 *)(lVar3 + 0x290));
          goto label_0437b572;
        }
      }
    }
  }
label_0437b5d5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae215 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameSet_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae215 = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_03 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0437b841;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,__this_03,MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_70._0_8_;
  pIVar19 = (Il2CppType *)auStack_70._8_8_;
  pIVar14 = pIStack_60;
  if (__this_10 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_05.fields._8_8_ = pIVar19,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar18,
          __this_05.fields._current = pIVar14,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), lVar3 = MethodInfo_Void_Add,
          (char)bVar9 != '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
      pIVar20 = pIVar14;
      if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
      if (*(char *)((long)pIVar14[2].monitor + 0x11) != '\0') {
        if (pIVar14[2].klass == (Il2CppClass *)0x0) goto label_0437b832;
        item = (Il2CppObject *)((pIVar14[2].klass)->_1).namespaze;
        piVar1 = &(__this_10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_10->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_0437b837;
        uVar2 = (__this_10->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_10->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_10,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
    }
label_0437b800:
    __this_06.fields._8_8_ = pIVar19;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_06.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    return;
  }
  do {
    __this_04.fields._8_8_ = pIVar19;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_04.fields._current = pIVar14;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar9 == '\0') goto label_0437b800;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
    pIVar20 = pIVar14;
    if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
  } while (*(char *)((long)pIVar14[2].monitor + 0x11) == '\0');
  goto label_0437b82b;
label_0437b821:
  il2cpp_runtime_helper_022b2c90();
  pIVar20 = pIVar14;
label_0437b826:
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0437b82b:
  if (pIVar14[2].klass == (Il2CppClass *)0x0) {
label_0437b832:
    il2cpp_runtime_helper_022b2c90();
label_0437b837:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437b841:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar3 = *plVar15;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar19;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_07.fields._current = pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_08.fields._8_8_ = pIVar19;
  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
  __this_08.fields._current = pIVar20;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar17._0_8_);
}


// UI.CreateGamePopup$$get_Title
// il2cpp: System_String_o* UI_CreateGamePopup__get_Title (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x43797d0

System_String_o * UI_CreateGamePopup__get_Title(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CreateGamePopup$$get_Width
// il2cpp: float UI_CreateGamePopup__get_Width (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x43797f0

float UI_CreateGamePopup__get_Width(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.CreateGamePopup$$get_Height
// il2cpp: float UI_CreateGamePopup__get_Height (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379800

float UI_CreateGamePopup__get_Height(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.CreateGamePopup$$get_CategoryPanel
// il2cpp: bool UI_CreateGamePopup__get_CategoryPanel (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379810

bool_conflict UI_CreateGamePopup__get_CategoryPanel(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$get_CategoryButtons
// il2cpp: bool UI_CreateGamePopup__get_CategoryButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379820

bool_conflict UI_CreateGamePopup__get_CategoryButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CreateGamePopup__get_DefaultCategoryPanel (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379830

System_String_o *
UI_CreateGamePopup__get_DefaultCategoryPanel(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae20a == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae20a = '\x01';
  }
  return "General";
}


// UI.CreateGamePopup$$get_UseSound
// il2cpp: bool UI_CreateGamePopup__get_UseSound (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379860

bool_conflict UI_CreateGamePopup__get_UseSound(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$Setup
// il2cpp: void UI_CreateGamePopup__Setup (UI_CreateGamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4379870

void UI_CreateGamePopup__Setup(UI_CreateGamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Utility_FileWatcherExtension_o **ppUVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *parent_00;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *__this_00;
  Utility_FileWatcherExtension_o *pUVar5;
  UI_CreateGamePopup_o *pUVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *style;
  undefined8 *puVar8;
  long lVar9;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_BasePanel_o *__this_01;
  UI_CreateGamePopup_o *pUVar10;
  UI_BasePanel_o *__this_02;
  MethodInfo *in_R8;
  ulong uVar11;
  
  if (g_data_057ae20b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshList);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileWatcherExtension_AddComponent_FileWatcherExtension);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    g_data_057ae20b = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_CreateGamePopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  pUVar5 = (__this->fields)._watcher;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._watcher;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar10 = __this;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04379b07;
    pUVar5 = (Utility_FileWatcherExtension_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_FileWatcherExtension_AddComponent_FileWatcherExtension);
    *ppUVar1 = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar5);
  }
  pUVar10 = (UI_CreateGamePopup_o *)0x0;
  if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    Utility_FileWatcherExtension__set_NotifyFilter(*ppUVar1,0x13,(MethodInfo *)0x0);
    pUVar10 = (UI_CreateGamePopup_o *)0x0;
    if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
      Utility_FileWatcherExtension__set_IncludeSubdirectories(*ppUVar1,1,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._watcher;
      pUVar6 = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      pUVar10 = pUVar6;
      System_IO_FileSystemEventHandler___ctor();
      if (pUVar5 != (Utility_FileWatcherExtension_o *)0x0) {
        Utility_FileWatcherExtension__add_Changed
                  (pUVar5,(System_IO_FileSystemEventHandler_o *)pUVar6,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._watcher;
        pUVar6 = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
        pUVar10 = pUVar6;
        System_IO_FileSystemEventHandler___ctor();
        if (pUVar5 != (Utility_FileWatcherExtension_o *)0x0) {
          Utility_FileWatcherExtension__add_Created
                    (pUVar5,(System_IO_FileSystemEventHandler_o *)pUVar6,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._watcher;
          pUVar6 = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
          pUVar10 = pUVar6;
          System_IO_FileSystemEventHandler___ctor();
          if (pUVar5 != (Utility_FileWatcherExtension_o *)0x0) {
            Utility_FileWatcherExtension__add_Deleted
                      (pUVar5,(System_IO_FileSystemEventHandler_o *)pUVar6,(MethodInfo *)0x0);
            pUVar5 = (__this->fields)._watcher;
            pUVar6 = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
            pUVar10 = pUVar6;
            System_IO_RenamedEventHandler___ctor();
            if (pUVar5 != (Utility_FileWatcherExtension_o *)0x0) {
              Utility_FileWatcherExtension__add_Renamed
                        (pUVar5,(System_IO_RenamedEventHandler_o *)pUVar6,(MethodInfo *)0x0);
              pUVar5 = *ppUVar1;
              pUVar10 = TypeInfo_BuiltinLevels;
              if (*(int *)((long)&(TypeInfo_BuiltinLevels->fields).SelectModePopup + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (pUVar5 != (Utility_FileWatcherExtension_o *)0x0) {
                Utility_FileWatcherExtension__AddWatcher
                          (pUVar5,((TypeInfo_BuiltinLevels->fields)._watcher)->monitor,(MethodInfo *)0x0);
                pUVar10 = (UI_CreateGamePopup_o *)0x0;
                if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
                  Utility_FileWatcherExtension__AddWatcher
                            (*ppUVar1,(System_String_o *)
                                      (((TypeInfo_BuiltinLevels->fields)._watcher)->fields).m_CancellationTokenSource,
                             (MethodInfo *)0x0);
                  pUVar10 = (UI_CreateGamePopup_o *)0x0;
                  if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
                    Utility_FileWatcherExtension__AddWatcher
                              (*ppUVar1,(System_String_o *)
                                        (((TypeInfo_BuiltinLevels->fields)._watcher)->fields).watchPaths,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04379b07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae211 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae211 = '\x01';
  }
  iVar4 = (*(pUVar10->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (pUVar10,(pUVar10->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)(*(pUVar10->klass->vtable)._4_get_ThemePanel.methodPtr)(pUVar10);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = iVar4;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar7;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar7);
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
    puVar8 = &"Restart";
  }
  else {
    puVar8 = &"Start";
  }
  uVar2 = *puVar8;
  __this_02 = TypeInfo_string;
  lVar9 = il2cpp_runtime_helper_022b2a40();
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      __this_02 = (UI_BasePanel_o *)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x20) = "Import";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar9 + 0x18)) {
        __this_02 = (UI_BasePanel_o *)(lVar9 + 0x28);
        *(undefined8 *)(lVar9 + 0x28) = "Export";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar9 + 0x18)) {
          __this_02 = (UI_BasePanel_o *)(lVar9 + 0x30);
          *(undefined8 *)(lVar9 + 0x30) = "LoadPreset";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar9 + 0x18)) {
            __this_02 = (UI_BasePanel_o *)(lVar9 + 0x38);
            *(undefined8 *)(lVar9 + 0x38) = "SavePreset";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar9 + 0x18)) {
              __this_02 = (UI_BasePanel_o *)(lVar9 + 0x40);
              *(undefined8 *)(lVar9 + 0x40) = uVar2;
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x48) = "Back";
                il2cpp_runtime_helper_022b4080(lVar9 + 0x48);
                if (0 < *(int *)(lVar9 + 0x18)) {
                  uVar11 = 0;
                  do {
                    __this_01 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
                    __this_02 = __this_01;
                    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
                    if (__this_01 == (UI_BasePanel_o *)0x0) goto label_04379e59;
                    __this_02 = (UI_BasePanel_o *)&(__this_01->fields).m_CancellationTokenSource;
                    (__this_01->fields).m_CancellationTokenSource =
                         (System_Threading_CancellationTokenSource_o *)pUVar10;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto label_04379e54;
                    (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar9 + 0x20 + uVar11 * 8);
                    il2cpp_runtime_helper_022b4080(&__this_01->fields);
                    pSVar7 = (System_String_o *)(__this_01->fields).m_CachedPtr;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar7 = UI_UIManager__GetLocaleCommon(pSVar7,(MethodInfo *)0x0);
                    parent_00 = (pUVar10->fields).BottomBar;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateTextButton(parent_00,style,pSVar7,0.0,onClick,in_R8);
                    uVar11 = uVar11 + 1;
                  } while ((long)uVar11 < (long)*(int *)(lVar9 + 0x18));
                }
                return;
              }
            }
          }
        }
      }
    }
label_04379e54:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04379e59:
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].fields.MaskBackground = (UnityEngine_UI_RawImage_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields.MaskBackground);
  __this_02[1].fields.Parent = (UI_BasePanel_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields.Parent);
  __this_02[2].klass = (UI_BasePanel_c *)0x0;
  il2cpp_runtime_helper_022b4080(__this_02 + 2);
  __this_02[2].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_02[2].monitor);
  UI_BasePanel__RebuildCategoryPanel(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$RefreshList
// il2cpp: void UI_CreateGamePopup__RefreshList (UI_CreateGamePopup_o* __this, Il2CppObject* source, System_IO_FileSystemEventArgs_o* e, const MethodInfo* method);
// 0x4379e60

void UI_CreateGamePopup__RefreshList
               (UI_CreateGamePopup_o *__this,Il2CppObject *source,System_IO_FileSystemEventArgs_o *e,
               MethodInfo *method)

{
  (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource);
  (__this->fields)._cachedModeSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings);
  (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSelectionKey);
  (__this->fields)._cachedAddonSettings =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSettings);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SyncModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* UI_CreateGamePopup__SyncModeSettings (UI_CreateGamePopup_o* __this, Map_MapScript_o* script, const MethodInfo* method);
// 0x4377c90

System_Collections_Generic_Dictionary_string__BaseSetting__o *
UI_CreateGamePopup__SyncModeSettings(UI_CreateGamePopup_o *__this,Map_MapScript_o *script,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__c *__this_06;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppObject *value;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *key;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_Enumerator_T__c *local_38;
  
  if (g_data_057ae20c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae20c = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar1 == 0) goto label_04377ff4;
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 == 0) goto label_04377ff4;
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 == 0) goto label_04377ff4;
  pSVar3 = *(System_String_o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = Map_BuiltinLevels__LoadLogic(pSVar3,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality
                    (pSVar3,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (script == (Map_MapScript_o *)0x0) goto label_04377ff4;
    pSVar3 = (script->fields).Logic;
  }
  bVar2 = System_String__op_Equality((__this->fields)._cachedLogicSource,pSVar3,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') ||
     (__this_06 = (System_Collections_Generic_List_Enumerator_T__c *)(__this->fields)._cachedModeSettings,
     __this_06 == (System_Collections_Generic_List_Enumerator_T__c *)0x0)) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = (System_Collections_Generic_List_Enumerator_T__c *)
                CustomLogic_CustomLogicManager__GetModeSettings(pSVar3,(MethodInfo *)0x0);
    (__this->fields)._cachedLogicSource = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource,pSVar3);
    (__this->fields)._cachedModeSettings =
         (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_06;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings,__this_06);
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar1 == 0) goto label_04377ff4;
  lVar1 = *(long *)(lVar1 + 0x40);
  if (lVar1 == 0) goto label_04377ff4;
  if (__this_06 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) goto label_04377ff4;
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20);
  collection = System_Collections_Generic_Dictionary_object__object___get_Keys
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor_362ba10
            (__this_07,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_04377ff4;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,__this_07,
             MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pIVar8 = key;
  local_38 = __this_06;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = pSVar6;
    __this_02.fields._current = key;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar2 != '\0') goto label_04377ff9;
  }
  else {
    while (key = pIVar8, __this_01.fields._8_8_ = pIVar7, __this_01.fields._list = pSVar6,
          __this_01.fields._current = key,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar2 != '\0') {
      pIVar8 = key;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey(__this_00,key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        value = System_Collections_Generic_Dictionary_object__object___get_Item(__this_00,key,MethodInfo_BaseSetting_get_Item);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,key,value,MethodInfo_Void_set_Item
                  );
      }
    }
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = pSVar6;
  __this_03.fields._current = key;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  do {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
      *(System_Collections_Generic_List_Enumerator_T__c **)(lVar1 + 0x20) = local_38;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x20,local_38);
      return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)local_38;
    }
label_04377ff4:
    il2cpp_runtime_helper_022b2c90();
label_04377ff9:
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) goto label_04378061;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar7;
    __this_04.fields._list = pSVar6;
    __this_04.fields._current = key;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  } while (lVar1 == 0);
  il2cpp_runtime_helper_022fefe0(lVar1);
label_04378061:
  __this_05.fields._8_8_ = pIVar7;
  __this_05.fields._list = pSVar6;
  __this_05.fields._current = key;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.CreateGamePopup$$SyncAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* UI_CreateGamePopup__SyncAddonSettings (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4378770

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
UI_CreateGamePopup__SyncAddonSettings(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_09;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_10;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_11;
  bool_conflict bVar1;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *b;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_12;
  UI_CreateGamePopup_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *pIVar5;
  System_Type_o *left;
  long lVar6;
  long *plVar7;
  System_Collections_Generic_Dictionary_object__object__o *unaff_RBX;
  UI_CreateGamePopup_o *key;
  UI_CreateGamePopup_o *unaff_R14;
  UI_CreateGamePopup_o *pUVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_ffffffffffffff28;
  UI_CreateGamePopup_o *in_stack_ffffffffffffff30;
  Il2CppRGCTXData *pIVar10;
  _union_249689 _Var11;
  UI_CreateGamePopup_o *pUVar12;
  undefined1 local_a8 [24];
  undefined1 local_90 [16];
  UI_CreateGamePopup_o *local_80;
  Il2CppObject *pIStack_78;
  Il2CppRGCTXData *local_70;
  _union_249689 local_68;
  System_String_o *local_60;
  Il2CppRGCTXData *local_58;
  _union_249689 _Stack_50;
  UI_CreateGamePopup_o *local_48;
  Il2CppObject *pIStack_40;
  Il2CppRGCTXData *local_38;
  
  if (g_data_057ae20d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Valu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_SyncAddonSettings_b__26_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ae20d = '\x01';
  }
  pIVar10 = (Il2CppRGCTXData *)0x0;
  local_48 = (UI_CreateGamePopup_o *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  local_58 = (Il2CppRGCTXData *)0x0;
  _Stack_50.genericMethod = (Il2CppType *)0x0;
  local_38 = (Il2CppRGCTXData *)0x0;
  local_a8._0_8_ = (Il2CppRGCTXData *)0x0;
  local_a8._8_8_ = (Il2CppType *)0x0;
  local_a8._16_8_ = (UI_CreateGamePopup_o *)0x0;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar6 == 0) goto label_0437931c;
  lVar6 = *(long *)(lVar6 + 0x38);
  if (lVar6 == 0) goto label_0437931c;
  lVar6 = *(long *)(lVar6 + 0x48);
  if (lVar6 == 0) goto label_0437931c;
  unaff_RBX = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x18);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (UI_CreateGamePopup_o *)**(undefined8 **)(TypeInfo_c + 0xb8);
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
    System_Func_object__object____ctor();
    lVar6 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar6 + 8) = selector;
    il2cpp_runtime_helper_022b4080(lVar6 + 8,selector);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_RBX,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437931c;
  System_Collections_Generic_List_object___Sort
            ((System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_Void_Sort);
  b = System_String__Join_3af7e00
                ("|",(System_Collections_Generic_IEnumerable_string__o *)pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality((__this->fields)._cachedAddonSelectionKey,b,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') &&
     (unaff_R14 = (UI_CreateGamePopup_o *)(__this->fields)._cachedAddonSettings, unaff_RBX = pSVar2,
     unaff_R14 != (UI_CreateGamePopup_o *)0x0)) goto label_04378d4f;
  local_68.genericMethod = &(__this->fields)._cachedAddonSelectionKey;
  local_60 = b;
  unaff_R14 = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pIVar10 = (Il2CppRGCTXData *)local_90._0_8_;
  _Var11 = (_union_249689)local_90._8_8_;
  pUVar3 = local_80;
  do {
    do {
      pUVar12 = pUVar3;
      __this_00.fields._8_8_ = __this;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_00.fields._current = (Il2CppObject *)pIVar10;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = __this;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
        __this_01.fields._current = (Il2CppObject *)pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
        goto label_04378d1b;
      }
      pUVar3 = pUVar12;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)
                  Map_BuiltinLevels__LoadAddon((System_String_o *)pUVar12,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        ((System_String_o *)unaff_RBX,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    } while ((char)bVar1 != '\0');
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_12 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped
                          ((System_String_o *)pUVar12,(System_String_o *)unaff_RBX,(MethodInfo *)0x0);
    if (__this_12 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
    goto label_04379321;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90,
               (System_Collections_Generic_Dictionary_object__object__o *)__this_12,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    local_38 = local_70;
    local_48 = local_80;
    pIStack_40 = pIStack_78;
    local_58 = (Il2CppRGCTXData *)local_90._0_8_;
    _Stack_50 = (_union_249689)local_90._8_8_;
    if (unaff_R14 == (UI_CreateGamePopup_o *)0x0) {
      __this_10.fields._8_8_ = __this;
      __this_10.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
      __this_10.fields._current.fields.key = (Il2CppObject *)pIVar10;
      __this_10.fields._current.fields.value = _Var11.genericMethod;
      __this_10.fields._32_8_ = pUVar3;
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_10,(MethodInfo_3251160 *)&local_58);
      if ((char)bVar1 != '\0') {
        il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&local_58,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
        auVar9 = il2cpp_runtime_helper_022b2c90();
        break;
      }
    }
    else {
      while (__this_09.fields._8_8_ = __this,
            __this_09.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28,
            __this_09.fields._current.fields.key = (Il2CppObject *)pIVar10,
            __this_09.fields._current.fields.value = _Var11.genericMethod, __this_09.fields._32_8_ = pUVar3,
            bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_09,(MethodInfo_3251160 *)&local_58), (char)bVar1 != '\0') {
        auVar9 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&local_58,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14,auVar9._0_8_,
                   auVar9._8_8_,MethodInfo_Void_set_Item);
      }
    }
    __this_11.fields._8_8_ = __this;
    __this_11.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_11.fields._current.fields.key = (Il2CppObject *)pIVar10;
    __this_11.fields._current.fields.value = _Var11.genericMethod;
    __this_11.fields._32_8_ = pUVar3;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_11,(MethodInfo_3251280 *)&local_58);
  } while( true );
label_0437932e:
  lVar6 = auVar9._0_8_;
  if (auVar9._8_4_ != 1) {
    __this_07.fields._8_8_ = __this;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_07.fields._current = (Il2CppObject *)pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
label_04379438:
    _Unwind_Resume(lVar6);
  }
  plVar7 = (long *)__cxa_begin_catch(lVar6);
  lVar6 = *plVar7;
  __cxa_end_catch();
  __this_06.fields._8_8_ = __this;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_06.fields._current = (Il2CppObject *)pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
  if (lVar6 != 0) {
    il2cpp_runtime_helper_022fefe0();
    __this_08.fields._8_8_ = __this;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_08.fields._current = (Il2CppObject *)pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    goto label_04379438;
  }
label_04378d1b:
  (__this->fields)._cachedAddonSelectionKey = local_60;
  in_stack_ffffffffffffff30 = __this;
  il2cpp_runtime_helper_022b4080(local_68.genericMethod);
  (__this->fields)._cachedAddonSettings =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)unaff_R14;
  unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)
              &(__this->fields)._cachedAddonSettings;
  il2cpp_runtime_helper_022b4080(unaff_RBX,unaff_R14);
label_04378d4f:
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x48), lVar6 != 0)) &&
     (unaff_R14 != (UI_CreateGamePopup_o *)0x0)) {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x20);
    in_stack_ffffffffffffff30 = unaff_R14;
    pUVar3 = (UI_CreateGamePopup_o *)
             System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)unaff_RBX,
               (System_Collections_Generic_IEnumerable_T__o *)pUVar3,MethodInfo_List_1_System_String);
    if (unaff_RBX != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
                 (System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pIVar10 = (Il2CppRGCTXData *)local_90._0_8_;
      pUVar12 = local_80;
label_04378e10:
      key = pUVar12;
      __this_02.fields._8_8_ = in_stack_ffffffffffffff30;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_02.fields._current = (Il2CppObject *)pIVar10;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
      if ((char)bVar1 != '\0') {
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto code_r0x04378e35;
label_04379305:
        key = pUVar3;
        il2cpp_runtime_helper_022b2c90();
        goto label_0437930a;
      }
      __this_05.fields._8_8_ = in_stack_ffffffffffffff30;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_05.fields._current = (Il2CppObject *)pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x48), lVar6 != 0)) {
        *(UI_CreateGamePopup_o **)(lVar6 + 0x20) = in_stack_ffffffffffffff30;
        il2cpp_runtime_helper_022b4080(lVar6 + 0x20,in_stack_ffffffffffffff30);
        return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
               in_stack_ffffffffffffff30;
      }
    }
  }
label_0437931c:
  __this = in_stack_ffffffffffffff30;
  il2cpp_runtime_helper_022b2c90();
label_04379321:
  il2cpp_runtime_helper_022b2c90();
  auVar9 = il2cpp_runtime_helper_022fefe0(unaff_RBX);
  goto label_0437932e;
code_r0x04378e35:
  pUVar12 = key;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
  pUVar3 = key;
  if ((char)bVar1 != '\0') {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)in_stack_ffffffffffffff30,
                        (Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0437930a:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R14 = (UI_CreateGamePopup_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
      unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362ba10
                ((System_Collections_Generic_List_object__o *)unaff_RBX,
                 (System_Collections_Generic_IEnumerable_T__o *)unaff_R14,MethodInfo_List_1_System_String);
      if (unaff_RBX != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
                   (System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        local_a8._16_8_ = local_80;
        local_a8._0_8_ = local_90._0_8_;
        local_a8._8_8_ = local_90._8_8_;
        pUVar8 = unaff_R14;
        while (__this_03.fields._8_8_ = in_stack_ffffffffffffff30,
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
              __this_03.fields._current = (Il2CppObject *)pIVar10,
              bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)local_a8),
              unaff_R14 = (UI_CreateGamePopup_o *)local_a8._16_8_, (char)bVar1 != '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04379305;
          }
          bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)unaff_R14,MethodInfo_Boolean_ContainsKey);
          pUVar8 = unaff_R14;
          if ((char)bVar1 != '\0') {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04379305;
            }
            pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)unaff_R14,MethodInfo_BaseSetting_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04379305;
            }
            left = System_Object__GetType(pIVar5,(MethodInfo *)0x0);
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                in_stack_ffffffffffffff30,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04379305;
            }
            pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)unaff_R14,MethodInfo_BaseSetting_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04379305;
            }
            unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)
                        System_Object__GetType(pIVar5,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar1 = System_Type__op_Equality(left,(System_Type_o *)unaff_RBX,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     in_stack_ffffffffffffff30,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04379305;
              }
              pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)unaff_R14,MethodInfo_BaseSetting_get_Item);
              if (unaff_RBX == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04379305;
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (unaff_RBX,(Il2CppObject *)unaff_R14,pIVar5,MethodInfo_Void_set_Item);
            }
          }
        }
        unaff_RBX = (System_Collections_Generic_Dictionary_object__object__o *)0xa;
        pUVar3 = (UI_CreateGamePopup_o *)0x0;
        __this_04.fields._8_8_ = in_stack_ffffffffffffff30;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
        __this_04.fields._current = (Il2CppObject *)pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)local_a8);
        unaff_R14 = pUVar8;
        goto label_04378e10;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key);
    goto label_0437931c;
  }
  goto label_04378e10;
}


// UI.CreateGamePopup$$Show
// il2cpp: void UI_CreateGamePopup__Show (UI_CreateGamePopup_o* __this, bool isMultiplayer, const MethodInfo* method);
// 0x4379ee0

void UI_CreateGamePopup__Show(UI_CreateGamePopup_o *__this,bool_conflict isMultiplayer,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  if ((uint)(byte)(__this->fields).IsMultiplayer == isMultiplayer) {
    return;
  }
  *(char *)&(__this->fields).IsMultiplayer = (char)isMultiplayer;
  routine = UI_BasePanel__WaitAndRebuildCategoryPanel((UI_BasePanel_o *)__this,0.2,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SetupTopButtons
// il2cpp: void UI_CreateGamePopup__SetupTopButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379f30

void UI_CreateGamePopup__SetupTopButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *style;
  long lVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_02;
  Il2CppObject *value;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  ulong uVar3;
  
  if (g_data_057ae20e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Misc");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Mode");
    g_data_057ae20e = '\x01';
  }
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x1c;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar1;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar1);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_0437a2e6:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar2 + 0x18)) {
      parent = (UnityEngine_Transform_o *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = "Mode";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar2 + 0x18)) {
        parent = (UnityEngine_Transform_o *)(lVar2 + 0x30);
        *(undefined8 *)(lVar2 + 0x30) = "Titans";
        il2cpp_runtime_helper_022b4080();
        if (3 < *(uint *)(lVar2 + 0x18)) {
          parent = (UnityEngine_Transform_o *)(lVar2 + 0x38);
          *(undefined8 *)(lVar2 + 0x38) = "Weather";
          il2cpp_runtime_helper_022b4080();
          if (4 < *(uint *)(lVar2 + 0x18)) {
            parent = (UnityEngine_Transform_o *)(lVar2 + 0x40);
            *(undefined8 *)(lVar2 + 0x40) = "Misc";
            il2cpp_runtime_helper_022b4080();
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = "Custom";
              il2cpp_runtime_helper_022b4080(lVar2 + 0x48);
              if (0 < *(int *)(lVar2 + 0x18)) {
                uVar3 = 0;
                do {
                  __this_01 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
                  parent = __this_01;
                  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
                  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_0437a2e6;
                  parent = __this_01 + 1;
                  __this_01[1].klass = (UnityEngine_Transform_c *)__this;
                  il2cpp_runtime_helper_022b4080();
                  if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_0437a2eb;
                  (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
                  il2cpp_runtime_helper_022b4080(&__this_01->fields);
                  parent = (__this->fields).TopBar;
                  pSVar1 = (__this->fields).LocaleCategory;
                  item = System_String__Concat_3ae5ba0
                                   ((System_String_o *)(__this_01->fields).m_CachedPtr,"Button",
                                    (MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  method_00 = "";
                  pSVar1 = UI_UIManager__GetLocale
                                     (pSVar1,"Top",item,(System_String_o *)"",
                                      (System_String_o *)"",(MethodInfo *)0x0);
                  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  __this_02 = (UnityEngine_Transform_o *)
                              UI_ElementFactory__CreateCategoryButton(parent,style,pSVar1,onClick,method_00);
                  if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_0437a2e6;
                  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                              (__this->fields)._topButtons;
                  key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
                  value = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
                  parent = __this_02;
                  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_0437a2e6;
                  System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add)
                  ;
                  uVar3 = uVar3 + 1;
                } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
              }
              UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_0437a2eb:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$RegisterCategoryPanels
// il2cpp: void UI_CreateGamePopup__RegisterCategoryPanels (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437a550

void UI_CreateGamePopup__RegisterCategoryPanels(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UI_BasePopup_o *pUVar4;
  UI_BasePopup_array *pUVar5;
  long lVar6;
  System_Type_o *pSVar7;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UnityEngine_Component_o *pUVar8;
  Il2CppObject *pIVar9;
  System_Threading_CancellationTokenSource_o *pSVar10;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae20f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameCustomPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameMiscPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameModePanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameTitansPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameWeatherPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Misc");
    il2cpp_runtime_helper_023445d0(&"Mode");
    g_data_057ae20f = '\x01';
  }
  handle.fields.value = TypeRef_CreateGameGeneralPanel.fields.value;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar3,"General",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_CreateGameModePanel.fields.value;
    pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CreateGameModePanel,(MethodInfo *)0x0);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,"Mode",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      handle.fields.value = TypeRef_CreateGameTitansPanel.fields.value;
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CreateGameTitansPanel,(MethodInfo *)0x0);
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,"Titans",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        handle.fields.value = TypeRef_CreateGameWeatherPanel.fields.value;
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CreateGameWeatherPanel,(MethodInfo *)0x0);
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar3,"Weather",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._categoryPanelTypes;
          handle.fields.value = TypeRef_CreateGameMiscPanel.fields.value;
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CreateGameMiscPanel,(MethodInfo *)0x0);
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar3,"Misc",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._categoryPanelTypes;
            handle.fields.value = TypeRef_CreateGameCustomPanel.fields.value;
            pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CreateGameCustomPanel,(MethodInfo *)0x0);
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar3,"Custom",(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae210 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGameSelect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGameSelectM);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_CreateGame);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_CreateGameS);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae210 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)handle.fields.value,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)handle.fields.value,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateDefaultPopup_object_((UnityEngine_Transform_o *)__this_00,0,MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_CreateGameS);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pIVar9 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGameSelectM);
    (((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields).m_CachedPtr = (intptr_t)pIVar9;
    il2cpp_runtime_helper_022b4080(&((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields);
    lVar6 = MethodInfo_Void_Add;
    __this_00 = (((UI_BasePanel_o *)handle.fields.value)->fields)._popups;
    if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar4 = (UI_BasePopup_o *)(((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields).m_CachedPtr;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 != (UI_BasePopup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar5->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar5->m_Items[(int)uVar2] = pUVar4;
          il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar4,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        __this_00 = (System_Collections_Generic_List_BasePopup__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)handle.fields.value,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateDefaultPopup_object_
                           ((UnityEngine_Transform_o *)__this_00,0,MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_CreateGame);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pSVar10 = (System_Threading_CancellationTokenSource_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGameSelect);
          (((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields).m_CancellationTokenSource = pSVar10
          ;
          il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields).
                              m_CancellationTokenSource);
          lVar6 = MethodInfo_Void_Add;
          __this_00 = (((UI_BasePanel_o *)handle.fields.value)->fields)._popups;
          if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar4 = (UI_BasePopup_o *)
                     (((UI_BasePanel_o *)((long)handle.fields.value + 0xd0))->fields).
                     m_CancellationTokenSource;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (__this_00->fields)._items;
            if (pUVar5 != (UI_BasePopup_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar4;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar4,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SetupPopups
// il2cpp: void UI_CreateGamePopup__SetupPopups (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437a780

void UI_CreateGamePopup__SetupPopups(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_BasePopup_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UnityEngine_Component_o *pUVar5;
  UI_CreateGameSelectModePopup_o *pUVar6;
  UI_CreateGameSelectAddonPopup_o *pUVar7;
  
  if (g_data_057ae210 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGameSelect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGameSelectM);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_CreateGame);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_CreateGameS);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae210 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateDefaultPopup_object_((UnityEngine_Transform_o *)__this_00,0,MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_CreateGameS);
  if (pUVar5 != (UnityEngine_Component_o *)0x0) {
    pUVar6 = (UI_CreateGameSelectModePopup_o *)
             UnityEngine_Component__GetComponent_object_(pUVar5,MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGameSelectM);
    (__this->fields).SelectModePopup = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SelectModePopup);
    lVar4 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar6 = (__this->fields).SelectModePopup;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UI_BasePopup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar6;
          il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar6,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this_00 = (System_Collections_Generic_List_BasePopup__o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateDefaultPopup_object_
                           ((UnityEngine_Transform_o *)__this_00,0,MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_CreateGame);
        if (pUVar5 != (UnityEngine_Component_o *)0x0) {
          pUVar7 = (UI_CreateGameSelectAddonPopup_o *)
                   UnityEngine_Component__GetComponent_object_(pUVar5,MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGameSelect);
          (__this->fields).SelectAddonPopup = pUVar7;
          il2cpp_runtime_helper_022b4080(&(__this->fields).SelectAddonPopup);
          lVar4 = MethodInfo_Void_Add;
          __this_00 = (__this->fields)._popups;
          if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar7 = (__this->fields).SelectAddonPopup;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (__this_00->fields)._items;
            if (pUVar3 != (UI_BasePopup_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
                il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SetupBottomButtons
// il2cpp: void UI_CreateGamePopup__SetupBottomButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x4379b10

void UI_CreateGamePopup__SetupBottomButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Transform_o *parent;
  int32_t iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *style;
  undefined8 *puVar4;
  long lVar5;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_BasePanel_o *__this_00;
  UI_BasePanel_o *__this_01;
  MethodInfo *in_R8;
  ulong uVar6;
  
  if (g_data_057ae211 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae211 = '\x01';
  }
  iVar2 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = iVar2;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar3;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar3);
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
    puVar4 = &"Restart";
  }
  else {
    puVar4 = &"Start";
  }
  uVar1 = *puVar4;
  __this_01 = TypeInfo_string;
  lVar5 = il2cpp_runtime_helper_022b2a40();
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      __this_01 = (UI_BasePanel_o *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = "Import";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar5 + 0x18)) {
        __this_01 = (UI_BasePanel_o *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x28) = "Export";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar5 + 0x18)) {
          __this_01 = (UI_BasePanel_o *)(lVar5 + 0x30);
          *(undefined8 *)(lVar5 + 0x30) = "LoadPreset";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar5 + 0x18)) {
            __this_01 = (UI_BasePanel_o *)(lVar5 + 0x38);
            *(undefined8 *)(lVar5 + 0x38) = "SavePreset";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar5 + 0x18)) {
              __this_01 = (UI_BasePanel_o *)(lVar5 + 0x40);
              *(undefined8 *)(lVar5 + 0x40) = uVar1;
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x48) = "Back";
                il2cpp_runtime_helper_022b4080(lVar5 + 0x48);
                if (0 < *(int *)(lVar5 + 0x18)) {
                  uVar6 = 0;
                  do {
                    __this_00 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
                    __this_01 = __this_00;
                    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
                    if (__this_00 == (UI_BasePanel_o *)0x0) goto label_04379e59;
                    __this_01 = (UI_BasePanel_o *)&(__this_00->fields).m_CancellationTokenSource;
                    (__this_00->fields).m_CancellationTokenSource =
                         (System_Threading_CancellationTokenSource_o *)__this;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto label_04379e54;
                    (__this_00->fields).m_CachedPtr = *(intptr_t *)(lVar5 + 0x20 + uVar6 * 8);
                    il2cpp_runtime_helper_022b4080(&__this_00->fields);
                    pSVar3 = (System_String_o *)(__this_00->fields).m_CachedPtr;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar3 = UI_UIManager__GetLocaleCommon(pSVar3,(MethodInfo *)0x0);
                    parent = (__this->fields).BottomBar;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateTextButton(parent,style,pSVar3,0.0,onClick,in_R8);
                    uVar6 = uVar6 + 1;
                  } while ((long)uVar6 < (long)*(int *)(lVar5 + 0x18));
                }
                return;
              }
            }
          }
        }
      }
    }
label_04379e54:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04379e59:
  il2cpp_runtime_helper_022b2c90();
  __this_01[1].fields.MaskBackground = (UnityEngine_UI_RawImage_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_01[1].fields.MaskBackground);
  __this_01[1].fields.Parent = (UI_BasePanel_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_01[1].fields.Parent);
  __this_01[2].klass = (UI_BasePanel_c *)0x0;
  il2cpp_runtime_helper_022b4080(__this_01 + 2);
  __this_01[2].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_01[2].monitor);
  UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$Hide
// il2cpp: void UI_CreateGamePopup__Hide (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437ac20

void UI_CreateGamePopup__Hide(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_CreateGamePopup_o *__this_01;
  
  if (g_data_057ae212 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae212 = '\x01';
  }
  __this_01 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (((char)bVar1 != '\0') && (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 1)) {
      __this_01 = (UI_CreateGamePopup_o *)0x0;
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) goto label_0437acab;
      Settings_MultiplayerSettings__Disconnect
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_0437acab:
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup__Hide((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$HideNoDisconnect
// il2cpp: void UI_CreateGamePopup__HideNoDisconnect (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437acb0

void UI_CreateGamePopup__HideNoDisconnect(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CreateGamePopup__OnBottomBarButtonClick (UI_CreateGamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x437acc0

void UI_CreateGamePopup__OnBottomBarButtonClick
               (UI_CreateGamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UI_ImportPopup_o *__this_00;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UI_SelectListPopup_o *pUVar6;
  Settings_BoolSetting_o *__this_01;
  UI_ExportPopup_o *__this_02;
  code *vtableDispatch;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *item;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  uint32_t uVar8;
  bool_conflict bVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  UI_CreateGamePopup_o *onDelete;
  System_Collections_Generic_List_string__o *pSVar13;
  Settings_InGameSet_o *__this_09;
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *onDelete_00;
  System_Collections_Generic_List_object__o *__this_10;
  Il2CppObject *pIVar14;
  long *plVar15;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *__this_11;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar17;
  Il2CppType *pIVar18;
  Il2CppObject *pIVar19;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  
  if (g_data_057ae213 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__34_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SavePreset");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"Restart");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae213 = '\x01';
  }
  uVar8 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar8 < 0x573e0af5) {
    if (uVar8 == 0xae8097f) {
      bVar9 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0437b572;
      ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
      ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x1c8))
                  (plVar15,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   *(undefined8 *)(*plVar15 + 0x1d0));
        if ((char)(__this->fields).IsMultiplayer == '\0') {
          if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
              (Settings_MultiplayerSettings_o *)0x0) goto label_0437b5d0;
          Settings_MultiplayerSettings__ConnectOffline
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
            (Settings_MultiplayerSettings_o *)0x0) {
          Settings_MultiplayerSettings__StartRoom
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
          goto label_0437b572;
        }
      }
    }
    else {
      if (uVar8 == 0x2f44ed8c) {
        bVar9 = System_String__op_Equality(name,"Restart",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar15 == (long *)0x0) goto label_0437b5d0;
          if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu)) goto label_0437b5d5;
          *(undefined1 *)(plVar15 + 0x2f) = 1;
        }
      }
      else if ((uVar8 == 0x573e0af4) &&
              (bVar9 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0), (char)bVar9 != '\0'))
      {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_00 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_00,pUVar10,1,"",(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
label_0437b572:
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
        if (plVar15 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar15 + 0x248);
          (*vtableDispatch)
                    (plVar15,*(undefined8 *)(*plVar15 + 0x250),extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
label_0437b5d0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (0xc2954bc2 < uVar8) {
      if (uVar8 == 0xd4005f17) {
        method_00 = "SavePreset";
        bVar9 = System_String__op_Equality(name,(System_String_o *)"SavePreset",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pSVar12 = UI_CreateGamePopup__GetPresetDisallowedDelete((UI_CreateGamePopup_o *)name,method_00);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
             (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
             pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
            pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
            pSVar13 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            onDelete_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
              pIStack_60 = (Il2CppObject *)0x437b464;
              UI_SelectListPopup__ShowSave
                        (pUVar6,pSVar13,"","",pUVar10,pSVar12,onDelete_00,pSVar12,
                         (MethodInfo *)0x0);
              goto label_0437b572;
            }
          }
          goto label_0437b5d0;
        }
      }
      else if ((uVar8 == 0xe86349d3) &&
              (bVar9 = System_String__op_Equality(name,"Export",(MethodInfo *)0x0), (char)bVar9 != '\0'))
      {
        __this_09 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
        Settings_InGameSet___ctor(__this_09,(MethodInfo *)0x0);
        if (__this_09 != (Settings_InGameSet_o *)0x0) {
          (*(__this_09->klass->vtable)._9_Copy.methodPtr)
                    (__this_09,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                     (__this_09->klass->vtable)._9_Copy.method);
          __this_01 = (__this_09->fields).Preset;
          if (__this_01 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((lVar3 != 0) &&
               (plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), plVar15 != (long *)0x0)) {
              __this_02 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              value = (System_String_o *)
                      (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
              if (__this_02 != (UI_ExportPopup_o *)0x0) {
                UI_ExportPopup__Show(__this_02,value,(MethodInfo *)0x0);
                goto label_0437b572;
              }
            }
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    if (uVar8 != 0xc2954bc2) {
      if ((uVar8 == 0x5cb46baa) &&
         (bVar9 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0), (char)bVar9 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar4 != 0)) &&
           (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
           pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          pUVar6 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pSVar11 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
          pSVar12 = (System_Collections_Generic_List_string__o *)
                    System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,MethodInfo_List_1_System_String_ToList_String);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          onDelete = (UI_CreateGamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          __this_11 = onDelete;
          UnityEngine_Events_UnityAction___ctor();
          pSVar13 = UI_CreateGamePopup__GetPresetDisallowedDelete(__this_11,(MethodInfo *)__this);
          if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (pUVar6,pSVar12,"",pUVar10,(UnityEngine_Events_UnityAction_o *)onDelete,
                       pSVar13,(MethodInfo *)0x0);
            goto label_0437b572;
          }
        }
        goto label_0437b5d0;
      }
      goto label_0437b572;
    }
    bVar9 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_0437b572;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
          TypeInfo_InGameMenu)) goto label_0437b5d5;
      *(undefined1 *)(plVar15 + 0x2f) = 1;
      UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      goto label_0437b572;
    }
    if ((char)(__this->fields).IsMultiplayer == '\0') {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      goto label_0437b572;
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar15 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar15 == (long *)0x0) goto label_0437b5d0;
    if ((*(byte *)(TypeInfo_MainMenu + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) == TypeInfo_MainMenu
       )) {
      plVar15 = (long *)plVar15[0x18];
      if (plVar15 == (long *)0x0) goto label_0437b5d0;
      if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
          TypeInfo_MultiplayerRoomListPopup)) {
        lVar3 = *plVar15;
        if ((*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) ==
            TypeInfo_MultiplayerRoomListPopup)) {
          (**(code **)(lVar3 + 0x288))(plVar15,*(undefined8 *)(lVar3 + 0x290));
          goto label_0437b572;
        }
      }
    }
  }
label_0437b5d5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae215 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameSet_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae215 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pIVar19 = (Il2CppObject *)0x0;
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_03 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0437b841;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,__this_03,MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_70._0_8_;
  pIVar18 = (Il2CppType *)auStack_70._8_8_;
  pIVar14 = pIStack_60;
  if (__this_10 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_05.fields._8_8_ = pIVar18,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar17,
          __this_05.fields._current = pIVar14,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), lVar3 = MethodInfo_Void_Add,
          (char)bVar9 != '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
      pIVar19 = pIVar14;
      if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
      if (*(char *)((long)pIVar14[2].monitor + 0x11) != '\0') {
        if (pIVar14[2].klass == (Il2CppClass *)0x0) goto label_0437b832;
        item = (Il2CppObject *)((pIVar14[2].klass)->_1).namespaze;
        piVar1 = &(__this_10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_10->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_0437b837;
        uVar2 = (__this_10->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_10->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_10,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
    }
label_0437b800:
    __this_06.fields._8_8_ = pIVar18;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
    __this_06.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    return;
  }
  do {
    __this_04.fields._8_8_ = pIVar18;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
    __this_04.fields._current = pIVar14;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar9 == '\0') goto label_0437b800;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_0437b821;
    pIVar19 = pIVar14;
    if (pIVar14[2].monitor == (void *)0x0) goto label_0437b826;
  } while (*(char *)((long)pIVar14[2].monitor + 0x11) == '\0');
  goto label_0437b82b;
label_0437b821:
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = pIVar14;
label_0437b826:
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0437b82b:
  if (pIVar14[2].klass == (Il2CppClass *)0x0) {
label_0437b832:
    il2cpp_runtime_helper_022b2c90();
label_0437b837:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437b841:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar3 = *plVar15;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar18;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
    __this_07.fields._current = pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_08.fields._8_8_ = pIVar18;
  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
  __this_08.fields._current = pIVar19;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar16._0_8_);
}


// UI.CreateGamePopup$$OnDeletePreset
// il2cpp: void UI_CreateGamePopup__OnDeletePreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437b900

void UI_CreateGamePopup__OnDeletePreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *item;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae214 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae214 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x90), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 == 0)) ||
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 == 0 ||
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)))) ||
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28), __this_00 == (Settings_ListSetting_T__o *)0x0
     )) {
label_0437bbdd:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe2:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe7:
    il2cpp_runtime_helper_022b2c90();
label_0437bbec:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    b = *(System_String_o **)(lVar2 + 0x18);
    pSVar5 = (System_Collections_Generic_List_object__o *)
             Settings_ListSetting_object___GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437bbdd;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar5,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar9 = (Il2CppType *)auStack_48._8_8_;
    do {
      do {
        item = pIStack_38;
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_01.fields._current = item;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pIVar10 = item;
        if ((char)bVar4 == '\0') goto label_0437bba5;
        if (item == (Il2CppObject *)0x0) {
label_0437bbd3:
          il2cpp_runtime_helper_022b2c90();
label_0437bbd8:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbdd;
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((item->klass->_2).naturalAligment < bVar1) ||
           ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
          il2cpp_runtime_helper_022b2fd0(item);
          pIVar10 = item;
label_0437bbce:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbd3;
        }
        if (item[2].klass == (Il2CppClass *)0x0) goto label_0437bbce;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((item[2].klass)->_1).namespaze,b,(MethodInfo *)0x0);
        pIStack_38 = pIVar10;
      } while ((char)bVar4 == '\0');
      if (item[2].monitor == (void *)0x0) goto label_0437bbd8;
    } while (*(char *)((long)item[2].monitor + 0x11) != '\0');
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (lVar2 == 0) goto label_0437bbe2;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto label_0437bbe7;
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 == 0) goto label_0437bbec;
    pSVar5 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x18);
    if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar5,item,MethodInfo_Boolean_Remove);
      plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
label_0437bba5:
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      goto label_0437bbf6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0437bbf6:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.CreateGamePopup$$GetPresetDisallowedDelete
// il2cpp: System_Collections_Generic_List_string__o* UI_CreateGamePopup__GetPresetDisallowedDelete (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437b5e0

System_Collections_Generic_List_string__o *
UI_CreateGamePopup__GetPresetDisallowedDelete(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *item;
  System_String_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this_06;
  Il2CppObject *pIVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (g_data_057ae215 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameSet_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae215 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_06 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0437b841;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,__this_00,MethodInfo_List_1_T_Enumerator_Settings_InGameSet_GetEnumerator);
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar10 = (Il2CppType *)local_38._8_8_;
  pIVar6 = local_28;
  if (__this_06 != (System_Collections_Generic_List_string__o *)0x0) {
    while (__this_02.fields._8_8_ = pIVar10,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
          __this_02.fields._current = pIVar6,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), lVar3 = MethodInfo_Void_Add,
          (char)bVar5 != '\0') {
      if (pIVar6 == (Il2CppObject *)0x0) goto label_0437b821;
      pIVar11 = pIVar6;
      if (pIVar6[2].monitor == (void *)0x0) goto label_0437b826;
      if (*(char *)((long)pIVar6[2].monitor + 0x11) != '\0') {
        if (pIVar6[2].klass == (Il2CppClass *)0x0) goto label_0437b832;
        item = (System_String_o *)((pIVar6[2].klass)->_1).namespaze;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_06->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_0437b837;
        uVar2 = (__this_06->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_06->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
label_0437b800:
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_03.fields._current = pIVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    return __this_06;
  }
  do {
    __this_01.fields._8_8_ = pIVar10;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_01.fields._current = pIVar6;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar5 == '\0') goto label_0437b800;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_0437b821;
    pIVar11 = pIVar6;
    if (pIVar6[2].monitor == (void *)0x0) goto label_0437b826;
  } while (*(char *)((long)pIVar6[2].monitor + 0x11) == '\0');
  goto label_0437b82b;
label_0437b821:
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = pIVar6;
label_0437b826:
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0437b82b:
  if (pIVar6[2].klass == (Il2CppClass *)0x0) {
label_0437b832:
    il2cpp_runtime_helper_022b2c90();
label_0437b837:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437b841:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar3 == 0) {
      return __this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_05.fields._8_8_ = pIVar10;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_05.fields._current = pIVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar8._0_8_);
}


// UI.CreateGamePopup$$OnLoadPreset
// il2cpp: void UI_CreateGamePopup__OnLoadPreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437bcf0

void UI_CreateGamePopup__OnLoadPreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_05;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae216 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae216 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 != 0 &&
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)))) &&
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28), __this_00 != (Settings_ListSetting_T__o *)0x0
     )) {
    b = *(System_String_o **)(lVar2 + 0x18);
    __this_05 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting_object___GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_05,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar8 = (Il2CppType *)auStack_48._8_8_;
      do {
        pIVar10 = pIStack_38;
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_01.fields._current = pIVar10;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pIVar9 = pIVar10;
        if ((char)bVar4 == '\0') goto label_0437bf7c;
        if (pIVar10 == (Il2CppObject *)0x0) {
label_0437bfaa:
          il2cpp_runtime_helper_022b2c90();
          pIVar9 = pIVar10;
          goto label_0437bfaf;
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((pIVar10->klass->_2).naturalAligment < bVar1) ||
           ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
          il2cpp_runtime_helper_022b2fd0(pIVar10);
label_0437bfa5:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bfaa;
        }
        if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437bfa5;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((pIVar10[2].klass)->_1).namespaze,b,(MethodInfo *)0x0);
        pIStack_38 = pIVar9;
      } while ((char)bVar4 == '\0');
      plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x1c8))(plVar5,pIVar10,*(undefined8 *)(*plVar5 + 0x1d0));
        (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource);
        (__this->fields)._cachedModeSettings =
             (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings);
        (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSelectionKey);
        (__this->fields)._cachedAddonSettings =
             (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSettings);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
label_0437bf7c:
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = pIVar9;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      goto label_0437bfb4;
    }
  }
label_0437bfaf:
  il2cpp_runtime_helper_022b2c90();
label_0437bfb4:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_04.fields._current = pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.CreateGamePopup$$OnSavePreset
// il2cpp: void UI_CreateGamePopup__OnSavePreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c060

void UI_CreateGamePopup__OnSavePreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *pSVar3;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_06;
  Settings_InGameSet_o *__this_07;
  long *plVar5;
  long *unaff_R12;
  Il2CppClass **unaff_R13;
  System_String_o *unaff_R15;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae217 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Attempting to overwrite preset.");
    g_data_057ae217 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar2 == 0) goto label_0437c476;
  lVar2 = *(long *)(lVar2 + 0x90);
  if (lVar2 == 0) goto label_0437c476;
  lVar2 = *(long *)(lVar2 + 0x138);
  if (lVar2 == 0) goto label_0437c476;
  unaff_R15 = *(System_String_o **)(lVar2 + 0x18);
  bVar4 = System_String__op_Equality
                    (unaff_R15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    unaff_R12 = &TypeInfo_SettingsManager;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (lVar2 == 0) goto label_0437c476;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto label_0437c476;
    pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
    if (pSVar3 == (Settings_ListSetting_T__o *)0x0) goto label_0437c476;
    __this_06 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting_object___GetItems(pSVar3,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437c476;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_06,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    unaff_R13 = &TypeInfo_InGameSet;
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    do {
      pIVar10 = pIStack_38;
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_01.fields._current = pIVar10;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        goto label_0437c314;
      }
      if (pIVar10 == (Il2CppObject *)0x0) goto label_0437c471;
      bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
      if (((pIVar10->klass->_2).naturalAligment < bVar1) ||
         ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
        il2cpp_runtime_helper_022b2fd0(pIVar10);
label_0437c46c:
        il2cpp_runtime_helper_022b2c90();
label_0437c471:
        il2cpp_runtime_helper_022b2c90();
        pIVar9 = pIVar10;
        goto label_0437c476;
      }
      if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437c46c;
      pIVar9 = pIVar10;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)((pIVar10[2].klass)->_1).namespaze,unaff_R15,(MethodInfo *)0x0);
      pIStack_38 = pIVar9;
    } while ((char)bVar4 == '\0');
    if (pIVar10[2].monitor == (void *)0x0) goto label_0437c47b;
    if (*(char *)((long)pIVar10[2].monitor + 0x11) == '\0') {
      (*pIVar10->klass->vtable[9].methodPtr)
                (pIVar10,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                 pIVar10->klass->vtable[9].method);
      if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437c480;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pIVar10[2].klass,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Value);
      plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar5 == (long *)0x0) {
        do {
          auVar6 = il2cpp_runtime_helper_022b2c90();
          if (auVar6._8_4_ != 1) {
label_0437c525:
            __this_05.fields._8_8_ = pIVar8;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_05.fields._current = pIVar9;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            _Unwind_Resume(auVar6._0_8_);
          }
          plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
          lVar2 = *plVar5;
          __cxa_end_catch();
          __this_04.fields._8_8_ = pIVar8;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_04.fields._current = pIVar9;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pIVar10 = pIVar9;
          if (lVar2 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar2);
            goto label_0437c525;
          }
label_0437c314:
          __this_07 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(*unaff_R13);
          Settings_InGameSet___ctor(__this_07,(MethodInfo *)0x0);
          pIVar9 = pIVar10;
          if (__this_07 != (Settings_InGameSet_o *)0x0) {
            (*(__this_07->klass->vtable)._9_Copy.methodPtr)
                      (__this_07,*(undefined8 *)(*(long *)(*unaff_R12 + 0xb8) + 0x58),
                       (__this_07->klass->vtable)._9_Copy.method);
            __this_00 = (__this_07->fields).Name;
            pIVar9 = pIVar10;
            if (__this_00 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Value);
              lVar2 = *(long *)(*(long *)(*unaff_R12 + 0xb8) + 0x40);
              pIVar9 = pIVar10;
              if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
                 (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
                 pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
                Settings_ListSetting_object___AddItem(pSVar3,(Settings_BaseSetting_o *)__this_07,MethodInfo_Void_AddItem)
                ;
                plVar5 = *(long **)(*(long *)(*unaff_R12 + 0xb8) + 0x40);
                pIVar9 = pIVar10;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
                  return;
                }
              }
            }
          }
label_0437c476:
          il2cpp_runtime_helper_022b2c90();
label_0437c47b:
          il2cpp_runtime_helper_022b2c90();
label_0437c480:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    }
    else {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__Log("Attempting to overwrite preset.",(MethodInfo *)0x0);
    }
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  return;
}


// UI.CreateGamePopup$$OnImportPreset
// il2cpp: void UI_CreateGamePopup__OnImportPreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c560

void UI_CreateGamePopup__OnImportPreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  long *plVar2;
  char cVar3;
  long lVar4;
  Settings_InGameSet_o *__this_01;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  UI_ImportPopup_o *unaff_R14;
  undefined1 auVar8 [12];
  
  if (g_data_057ae218 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae218 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0437c703;
label_0437c58f:
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 == 0) goto label_0437c71f;
label_0437c5a3:
    unaff_R14 = *(UI_ImportPopup_o **)(lVar4 + 0x70);
    if ((unaff_R14 == (UI_ImportPopup_o *)0x0) ||
       (pSVar1 = (unaff_R14->fields).ImportSetting, pSVar1 == (Settings_StringSetting_o *)0x0))
    goto label_0437c71f;
    pSVar6 = (pSVar1->fields)._value;
    __this_01 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
    Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_0437c724;
    (*(__this_01->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this_01,pSVar6,(__this_01->klass->vtable)._8_DeserializeFromJsonString.method);
    __this_00 = (__this_01->fields).Preset;
    if (__this_00 != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_Void_set_Value);
      plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x1c8))(plVar2,__this_01,*(undefined8 *)(*plVar2 + 0x1d0));
        (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource);
        (__this->fields)._cachedModeSettings =
             (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
        (*(unaff_R14->klass->vtable)._22_Hide.methodPtr)(unaff_R14,(unaff_R14->klass->vtable)._22_Hide.method)
        ;
        return;
      }
      goto label_0437c72e;
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0437c58f;
label_0437c703:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 != 0) goto label_0437c5a3;
label_0437c71f:
    il2cpp_runtime_helper_022b2c90();
label_0437c724:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437c72e:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ != 1) {
    _Unwind_Resume(auVar8._0_8_);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(auVar8._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
  if (cVar3 != '\0') {
    __cxa_end_catch();
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid preset.");
    UI_ImportPopup__ShowError(unaff_R14,pSVar6,(MethodInfo *)0x0);
    return;
  }
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = *puVar5;
  __cxa_throw(puVar7,&PTR_PTR_05215060,0);
}


// UI.CreateGamePopup$$.ctor
// il2cpp: void UI_CreateGamePopup___ctor (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c800

void UI_CreateGamePopup___ctor(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae219 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CreateGamePopup");
    g_data_057ae219 = '\x01';
  }
  (__this->fields).LocaleCategory = "CreateGamePopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_0
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_0 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c850

void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_0(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_05;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae216 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae216 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 != 0 &&
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)))) &&
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28), __this_00 != (Settings_ListSetting_T__o *)0x0
     )) {
    b = *(System_String_o **)(lVar2 + 0x18);
    __this_05 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting_object___GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_05,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar8 = (Il2CppType *)auStack_48._8_8_;
      do {
        pIVar10 = pIStack_38;
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_01.fields._current = pIVar10;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pIVar9 = pIVar10;
        if ((char)bVar4 == '\0') goto label_0437bf7c;
        if (pIVar10 == (Il2CppObject *)0x0) {
label_0437bfaa:
          il2cpp_runtime_helper_022b2c90();
          pIVar9 = pIVar10;
          goto label_0437bfaf;
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((pIVar10->klass->_2).naturalAligment < bVar1) ||
           ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
          il2cpp_runtime_helper_022b2fd0(pIVar10);
label_0437bfa5:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bfaa;
        }
        if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437bfa5;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((pIVar10[2].klass)->_1).namespaze,b,(MethodInfo *)0x0);
        pIStack_38 = pIVar9;
      } while ((char)bVar4 == '\0');
      plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x1c8))(plVar5,pIVar10,*(undefined8 *)(*plVar5 + 0x1d0));
        (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource);
        (__this->fields)._cachedModeSettings =
             (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings);
        (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSelectionKey);
        (__this->fields)._cachedAddonSettings =
             (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedAddonSettings);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
label_0437bf7c:
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = pIVar9;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      goto label_0437bfb4;
    }
  }
label_0437bfaf:
  il2cpp_runtime_helper_022b2c90();
label_0437bfb4:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_04.fields._current = pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_1
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_1 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c860

void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_1(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *item;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae214 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae214 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x90), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 == 0)) ||
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 == 0 ||
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)))) ||
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28), __this_00 == (Settings_ListSetting_T__o *)0x0
     )) {
label_0437bbdd:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe2:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe7:
    il2cpp_runtime_helper_022b2c90();
label_0437bbec:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    b = *(System_String_o **)(lVar2 + 0x18);
    pSVar5 = (System_Collections_Generic_List_object__o *)
             Settings_ListSetting_object___GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437bbdd;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar5,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar9 = (Il2CppType *)auStack_48._8_8_;
    do {
      do {
        item = pIStack_38;
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_01.fields._current = item;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pIVar10 = item;
        if ((char)bVar4 == '\0') goto label_0437bba5;
        if (item == (Il2CppObject *)0x0) {
label_0437bbd3:
          il2cpp_runtime_helper_022b2c90();
label_0437bbd8:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbdd;
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((item->klass->_2).naturalAligment < bVar1) ||
           ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
          il2cpp_runtime_helper_022b2fd0(item);
          pIVar10 = item;
label_0437bbce:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbd3;
        }
        if (item[2].klass == (Il2CppClass *)0x0) goto label_0437bbce;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((item[2].klass)->_1).namespaze,b,(MethodInfo *)0x0);
        pIStack_38 = pIVar10;
      } while ((char)bVar4 == '\0');
      if (item[2].monitor == (void *)0x0) goto label_0437bbd8;
    } while (*(char *)((long)item[2].monitor + 0x11) != '\0');
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (lVar2 == 0) goto label_0437bbe2;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto label_0437bbe7;
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 == 0) goto label_0437bbec;
    pSVar5 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x18);
    if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar5,item,MethodInfo_Boolean_Remove);
      plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
label_0437bba5:
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      goto label_0437bbf6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0437bbf6:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_2
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_2 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c870

void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_2(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *pSVar3;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_06;
  Settings_InGameSet_o *__this_07;
  long *plVar5;
  long *unaff_R12;
  Il2CppClass **unaff_R13;
  System_String_o *unaff_R15;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae217 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Attempting to overwrite preset.");
    g_data_057ae217 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar2 == 0) goto label_0437c476;
  lVar2 = *(long *)(lVar2 + 0x90);
  if (lVar2 == 0) goto label_0437c476;
  lVar2 = *(long *)(lVar2 + 0x138);
  if (lVar2 == 0) goto label_0437c476;
  unaff_R15 = *(System_String_o **)(lVar2 + 0x18);
  bVar4 = System_String__op_Equality
                    (unaff_R15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    unaff_R12 = &TypeInfo_SettingsManager;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (lVar2 == 0) goto label_0437c476;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto label_0437c476;
    pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
    if (pSVar3 == (Settings_ListSetting_T__o *)0x0) goto label_0437c476;
    __this_06 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting_object___GetItems(pSVar3,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437c476;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_06,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    unaff_R13 = &TypeInfo_InGameSet;
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    do {
      pIVar10 = pIStack_38;
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_01.fields._current = pIVar10;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        goto label_0437c314;
      }
      if (pIVar10 == (Il2CppObject *)0x0) goto label_0437c471;
      bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
      if (((pIVar10->klass->_2).naturalAligment < bVar1) ||
         ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
        il2cpp_runtime_helper_022b2fd0(pIVar10);
label_0437c46c:
        il2cpp_runtime_helper_022b2c90();
label_0437c471:
        il2cpp_runtime_helper_022b2c90();
        pIVar9 = pIVar10;
        goto label_0437c476;
      }
      if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437c46c;
      pIVar9 = pIVar10;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)((pIVar10[2].klass)->_1).namespaze,unaff_R15,(MethodInfo *)0x0);
      pIStack_38 = pIVar9;
    } while ((char)bVar4 == '\0');
    if (pIVar10[2].monitor == (void *)0x0) goto label_0437c47b;
    if (*(char *)((long)pIVar10[2].monitor + 0x11) == '\0') {
      (*pIVar10->klass->vtable[9].methodPtr)
                (pIVar10,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                 pIVar10->klass->vtable[9].method);
      if (pIVar10[2].klass == (Il2CppClass *)0x0) goto label_0437c480;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pIVar10[2].klass,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Value);
      plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar5 == (long *)0x0) {
        do {
          auVar6 = il2cpp_runtime_helper_022b2c90();
          if (auVar6._8_4_ != 1) {
label_0437c525:
            __this_05.fields._8_8_ = pIVar8;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_05.fields._current = pIVar9;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            _Unwind_Resume(auVar6._0_8_);
          }
          plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
          lVar2 = *plVar5;
          __cxa_end_catch();
          __this_04.fields._8_8_ = pIVar8;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_04.fields._current = pIVar9;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pIVar10 = pIVar9;
          if (lVar2 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar2);
            goto label_0437c525;
          }
label_0437c314:
          __this_07 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(*unaff_R13);
          Settings_InGameSet___ctor(__this_07,(MethodInfo *)0x0);
          pIVar9 = pIVar10;
          if (__this_07 != (Settings_InGameSet_o *)0x0) {
            (*(__this_07->klass->vtable)._9_Copy.methodPtr)
                      (__this_07,*(undefined8 *)(*(long *)(*unaff_R12 + 0xb8) + 0x58),
                       (__this_07->klass->vtable)._9_Copy.method);
            __this_00 = (__this_07->fields).Name;
            pIVar9 = pIVar10;
            if (__this_00 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Value);
              lVar2 = *(long *)(*(long *)(*unaff_R12 + 0xb8) + 0x40);
              pIVar9 = pIVar10;
              if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
                 (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
                 pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
                Settings_ListSetting_object___AddItem(pSVar3,(Settings_BaseSetting_o *)__this_07,MethodInfo_Void_AddItem)
                ;
                plVar5 = *(long **)(*(long *)(*unaff_R12 + 0xb8) + 0x40);
                pIVar9 = pIVar10;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
                  return;
                }
              }
            }
          }
label_0437c476:
          il2cpp_runtime_helper_022b2c90();
label_0437c47b:
          il2cpp_runtime_helper_022b2c90();
label_0437c480:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    }
    else {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__Log("Attempting to overwrite preset.",(MethodInfo *)0x0);
    }
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_3
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_3 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c880

void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_3(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *item;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae214 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InGameSet_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae214 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x90), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 == 0)) ||
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 == 0 ||
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)))) ||
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28), __this_00 == (Settings_ListSetting_T__o *)0x0
     )) {
label_0437bbdd:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe2:
    il2cpp_runtime_helper_022b2c90();
label_0437bbe7:
    il2cpp_runtime_helper_022b2c90();
label_0437bbec:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    b = *(System_String_o **)(lVar2 + 0x18);
    pSVar5 = (System_Collections_Generic_List_object__o *)
             Settings_ListSetting_object___GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting_GetItems);
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437bbdd;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar5,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar9 = (Il2CppType *)auStack_48._8_8_;
    do {
      do {
        item = pIStack_38;
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_01.fields._current = item;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pIVar10 = item;
        if ((char)bVar4 == '\0') goto label_0437bba5;
        if (item == (Il2CppObject *)0x0) {
label_0437bbd3:
          il2cpp_runtime_helper_022b2c90();
label_0437bbd8:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbdd;
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((item->klass->_2).naturalAligment < bVar1) ||
           ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
          il2cpp_runtime_helper_022b2fd0(item);
          pIVar10 = item;
label_0437bbce:
          il2cpp_runtime_helper_022b2c90();
          goto label_0437bbd3;
        }
        if (item[2].klass == (Il2CppClass *)0x0) goto label_0437bbce;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((item[2].klass)->_1).namespaze,b,(MethodInfo *)0x0);
        pIStack_38 = pIVar10;
      } while ((char)bVar4 == '\0');
      if (item[2].monitor == (void *)0x0) goto label_0437bbd8;
    } while (*(char *)((long)item[2].monitor + 0x11) != '\0');
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (lVar2 == 0) goto label_0437bbe2;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto label_0437bbe7;
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 == 0) goto label_0437bbec;
    pSVar5 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x18);
    if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar5,item,MethodInfo_Boolean_Remove);
      plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
label_0437bba5:
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      goto label_0437bbf6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0437bbf6:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_4
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_4 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x437c890

void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_4(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  long *plVar2;
  char cVar3;
  long lVar4;
  Settings_InGameSet_o *__this_01;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  UI_ImportPopup_o *unaff_R14;
  undefined1 auVar8 [12];
  
  if (g_data_057ae218 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae218 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0437c703;
label_0437c58f:
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 == 0) goto label_0437c71f;
label_0437c5a3:
    unaff_R14 = *(UI_ImportPopup_o **)(lVar4 + 0x70);
    if ((unaff_R14 == (UI_ImportPopup_o *)0x0) ||
       (pSVar1 = (unaff_R14->fields).ImportSetting, pSVar1 == (Settings_StringSetting_o *)0x0))
    goto label_0437c71f;
    pSVar6 = (pSVar1->fields)._value;
    __this_01 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
    Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_0437c724;
    (*(__this_01->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this_01,pSVar6,(__this_01->klass->vtable)._8_DeserializeFromJsonString.method);
    __this_00 = (__this_01->fields).Preset;
    if (__this_00 != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_Void_set_Value);
      plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x1c8))(plVar2,__this_01,*(undefined8 *)(*plVar2 + 0x1d0));
        (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedLogicSource);
        (__this->fields)._cachedModeSettings =
             (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedModeSettings);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
        (*(unaff_R14->klass->vtable)._22_Hide.methodPtr)(unaff_R14,(unaff_R14->klass->vtable)._22_Hide.method)
        ;
        return;
      }
      goto label_0437c72e;
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0437c58f;
label_0437c703:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 != 0) goto label_0437c5a3;
label_0437c71f:
    il2cpp_runtime_helper_022b2c90();
label_0437c724:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_0437c72e:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ != 1) {
    _Unwind_Resume(auVar8._0_8_);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(auVar8._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
  if (cVar3 != '\0') {
    __cxa_end_catch();
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid preset.");
    UI_ImportPopup__ShowError(unaff_R14,pSVar6,(MethodInfo *)0x0);
    return;
  }
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = *puVar5;
  __cxa_throw(puVar7,&PTR_PTR_05215060,0);
}



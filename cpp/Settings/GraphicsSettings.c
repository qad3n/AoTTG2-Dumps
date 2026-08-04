// Type: Settings.GraphicsSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/GraphicsSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// --------------------------------

// Settings.GraphicsSettings$$get_FileName
// il2cpp: System_String_o* Settings_GraphicsSettings__get_FileName (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x4087880

System_String_o *
Settings_GraphicsSettings__get_FileName(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Graphics.json");
    g_data_057ac3e3 = '\x01';
  }
  return "Graphics.json";
}


// Settings.GraphicsSettings$$Apply
// il2cpp: void Settings_GraphicsSettings__Apply (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x40878b0

void Settings_GraphicsSettings__Apply(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  UnityEngine_Object_o *x;
  uint uVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  System_Collections_Generic_List_BasePopup__o *pSVar11;
  UI_TooltipPopup_o *__this_00;
  UI_MessagePopup_o *__this_01;
  Characters_BaseCharacter_o *__this_02;
  UI_ExternalLinkPopup_o *__this_03;
  UI_ColorPickPopup_o *__this_04;
  Settings_GeneralInputSettings_o *__this_05;
  UI_Vector3Popup_o *pUVar12;
  UI_ExportPopup_o *pUVar13;
  UI_ImportPopup_o *pUVar14;
  UI_NewImportPopup_o *pUVar15;
  Characters_BaseTitan_o *pCVar16;
  UI_SetNamePopup_o *pUVar17;
  UI_SelectListPopup_o *pUVar18;
  UI_EmoteHandler_o *pUVar19;
  UI_ItemHandler_o *__this_06;
  UI_CharacterInfoHandler_o *__this_07;
  UI_HUDBottomHandler_o *__this_08;
  UI_StylebarHandler_o *__this_09;
  Settings_BoolSetting_o *pSVar20;
  UI_ChatPanel_o *__this_10;
  UI_FeedPanel_o *__this_11;
  UI_VoiceChatPanel_o *pUVar21;
  Settings_IntSetting_o *pSVar22;
  UI_KDRPanel_o *pUVar23;
  UI_Telemetry_o *pUVar24;
  UI_BasePopup_o *pUVar25;
  UI_InGameMenu_o *pUVar26;
  UI_InGameMenu_o *pUVar27;
  
  pUVar26 = (UI_InGameMenu_o *)__this;
  if (g_data_057ac3e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PostProcessingManager_FindFirstObjectByType_PostProcessi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pUVar26 = (UI_InGameMenu_o *)&TypeInfo_UIManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3e4 = '\x01';
  }
  pSVar22 = (__this->fields).ShadowQuality;
  if (pSVar22 == (Settings_IntSetting_o *)0x0) {
label_04087dae:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    switch((pSVar22->fields)._value) {
    case 0:
      pUVar26 = (UI_InGameMenu_o *)0x0;
      UnityEngine_QualitySettings__set_shadows(0,(MethodInfo *)0x0);
      pSVar20 = (__this->fields).VSync;
      goto joined_r0x04087a05;
    case 1:
      UnityEngine_QualitySettings__set_shadows(1,(MethodInfo *)0x0);
      UnityEngine_QualitySettings__set_shadowResolution(1,(MethodInfo *)0x0);
      pUVar26 = (UI_InGameMenu_o *)0x0;
      break;
    case 2:
      UnityEngine_QualitySettings__set_shadows(2,(MethodInfo *)0x0);
      UnityEngine_QualitySettings__set_shadowResolution(2,(MethodInfo *)0x0);
      pUVar26 = (UI_InGameMenu_o *)0x2;
      break;
    case 3:
      UnityEngine_QualitySettings__set_shadows(2,(MethodInfo *)0x0);
      UnityEngine_QualitySettings__set_shadowResolution(3,(MethodInfo *)0x0);
      pUVar26 = (UI_InGameMenu_o *)&g_data_00000004;
      break;
    default:
      goto switchD_04087986_default;
    }
    UnityEngine_QualitySettings__set_shadowCascades((int32_t)pUVar26,(MethodInfo *)0x0);
switchD_04087986_default:
    pSVar20 = (__this->fields).VSync;
joined_r0x04087a05:
    if (pSVar20 == (Settings_BoolSetting_o *)0x0) goto label_04087dae;
    bVar1 = *(byte *)((long)&(pSVar20->fields).DefaultValue + 1);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar8 = System_Convert__ToInt32_3c15f90((uint)bVar1,(MethodInfo *)0x0);
    pUVar26 = (UI_InGameMenu_o *)(ulong)uVar8;
    UnityEngine_QualitySettings__set_vSyncCount(uVar8,(MethodInfo *)0x0);
    if ((*(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) & 0xfffffffe) != 2) {
      pSVar22 = (__this->fields).MenuFPSCap;
      if (pSVar22 != (Settings_IntSetting_o *)0x0) goto label_04087a71;
      goto label_04087dae;
    }
    pSVar22 = (__this->fields).FPSCap;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_04087dae;
label_04087a71:
    uVar8 = (pSVar22->fields)._value;
    pUVar26 = (UI_InGameMenu_o *)&g_data_ffffffff;
    if (0 < (int)uVar8) {
      pUVar26 = (UI_InGameMenu_o *)(ulong)uVar8;
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__set_targetFrameRate((int32_t)pUVar26,(MethodInfo *)0x0);
    pSVar22 = (__this->fields).TextureQuality;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_04087dae;
    uVar8 = 3 - (pSVar22->fields)._value;
    pUVar26 = (UI_InGameMenu_o *)(ulong)uVar8;
    UnityEngine_QualitySettings__set_globalTextureMipmapLimit(uVar8,(MethodInfo *)0x0);
    pSVar22 = (__this->fields).AnisotropicFiltering;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_04087dae;
    UnityEngine_QualitySettings__set_anisotropicFiltering((pSVar22->fields)._value,(MethodInfo *)0x0);
    pUVar26 = (UI_InGameMenu_o *)0x0;
    UnityEngine_QualitySettings__set_antiAliasing(0,(MethodInfo *)0x0);
    pSVar22 = (__this->fields).ShadowDistance;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_04087dae;
    UnityEngine_QualitySettings__set_shadowDistance((float)(pSVar22->fields)._value,(MethodInfo *)0x0);
    pUVar26 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (pUVar26 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if ((bVar1 <= (((Settings_GraphicsSettings_c *)pUVar26->klass)->_2).naturalAligment) &&
         ((((Settings_GraphicsSettings_c *)pUVar26->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_InGameCamera)) {
        Cameras_InGameCamera__ApplyGraphicsSettings((Cameras_InGameCamera_o *)pUVar26,(MethodInfo *)0x0);
      }
    }
    pUVar27 = (UI_InGameMenu_o *)(__this->fields).ScreenResolution;
    if (pUVar27 == (UI_InGameMenu_o *)0x0) goto label_04087dae;
    iVar10 = *(int32_t *)((long)&(pUVar27->fields).m_CachedPtr + 4);
    if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar10 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar10,(MethodInfo *)0x0);
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar27,iVar10,MethodInfo_Void_set_Value);
    pSVar22 = (__this->fields).ScreenResolution;
    pUVar26 = pUVar27;
    if ((pSVar22 == (Settings_IntSetting_o *)0x0) ||
       (pSVar2 = (__this->fields).FullScreenMode, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_04087dae;
    ApplicationManagers_FullscreenHandler__Apply
              ((pSVar22->fields)._value,(pSVar2->fields)._value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar27 = (UI_InGameMenu_o *)UnityEngine_Object__FindFirstObjectByType_object_(MethodInfo_PostProcessingManager_FindFirstObjectByType_PostProcessi);
    pUVar26 = pUVar27;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar22 = (__this->fields).AmbientOcclusion;
      if ((((((pSVar22 == (Settings_IntSetting_o *)0x0) ||
             (pSVar2 = (__this->fields).Bloom, pSVar2 == (Settings_IntSetting_o *)0x0)) ||
            (pSVar3 = (__this->fields).ChromaticAberrationFX, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
           ((pSVar4 = (__this->fields).ColorGrading, pSVar4 == (Settings_IntSetting_o *)0x0 ||
            (pSVar5 = (__this->fields).AutoExposure, pSVar5 == (Settings_IntSetting_o *)0x0)))) ||
          ((pUVar26 = (UI_InGameMenu_o *)(__this->fields).DepthOfField, pUVar26 == (UI_InGameMenu_o *)0x0 ||
           ((pSVar6 = (__this->fields).MotionBlur, pSVar6 == (Settings_IntSetting_o *)0x0 ||
            (pSVar7 = (__this->fields).WaterFX, pSVar7 == (Settings_IntSetting_o *)0x0)))))) ||
         (pUVar27 == (UI_InGameMenu_o *)0x0)) goto label_04087dae;
      PostProcessingManager__ApplySettings
                ((PostProcessingManager_o *)pUVar27,(pSVar22->fields)._value,(pSVar2->fields)._value,
                 (pSVar3->fields)._value,(pSVar4->fields)._value,(pSVar5->fields)._value,
                 *(int32_t *)((long)&(pUVar26->fields).m_CachedPtr + 4),(pSVar6->fields)._value,
                 (pSVar7->fields)._value,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
      pUVar26 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      pUVar26 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (pUVar26 == (UI_InGameMenu_o *)0x0) {
      return;
    }
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((pUVar26->klass->_2).naturalAligment < bVar1) {
      return;
    }
    if ((pUVar26->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu) {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
      pUVar26 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar26 == (UI_InGameMenu_o *)0x0) goto label_04087dae;
    }
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar26->klass->_2).naturalAligment) &&
       ((pUVar26->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ApplyUISettings(pUVar26,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pUVar27 = pUVar26;
  if (g_data_057ac3e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pUVar27 = (UI_InGameMenu_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3e5 = '\x01';
  }
  pSVar11 = (pUVar26->fields)._popups;
  if (pSVar11 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_0408864c;
  switch(*(undefined4 *)((long)&(pSVar11->fields)._items + 4)) {
  case 0:
    pUVar13 = (pUVar26->fields).ExportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar13 == (UI_ExportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar13,0,MethodInfo_Void_set_Value);
    pUVar14 = (pUVar26->fields).ImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar14 == (UI_ImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,0,MethodInfo_Void_set_Value);
    pUVar17 = (pUVar26->fields).SetNamePopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar17 == (UI_SetNamePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar17,0,MethodInfo_Void_set_Value);
    pUVar18 = (pUVar26->fields).SelectListPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar18 == (UI_SelectListPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar18,0,MethodInfo_Void_set_Value);
    pUVar19 = (pUVar26->fields).EmoteHandler;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar19 == (UI_EmoteHandler_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar19,0,MethodInfo_Void_set_Value);
    pUVar15 = (pUVar26->fields).NewImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar15 == (UI_NewImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar15,500,MethodInfo_Void_set_Value);
    pCVar16 = (Characters_BaseTitan_o *)(pUVar26->fields).KeybindPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pCVar16 == (Characters_BaseTitan_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pCVar16,0,MethodInfo_Void_set_Value);
    pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).TopLeftHud;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
    pUVar25 = (pUVar26->fields)._createGamePopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar25 == (UI_BasePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
    pUVar23 = (pUVar26->fields).KDRPanel;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar23 == (UI_KDRPanel_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar23,0,MethodInfo_Void_set_Value);
    pUVar25 = (pUVar26->fields)._settingsPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar25 == (UI_BasePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
    pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).KDRReference;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
    pUVar21 = (pUVar26->fields).VoiceChatPanel;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar21 == (UI_VoiceChatPanel_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar21,0,MethodInfo_Void_set_Value);
    pUVar25 = (pUVar26->fields)._pausePopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar25 == (UI_BasePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,1,MethodInfo_Void_set_Value);
    pUVar24 = (pUVar26->fields).TelemetryPanel;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar24 == (UI_Telemetry_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar24,0,MethodInfo_Void_set_Value);
    pUVar25 = (pUVar26->fields)._characterPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar25 == (UI_BasePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pUVar25,0,MethodInfo_Void_set_Value);
    pUVar12 = (pUVar26->fields).Vector3Popup;
    iVar10 = 1000;
    if (pUVar12 == (UI_Vector3Popup_o *)0x0) {
      pUVar27 = (UI_InGameMenu_o *)0x0;
      goto label_0408864c;
    }
    goto label_04088636;
  case 1:
    pUVar13 = (pUVar26->fields).ExportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar13 != (UI_ExportPopup_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar13,3,MethodInfo_Void_set_Value);
      pUVar14 = (pUVar26->fields).ImportPopup;
      pUVar27 = (UI_InGameMenu_o *)0x0;
      if (pUVar14 != (UI_ImportPopup_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,0,MethodInfo_Void_set_Value);
        pUVar17 = (pUVar26->fields).SetNamePopup;
        pUVar27 = (UI_InGameMenu_o *)0x0;
        if (pUVar17 != (UI_SetNamePopup_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar17,0,MethodInfo_Void_set_Value);
          pUVar18 = (pUVar26->fields).SelectListPopup;
          pUVar27 = (UI_InGameMenu_o *)0x0;
          if (pUVar18 != (UI_SelectListPopup_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar18,0,MethodInfo_Void_set_Value);
            pUVar19 = (pUVar26->fields).EmoteHandler;
            pUVar27 = (UI_InGameMenu_o *)0x0;
            if (pUVar19 != (UI_EmoteHandler_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar19,1,MethodInfo_Void_set_Value);
              pUVar15 = (pUVar26->fields).NewImportPopup;
              pUVar27 = (UI_InGameMenu_o *)0x0;
              if (pUVar15 != (UI_NewImportPopup_o *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pUVar15,500,MethodInfo_Void_set_Value);
                pCVar16 = (Characters_BaseTitan_o *)(pUVar26->fields).KeybindPopup;
                pUVar27 = (UI_InGameMenu_o *)0x0;
                if (pCVar16 != (Characters_BaseTitan_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pCVar16,100,MethodInfo_Void_set_Value);
                  pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).TopLeftHud;
                  pUVar27 = (UI_InGameMenu_o *)0x0;
                  if (pSVar22 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
                    pUVar25 = (pUVar26->fields)._createGamePopup;
                    pUVar27 = (UI_InGameMenu_o *)0x0;
                    if (pUVar25 != (UI_BasePopup_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
                      pUVar23 = (pUVar26->fields).KDRPanel;
                      pUVar27 = (UI_InGameMenu_o *)0x0;
                      if (pUVar23 != (UI_KDRPanel_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pUVar23,0,MethodInfo_Void_set_Value);
                        pUVar25 = (pUVar26->fields)._settingsPopup;
                        pUVar27 = (UI_InGameMenu_o *)0x0;
                        if (pUVar25 != (UI_BasePopup_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
                          pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).KDRReference;
                          pUVar27 = (UI_InGameMenu_o *)0x0;
                          if (pSVar22 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
                            pUVar21 = (pUVar26->fields).VoiceChatPanel;
                            pUVar27 = (UI_InGameMenu_o *)0x0;
                            if (pUVar21 != (UI_VoiceChatPanel_o *)0x0) {
                              Settings_TypedSetting_int___set_Value
                                        ((Settings_TypedSetting_int__o *)pUVar21,0,MethodInfo_Void_set_Value);
                              pUVar25 = (pUVar26->fields)._pausePopup;
                              pUVar27 = (UI_InGameMenu_o *)0x0;
                              if (pUVar25 != (UI_BasePopup_o *)0x0) {
                                Settings_TypedSetting_int___set_Value
                                          ((Settings_TypedSetting_int__o *)pUVar25,1,MethodInfo_Void_set_Value);
                                pUVar24 = (pUVar26->fields).TelemetryPanel;
                                pUVar27 = (UI_InGameMenu_o *)0x0;
                                if (pUVar24 != (UI_Telemetry_o *)0x0) {
                                  Settings_TypedSetting_int___set_Value
                                            ((Settings_TypedSetting_int__o *)pUVar24,1,MethodInfo_Void_set_Value);
                                  pUVar25 = (pUVar26->fields)._characterPopup;
                                  pUVar27 = (UI_InGameMenu_o *)0x0;
                                  if (pUVar25 != (UI_BasePopup_o *)0x0) {
                                    Settings_TypedSetting_bool___set_Value
                                              ((Settings_TypedSetting_bool__o *)pUVar25,0,MethodInfo_Void_set_Value);
                                    pUVar12 = (pUVar26->fields).Vector3Popup;
                                    iVar10 = 2000;
                                    if (pUVar12 != (UI_Vector3Popup_o *)0x0) goto label_04088636;
                                    pUVar27 = (UI_InGameMenu_o *)0x0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_0408864c;
  case 2:
    pUVar13 = (pUVar26->fields).ExportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar13 != (UI_ExportPopup_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar13,3,MethodInfo_Void_set_Value);
      pUVar14 = (pUVar26->fields).ImportPopup;
      pUVar27 = (UI_InGameMenu_o *)0x0;
      if (pUVar14 != (UI_ImportPopup_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,1,MethodInfo_Void_set_Value);
        pUVar17 = (pUVar26->fields).SetNamePopup;
        pUVar27 = (UI_InGameMenu_o *)0x0;
        if (pUVar17 != (UI_SetNamePopup_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar17,1,MethodInfo_Void_set_Value);
          pUVar18 = (pUVar26->fields).SelectListPopup;
          pUVar27 = (UI_InGameMenu_o *)0x0;
          if (pUVar18 != (UI_SelectListPopup_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar18,1,MethodInfo_Void_set_Value);
            pUVar19 = (pUVar26->fields).EmoteHandler;
            pUVar27 = (UI_InGameMenu_o *)0x0;
            if (pUVar19 != (UI_EmoteHandler_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar19,2,MethodInfo_Void_set_Value);
              pUVar15 = (pUVar26->fields).NewImportPopup;
              pUVar27 = (UI_InGameMenu_o *)0x0;
              if (pUVar15 != (UI_NewImportPopup_o *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pUVar15,500,MethodInfo_Void_set_Value);
                pCVar16 = (Characters_BaseTitan_o *)(pUVar26->fields).KeybindPopup;
                pUVar27 = (UI_InGameMenu_o *)0x0;
                if (pCVar16 != (Characters_BaseTitan_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pCVar16,0xfa,MethodInfo_Void_set_Value);
                  pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).TopLeftHud;
                  pUVar27 = (UI_InGameMenu_o *)0x0;
                  if (pSVar22 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar22,1,MethodInfo_Void_set_Value);
                    pUVar25 = (pUVar26->fields)._createGamePopup;
                    pUVar27 = (UI_InGameMenu_o *)0x0;
                    if (pUVar25 != (UI_BasePopup_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
                      pUVar23 = (pUVar26->fields).KDRPanel;
                      pUVar27 = (UI_InGameMenu_o *)0x0;
                      if (pUVar23 != (UI_KDRPanel_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pUVar23,0,MethodInfo_Void_set_Value);
                        pUVar25 = (pUVar26->fields)._settingsPopup;
                        pUVar27 = (UI_InGameMenu_o *)0x0;
                        if (pUVar25 != (UI_BasePopup_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
                          pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).KDRReference;
                          pUVar27 = (UI_InGameMenu_o *)0x0;
                          if (pSVar22 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
                            pUVar21 = (pUVar26->fields).VoiceChatPanel;
                            pUVar27 = (UI_InGameMenu_o *)0x0;
                            if (pUVar21 != (UI_VoiceChatPanel_o *)0x0) {
                              Settings_TypedSetting_int___set_Value
                                        ((Settings_TypedSetting_int__o *)pUVar21,0,MethodInfo_Void_set_Value);
                              pUVar25 = (pUVar26->fields)._pausePopup;
                              pUVar27 = (UI_InGameMenu_o *)0x0;
                              if (pUVar25 != (UI_BasePopup_o *)0x0) {
                                Settings_TypedSetting_int___set_Value
                                          ((Settings_TypedSetting_int__o *)pUVar25,2,MethodInfo_Void_set_Value);
                                pUVar24 = (pUVar26->fields).TelemetryPanel;
                                pUVar27 = (UI_InGameMenu_o *)0x0;
                                if (pUVar24 != (UI_Telemetry_o *)0x0) {
                                  Settings_TypedSetting_int___set_Value
                                            ((Settings_TypedSetting_int__o *)pUVar24,1,MethodInfo_Void_set_Value);
                                  pUVar25 = (pUVar26->fields)._characterPopup;
                                  pUVar27 = (UI_InGameMenu_o *)0x0;
                                  if (pUVar25 != (UI_BasePopup_o *)0x0) {
                                    Settings_TypedSetting_bool___set_Value
                                              ((Settings_TypedSetting_bool__o *)pUVar25,0,MethodInfo_Void_set_Value);
                                    pUVar12 = (pUVar26->fields).Vector3Popup;
                                    iVar10 = 5000;
                                    if (pUVar12 != (UI_Vector3Popup_o *)0x0) goto label_04088636;
                                    pUVar27 = (UI_InGameMenu_o *)0x0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_0408864c;
  case 3:
    pUVar13 = (pUVar26->fields).ExportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar13 == (UI_ExportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar13,3,MethodInfo_Void_set_Value);
    pUVar14 = (pUVar26->fields).ImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar14 == (UI_ImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,2,MethodInfo_Void_set_Value);
    pUVar17 = (pUVar26->fields).SetNamePopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar17 == (UI_SetNamePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar17,1,MethodInfo_Void_set_Value);
    pUVar18 = (pUVar26->fields).SelectListPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar18 == (UI_SelectListPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar18,2,MethodInfo_Void_set_Value);
    pUVar19 = (pUVar26->fields).EmoteHandler;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar19 == (UI_EmoteHandler_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar19,3,MethodInfo_Void_set_Value);
    pUVar15 = (pUVar26->fields).NewImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar15 == (UI_NewImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar15,1000,MethodInfo_Void_set_Value);
    pCVar16 = (Characters_BaseTitan_o *)(pUVar26->fields).KeybindPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pCVar16 == (Characters_BaseTitan_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pCVar16,500,MethodInfo_Void_set_Value);
    pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).TopLeftHud;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    break;
  case 4:
    pUVar13 = (pUVar26->fields).ExportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar13 == (UI_ExportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar13,3,MethodInfo_Void_set_Value);
    pUVar14 = (pUVar26->fields).ImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar14 == (UI_ImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,3,MethodInfo_Void_set_Value);
    pUVar17 = (pUVar26->fields).SetNamePopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar17 == (UI_SetNamePopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar17,1,MethodInfo_Void_set_Value);
    pUVar18 = (pUVar26->fields).SelectListPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar18 == (UI_SelectListPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar18,2,MethodInfo_Void_set_Value);
    pUVar19 = (pUVar26->fields).EmoteHandler;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar19 == (UI_EmoteHandler_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar19,3,MethodInfo_Void_set_Value);
    pUVar15 = (pUVar26->fields).NewImportPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar15 == (UI_NewImportPopup_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar15,1000,MethodInfo_Void_set_Value);
    pCVar16 = (Characters_BaseTitan_o *)(pUVar26->fields).KeybindPopup;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pCVar16 == (Characters_BaseTitan_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pCVar16,1000,MethodInfo_Void_set_Value);
    pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).TopLeftHud;
    if (pSVar22 == (Settings_IntSetting_o *)0x0) {
      pUVar27 = (UI_InGameMenu_o *)0x0;
      goto label_0408864c;
    }
    break;
  default:
    return;
  }
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar22,1,MethodInfo_Void_set_Value);
  pUVar25 = (pUVar26->fields)._createGamePopup;
  pUVar27 = (UI_InGameMenu_o *)0x0;
  if (pUVar25 != (UI_BasePopup_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
    pUVar23 = (pUVar26->fields).KDRPanel;
    pUVar27 = (UI_InGameMenu_o *)0x0;
    if (pUVar23 != (UI_KDRPanel_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar23,0,MethodInfo_Void_set_Value);
      pUVar25 = (pUVar26->fields)._settingsPopup;
      pUVar27 = (UI_InGameMenu_o *)0x0;
      if (pUVar25 != (UI_BasePopup_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,0,MethodInfo_Void_set_Value);
        pSVar22 = (Settings_IntSetting_o *)(pUVar26->fields).KDRReference;
        pUVar27 = (UI_InGameMenu_o *)0x0;
        if (pSVar22 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar22,0,MethodInfo_Void_set_Value);
          pUVar21 = (pUVar26->fields).VoiceChatPanel;
          pUVar27 = (UI_InGameMenu_o *)0x0;
          if (pUVar21 != (UI_VoiceChatPanel_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar21,0,MethodInfo_Void_set_Value);
            pUVar25 = (pUVar26->fields)._pausePopup;
            pUVar27 = (UI_InGameMenu_o *)0x0;
            if (pUVar25 != (UI_BasePopup_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar25,3,MethodInfo_Void_set_Value);
              pUVar24 = (pUVar26->fields).TelemetryPanel;
              pUVar27 = (UI_InGameMenu_o *)0x0;
              if (pUVar24 != (UI_Telemetry_o *)0x0) {
                Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar24,1,MethodInfo_Void_set_Value);
                pUVar25 = (pUVar26->fields)._characterPopup;
                pUVar27 = (UI_InGameMenu_o *)0x0;
                if (pUVar25 != (UI_BasePopup_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pUVar25,0,MethodInfo_Void_set_Value);
                  pUVar12 = (pUVar26->fields).Vector3Popup;
                  iVar10 = 10000;
                  pUVar27 = (UI_InGameMenu_o *)0x0;
                  if (pUVar12 != (UI_Vector3Popup_o *)0x0) {
label_04088636:
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pUVar12,iVar10,MethodInfo_Void_set_Value);
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
label_0408864c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_BloomLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac3e6 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)pSVar11,4,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields)._popups = pSVar11;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields)._popups,pSVar11);
  __this_00 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)__this_00,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).TooltipPopup = __this_00;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).TooltipPopup);
  __this_01 = (UI_MessagePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)__this_01,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).MessagePopup = __this_01;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).MessagePopup,__this_01);
  __this_02 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)__this_02,0x90,0,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).ConfirmPopup = (UI_ConfirmPopup_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ConfirmPopup,__this_02);
  __this_03 = (UI_ExternalLinkPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)__this_03,0x3c,0,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).ExternalLinkPopup = __this_03;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ExternalLinkPopup);
  __this_04 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_04,0,(MethodInfo *)0x0);
  (pUVar27->fields).ColorPickPopup = __this_04;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ColorPickPopup,__this_04);
  pUVar26 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)pUVar26,1,(MethodInfo *)0x0);
  (pUVar27->fields).IconPickPopup = (UI_IconPickPopup_o *)pUVar26;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).IconPickPopup);
  __this_05 = (Settings_GeneralInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_05,0,(MethodInfo *)0x0);
  (pUVar27->fields).RoleSpritePickPopup = (UI_RoleSpritePickPopup_o *)__this_05;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).RoleSpritePickPopup,__this_05);
  pUVar12 = (UI_Vector3Popup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar12,10000,10,1000000,(MethodInfo *)0x0);
  (pUVar27->fields).Vector3Popup = pUVar12;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).Vector3Popup,pUVar12);
  pUVar13 = (UI_ExportPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)pUVar13,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).ExportPopup = pUVar13;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ExportPopup,pUVar13);
  pUVar14 = (UI_ImportPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)pUVar14,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).ImportPopup = pUVar14;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ImportPopup,pUVar14);
  pUVar15 = (UI_NewImportPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar15,1000,0,3000,(MethodInfo *)0x0);
  (pUVar27->fields).NewImportPopup = pUVar15;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).NewImportPopup,pUVar15);
  pCVar16 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pCVar16,1000,0,3000,(MethodInfo *)0x0);
  (pUVar27->fields).KeybindPopup = (UI_KeybindPopup_o *)pCVar16;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).KeybindPopup,pCVar16);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
  pUVar17 = (UI_SetNamePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar17,1,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).SetNamePopup = pUVar17;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).SetNamePopup,pUVar17);
  pUVar18 = (UI_SelectListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)pUVar18,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).SelectListPopup = pUVar18;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).SelectListPopup,pUVar18);
  pUVar19 = (UI_EmoteHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)pUVar19,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).EmoteHandler = pUVar19;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).EmoteHandler,pUVar19);
  __this_06 = (UI_ItemHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0
            ((Settings_IntSetting_o *)__this_06,2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (pUVar27->fields).ItemHandler = __this_06;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ItemHandler);
  __this_07 = (UI_CharacterInfoHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_07,0,(MethodInfo *)0x0);
  (pUVar27->fields).CharacterInfoHandler = __this_07;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).CharacterInfoHandler,__this_07);
  __this_08 = (UI_HUDBottomHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_08,1,(MethodInfo *)0x0);
  (pUVar27->fields).HUDBottomHandler = __this_08;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).HUDBottomHandler,__this_08);
  __this_09 = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_09,1,(MethodInfo *)0x0);
  (pUVar27->fields).StylebarHandler = __this_09;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).StylebarHandler,__this_09);
  pSVar20 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar20,1,(MethodInfo *)0x0);
  (pUVar27->fields).NapeLock = (UnityEngine_GameObject_o *)pSVar20;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).NapeLock,pSVar20);
  __this_10 = (UI_ChatPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_10,1,(MethodInfo *)0x0);
  (pUVar27->fields).ChatPanel = __this_10;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).ChatPanel,__this_10);
  __this_11 = (UI_FeedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_11,1,(MethodInfo *)0x0);
  (pUVar27->fields).FeedPanel = __this_11;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).FeedPanel);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
  pUVar21 = (UI_VoiceChatPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar21,0,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).VoiceChatPanel = pUVar21;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).VoiceChatPanel,pUVar21);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_BloomLevel);
  pSVar22 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar22,1,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).TopLeftHud = (UnityEngine_GameObject_o *)pSVar22;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).TopLeftHud);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
  pSVar22 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar22,0,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).KDRReference = (UnityEngine_GameObject_o *)pSVar22;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).KDRReference);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
  pUVar23 = (UI_KDRPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar23,0,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).KDRPanel = pUVar23;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).KDRPanel,pUVar23);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
  pUVar24 = (UI_Telemetry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar24,1,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields).TelemetryPanel = pUVar24;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields).TelemetryPanel);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
  pUVar25 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar25,0,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields)._settingsPopup = pUVar25;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields)._settingsPopup);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
  pUVar25 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar25,0,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields)._createGamePopup = pUVar25;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields)._createGamePopup,pUVar25);
  iVar10 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
  pUVar25 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar25,3,0,iVar10,(MethodInfo *)0x0);
  (pUVar27->fields)._pausePopup = pUVar25;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields)._pausePopup);
  pUVar25 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)pUVar25,0,(MethodInfo *)0x0);
  (pUVar27->fields)._characterPopup = pUVar25;
  il2cpp_runtime_helper_022b4080(&(pUVar27->fields)._characterPopup);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)pUVar27,(MethodInfo *)0x0)
  ;
  return;
}


// Settings.GraphicsSettings$$OnSelectPreset
// il2cpp: void Settings_GraphicsSettings__OnSelectPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x4087dc0

void Settings_GraphicsSettings__OnSelectPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_GraphicsSettings_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ac3e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_00 = (Settings_GraphicsSettings_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3e5 = '\x01';
  }
  pSVar2 = (__this->fields).PresetQuality;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
  switch((pSVar2->fields)._value) {
  case 0:
    pSVar2 = (__this->fields).TextureQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).MotionBlur;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).DepthOfField;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ChromaticAberrationFX;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AmbientOcclusion;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WaterFX;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar3 = (__this->fields).HDR;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).RenderDistance;
    iVar1 = 1000;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      __this_00 = (Settings_GraphicsSettings_o *)0x0;
      goto label_0408864c;
    }
    goto label_04088636;
  case 1:
    pSVar2 = (__this->fields).TextureQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
      pSVar2 = (__this->fields).ShadowQuality;
      __this_00 = (Settings_GraphicsSettings_o *)0x0;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
        pSVar2 = (__this->fields).AntiAliasing;
        __this_00 = (Settings_GraphicsSettings_o *)0x0;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
          pSVar2 = (__this->fields).AnisotropicFiltering;
          __this_00 = (Settings_GraphicsSettings_o *)0x0;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
            pSVar2 = (__this->fields).WeatherEffects;
            __this_00 = (Settings_GraphicsSettings_o *)0x0;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
              pSVar2 = (__this->fields).ShadowDistance;
              __this_00 = (Settings_GraphicsSettings_o *)0x0;
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value)
                ;
                pSVar2 = (__this->fields).LightDistance;
                __this_00 = (Settings_GraphicsSettings_o *)0x0;
                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar2,100,MethodInfo_Void_set_Value);
                  pSVar2 = (__this->fields).Bloom;
                  __this_00 = (Settings_GraphicsSettings_o *)0x0;
                  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                    pSVar2 = (__this->fields).MotionBlur;
                    __this_00 = (Settings_GraphicsSettings_o *)0x0;
                    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                      pSVar2 = (__this->fields).ColorGrading;
                      __this_00 = (Settings_GraphicsSettings_o *)0x0;
                      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                        pSVar2 = (__this->fields).DepthOfField;
                        __this_00 = (Settings_GraphicsSettings_o *)0x0;
                        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                          pSVar2 = (__this->fields).ChromaticAberrationFX;
                          __this_00 = (Settings_GraphicsSettings_o *)0x0;
                          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                            pSVar2 = (__this->fields).AmbientOcclusion;
                            __this_00 = (Settings_GraphicsSettings_o *)0x0;
                            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                              Settings_TypedSetting_int___set_Value
                                        ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                              pSVar2 = (__this->fields).WaterFX;
                              __this_00 = (Settings_GraphicsSettings_o *)0x0;
                              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                                Settings_TypedSetting_int___set_Value
                                          ((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
                                pSVar2 = (__this->fields).AutoExposure;
                                __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                                  Settings_TypedSetting_int___set_Value
                                            ((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
                                  pSVar3 = (__this->fields).HDR;
                                  __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                  if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                                    Settings_TypedSetting_bool___set_Value
                                              ((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_Void_set_Value);
                                    pSVar2 = (__this->fields).RenderDistance;
                                    iVar1 = 2000;
                                    if (pSVar2 != (Settings_IntSetting_o *)0x0) goto label_04088636;
                                    __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_0408864c;
  case 2:
    pSVar2 = (__this->fields).TextureQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
      pSVar2 = (__this->fields).ShadowQuality;
      __this_00 = (Settings_GraphicsSettings_o *)0x0;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
        pSVar2 = (__this->fields).AntiAliasing;
        __this_00 = (Settings_GraphicsSettings_o *)0x0;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
          pSVar2 = (__this->fields).AnisotropicFiltering;
          __this_00 = (Settings_GraphicsSettings_o *)0x0;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
            pSVar2 = (__this->fields).WeatherEffects;
            __this_00 = (Settings_GraphicsSettings_o *)0x0;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
              pSVar2 = (__this->fields).ShadowDistance;
              __this_00 = (Settings_GraphicsSettings_o *)0x0;
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value)
                ;
                pSVar2 = (__this->fields).LightDistance;
                __this_00 = (Settings_GraphicsSettings_o *)0x0;
                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar2,0xfa,MethodInfo_Void_set_Value);
                  pSVar2 = (__this->fields).Bloom;
                  __this_00 = (Settings_GraphicsSettings_o *)0x0;
                  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
                    pSVar2 = (__this->fields).MotionBlur;
                    __this_00 = (Settings_GraphicsSettings_o *)0x0;
                    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                      pSVar2 = (__this->fields).ColorGrading;
                      __this_00 = (Settings_GraphicsSettings_o *)0x0;
                      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                        pSVar2 = (__this->fields).DepthOfField;
                        __this_00 = (Settings_GraphicsSettings_o *)0x0;
                        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                          pSVar2 = (__this->fields).ChromaticAberrationFX;
                          __this_00 = (Settings_GraphicsSettings_o *)0x0;
                          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                            pSVar2 = (__this->fields).AmbientOcclusion;
                            __this_00 = (Settings_GraphicsSettings_o *)0x0;
                            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                              Settings_TypedSetting_int___set_Value
                                        ((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
                              pSVar2 = (__this->fields).WaterFX;
                              __this_00 = (Settings_GraphicsSettings_o *)0x0;
                              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                                Settings_TypedSetting_int___set_Value
                                          ((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
                                pSVar2 = (__this->fields).AutoExposure;
                                __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                                  Settings_TypedSetting_int___set_Value
                                            ((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
                                  pSVar3 = (__this->fields).HDR;
                                  __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                  if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                                    Settings_TypedSetting_bool___set_Value
                                              ((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_Void_set_Value);
                                    pSVar2 = (__this->fields).RenderDistance;
                                    iVar1 = 5000;
                                    if (pSVar2 != (Settings_IntSetting_o *)0x0) goto label_04088636;
                                    __this_00 = (Settings_GraphicsSettings_o *)0x0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_0408864c;
  case 3:
    pSVar2 = (__this->fields).TextureQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    break;
  case 4:
    pSVar2 = (__this->fields).TextureQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_0408864c;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      __this_00 = (Settings_GraphicsSettings_o *)0x0;
      goto label_0408864c;
    }
    break;
  default:
    return;
  }
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
  pSVar2 = (__this->fields).MotionBlur;
  __this_00 = (Settings_GraphicsSettings_o *)0x0;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    __this_00 = (Settings_GraphicsSettings_o *)0x0;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
      pSVar2 = (__this->fields).DepthOfField;
      __this_00 = (Settings_GraphicsSettings_o *)0x0;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
        pSVar2 = (__this->fields).ChromaticAberrationFX;
        __this_00 = (Settings_GraphicsSettings_o *)0x0;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
          pSVar2 = (__this->fields).AmbientOcclusion;
          __this_00 = (Settings_GraphicsSettings_o *)0x0;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
            pSVar2 = (__this->fields).WaterFX;
            __this_00 = (Settings_GraphicsSettings_o *)0x0;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
              pSVar2 = (__this->fields).AutoExposure;
              __this_00 = (Settings_GraphicsSettings_o *)0x0;
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
                pSVar3 = (__this->fields).HDR;
                __this_00 = (Settings_GraphicsSettings_o *)0x0;
                if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_Void_set_Value);
                  pSVar2 = (__this->fields).RenderDistance;
                  iVar1 = 10000;
                  __this_00 = (Settings_GraphicsSettings_o *)0x0;
                  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
label_04088636:
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar2,iVar1,MethodInfo_Void_set_Value);
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
label_0408864c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_BloomLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac3e6 = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,4,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).PresetQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).PresetQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).FullScreenMode = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).FullScreenMode);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).ScreenResolution = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ScreenResolution,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0x90,0,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).FPSCap = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).FPSCap,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0x3c,0,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).MenuFPSCap = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).MenuFPSCap);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this_00->fields).VSync = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).VSync,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).InterpolationEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).InterpolationEnabled);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this_00->fields).ShowFPS = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ShowFPS,pSVar3);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,10000,10,1000000,(MethodInfo *)0x0);
  (__this_00->fields).RenderDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).RenderDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).TextureQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).TextureQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).ShadowQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ShadowQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this_00->fields).ShadowDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ShadowDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this_00->fields).LightDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).LightDistance,pSVar2);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).AntiAliasing = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).AntiAliasing,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).AnisotropicFiltering = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).AnisotropicFiltering,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).WeatherEffects = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WeatherEffects,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).WeaponTrail = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WeaponTrail);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this_00->fields).WeaponTrailHold = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WeaponTrailHold,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).WeaponFireEffect = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WeaponFireEffect,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).WindEffectEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WindEffectEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).BloodSplatterEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).BloodSplatterEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).NapeBloodEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).NapeBloodEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this_00->fields).MipmapEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).MipmapEnabled);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).AmbientOcclusion = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).AmbientOcclusion,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_BloomLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).Bloom = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Bloom);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).ChromaticAberrationFX = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ChromaticAberrationFX);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).ColorGrading = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).ColorGrading,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).AutoExposure = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).AutoExposure);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).DepthOfField = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).DepthOfField);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).MotionBlur = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).MotionBlur,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,0,iVar1,(MethodInfo *)0x0);
  (__this_00->fields).WaterFX = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).WaterFX);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this_00->fields).HDR = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).HDR);
  Settings_SaveableSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings$$.ctor
// il2cpp: void Settings_GraphicsSettings___ctor (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x4088660

void Settings_GraphicsSettings___ctor(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (g_data_057ac3e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_BloomLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac3e6 = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,4,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PresetQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PresetQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FullScreenMode = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FullScreenMode);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ScreenResolution = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ScreenResolution,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0x90,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FPSCap = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FPSCap,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0x3c,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MenuFPSCap = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MenuFPSCap);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).VSync = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VSync,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).InterpolationEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).InterpolationEnabled);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).ShowFPS = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowFPS,pSVar3);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,10000,10,1000000,(MethodInfo *)0x0);
  (__this->fields).RenderDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RenderDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TextureQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TextureQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShadowQuality = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShadowQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this->fields).ShadowDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShadowDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this->fields).LightDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LightDistance,pSVar2);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AntiAliasing = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AntiAliasing,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).AnisotropicFiltering = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AnisotropicFiltering,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).WeatherEffects = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeatherEffects,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).WeaponTrail = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeaponTrail);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).WeaponTrailHold = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeaponTrailHold,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).WeaponFireEffect = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeaponFireEffect,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).WindEffectEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WindEffectEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).BloodSplatterEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BloodSplatterEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).NapeBloodEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NapeBloodEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).MipmapEnabled = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MipmapEnabled);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AmbientOcclusion = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AmbientOcclusion,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_BloomLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).Bloom = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Bloom);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).ChromaticAberrationFX = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChromaticAberrationFX);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).ColorGrading = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ColorGrading,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AutoExposure = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AutoExposure);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).DepthOfField = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DepthOfField);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).MotionBlur = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MotionBlur,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,3,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).WaterFX = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WaterFX);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).HDR = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HDR);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: UI.SettingsGraphicsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsGraphicsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsGraphicsPanel.cs
// --------------------------------

// UI.SettingsGraphicsPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsGraphicsPanel__get_ScrollBar (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4443d50

bool_conflict UI_SettingsGraphicsPanel__get_ScrollBar(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsGraphicsPanel$$Setup
// il2cpp: void UI_SettingsGraphicsPanel__Setup (UI_SettingsGraphicsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4443d60

void UI_SettingsGraphicsPanel__Setup
               (UI_SettingsGraphicsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_TypedSetting_int__o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  System_String_c *pSVar6;
  void *pvVar7;
  System_Object_array *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  int32_t iVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *__this_04;
  System_String_array *pSVar12;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  long *plVar17;
  long lVar18;
  System_String_o *pSVar19;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppClass *pIVar20;
  System_String_o *in_RCX;
  System_String_o *a_00;
  MethodInfo_362C220 *method_00;
  long unaff_RBX;
  long *unaff_RBP;
  Il2CppClass *pIVar21;
  Settings_GraphicsSettings_o *__this_06;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *pMVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 in_stack_fffffffffffffea0;
  Il2CppMethodPointer pIVar23;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  char *pcVar26;
  Il2CppType *pIVar27;
  Il2CppMethodPointer pIStack_100;
  Il2CppMethodPointer pIStack_f8;
  InvokerMethod pIStack_f0;
  char *pcStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppType *pIStack_d8;
  SimpleJSONFixed_JSONNode_o *pSStack_d0;
  long lStack_b8;
  UI_SettingsGraphicsPanel_o *pUStack_b0;
  
  if (g_data_057ae6e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"WeaponTrailHold");
    il2cpp_runtime_helper_023445d0(&"AntiAliasing");
    il2cpp_runtime_helper_023445d0(&"WeaponTrail");
    il2cpp_runtime_helper_023445d0(&"ShadowQualityOptions");
    il2cpp_runtime_helper_023445d0(&"WeaponFireEffect");
    il2cpp_runtime_helper_023445d0(&"FullscreenOptions");
    il2cpp_runtime_helper_023445d0(&"WeatherEffects");
    il2cpp_runtime_helper_023445d0(&"MotionBlur");
    il2cpp_runtime_helper_023445d0(&"WeatherEffectsOptions");
    il2cpp_runtime_helper_023445d0(&"Fullscreen");
    il2cpp_runtime_helper_023445d0(&"RenderDistance");
    il2cpp_runtime_helper_023445d0(&"BloodSplatterEnabled");
    il2cpp_runtime_helper_023445d0(&"MotionBlurOptions");
    il2cpp_runtime_helper_023445d0(&"PresetQualityOptions");
    il2cpp_runtime_helper_023445d0(&"DepthOfField");
    il2cpp_runtime_helper_023445d0(&"WeaponTrailOptions");
    il2cpp_runtime_helper_023445d0(&"AmbientOcclusionOptions");
    il2cpp_runtime_helper_023445d0(&"ChromaticAberrationOptions");
    il2cpp_runtime_helper_023445d0(&"AmbientOcclusion");
    il2cpp_runtime_helper_023445d0(&"Resolution");
    il2cpp_runtime_helper_023445d0(&"FPSCap");
    il2cpp_runtime_helper_023445d0(&"Anisotropic");
    il2cpp_runtime_helper_023445d0(&"ShowFPS");
    il2cpp_runtime_helper_023445d0(&"VSync");
    il2cpp_runtime_helper_023445d0(&"ShadowDistance");
    il2cpp_runtime_helper_023445d0(&"DepthOfFieldOptions");
    il2cpp_runtime_helper_023445d0(&"LightDistance");
    il2cpp_runtime_helper_023445d0(&"FullscreenTooltip");
    il2cpp_runtime_helper_023445d0(&"MipmapEnabled");
    il2cpp_runtime_helper_023445d0(&"InterpolationEnabled");
    il2cpp_runtime_helper_023445d0(&"HDR");
    il2cpp_runtime_helper_023445d0(&"WindEffectEnabled");
    il2cpp_runtime_helper_023445d0(&"WeaponTrailHoldTooltip");
    il2cpp_runtime_helper_023445d0(&"WaterFX");
    il2cpp_runtime_helper_023445d0(&"ColorGradingOptions");
    il2cpp_runtime_helper_023445d0(&"AnisotropicOptions");
    il2cpp_runtime_helper_023445d0(&"AutoExposure");
    il2cpp_runtime_helper_023445d0(&"MenuFPSCap");
    il2cpp_runtime_helper_023445d0(&"TextureQualityOptions");
    il2cpp_runtime_helper_023445d0(&"RenderDistanceTooltip");
    il2cpp_runtime_helper_023445d0(&"ChromaticAberration");
    il2cpp_runtime_helper_023445d0(&"InterpolationEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"NapeBloodEnabled");
    il2cpp_runtime_helper_023445d0(&"ShadowQuality");
    il2cpp_runtime_helper_023445d0(&"PresetQuality");
    il2cpp_runtime_helper_023445d0(&"BloomOptions");
    il2cpp_runtime_helper_023445d0(&"MipmapEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"WaterFXOptions");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"AutoExposureOptions");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    il2cpp_runtime_helper_023445d0(&"Bloom");
    il2cpp_runtime_helper_023445d0(&"AntiAliasingOptions");
    il2cpp_runtime_helper_023445d0(&"TextureQuality");
    il2cpp_runtime_helper_023445d0(&"HDRTooltip");
    il2cpp_runtime_helper_023445d0(&"ColorGrading");
    il2cpp_runtime_helper_023445d0(&"WeaponFireEffectTooltip");
    g_data_057ae6e6 = '\x01';
  }
  pIVar21 = (Il2CppClass *)parent;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar15 = "Graphics";
  if (parent == (UI_BasePanel_o *)0x0) {
label_044453bf:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    in_RCX = (System_String_o *)(ulong)bVar2;
    pIVar21 = TypeInfo_SettingsPopup;
    if ((bVar2 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(long)&in_RCX[-1].fields.field_0x7] == TypeInfo_SettingsPopup)) {
      unaff_RBX = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
      if (unaff_RBX != 0) {
        __this_00 = *(Settings_TypedSetting_int__o **)(unaff_RBX + 0x30);
        unaff_RBP = (long *)0x0;
        if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
          pSVar19 = (System_String_o *)parent[1].fields._currentCategoryPanel;
          iVar9 = (__this_00->fields)._value;
          if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar9 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar9,(MethodInfo *)0x0);
          Settings_TypedSetting_int___set_Value(__this_00,iVar9,MethodInfo_Void_set_Value);
          pSVar11 = (System_String_o *)
                    (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          UI_ElementStyle___ctor(__this_04,0x18,200.0,20.0,pSVar11,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x20);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"PresetQuality",(System_String_o *)"",
                               (System_String_o *)"",in_R9);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"PresetQualityOptions",(System_String_o *)"",pMVar13);
          onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x28);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"Fullscreen",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"FullscreenOptions",(System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)
                    UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"FullscreenTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)pMVar13,160.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x30);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"Resolution",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar12 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
          pMVar13 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x60);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"RenderDistance",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"RenderDistanceTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateInputSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar14,100.0,40.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x38);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"FPSCap",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateInputSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",100.0,40.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x40);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"MenuFPSCap",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateInputSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",100.0,40.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x48);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"VSync",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x50);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"InterpolationEnabled",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"InterpolationEnabledTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar14,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0
                     ,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x58);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"ShowFPS",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xd0);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"MipmapEnabled",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"MipmapEnabledTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar14,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0
                     ,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 200);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"NapeBloodEnabled",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xb8);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WindEffectEnabled",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xc0);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"BloodSplatterEnabled",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar22 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xa0);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeaponTrail",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"WeaponTrailOptions",(System_String_o *)"",pMVar13);
          pMVar13 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xa8);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeaponTrailHold",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeaponTrailHoldTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar14,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0
                     ,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xb0);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeaponFireEffect",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeaponFireEffectTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar22 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar14,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0
                     ,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x68);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"TextureQuality",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"TextureQualityOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x70);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"ShadowQuality",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"ShadowQualityOptions",(System_String_o *)"",pMVar13);
          pMVar13 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x78);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"ShadowDistance",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar13 = (MethodInfo *)0x2;
          UI_ElementFactory__CreateSliderSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",130.0,16.0,2,
                     (MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x80);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"LightDistance",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pMVar22 = (MethodInfo *)0x2;
          UI_ElementFactory__CreateSliderSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,(System_String_o *)"",130.0,16.0,2,
                     (MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x88);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"AntiAliasing",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"AntiAliasingOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x90);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"Anisotropic",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"AnisotropicOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x98);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WeatherEffects",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"WeatherEffectsOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xd8);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"AmbientOcclusion",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"AmbientOcclusionOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xe0);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"Bloom",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"BloomOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xe8);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"ChromaticAberration",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"ChromaticAberrationOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xf0);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"ColorGrading",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"ColorGradingOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0xf8);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"AutoExposure",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"AutoExposureOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x100);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"DepthOfField",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"DepthOfFieldOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x108);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"MotionBlur",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"MotionBlurOptions",(System_String_o *)"",pMVar13);
          pMVar22 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x110);
          pMVar13 = "";
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"WaterFX",(System_String_o *)"",
                               (System_String_o *)"",pMVar22);
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar19,pSVar15,"WaterFXOptions",(System_String_o *)"",pMVar13);
          pMVar13 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar12,(System_String_o *)"",200.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).DoublePanelRight;
          pSVar5 = *(Settings_BaseSetting_o **)(unaff_RBX + 0x118);
          pSVar11 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"HDR",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          pSVar15 = UI_UIManager__GetLocale
                              (pSVar19,pSVar15,"HDRTooltip",(System_String_o *)"",
                               (System_String_o *)"",pMVar13);
          UI_ElementFactory__CreateToggleSetting
                    (pUVar4,__this_04,pSVar5,pSVar11,pSVar15,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0
                     ,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_044453bf;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  lStack_b8 = unaff_RBX;
  pUStack_b0 = __this;
  if (g_data_057ae726 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"{0} locale error.");
    il2cpp_runtime_helper_023445d0(&"English");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057ae726 = '\x01';
  }
  bVar10 = System_String__op_Inequality
                     (in_RCX,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x20), lVar18 != 0)) {
      in_RCX = *(System_String_o **)(lVar18 + 0x18);
      goto label_04445544;
    }
label_04445ac9:
    il2cpp_runtime_helper_022b2c90();
label_04445ace:
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
label_04445544:
    unaff_RBP = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04445ac9;
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)in_RCX,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 == '\0') {
      a = (Il2CppObject *)0x0;
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04445ac9;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)in_RCX,MethodInfo_JSONObject_get_Item);
    }
    bVar10 = System_String__op_Inequality
                       (a_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    unaff_RBP = (long *)pIVar21;
    if ((char)bVar10 != '\0') {
      unaff_RBP = (long *)System_String__Concat_3af7150
                                    ((System_String_o *)pIVar21,".",a_00,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Equality
                       ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
label_044456e7:
      bVar10 = System_String__op_Equality(in_RCX,"English",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UI_UIManager__GetLocaleArray
                  ((System_String_o *)parent,(System_String_o *)pIVar21,a_00,"English",in_R8);
        return;
      }
      lVar18 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
      pSVar15 = "{0} locale error.";
      pSVar19 = System_String__Format("{0} locale error.",(Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x18) != 0) {
          *(System_String_o **)(lVar18 + 0x20) = pSVar19;
          il2cpp_runtime_helper_022b4080(lVar18 + 0x20,pSVar19);
          return;
        }
        goto label_04445ade;
      }
      goto label_04445ac9;
    }
    if (a == (Il2CppObject *)0x0) goto label_04445ac9;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)
              (*a->klass->vtable[7].methodPtr)(a,parent,a->klass->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_044456e7;
    plVar17 = (long *)(*a->klass->vtable[7].methodPtr)(a,parent,a->klass->vtable[7].method);
    if (plVar17 == (long *)0x0) goto label_04445ac9;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar17 + 0x1a8))(plVar17,unaff_RBP,*(undefined8 *)(*plVar17 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_044456e7;
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
    plVar17 = (long *)(*a->klass->vtable[7].methodPtr)(a,parent,a->klass->vtable[7].method);
    if ((plVar17 == (long *)0x0) ||
       (pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1a8))(plVar17,unaff_RBP,*(undefined8 *)(*plVar17 + 0x1b0)),
       pSVar15 == (System_String_o *)0x0)) goto label_04445ac9;
    bVar2 = (TypeInfo_JSONArray->_2).naturalAligment;
    if ((bVar2 <= (pSVar15->klass->_2).naturalAligment) &&
       ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONArray)) {
      pSVar6 = pSVar15->klass;
      bVar2 = (TypeInfo_JSONArray->_2).naturalAligment;
      if ((bVar2 <= (pSVar6->_2).naturalAligment) &&
         ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONArray)) {
        (*(code *)pSVar6[1]._1.declaringType)(&pIStack_100,pSVar15,pSVar6[1]._1.parent);
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)parent;
        __this_01.fields._0_8_ = in_stack_fffffffffffffea0;
        __this_01.fields.m_Object.fields._8_8_ = pIStack_100;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_f8;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f0;
        __this_01.fields.m_Object.fields._32_8_ = pcStack_e8;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_e0;
        __this_01.fields.m_Array.fields._8_8_ = pIStack_d8;
        __this_01.fields.m_Array.fields._current = pSStack_d0;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffeb0);
        if ((char)bVar10 != '\0') {
          pIVar23 = pIStack_100;
          pIVar24 = pIStack_f8;
          pIVar25 = pIStack_f0;
          pcVar26 = pcStack_e8;
          pIVar21 = pIStack_e0;
          pIVar27 = pIStack_d8;
          pSVar16 = pSStack_d0;
          do {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)parent;
            __this_03.fields._0_8_ = in_stack_fffffffffffffea0;
            __this_03.fields.m_Object.fields._8_8_ = pIVar23;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_03.fields.m_Object.fields._32_8_ = pcVar26;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar21;
            __this_03.fields.m_Array.fields._8_8_ = pIVar27;
            __this_03.fields.m_Array.fields._current = pSVar16;
            aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (__this_03,(MethodInfo *)&stack0xfffffffffffffeb0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            unaff_RBP = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
            if ((Il2CppClass *)unaff_RBP != (Il2CppClass *)0x0) {
              pvVar7 = (((Il2CppClass *)unaff_RBP)->_1).image;
              bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
              if ((*(byte *)((long)pvVar7 + 0x130) < bVar2) ||
                 (*(Il2CppClass **)(*(long *)((long)pvVar7 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_JSONString))
              goto label_04445ace;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
            if ((lVar18 == 0) ||
               (bVar10 = System_String__op_Equality
                                   (in_RCX,*(System_String_o **)(lVar18 + 0x20),(MethodInfo *)0x0),
               (Il2CppClass *)unaff_RBP == (Il2CppClass *)0x0)) goto label_04445ac9;
            unaff_RBP = (long *)(**(code **)((long)(((Il2CppClass *)unaff_RBP)->_1).image + 0x1c8))(unaff_RBP)
            ;
            lVar18 = MethodInfo_Void_Add;
            if ((char)bVar10 == '\0') {
              if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_04445ac9;
              piVar1 = &(__this_05->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_05->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) goto label_04445ac9;
              uVar3 = (__this_05->fields)._size;
              if ((uint)pSVar8->max_length <= uVar3) {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                goto label_044458d5;
              }
              (__this_05->fields)._size = uVar3 + 1;
              pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)unaff_RBP;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3,unaff_RBP);
            }
            else {
              if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar20 = (Il2CppClass *)
                        MiscExtensions__ReverseString((System_String_o *)unaff_RBP,(MethodInfo *)0x0);
              lVar18 = MethodInfo_Void_Add;
              if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_04445ac9;
              piVar1 = &(__this_05->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_05->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) goto label_04445ac9;
              uVar3 = (__this_05->fields)._size;
              if (uVar3 < (uint)pSVar8->max_length) {
                (__this_05->fields)._size = uVar3 + 1;
                pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)pIVar20;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3,pIVar20);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                unaff_RBP = (long *)pIVar20;
label_044458d5:
                System_Collections_Generic_List_object___AddWithResize
                          (__this_05,(Il2CppObject *)unaff_RBP,method_00);
              }
            }
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)parent;
            __this_02.fields._0_8_ = in_stack_fffffffffffffea0;
            __this_02.fields.m_Object.fields._8_8_ = pIVar23;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_02.fields.m_Object.fields._32_8_ = pcVar26;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar21;
            __this_02.fields.m_Array.fields._8_8_ = pIVar27;
            __this_02.fields.m_Array.fields._current = pSVar16;
            bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_02,(MethodInfo *)&stack0xfffffffffffffeb0);
          } while ((char)bVar10 != '\0');
label_04445a9f:
          System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
          return;
        }
        if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) goto label_04445a9f;
        goto label_04445ac9;
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04445ade:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae6e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6e7 = '\x01';
  }
  __this_06 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_06 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_06,(MethodInfo *)0x0);
    (*(pSVar15->klass->vtable)._23_System_IConvertible_ToDateTime.methodPtr)
              (pSVar15,(pSVar15->klass->vtable)._23_System_IConvertible_ToDateTime.method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGraphicsPanel$$OnSelectPreset
// il2cpp: void UI_SettingsGraphicsPanel__OnSelectPreset (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4445af0

void UI_SettingsGraphicsPanel__OnSelectPreset(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  Settings_GraphicsSettings_o *__this_00;
  
  if (g_data_057ae6e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6e7 = '\x01';
  }
  __this_00 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    vtableDispatch = (__this->klass->vtable)._23_SyncSettingElements.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGraphicsPanel$$.ctor
// il2cpp: void UI_SettingsGraphicsPanel___ctor (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4445b50

void UI_SettingsGraphicsPanel___ctor(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGraphicsPanel$$<Setup>b__2_0
// il2cpp: void UI_SettingsGraphicsPanel___Setup_b__2_0 (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4445b60

void UI_SettingsGraphicsPanel___Setup_b__2_0(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  if (g_data_057ae6e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6e7 = '\x01';
  }
  __this_00 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    vtableDispatch = (__this->klass->vtable)._23_SyncSettingElements.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}



// Type: Cameras.MapEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MapEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// --------------------------------

// Cameras.MapEditorCamera$$GetClampedDeltaTime
// il2cpp: float Cameras_MapEditorCamera__GetClampedDeltaTime (const MethodInfo* method);
// 0x447bc90

float Cameras_MapEditorCamera__GetClampedDeltaTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (0.033333335 <= fVar1) {
    fVar1 = 0.033333335;
  }
  return fVar1;
}


// Cameras.MapEditorCamera$$GetScreenScale
// il2cpp: float Cameras_MapEditorCamera__GetScreenScale (const MethodInfo* method);
// 0x447bcb0

float Cameras_MapEditorCamera__GetScreenScale(MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar2 = 1.0;
  if (1.0 <= (float)iVar1) {
    fVar2 = (float)iVar1;
  }
  return fVar2 / 1080.0;
}


// Cameras.MapEditorCamera$$Awake
// il2cpp: void Cameras_MapEditorCamera__Awake (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447bce0

void Cameras_MapEditorCamera__Awake(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  Cameras_MapEditorCamera_o *pCVar3;
  
  if (g_data_057ae875 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae875 = '\x01';
  }
  pCVar3 = __this;
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    (__this->fields)._input = *(Settings_MapEditorInputSettings_o **)(lVar1 + 0x50);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._input);
    pCVar3 = (Cameras_MapEditorCamera_o *)&(__this->fields)._settings;
    (__this->fields)._settings = *(Settings_MapEditorSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    il2cpp_runtime_helper_022b4080();
    if (g_data_057ae876 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pCVar3 = (Cameras_MapEditorCamera_o *)&MethodInfo_Int32_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae876 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
       (pUVar2 = (__this->fields).Camera, pCVar3 = (Cameras_MapEditorCamera_o *)0x0,
       pUVar2 != (UnityEngine_Camera_o *)0x0)) {
      UnityEngine_Camera__set_farClipPlane(pUVar2,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae876 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae876 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
     (pUVar2 = (pCVar3->fields).Camera, pUVar2 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(pUVar2,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Cameras.MapEditorCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_MapEditorCamera__ApplyGraphicsSettings (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447bdc0

void Cameras_MapEditorCamera__ApplyGraphicsSettings(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  
  if (g_data_057ae876 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae876 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
     (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(__this_00,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Cameras.MapEditorCamera$$CreateUICamera
// il2cpp: void Cameras_MapEditorCamera__CreateUICamera (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447be30

void Cameras_MapEditorCamera__CreateUICamera(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MapEditorCamera$$Update
// il2cpp: void Cameras_MapEditorCamera__Update (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447be40

void Cameras_MapEditorCamera__Update(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_ConfirmPopup_o *pUVar3;
  Settings_MapEditorInputSettings_o *pSVar4;
  UI_ExternalLinkPopup_o *pUVar5;
  Settings_FloatSetting_o *pSVar6;
  UI_TooltipPopup_o *pUVar7;
  Settings_KeybindSetting_o *pSVar8;
  UI_ColorPickPopup_o *pUVar9;
  UI_MapEditorInspectPanel_o *pUVar10;
  long *plVar11;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined8 *puVar12;
  UnityEngine_GameObject_o *__this_01;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  UnityEngine_Vector3_Fields axis;
  bool_conflict bVar24;
  int32_t iVar25;
  uint uVar26;
  UnityEngine_Transform_o *pUVar27;
  long *plVar28;
  UI_MapEditorMenu_o *unaff_RBX;
  System_Collections_Generic_List_BasePopup__o *pSVar29;
  undefined1 *puVar30;
  undefined8 unaff_RBP;
  MethodInfo *pMVar31;
  UI_MapEditorMenu_o *pUVar32;
  UI_MapEditorMenu_o *pUVar33;
  UI_MapEditorMenu_o *pUVar34;
  undefined8 unaff_R12;
  UI_MapEditorMenu_o *unaff_R14;
  UI_MapEditorMenu_o *unaff_R15;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar38;
  undefined4 uVar39;
  undefined4 extraout_XMM0_Db_01;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dc_12;
  undefined4 extraout_XMM0_Dc_13;
  undefined4 extraout_XMM0_Dc_14;
  undefined4 extraout_XMM0_Dc_15;
  undefined4 extraout_XMM0_Dc_16;
  float extraout_XMM0_Dc_17;
  undefined4 extraout_XMM0_Dc_18;
  undefined4 uVar40;
  undefined4 extraout_XMM0_Dc_19;
  undefined4 extraout_XMM0_Dc_20;
  undefined4 extraout_XMM0_Dc_21;
  undefined4 extraout_XMM0_Dc_22;
  float extraout_XMM0_Dc_23;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 extraout_XMM0_Dd_13;
  undefined4 extraout_XMM0_Dd_14;
  undefined4 extraout_XMM0_Dd_15;
  undefined4 extraout_XMM0_Dd_16;
  float extraout_XMM0_Dd_17;
  undefined4 extraout_XMM0_Dd_18;
  undefined4 uVar41;
  undefined4 extraout_XMM0_Dd_19;
  undefined4 extraout_XMM0_Dd_20;
  undefined4 extraout_XMM0_Dd_21;
  undefined4 extraout_XMM0_Dd_22;
  float extraout_XMM0_Dd_23;
  float fVar42;
  float fVar46;
  undefined1 auVar43 [16];
  undefined4 extraout_XMM1_Da;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  UnityEngine_Quaternion_o UVar51;
  undefined1 auVar52 [12];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar53;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Vector3_o worldPosition;
  undefined1 auStack_70 [12];
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  float fStack_40;
  UI_MapEditorMenu_o *pUStack_28;
  Cameras_MapEditorCamera_o *pCStack_20;
  
  if (g_data_057ae877 == '\0') {
    pCStack_20 = (Cameras_MapEditorCamera_o *)0x447be5c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae877 = '\x01';
  }
  pUVar33 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_20 = (Cameras_MapEditorCamera_o *)0x447be7f;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar31 = (MethodInfo *)0x0;
  pCStack_20 = (Cameras_MapEditorCamera_o *)0x447be8b;
  pUVar34 = pUVar33;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar24 != '\0') {
    return;
  }
  pUVar32 = (__this->fields)._menu;
  if (pUVar32 == (UI_MapEditorMenu_o *)0x0) {
    pCStack_20 = (Cameras_MapEditorCamera_o *)0x447bec5;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)auStack_70;
    pUStack_28 = pUVar33;
    pCStack_20 = __this;
    if (g_data_057ae878 == '\0') {
      pUVar32 = (UI_MapEditorMenu_o *)&MethodInfo_Single_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae878 = '\x01';
      if (g_data_057a65d5 != '\0') goto label_0447bef4;
label_0447bfcf:
      __this = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
      pUVar3 = (pUVar34->fields).ConfirmPopup;
    }
    else {
      pUVar32 = pUVar34;
      if (g_data_057a65d5 == '\0') goto label_0447bfcf;
label_0447bef4:
      pUVar3 = (pUVar34->fields).ConfirmPopup;
      __this = (Cameras_MapEditorCamera_o *)pUVar32;
    }
    if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
       (__this = (Cameras_MapEditorCamera_o *)pUVar3[1].fields.SinglePanel,
       (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
      uStack_60 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uStack_58 = 0;
      fStack_64 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        return;
      }
      pUVar3 = (pUVar34->fields).ConfirmPopup;
      if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
         (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields).SinglePanel,
         (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
        bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
        if ((char)bVar24 == '\0') {
          pUVar3 = (pUVar34->fields).ConfirmPopup;
          if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
             (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields).DoublePanelLeft,
             (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
            bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
            if ((char)bVar24 != '\0') {
              pUVar7 = (pUVar34->fields).TooltipPopup;
              if ((pUVar7 == (UI_TooltipPopup_o *)0x0) ||
                 (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
                 (UI_MapEditorMenu_o *)__this == (UI_MapEditorMenu_o *)0x0)) goto label_0447c3c0;
              UVar53 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0)
              ;
              uStack_60 = CONCAT44(uStack_60._4_4_ - UVar53.fields.y,(float)uStack_60 - UVar53.fields.x);
              uStack_58 = CONCAT44(uStack_58._4_4_ - extraout_XMM0_Dd_00,
                                   (float)uStack_58 - extraout_XMM0_Dc_00);
              fStack_64 = fStack_64 - UVar53.fields.z;
            }
label_0447c059:
            pUVar3 = (pUVar34->fields).ConfirmPopup;
            if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
               (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields)._popups,
               (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
              bVar24 = Settings_KeybindSetting__GetKey
                                 ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
              if ((char)bVar24 == '\0') {
                pUVar3 = (pUVar34->fields).ConfirmPopup;
                if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
                   (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields).DoublePanelRight,
                   (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                  bVar24 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
                  if ((char)bVar24 != '\0') {
                    pUVar7 = (pUVar34->fields).TooltipPopup;
                    if ((pUVar7 == (UI_TooltipPopup_o *)0x0) ||
                       (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
                       (UI_MapEditorMenu_o *)__this == (UI_MapEditorMenu_o *)0x0)) goto label_0447c3c0;
                    UVar53 = UnityEngine_Transform__get_right
                                       ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                    uStack_60 = CONCAT44(uStack_60._4_4_ - UVar53.fields.y,(float)uStack_60 - UVar53.fields.x)
                    ;
                    uStack_58 = CONCAT44(uStack_58._4_4_ - extraout_XMM0_Dd_02,
                                         (float)uStack_58 - extraout_XMM0_Dc_02);
                    fStack_64 = fStack_64 - UVar53.fields.z;
                  }
label_0447c11f:
                  pUVar3 = (pUVar34->fields).ConfirmPopup;
                  if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
                     (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields)._currentCategoryPanel,
                     (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                    bVar24 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
                    if ((char)bVar24 == '\0') {
                      pUVar3 = (pUVar34->fields).ConfirmPopup;
                      if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
                         (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields)._currentCategoryPanelName,
                         (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                        bVar24 = Settings_KeybindSetting__GetKey
                                           ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
                        if ((char)bVar24 != '\0') {
                          pUVar7 = (pUVar34->fields).TooltipPopup;
                          if ((pUVar7 == (UI_TooltipPopup_o *)0x0) ||
                             (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
                             (UI_MapEditorMenu_o *)__this == (UI_MapEditorMenu_o *)0x0)) goto label_0447c3c0;
                          UVar53 = UnityEngine_Transform__get_up
                                             ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                          uStack_60 = CONCAT44(uStack_60._4_4_ - UVar53.fields.y,
                                               (float)uStack_60 - UVar53.fields.x);
                          uStack_58 = CONCAT44(uStack_58._4_4_ - extraout_XMM0_Dd_04,
                                               (float)uStack_58 - extraout_XMM0_Dc_04);
                          fStack_64 = fStack_64 - UVar53.fields.z;
                        }
label_0447c1e5:
                        pUVar5 = (pUVar34->fields).ExternalLinkPopup;
                        if ((((pUVar5 != (UI_ExternalLinkPopup_o *)0x0) &&
                             (pUVar27 = (pUVar5->fields).DoublePanelLeft,
                             pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
                            (pUVar3 = (pUVar34->fields).ConfirmPopup, pUVar3 != (UI_ConfirmPopup_o *)0x0)) &&
                           (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields)._categoryPanelTypes,
                           (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                          auStack_50 = ZEXT416(*(uint *)((long)&(pUVar27->fields).m_CachedPtr + 4));
                          bVar24 = Settings_KeybindSetting__GetKey
                                             ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
                          if ((char)bVar24 == '\0') {
                            pUVar3 = (pUVar34->fields).ConfirmPopup;
                            if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
                               (__this = (Cameras_MapEditorCamera_o *)(pUVar3->fields).MaskBackground,
                               (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                              bVar24 = Settings_KeybindSetting__GetKey
                                                 ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
                              if ((char)bVar24 == '\0') goto label_0447c296;
                              pUVar5 = (pUVar34->fields).ExternalLinkPopup;
                              if (pUVar5 != (UI_ExternalLinkPopup_o *)0x0) {
                                pSVar29 = (pUVar5->fields)._popups;
                                goto joined_r0x0447c286;
                              }
                            }
                          }
                          else {
                            pUVar5 = (pUVar34->fields).ExternalLinkPopup;
                            if (pUVar5 != (UI_ExternalLinkPopup_o *)0x0) {
                              pSVar29 = (System_Collections_Generic_List_BasePopup__o *)
                                        (pUVar5->fields).DoublePanelRight;
joined_r0x0447c286:
                              if (pSVar29 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                auStack_50 = ZEXT416(*(uint *)((long)&(pSVar29->fields)._items + 4));
label_0447c296:
                                __this = (Cameras_MapEditorCamera_o *)0x0;
                                fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                                pUVar7 = (pUVar34->fields).TooltipPopup;
                                if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                                   (pUVar33 = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
                                   pUVar33 != (UI_MapEditorMenu_o *)0x0)) {
                                  if (0.033333335 <= fVar35) {
                                    fVar35 = 0.033333335;
                                  }
                                  fStack_40 = fVar35;
                                  UVar53 = UnityEngine_Transform__get_position
                                                     ((UnityEngine_Transform_o *)pUVar33,(MethodInfo *)0x0);
                                  value.fields.x =
                                       UVar53.fields.x +
                                       (float)auStack_50._0_4_ * (float)uStack_60 * fStack_40;
                                  value.fields.y =
                                       UVar53.fields.y + (float)auStack_50._0_4_ * uStack_60._4_4_ * fStack_40
                                  ;
                                  value.fields.z =
                                       UVar53.fields.z + fStack_64 * fStack_40 * (float)auStack_50._0_4_;
                                  pMVar31 = (MethodInfo *)0x0;
                                  UnityEngine_Transform__set_position
                                            ((UnityEngine_Transform_o *)pUVar33,value,(MethodInfo *)0x0);
                                  Cameras_MapEditorCamera__UpdateDragMovement
                                            ((Cameras_MapEditorCamera_o *)pUVar34,(float)auStack_50._0_4_,
                                             pMVar31);
                                  __this = (Cameras_MapEditorCamera_o *)pUVar34;
                                  Cameras_MapEditorCamera__UpdateZoomMovement
                                            ((Cameras_MapEditorCamera_o *)pUVar34,(float)auStack_50._0_4_,
                                             pMVar31);
                                  pUVar3 = (pUVar34->fields).ConfirmPopup;
                                  if ((pUVar3 != (UI_ConfirmPopup_o *)0x0) &&
                                     (__this = (Cameras_MapEditorCamera_o *)
                                               pUVar3[1].fields._currentCategoryPanelName,
                                     (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                                    bVar24 = Settings_KeybindSetting__GetKeyDown
                                                       ((Settings_KeybindSetting_o *)__this,0,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar24 == '\0') {
                                      return;
                                    }
                                    pUVar33 = (UI_MapEditorMenu_o *)(pUVar34->fields)._popups;
                                    if (pUVar33 != (UI_MapEditorMenu_o *)0x0) {
                                      bVar24 = UnityEngine_Camera__get_orthographic
                                                         ((UnityEngine_Camera_o *)pUVar33,(MethodInfo *)0x0);
                                      UnityEngine_Camera__set_orthographic
                                                ((UnityEngine_Camera_o *)pUVar33,
                                                 (uint)(byte)((byte)bVar24 ^ 1),(MethodInfo *)0x0);
                                      pSVar29 = (pUVar34->fields)._popups;
                                      __this = (Cameras_MapEditorCamera_o *)0x0;
                                      if (pSVar29 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        bVar24 = UnityEngine_Camera__get_orthographic
                                                           ((UnityEngine_Camera_o *)pSVar29,(MethodInfo *)0x0)
                                        ;
                                        if ((char)bVar24 == '\0') {
                                          return;
                                        }
                                        pSVar29 = (pUVar34->fields)._popups;
                                        __this = (Cameras_MapEditorCamera_o *)0x0;
                                        iVar25 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
                                        pUVar33 = (UI_MapEditorMenu_o *)0x0;
                                        if (pSVar29 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                          UnityEngine_Camera__set_orthographicSize
                                                    ((UnityEngine_Camera_o *)pSVar29,(float)iVar25 * 0.25,
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
                      }
                    }
                    else {
                      pUVar7 = (pUVar34->fields).TooltipPopup;
                      if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                         (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
                         (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                        UVar53 = UnityEngine_Transform__get_up
                                           ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                        uStack_60 = CONCAT44(uStack_60._4_4_ + UVar53.fields.y,
                                             (float)uStack_60 + UVar53.fields.x);
                        uStack_58 = CONCAT44(uStack_58._4_4_ + extraout_XMM0_Dd_03,
                                             (float)uStack_58 + extraout_XMM0_Dc_03);
                        fStack_64 = fStack_64 + UVar53.fields.z;
                        goto label_0447c1e5;
                      }
                    }
                  }
                }
              }
              else {
                pUVar7 = (pUVar34->fields).TooltipPopup;
                if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                   (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
                   (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
                  UVar53 = UnityEngine_Transform__get_right
                                     ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                  uStack_60 = CONCAT44(uStack_60._4_4_ + UVar53.fields.y,(float)uStack_60 + UVar53.fields.x);
                  uStack_58 = CONCAT44(uStack_58._4_4_ + extraout_XMM0_Dd_01,
                                       (float)uStack_58 + extraout_XMM0_Dc_01);
                  fStack_64 = fStack_64 + UVar53.fields.z;
                  goto label_0447c11f;
                }
              }
            }
          }
        }
        else {
          pUVar7 = (pUVar34->fields).TooltipPopup;
          if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
             (__this = (Cameras_MapEditorCamera_o *)(pUVar7->fields).m_CachedPtr,
             (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
            UVar53 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
            uStack_60 = CONCAT44(uStack_60._4_4_ + UVar53.fields.y,(float)uStack_60 + UVar53.fields.x);
            uStack_58 = CONCAT44(uStack_58._4_4_ + extraout_XMM0_Dd,(float)uStack_58 + extraout_XMM0_Dc);
            fStack_64 = fStack_64 + UVar53.fields.z;
            goto label_0447c059;
          }
        }
      }
    }
label_0447c3c0:
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = pUVar33;
    unaff_R14 = pUVar34;
  }
  else if (*(char *)((long)&(pUVar32->fields).IsMouseUI + 1) == '\0') {
    pCStack_20 = (Cameras_MapEditorCamera_o *)0x447beb1;
    Cameras_MapEditorCamera__UpdateMovement(__this,pMVar31);
  }
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  pUVar33 = (UI_MapEditorMenu_o *)__this;
  if (g_data_057ae87a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c3ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c3fb;
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    pUVar33 = (UI_MapEditorMenu_o *)&"Mouse X";
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c407;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae87a = '\x01';
  }
  if (*(char *)&(((UI_MapEditorMenu_o *)__this)->fields).RoleSpritePickPopup == '\0') {
    pUVar9 = (((UI_MapEditorMenu_o *)__this)->fields).ColorPickPopup;
    if (pUVar9 != (UI_ColorPickPopup_o *)0x0) {
      if (*(char *)&(pUVar9->fields)._alphaPixels != '\0') {
        return;
      }
      goto label_0447c419;
    }
  }
  else {
label_0447c419:
    *(undefined1 *)&(((UI_MapEditorMenu_o *)__this)->fields).RoleSpritePickPopup = 0;
    pSVar4 = (Settings_MapEditorInputSettings_o *)(((UI_MapEditorMenu_o *)__this)->fields).ConfirmPopup;
    if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pUVar33 = (UI_MapEditorMenu_o *)(pSVar4->fields).RotateCamera, pUVar33 != (UI_MapEditorMenu_o *)0x0))
    {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c444;
      bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pUVar33,0,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
label_0447c607:
        pSVar4 = (Settings_MapEditorInputSettings_o *)(((UI_MapEditorMenu_o *)__this)->fields).ConfirmPopup;
        if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pUVar33 = (UI_MapEditorMenu_o *)(pSVar4->fields).SnapCameraLeft,
           pUVar33 != (UI_MapEditorMenu_o *)0x0)) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c62d;
          bVar24 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)pUVar33,0,(MethodInfo *)0x0);
          if ((char)bVar24 != '\0') {
            if (g_data_057ac31b == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c646;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057ac31b = '\x01';
            }
            uVar37 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            uVar40 = (undefined4)uVar37;
            uVar41 = (undefined4)((ulong)uVar37 >> 0x20);
            uVar39 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
label_0447c7b5:
            uVar37 = CONCAT44(uVar41,uVar40);
            uVar41 = 0;
            uVar40 = 0;
            unaff_RBX = *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x10);
            pUVar32 = *(UI_MapEditorMenu_o **)((long)register0x00000020 + -8);
            puVar30 = (undefined1 *)register0x00000020;
            pUVar34 = unaff_R15;
            goto Cameras_MapEditorCamera__SnapCameraToAxis;
          }
          pSVar4 = (Settings_MapEditorInputSettings_o *)(((UI_MapEditorMenu_o *)__this)->fields).ConfirmPopup;
          if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pUVar33 = (UI_MapEditorMenu_o *)(pSVar4->fields).SnapCameraRight,
             pUVar33 != (UI_MapEditorMenu_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c693;
            bVar24 = Settings_KeybindSetting__GetKeyDown
                               ((Settings_KeybindSetting_o *)pUVar33,0,(MethodInfo *)0x0);
            if ((char)bVar24 != '\0') {
              if (g_data_057a6844 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c6ac;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6844 = '\x01';
              }
              uVar37 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              uVar40 = (undefined4)uVar37;
              uVar41 = (undefined4)((ulong)uVar37 >> 0x20);
              uVar39 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              goto label_0447c7b5;
            }
            pSVar4 = (Settings_MapEditorInputSettings_o *)
                     (((UI_MapEditorMenu_o *)__this)->fields).ConfirmPopup;
            if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pUVar33 = (UI_MapEditorMenu_o *)(pSVar4->fields).SnapCameraUp,
               pUVar33 != (UI_MapEditorMenu_o *)0x0)) {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c71b;
              bVar24 = Settings_KeybindSetting__GetKeyDown
                                 ((Settings_KeybindSetting_o *)pUVar33,0,(MethodInfo *)0x0);
              if ((char)bVar24 != '\0') {
                if (g_data_057abfed == '\0') {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c734;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057abfed = '\x01';
                }
                uVar37 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
                uVar40 = (undefined4)uVar37;
                uVar41 = (undefined4)((ulong)uVar37 >> 0x20);
                uVar39 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
                goto label_0447c7b5;
              }
              pSVar4 = (Settings_MapEditorInputSettings_o *)
                       (((UI_MapEditorMenu_o *)__this)->fields).ConfirmPopup;
              if (pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) {
                pSVar8 = (pSVar4->fields).SnapCameraDown;
                pUVar33 = (UI_MapEditorMenu_o *)0x0;
                if (pSVar8 != (Settings_KeybindSetting_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c776;
                  bVar24 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
                  if ((char)bVar24 == '\0') {
                    return;
                  }
                  if (g_data_057ac7d4 == '\0') {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c793;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057ac7d4 = '\x01';
                  }
                  uVar37 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
                  uVar40 = (undefined4)uVar37;
                  uVar41 = (undefined4)((ulong)uVar37 >> 0x20);
                  uVar39 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
                  goto label_0447c7b5;
                }
              }
            }
          }
        }
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c45d;
        fVar35 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        *(float *)((long)register0x00000020 + -0x38) = fVar35;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c474;
        pUVar33 = "Mouse Y";
        fVar35 = UnityEngine_Input__GetAxis((System_String_o *)"Mouse Y",(MethodInfo *)0x0);
        pUVar5 = (((UI_MapEditorMenu_o *)__this)->fields).ExternalLinkPopup;
        if (pUVar5 != (UI_ExternalLinkPopup_o *)0x0) {
          *(float *)((long)register0x00000020 + -0x4c) = fVar35;
          pSVar6 = (Settings_FloatSetting_o *)(pUVar5->fields)._currentCategoryPanel;
          if (pSVar6 != (Settings_FloatSetting_o *)0x0) {
            *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = ZEXT416((uint)(pSVar6->fields)._value);
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c4a5;
            fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            *(float *)((long)register0x00000020 + -0x58) = fVar35;
            pUVar33 = (UI_MapEditorMenu_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c4b1;
            iVar25 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
            pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
            if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
               (unaff_RBX = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
               unaff_RBX != (UI_MapEditorMenu_o *)0x0)) {
              fVar35 = *(float *)((long)register0x00000020 + -0x58);
              if (0.033333335 <= fVar35) {
                fVar35 = 0.033333335;
              }
              *(float *)((long)register0x00000020 + -0x58) = fVar35;
              fVar35 = 1.0;
              if (1.0 <= (float)iVar25) {
                fVar35 = (float)iVar25;
              }
              *(float *)((long)register0x00000020 + -0x54) = fVar35 / 1080.0;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c508;
              UVar53 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
              fVar35 = UVar53.fields.z;
              fVar48 = UVar53.fields.x;
              fVar49 = UVar53.fields.y;
              if (g_data_057a6844 == '\0') {
                auVar44._8_4_ = extraout_XMM0_Dc_05;
                auVar44._0_8_ = UVar53.fields._0_8_;
                auVar44._12_4_ = extraout_XMM0_Dd_05;
                *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar44;
                *(float *)((long)register0x00000020 + -0x50) = fVar35;
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c528;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                fVar35 = *(float *)((long)register0x00000020 + -0x50);
                fVar48 = *(float *)((long)register0x00000020 + -0x48);
                fVar49 = *(float *)((long)register0x00000020 + -0x44);
                g_data_057a6844 = '\x01';
              }
              axis = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c576;
              UVar53.fields.y = fVar49;
              UVar53.fields.x = fVar48;
              UVar53.fields.z = fVar35;
              pUVar33 = unaff_RBX;
              UnityEngine_Transform__RotateAround
                        ((UnityEngine_Transform_o *)unaff_RBX,UVar53,(UnityEngine_Vector3_o)axis,
                         *(float *)((long)register0x00000020 + -0x38) *
                         *(float *)((long)register0x00000020 + -0x58) *
                         *(float *)((long)register0x00000020 + -0x28) *
                         *(float *)((long)register0x00000020 + -0x54),(MethodInfo *)0x0);
              pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
              if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                 (unaff_RBX = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
                 unaff_RBX != (UI_MapEditorMenu_o *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c59a;
                pUVar33 = unaff_RBX;
                UVar53 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
                if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
                  *(float *)((long)register0x00000020 + -0x48) = UVar53.fields.z;
                  auVar14._8_4_ = extraout_XMM0_Dc_06;
                  auVar14._0_8_ = UVar53.fields._0_8_;
                  auVar14._12_4_ = extraout_XMM0_Dd_06;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar14;
                  pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
                  pUVar33 = (UI_MapEditorMenu_o *)0x0;
                  if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c5c6;
                    UVar53 = UnityEngine_Transform__get_right(pUVar27,(MethodInfo *)0x0);
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c602;
                    point.fields.z = *(float *)((long)register0x00000020 + -0x48);
                    point.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x38);
                    pUVar33 = unaff_RBX;
                    UnityEngine_Transform__RotateAround
                              ((UnityEngine_Transform_o *)unaff_RBX,point,UVar53,
                               -(*(float *)((long)register0x00000020 + -0x28) *
                                 *(float *)((long)register0x00000020 + -0x4c) *
                                 *(float *)((long)register0x00000020 + -0x58) *
                                *(float *)((long)register0x00000020 + -0x54)),(MethodInfo *)0x0);
                    *(undefined1 *)&(((UI_MapEditorMenu_o *)__this)->fields).RoleSpritePickPopup = 1;
                    goto label_0447c607;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x447c7c9;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x60) = unaff_RBP;
  *(Cameras_MapEditorCamera_o **)((long)register0x00000020 + -0x68) = __this;
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x70) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar37;
  *(undefined4 *)((long)register0x00000020 + -0x98) = extraout_XMM0_Dc_07;
  *(undefined4 *)((long)register0x00000020 + -0x94) = extraout_XMM0_Dd_07;
  pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar33->fields).ConfirmPopup;
  pUVar34 = pUVar33;
  pUVar32 = (UI_MapEditorMenu_o *)__this;
  if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pUVar34 = (UI_MapEditorMenu_o *)(pSVar4->fields).Pan, unaff_RBX = pUVar33,
     pUVar34 != (UI_MapEditorMenu_o *)0x0)) {
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c806;
    bVar24 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pUVar34,0,(MethodInfo *)0x0);
    if ((char)bVar24 != '\0') {
      *(undefined1 *)((long)&(pUVar33->fields).RoleSpritePickPopup + 1) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c815;
      UVar53 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      *(long *)((long)&(pUVar33->fields).RoleSpritePickPopup + 4) = UVar53.fields._0_8_;
      (((UnityEngine_Vector3_o *)&(pUVar33->fields).Vector3Popup)->fields).y = UVar53.fields.z;
      return;
    }
    pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar33->fields).ConfirmPopup;
    if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pUVar34 = (UI_MapEditorMenu_o *)(pSVar4->fields).Pan, pUVar34 != (UI_MapEditorMenu_o *)0x0)) {
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c84d;
      bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pUVar34,0,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
        pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar33->fields).ConfirmPopup;
        if (pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) {
          pSVar8 = (pSVar4->fields).Pan;
          pUVar34 = (UI_MapEditorMenu_o *)0x0;
          if (pSVar8 != (Settings_KeybindSetting_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447ca9b;
            bVar24 = Settings_KeybindSetting__GetKeyUp(pSVar8,0,(MethodInfo *)0x0);
            if ((char)bVar24 == '\0') {
              return;
            }
            *(undefined1 *)((long)&(pUVar33->fields).RoleSpritePickPopup + 1) = 0;
            return;
          }
        }
      }
      else {
        if (*(char *)((long)&(pUVar33->fields).RoleSpritePickPopup + 1) == '\0') {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c862;
        UVar53 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        auVar19._8_4_ = extraout_XMM0_Dc_08;
        auVar19._0_8_ = UVar53.fields._0_8_;
        auVar19._12_4_ = extraout_XMM0_Dd_08;
        *(undefined1 (*) [16])((long)register0x00000020 + -0xf0) = auVar19;
        *(undefined8 *)((long)register0x00000020 + -0xb0) =
             *(undefined8 *)((long)&(pUVar33->fields).RoleSpritePickPopup + 4);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c878;
        UVar53 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        *(long *)((long)&(pUVar33->fields).RoleSpritePickPopup + 4) = UVar53.fields._0_8_;
        (((UnityEngine_Vector3_o *)&(pUVar33->fields).Vector3Popup)->fields).y = UVar53.fields.z;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c888;
        fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        *(float *)((long)register0x00000020 + -0x100) = fVar35;
        *(undefined4 *)((long)register0x00000020 + -0xfc) = extraout_XMM0_Db;
        *(undefined4 *)((long)register0x00000020 + -0xf8) = extraout_XMM0_Dc_09;
        *(undefined4 *)((long)register0x00000020 + -0xf4) = extraout_XMM0_Dd_09;
        pUVar34 = (UI_MapEditorMenu_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c894;
        iVar25 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar7 = (pUVar33->fields).TooltipPopup;
        if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
           (pUVar32 = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr, pUVar32 != (UI_MapEditorMenu_o *)0x0
           )) {
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c8ba;
          pUVar34 = pUVar32;
          UVar53 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar32,(MethodInfo *)0x0);
          pUVar7 = (pUVar33->fields).TooltipPopup;
          if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
            *(float *)((long)register0x00000020 + -0x104) = UVar53.fields.z;
            auVar20._8_4_ = extraout_XMM0_Dc_10;
            auVar20._0_8_ = UVar53.fields._0_8_;
            auVar20._12_4_ = extraout_XMM0_Dd_10;
            *(undefined1 (*) [16])((long)register0x00000020 + -0xe0) = auVar20;
            pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
            pUVar34 = (UI_MapEditorMenu_o *)0x0;
            if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
              fVar35 = *(float *)((long)register0x00000020 + -0x100);
              if (0.033333335 <= fVar35) {
                fVar35 = 0.033333335;
              }
              *(float *)((long)register0x00000020 + -0x100) = fVar35;
              *(undefined4 *)((long)register0x00000020 + -0xfc) =
                   *(undefined4 *)((long)register0x00000020 + -0xfc);
              *(undefined4 *)((long)register0x00000020 + -0xf8) =
                   *(undefined4 *)((long)register0x00000020 + -0xf8);
              *(undefined4 *)((long)register0x00000020 + -0xf4) =
                   *(undefined4 *)((long)register0x00000020 + -0xf4);
              *(float *)((long)register0x00000020 + -0xd0) =
                   *(float *)((long)register0x00000020 + -0xf0) - *(float *)((long)register0x00000020 + -0xb0)
              ;
              *(undefined4 *)((long)register0x00000020 + -0xcc) =
                   *(undefined4 *)((long)register0x00000020 + -0xec);
              *(undefined4 *)((long)register0x00000020 + -200) =
                   *(undefined4 *)((long)register0x00000020 + -0xe8);
              *(undefined4 *)((long)register0x00000020 + -0xc4) =
                   *(undefined4 *)((long)register0x00000020 + -0xe4);
              auVar52 = ZEXT812(0x3f800000);
              if (1.0 <= (float)iVar25) {
                auVar52._4_8_ = 0;
                auVar52._0_4_ = (float)iVar25;
              }
              auVar43._0_4_ = auVar52._0_4_ / 1080.0;
              auVar43._4_8_ = auVar52._4_8_;
              auVar43._12_4_ = 0;
              *(undefined1 (*) [16])((long)register0x00000020 + -0xc0) = auVar43;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c928;
              UVar53 = UnityEngine_Transform__get_right(pUVar27,(MethodInfo *)0x0);
              fVar35 = *(float *)((long)register0x00000020 + -0xd0);
              fVar48 = *(float *)((long)register0x00000020 + -0x100);
              *(float *)((long)register0x00000020 + -0xd0) = fVar48;
              *(float *)((long)register0x00000020 + -0xcc) = fVar48;
              *(undefined4 *)((long)register0x00000020 + -200) =
                   *(undefined4 *)((long)register0x00000020 + -0xf8);
              *(undefined4 *)((long)register0x00000020 + -0xc4) =
                   *(undefined4 *)((long)register0x00000020 + -0xf4);
              fVar49 = *(float *)((long)register0x00000020 + -0xa0);
              *(float *)((long)register0x00000020 + -0x90) = fVar49;
              *(float *)((long)register0x00000020 + -0x8c) = fVar49;
              *(undefined4 *)((long)register0x00000020 + -0x88) =
                   *(undefined4 *)((long)register0x00000020 + -0x98);
              *(undefined4 *)((long)register0x00000020 + -0x84) =
                   *(undefined4 *)((long)register0x00000020 + -0x94);
              fVar36 = *(float *)((long)register0x00000020 + -0xc0);
              *(float *)((long)register0x00000020 + -0x80) = fVar36;
              *(float *)((long)register0x00000020 + -0x7c) = fVar36;
              *(undefined4 *)((long)register0x00000020 + -0x78) =
                   *(undefined4 *)((long)register0x00000020 + -0xb8);
              *(undefined4 *)((long)register0x00000020 + -0x74) =
                   *(undefined4 *)((long)register0x00000020 + -0xb4);
              value_00.fields.x =
                   *(float *)((long)register0x00000020 + -0xe0) -
                   fVar35 * UVar53.fields.x * fVar48 * fVar49 * fVar36;
              value_00.fields.y =
                   *(float *)((long)register0x00000020 + -0xdc) -
                   fVar35 * UVar53.fields.y * fVar48 * fVar49 * fVar36;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c9a8;
              value_00.fields.z =
                   *(float *)((long)register0x00000020 + -0x104) -
                   UVar53.fields.z * fVar35 * fVar48 * fVar49 * fVar36;
              pUVar34 = pUVar32;
              UnityEngine_Transform__set_position
                        ((UnityEngine_Transform_o *)pUVar32,value_00,(MethodInfo *)0x0);
              pUVar7 = (pUVar33->fields).TooltipPopup;
              if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                 (pUVar32 = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
                 pUVar32 != (UI_MapEditorMenu_o *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447c9cc;
                pUVar34 = pUVar32;
                UVar53 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pUVar32,(MethodInfo *)0x0);
                pUVar7 = (pUVar33->fields).TooltipPopup;
                if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
                  *(float *)((long)register0x00000020 + -0x104) = UVar53.fields.z;
                  auVar21._8_4_ = extraout_XMM0_Dc_11;
                  auVar21._0_8_ = UVar53.fields._0_8_;
                  auVar21._12_4_ = extraout_XMM0_Dd_11;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xe0) = auVar21;
                  pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
                  pUVar34 = (UI_MapEditorMenu_o *)0x0;
                  if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                    *(float *)((long)register0x00000020 + -0xf0) =
                         *(float *)((long)register0x00000020 + -0xec) -
                         *(float *)((long)register0x00000020 + -0xac);
                    *(float *)((long)register0x00000020 + -0xec) =
                         *(float *)((long)register0x00000020 + -0xec);
                    *(undefined4 *)((long)register0x00000020 + -0xe8) =
                         *(undefined4 *)((long)register0x00000020 + -0xe8);
                    *(undefined4 *)((long)register0x00000020 + -0xe4) =
                         *(undefined4 *)((long)register0x00000020 + -0xe4);
                    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447ca13;
                    UVar53 = UnityEngine_Transform__get_up(pUVar27,(MethodInfo *)0x0);
                    fVar35 = *(float *)((long)register0x00000020 + -0xf0);
                    value_01.fields.x =
                         *(float *)((long)register0x00000020 + -0xe0) -
                         *(float *)((long)register0x00000020 + -0x80) *
                         *(float *)((long)register0x00000020 + -0xd0) * fVar35 * UVar53.fields.x *
                         *(float *)((long)register0x00000020 + -0x90);
                    value_01.fields.y =
                         *(float *)((long)register0x00000020 + -0xdc) -
                         *(float *)((long)register0x00000020 + -0x7c) *
                         *(float *)((long)register0x00000020 + -0xcc) * fVar35 * UVar53.fields.y *
                         *(float *)((long)register0x00000020 + -0x8c);
                    value_01.fields.z =
                         *(float *)((long)register0x00000020 + -0x104) -
                         *(float *)((long)register0x00000020 + -0xc0) *
                         *(float *)((long)register0x00000020 + -0x100) * UVar53.fields.z * fVar35 *
                         *(float *)((long)register0x00000020 + -0xa0);
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pUVar32,value_01,(MethodInfo *)0x0);
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
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x447cab1;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x118) = unaff_R15;
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x120) = pUVar32;
  *(UI_MapEditorMenu_o **)((long)register0x00000020 + -0x128) = unaff_RBX;
  puVar30 = (undefined1 *)((long)register0x00000020 + -0x168);
  *(undefined8 *)((long)register0x00000020 + -0x148) = uVar37;
  *(undefined4 *)((long)register0x00000020 + -0x140) = extraout_XMM0_Dc_12;
  *(undefined4 *)((long)register0x00000020 + -0x13c) = extraout_XMM0_Dd_12;
  __this = (Cameras_MapEditorCamera_o *)pUVar34;
  if (g_data_057ae879 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cae6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447caf2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this = (Cameras_MapEditorCamera_o *)&TypeInfo_SceneLoader;
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cafe;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae879 = '\x01';
  }
  pUVar9 = (pUVar34->fields).ColorPickPopup;
  if (pUVar9 != (UI_ColorPickPopup_o *)0x0) {
    if (*(char *)&(pUVar9->fields)._alphaPixels != '\0') {
      return;
    }
    pUVar33 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pUVar33 == (UI_MapEditorMenu_o *)0x0) {
label_0447cb5f:
      unaff_RBX = (UI_MapEditorMenu_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
      if ((((Settings_KeybindSetting_c *)pUVar33->klass)->_2).naturalAligment < bVar1) goto label_0447cb5f;
      unaff_RBX = (UI_MapEditorMenu_o *)0x0;
      if ((((Settings_KeybindSetting_c *)pUVar33->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)
      {
        unaff_RBX = pUVar33;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cb79;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cb85;
    __this = (Cameras_MapEditorCamera_o *)unaff_RBX;
    bVar24 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar24 != '\0') {
      if (unaff_RBX == (UI_MapEditorMenu_o *)0x0) goto label_0447ce2d;
      pUVar10 = (unaff_RBX->fields).InspectPanel;
      if ((pUVar10 != (UI_MapEditorInspectPanel_o *)0x0) && ((char)(pUVar10->fields).m_CachedPtr != '\0')) {
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cbaf;
    fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)register0x00000020 + -0x158) = fVar35;
    *(undefined4 *)((long)register0x00000020 + -0x154) = extraout_XMM0_Db_00;
    *(undefined4 *)((long)register0x00000020 + -0x150) = extraout_XMM0_Dc_13;
    *(undefined4 *)((long)register0x00000020 + -0x14c) = extraout_XMM0_Dd_13;
    __this = (Cameras_MapEditorCamera_o *)(pUVar34->fields)._popups;
    if ((UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cbc8;
      uVar26 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
      unaff_RBX = (UI_MapEditorMenu_o *)(ulong)uVar26;
      pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar34->fields).ConfirmPopup;
      if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
         (__this = (Cameras_MapEditorCamera_o *)(pSVar4->fields).ZoomIn,
         (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
        fVar35 = *(float *)((long)register0x00000020 + -0x158);
        if (0.033333335 <= fVar35) {
          fVar35 = 0.033333335;
        }
        *(float *)((long)register0x00000020 + -0x158) = fVar35;
        *(undefined4 *)((long)register0x00000020 + -0x154) =
             *(undefined4 *)((long)register0x00000020 + -0x154);
        *(undefined4 *)((long)register0x00000020 + -0x150) =
             *(undefined4 *)((long)register0x00000020 + -0x150);
        *(undefined4 *)((long)register0x00000020 + -0x14c) =
             *(undefined4 *)((long)register0x00000020 + -0x14c);
        *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cbff;
        bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
        if ((char)uVar26 == '\0') {
          if ((char)bVar24 == '\0') {
            pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar34->fields).ConfirmPopup;
            if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (__this = (Cameras_MapEditorCamera_o *)(pSVar4->fields).ZoomOut,
               (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
              *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cd8b;
              bVar24 = Settings_KeybindSetting__GetKey
                                 ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
              if ((char)bVar24 == '\0') {
                return;
              }
              pUVar7 = (pUVar34->fields).TooltipPopup;
              if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                 (pUVar32 = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
                 pUVar32 != (UI_MapEditorMenu_o *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cdb7;
                __this = (Cameras_MapEditorCamera_o *)pUVar32;
                UVar53 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pUVar32,(MethodInfo *)0x0);
                pUVar7 = (pUVar34->fields).TooltipPopup;
                if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
                  *(float *)((long)register0x00000020 + -0x15c) = UVar53.fields.z;
                  auVar23._8_4_ = extraout_XMM0_Dc_15;
                  auVar23._0_8_ = UVar53.fields._0_8_;
                  auVar23._12_4_ = extraout_XMM0_Dd_15;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x138) = auVar23;
                  pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
                  __this = (Cameras_MapEditorCamera_o *)0x0;
                  if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cddb;
                    UVar53 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
                    fVar35 = *(float *)((long)register0x00000020 + -0x158);
                    fVar48 = *(float *)((long)register0x00000020 + -0x148);
                    fVar49 = UVar53.fields.z * fVar35 * fVar48;
                    fVar36 = fVar48 * fVar35 * UVar53.fields.x;
                    fVar48 = fVar48 * fVar35 * UVar53.fields.y;
                    fVar35 = *(float *)((long)register0x00000020 + -0x138) - (fVar36 + fVar36);
                    fVar48 = *(float *)((long)register0x00000020 + -0x134) - (fVar48 + fVar48);
                    fVar49 = *(float *)((long)register0x00000020 + -0x15c) - (fVar49 + fVar49);
                    goto label_0447ce1d;
                  }
                }
              }
            }
          }
          else {
            pUVar7 = (pUVar34->fields).TooltipPopup;
            if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
               (pUVar32 = (UI_MapEditorMenu_o *)(pUVar7->fields).m_CachedPtr,
               pUVar32 != (UI_MapEditorMenu_o *)0x0)) {
              *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cc66;
              __this = (Cameras_MapEditorCamera_o *)pUVar32;
              UVar53 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pUVar32,(MethodInfo *)0x0);
              pUVar7 = (pUVar34->fields).TooltipPopup;
              if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
                *(float *)((long)register0x00000020 + -0x15c) = UVar53.fields.z;
                auVar22._8_4_ = extraout_XMM0_Dc_14;
                auVar22._0_8_ = UVar53.fields._0_8_;
                auVar22._12_4_ = extraout_XMM0_Dd_14;
                *(undefined1 (*) [16])((long)register0x00000020 + -0x138) = auVar22;
                pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
                __this = (Cameras_MapEditorCamera_o *)0x0;
                if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cc92;
                  UVar53 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
                  fVar35 = *(float *)((long)register0x00000020 + -0x158);
                  fVar48 = *(float *)((long)register0x00000020 + -0x148);
                  fVar49 = UVar53.fields.z * fVar35 * fVar48;
                  fVar36 = fVar48 * fVar35 * UVar53.fields.x;
                  fVar48 = fVar48 * fVar35 * UVar53.fields.y;
                  fVar35 = *(float *)((long)register0x00000020 + -0x138) + fVar36 + fVar36;
                  fVar48 = *(float *)((long)register0x00000020 + -0x134) + fVar48 + fVar48;
                  fVar49 = fVar49 + fVar49 + *(float *)((long)register0x00000020 + -0x15c);
label_0447ce1d:
                  value_02.fields.y = fVar48;
                  value_02.fields.x = fVar35;
                  value_02.fields.z = fVar49;
                  UnityEngine_Transform__set_position
                            ((UnityEngine_Transform_o *)pUVar32,value_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else if ((char)bVar24 == '\0') {
          pSVar4 = (Settings_MapEditorInputSettings_o *)(pUVar34->fields).ConfirmPopup;
          if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (__this = (Cameras_MapEditorCamera_o *)(pSVar4->fields).ZoomOut,
             (UI_MapEditorMenu_o *)__this != (UI_MapEditorMenu_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cd23;
            bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
            if ((char)bVar24 == '\0') {
              return;
            }
            pSVar29 = (pUVar34->fields)._popups;
            unaff_RBX = (UI_MapEditorMenu_o *)0x0;
            if (pSVar29 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cd42;
              fVar35 = UnityEngine_Camera__get_orthographicSize
                                 ((UnityEngine_Camera_o *)pSVar29,(MethodInfo *)0x0);
              fVar35 = fVar35 + *(float *)((long)register0x00000020 + -0x158) *
                                *(float *)((long)register0x00000020 + -0x148) +
                                *(float *)((long)register0x00000020 + -0x158) *
                                *(float *)((long)register0x00000020 + -0x148);
              goto label_0447cd55;
            }
          }
        }
        else {
          pSVar29 = (pUVar34->fields)._popups;
          unaff_RBX = (UI_MapEditorMenu_o *)0x0;
          if (pSVar29 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447cc22;
            fVar35 = UnityEngine_Camera__get_orthographicSize
                               ((UnityEngine_Camera_o *)pSVar29,(MethodInfo *)0x0);
            fVar35 = fVar35 - (*(float *)((long)register0x00000020 + -0x158) *
                               *(float *)((long)register0x00000020 + -0x148) +
                              *(float *)((long)register0x00000020 + -0x158) *
                              *(float *)((long)register0x00000020 + -0x148));
label_0447cd55:
            UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)pSVar29,fVar35,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
label_0447ce2d:
  *(undefined8 *)((long)register0x00000020 + -0x170) = 0x447ce32;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  uVar40 = extraout_XMM0_Dc_16;
  uVar41 = extraout_XMM0_Dd_16;
  uVar39 = extraout_XMM1_Da;
Cameras_MapEditorCamera__SnapCameraToAxis:
  *(UI_MapEditorMenu_o **)(puVar30 + -8) = pUVar34;
  *(UI_MapEditorMenu_o **)(puVar30 + -0x10) = pUVar32;
  *(undefined8 *)(puVar30 + -0x18) = unaff_R12;
  *(UI_MapEditorMenu_o **)(puVar30 + -0x20) = unaff_RBX;
  *(undefined4 *)(puVar30 + -0x58) = uVar39;
  *(undefined8 *)(puVar30 + -0x68) = uVar37;
  *(undefined4 *)(puVar30 + -0x60) = uVar40;
  *(undefined4 *)(puVar30 + -0x5c) = uVar41;
  if (g_data_057ae87b == '\0') {
    *(undefined8 *)(puVar30 + -0xe0) = 0x447ce74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447ce80;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447ce8c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447ce98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447cea4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447ceb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    *(undefined8 *)(puVar30 + -0xe0) = 0x447cebc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  *(undefined8 *)(puVar30 + -0xa8) = 0;
  *(undefined8 *)(puVar30 + -0xa0) = 0;
  *(undefined8 *)(puVar30 + -0x98) = 0;
  plVar11 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar11 != (long *)0x0) {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (*(byte *)(*plVar11 + 0x130) < bVar1) goto label_0447d3e9;
    if (*(Il2CppClass **)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    *(undefined8 *)(puVar30 + -0xe0) = 0x447cf36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar11 == (long *)0x0) goto label_0447d3d5;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)plVar11[7];
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_00->fields)._count == 0) {
    pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
    if (pUVar7 == (UI_TooltipPopup_o *)0x0) goto label_0447d3d5;
    pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
    if (pUVar27 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d37a;
    UVar53 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
    *(float *)(puVar30 + -0xcc) = UVar53.fields.z;
    pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
    if (pUVar7 == (UI_TooltipPopup_o *)0x0) goto label_0447d3d5;
    auVar18._8_4_ = extraout_XMM0_Dc_22;
    auVar18._0_8_ = UVar53.fields._0_8_;
    auVar18._12_4_ = extraout_XMM0_Dd_22;
    *(undefined1 (*) [16])(puVar30 + -200) = auVar18;
    pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
    if (pUVar27 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d39e;
    UVar53 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
    fVar35 = *(float *)(puVar30 + -200) + UVar53.fields.x * 50.0;
    fVar48 = *(float *)(puVar30 + -0xc4) + UVar53.fields.y * 50.0;
    fVar49 = *(float *)(puVar30 + -0xc0) + extraout_XMM0_Dc_23 * 0.0;
    fVar36 = *(float *)(puVar30 + -0xbc) + extraout_XMM0_Dd_23 * 0.0;
    *(float *)(puVar30 + -0xcc) = *(float *)(puVar30 + -0xcc) + UVar53.fields.z * 50.0;
    pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
    goto joined_r0x0447d3cf;
  }
  puVar12 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined8 *)(puVar30 + -200) = *puVar12;
  *(undefined8 *)(puVar30 + -0xc0) = 0;
  *(undefined4 *)(puVar30 + -0xcc) = *(undefined4 *)(puVar12 + 1);
  *(undefined8 *)(puVar30 + -0xe0) = 0x447cf9a;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)(puVar30 + -0x38),__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  *(undefined8 *)(puVar30 + -0x98) = *(undefined8 *)(puVar30 + -0x28);
  *(undefined8 *)(puVar30 + -0xa8) = *(undefined8 *)(puVar30 + -0x38);
  *(undefined8 *)(puVar30 + -0xa0) = *(undefined8 *)(puVar30 + -0x30);
  while( true ) {
    *(undefined8 *)(puVar30 + -0xe0) = 0x447cfcb;
    bVar24 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       ((System_Collections_Generic_HashSet_Enumerator_T__o)
                        *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar30 + -0xd8),
                        (MethodInfo_3219C40 *)(puVar30 + -0xa8));
    if ((char)bVar24 == '\0') {
      *(undefined8 *)(puVar30 + -0xe0) = 0x447d037;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)
                 *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar30 + -0xd8),
                 (MethodInfo_3219C30 *)(puVar30 + -0xa8));
      goto label_0447d037;
    }
    if (*(long *)(puVar30 + -0x98) == 0) goto label_0447d3df;
    __this_01 = *(UnityEngine_GameObject_o **)(*(long *)(puVar30 + -0x98) + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_0447d3e4;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447cff1;
    pUVar27 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if (pUVar27 == (UnityEngine_Transform_o *)0x0) break;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d004;
    UVar53 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
    *(float *)(puVar30 + -200) = *(float *)(puVar30 + -200) + UVar53.fields.x;
    *(float *)(puVar30 + -0xc4) = *(float *)(puVar30 + -0xc4) + UVar53.fields.y;
    *(float *)(puVar30 + -0xc0) = *(float *)(puVar30 + -0xc0) + extraout_XMM0_Dc_17;
    *(float *)(puVar30 + -0xbc) = *(float *)(puVar30 + -0xbc) + extraout_XMM0_Dd_17;
    *(float *)(puVar30 + -0xcc) = *(float *)(puVar30 + -0xcc) + UVar53.fields.z;
  }
  while( true ) {
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d3df;
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d3e4;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d3e9;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d3f1;
    auVar52 = il2cpp_runtime_helper_022b2fd0(plVar11);
    if (auVar52._8_4_ != 1) break;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d433;
    plVar28 = (long *)__cxa_begin_catch(auVar52._0_8_);
    lVar13 = *plVar28;
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d43b;
    __cxa_end_catch();
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d44f;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o)
               *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar30 + -0xd8),
               (MethodInfo_3219C30 *)(puVar30 + -0xa8));
    if (lVar13 != 0) {
      *(undefined8 *)(puVar30 + -0xe0) = 0x447d460;
      il2cpp_runtime_helper_022fefe0(lVar13);
      break;
    }
label_0447d037:
    if (plVar11[7] != 0) {
      fVar35 = (float)*(int *)(plVar11[7] + 0x20);
      *(float *)(puVar30 + -0xcc) = *(float *)(puVar30 + -0xcc) / fVar35;
      auVar15._4_4_ = fVar35;
      auVar15._0_4_ = fVar35;
      auVar15._8_8_ = 0;
      auVar44 = divps(*(undefined1 (*) [16])(puVar30 + -200),auVar15);
      fVar35 = auVar44._0_4_;
      fVar48 = auVar44._4_4_;
      fVar49 = auVar44._8_4_;
      fVar36 = auVar44._12_4_;
      pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
joined_r0x0447d3cf:
      if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
        *(float *)(puVar30 + -200) = fVar35;
        *(float *)(puVar30 + -0xc4) = fVar48;
        *(float *)(puVar30 + -0xc0) = fVar49;
        *(float *)(puVar30 + -0xbc) = fVar36;
        pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
        if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
          pMVar31 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar30 + -0xe0) = 0x447d092;
          UVar53 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
          fVar35 = UVar53.fields.z;
          fVar36 = UVar53.fields.x;
          fVar38 = UVar53.fields.y;
          fVar48 = *(float *)(puVar30 + -200);
          fVar49 = *(float *)(puVar30 + -0xc4);
          uVar39 = extraout_XMM0_Dc_18;
          uVar40 = extraout_XMM0_Dd_18;
          fVar47 = fVar38;
          fVar42 = fVar38;
          uVar41 = extraout_XMM0_Dc_18;
          uVar50 = extraout_XMM0_Dd_18;
          if (g_data_057a6841 == '\0') {
            *(float *)(puVar30 + -0xb8) = fVar35;
            *(float *)(puVar30 + -0x78) = fVar38;
            *(float *)(puVar30 + -0x74) = fVar38;
            *(undefined4 *)(puVar30 + -0x70) = extraout_XMM0_Dc_18;
            *(undefined4 *)(puVar30 + -0x6c) = extraout_XMM0_Dd_18;
            auVar16._8_4_ = extraout_XMM0_Dc_18;
            auVar16._0_8_ = UVar53.fields._0_8_;
            auVar16._12_4_ = extraout_XMM0_Dd_18;
            *(undefined1 (*) [16])(puVar30 + -0x88) = auVar16;
            *(float *)(puVar30 + -0x48) = fVar49;
            *(float *)(puVar30 + -0x44) = fVar49;
            *(undefined4 *)(puVar30 + -0x40) = *(undefined4 *)(puVar30 + -0xc0);
            *(undefined4 *)(puVar30 + -0x3c) = *(undefined4 *)(puVar30 + -0xbc);
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d0d2;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            fVar49 = *(float *)(puVar30 + -0x48);
            fVar36 = *(float *)(puVar30 + -0x88);
            fVar38 = *(float *)(puVar30 + -0x84);
            uVar39 = *(undefined4 *)(puVar30 + -0x80);
            uVar40 = *(undefined4 *)(puVar30 + -0x7c);
            fVar47 = *(float *)(puVar30 + -0x78);
            fVar42 = *(float *)(puVar30 + -0x74);
            uVar41 = *(undefined4 *)(puVar30 + -0x70);
            uVar50 = *(undefined4 *)(puVar30 + -0x6c);
            fVar35 = *(float *)(puVar30 + -0xb8);
            fVar48 = *(float *)(puVar30 + -200);
            g_data_057a6841 = '\x01';
          }
          fVar36 = fVar36 - fVar48;
          fVar47 = fVar47 - fVar49;
          fVar35 = fVar35 - *(float *)(puVar30 + -0xcc);
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            *(float *)(puVar30 + -0xb8) = fVar35;
            *(float *)(puVar30 + -0x78) = fVar47;
            *(float *)(puVar30 + -0x74) = fVar42;
            *(undefined4 *)(puVar30 + -0x70) = uVar41;
            *(undefined4 *)(puVar30 + -0x6c) = uVar50;
            *(float *)(puVar30 + -0x88) = fVar36;
            *(float *)(puVar30 + -0x84) = fVar38;
            *(undefined4 *)(puVar30 + -0x80) = uVar39;
            *(undefined4 *)(puVar30 + -0x7c) = uVar40;
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d12c;
            il2cpp_runtime_helper_02337ed0();
            fVar36 = *(float *)(puVar30 + -0x88);
            fVar47 = *(float *)(puVar30 + -0x78);
            fVar35 = *(float *)(puVar30 + -0xb8);
          }
          fVar35 = fVar35 * fVar35 + fVar47 * fVar47 + fVar36 * fVar36;
          if (fVar35 < 0.0) {
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d169;
            fVar35 = sqrtf(fVar35);
            uVar39 = extraout_XMM0_Db_01;
            uVar40 = extraout_XMM0_Dc_19;
            uVar41 = extraout_XMM0_Dd_19;
          }
          else {
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            fVar35 = SQRT(fVar35);
          }
          *(float *)(puVar30 + -0xb8) = fVar35;
          *(undefined4 *)(puVar30 + -0xb4) = uVar39;
          *(undefined4 *)(puVar30 + -0xb0) = uVar40;
          *(undefined4 *)(puVar30 + -0xac) = uVar41;
          *(undefined8 *)(puVar30 + -0xe0) = 0x447d176;
          bVar24 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,pMVar31);
          if ((char)bVar24 == '\0') {
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d352;
            Cameras_MapEditorCamera__AlignToWorldAxis(__this,pMVar31);
            return;
          }
          pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
          if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
             (pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr,
             pUVar27 != (UnityEngine_Transform_o *)0x0)) {
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d1ad;
            direction.fields.z = *(float *)(puVar30 + -0x58);
            direction.fields._0_8_ = *(undefined8 *)(puVar30 + -0x68);
            UVar53 = UnityEngine_Transform__TransformDirection(pUVar27,direction,(MethodInfo *)0x0);
            auVar45._0_8_ = UVar53.fields._0_8_;
            auVar45._8_4_ = extraout_XMM0_Dc_20;
            auVar45._12_4_ = extraout_XMM0_Dd_20;
            *(undefined8 *)(puVar30 + -0xe0) = 0x447d1c8;
            uVar37 = auVar45._8_8_;
            UVar51 = UnityEngine_Quaternion__AngleAxis(90.0,UVar53,(MethodInfo *)0x0);
            pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
            if (pUVar7 != (UI_TooltipPopup_o *)0x0) {
              auVar17._8_4_ = extraout_XMM0_Dc_21;
              auVar17._0_8_ = UVar51.fields._0_8_;
              auVar17._12_4_ = extraout_XMM0_Dd_21;
              *(undefined1 (*) [16])(puVar30 + -0x68) = auVar17;
              *(long *)(puVar30 + -0x58) = UVar51.fields._8_8_;
              *(undefined8 *)(puVar30 + -0x50) = uVar37;
              pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr;
              if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)(puVar30 + -0xe0) = 0x447d1f9;
                UVar51 = UnityEngine_Transform__get_rotation(pUVar27,(MethodInfo *)0x0);
                fVar38 = UVar51.fields.x;
                fVar47 = UVar51.fields.y;
                fVar35 = *(float *)(puVar30 + -0x58);
                fVar48 = *(float *)(puVar30 + -0x54);
                fVar42 = UVar51.fields.z;
                fVar46 = UVar51.fields.w;
                fVar49 = *(float *)(puVar30 + -0x68);
                fVar36 = *(float *)(puVar30 + -100);
                UVar51.fields.w = ((fVar46 * fVar48 - fVar38 * fVar49) - fVar47 * fVar36) - fVar42 * fVar35;
                UVar51.fields.z = (fVar49 * fVar47 + fVar35 * fVar46 + fVar48 * fVar42) - fVar36 * fVar38;
                *(undefined8 *)(puVar30 + -0xe0) = 0x447d2c6;
                UVar51.fields.y = (fVar35 * fVar38 + fVar36 * fVar46 + fVar48 * fVar47) - fVar42 * fVar49;
                UVar51.fields.x = (fVar36 * fVar42 + fVar49 * fVar46 + fVar48 * fVar38) - fVar47 * fVar35;
                UnityEngine_Transform__set_rotation(pUVar27,UVar51,(MethodInfo *)0x0);
                pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
                if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                   (pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr,
                   pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                  *(undefined8 *)(puVar30 + -0xe0) = 0x447d2ea;
                  UVar53 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
                  fVar35 = *(float *)(puVar30 + -0xb8);
                  value_03.fields.x = *(float *)(puVar30 + -200) - fVar35 * UVar53.fields.x;
                  value_03.fields.y = *(float *)(puVar30 + -0xc4) - fVar35 * UVar53.fields.y;
                  *(undefined8 *)(puVar30 + -0xe0) = 0x447d31c;
                  value_03.fields.z = *(float *)(puVar30 + -0xcc) - UVar53.fields.z * fVar35;
                  UnityEngine_Transform__set_position(pUVar27,value_03,(MethodInfo *)0x0);
                  pUVar7 = (((UI_MapEditorMenu_o *)__this)->fields).TooltipPopup;
                  if ((pUVar7 != (UI_TooltipPopup_o *)0x0) &&
                     (pUVar27 = (UnityEngine_Transform_o *)(pUVar7->fields).m_CachedPtr,
                     pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                    *(undefined8 *)(puVar30 + -0xe0) = 0x447d348;
                    worldPosition.fields.z = *(float *)(puVar30 + -0xcc);
                    worldPosition.fields._0_8_ = *(undefined8 *)(puVar30 + -200);
                    UnityEngine_Transform__LookAt_4e0aa40(pUVar27,worldPosition,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    *(undefined8 *)(puVar30 + -0xe0) = 0x447d3da;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)(puVar30 + -0xe0) = 0x447d47b;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)
             *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar30 + -0xd8),
             (MethodInfo_3219C30 *)(puVar30 + -0xa8));
  *(undefined8 *)(puVar30 + -0xe0) = 0x447d488;
  _Unwind_Resume(auVar52._0_8_);
}


// Cameras.MapEditorCamera$$UpdateMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateMovement (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447bed0

void Cameras_MapEditorCamera__UpdateMovement(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  Settings_MapEditorSettings_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  Settings_KeybindSetting_o *pSVar9;
  UI_MapEditorMenu_o *pUVar10;
  long *plVar11;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined8 *puVar12;
  UnityEngine_GameObject_o *__this_01;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool_conflict bVar17;
  int32_t iVar18;
  uint uVar19;
  UnityEngine_Transform_o *pUVar20;
  long *plVar21;
  Cameras_MapEditorCamera_o *unaff_RBX;
  Cameras_MapEditorCamera_o *pCVar22;
  UnityEngine_Camera_o *pUVar23;
  undefined1 *puVar24;
  MethodInfo *pMVar25;
  Cameras_MapEditorCamera_o *__this_02;
  Cameras_MapEditorCamera_o *pCVar26;
  undefined8 unaff_R12;
  Cameras_MapEditorCamera_o *unaff_R15;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dc_12;
  undefined4 extraout_XMM0_Dc_13;
  float extraout_XMM0_Dc_14;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 extraout_XMM0_Dd_13;
  float extraout_XMM0_Dd_14;
  float fVar35;
  undefined4 extraout_XMM1_Da;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  UnityEngine_Quaternion_o UVar42;
  undefined1 auVar43 [12];
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o worldPosition;
  undefined1 auStack_1c0 [12];
  float fStack_1b4;
  float fStack_1b0;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [16];
  Cameras_MapEditorCamera_o *pCStack_180;
  Cameras_MapEditorCamera_o *pCStack_178;
  float fStack_148;
  float fStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_108;
  float fStack_104;
  undefined1 auStack_58 [12];
  float local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  float local_28;
  
  puVar24 = auStack_58;
  if (g_data_057ae878 == '\0') {
    pCVar26 = (Cameras_MapEditorCamera_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae878 = '\x01';
    if (g_data_057a65d5 != '\0') goto label_0447bef4;
label_0447bfcf:
    pCVar26 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
    pSVar5 = (__this->fields)._input;
  }
  else {
    pCVar26 = __this;
    if (g_data_057a65d5 == '\0') goto label_0447bfcf;
label_0447bef4:
    pSVar5 = (__this->fields)._input;
  }
  if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SaveMap,
     pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
    local_48 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uStack_40 = 0;
    local_4c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      return;
    }
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Forward,
       pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Back,
           pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
          bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
          if ((char)bVar17 != '\0') {
            pUVar6 = (__this->fields).Cache;
            if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
               (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
               pCVar26 == (Cameras_MapEditorCamera_o *)0x0)) goto label_0447c3c0;
            UVar44 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
            local_48 = CONCAT44(local_48._4_4_ - UVar44.fields.y,(float)local_48 - UVar44.fields.x);
            uStack_40 = CONCAT44(uStack_40._4_4_ - extraout_XMM0_Dd_00,(float)uStack_40 - extraout_XMM0_Dc_00)
            ;
            local_4c = local_4c - UVar44.fields.z;
          }
label_0447c059:
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Right,
             pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0)
            ;
            if ((char)bVar17 == '\0') {
              pSVar5 = (__this->fields)._input;
              if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Left,
                 pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                bVar17 = Settings_KeybindSetting__GetKey
                                   ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
                if ((char)bVar17 != '\0') {
                  pUVar6 = (__this->fields).Cache;
                  if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                     pCVar26 == (Cameras_MapEditorCamera_o *)0x0)) goto label_0447c3c0;
                  UVar44 = UnityEngine_Transform__get_right
                                     ((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
                  local_48 = CONCAT44(local_48._4_4_ - UVar44.fields.y,(float)local_48 - UVar44.fields.x);
                  uStack_40 = CONCAT44(uStack_40._4_4_ - extraout_XMM0_Dd_02,
                                       (float)uStack_40 - extraout_XMM0_Dc_02);
                  local_4c = local_4c - UVar44.fields.z;
                }
label_0447c11f:
                pSVar5 = (__this->fields)._input;
                if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
                   (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Up,
                   pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                  bVar17 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
                  if ((char)bVar17 == '\0') {
                    pSVar5 = (__this->fields)._input;
                    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Down,
                       pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                      bVar17 = Settings_KeybindSetting__GetKey
                                         ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
                      if ((char)bVar17 != '\0') {
                        pUVar6 = (__this->fields).Cache;
                        if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                           (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                           pCVar26 == (Cameras_MapEditorCamera_o *)0x0)) goto label_0447c3c0;
                        UVar44 = UnityEngine_Transform__get_up
                                           ((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
                        local_48 = CONCAT44(local_48._4_4_ - UVar44.fields.y,(float)local_48 - UVar44.fields.x
                                           );
                        uStack_40 = CONCAT44(uStack_40._4_4_ - extraout_XMM0_Dd_04,
                                             (float)uStack_40 - extraout_XMM0_Dc_04);
                        local_4c = local_4c - UVar44.fields.z;
                      }
label_0447c1e5:
                      pSVar7 = (__this->fields)._settings;
                      if ((((pSVar7 != (Settings_MapEditorSettings_o *)0x0) &&
                           (pSVar8 = (pSVar7->fields).CameraMoveSpeed,
                           pSVar8 != (Settings_FloatSetting_o *)0x0)) &&
                          (pSVar5 = (__this->fields)._input,
                          pSVar5 != (Settings_MapEditorInputSettings_o *)0x0)) &&
                         (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Slow,
                         pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                        local_38 = ZEXT416((uint)(pSVar8->fields)._value);
                        bVar17 = Settings_KeybindSetting__GetKey
                                           ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
                        if ((char)bVar17 == '\0') {
                          pSVar5 = (__this->fields)._input;
                          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
                             (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Fast,
                             pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                            bVar17 = Settings_KeybindSetting__GetKey
                                               ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
                            if ((char)bVar17 == '\0') goto label_0447c296;
                            pSVar7 = (__this->fields)._settings;
                            if (pSVar7 != (Settings_MapEditorSettings_o *)0x0) {
                              pSVar8 = (pSVar7->fields).CameraFastMoveSpeed;
                              goto joined_r0x0447c286;
                            }
                          }
                        }
                        else {
                          pSVar7 = (__this->fields)._settings;
                          if (pSVar7 != (Settings_MapEditorSettings_o *)0x0) {
                            pSVar8 = (pSVar7->fields).CameraSlowMoveSpeed;
joined_r0x0447c286:
                            if (pSVar8 != (Settings_FloatSetting_o *)0x0) {
                              local_38 = ZEXT416((uint)(pSVar8->fields)._value);
label_0447c296:
                              pCVar26 = (Cameras_MapEditorCamera_o *)0x0;
                              fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                              pUVar6 = (__this->fields).Cache;
                              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                                 (unaff_RBX = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                                 unaff_RBX != (Cameras_MapEditorCamera_o *)0x0)) {
                                if (0.033333335 <= fVar27) {
                                  fVar27 = 0.033333335;
                                }
                                local_28 = fVar27;
                                UVar44 = UnityEngine_Transform__get_position
                                                   ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                                UVar45.fields.x =
                                     UVar44.fields.x + (float)local_38._0_4_ * (float)local_48 * local_28;
                                UVar45.fields.y =
                                     UVar44.fields.y + (float)local_38._0_4_ * local_48._4_4_ * local_28;
                                UVar45.fields.z =
                                     UVar44.fields.z + local_4c * local_28 * (float)local_38._0_4_;
                                pMVar25 = (MethodInfo *)0x0;
                                UnityEngine_Transform__set_position
                                          ((UnityEngine_Transform_o *)unaff_RBX,UVar45,(MethodInfo *)0x0);
                                Cameras_MapEditorCamera__UpdateDragMovement
                                          (__this,(float)local_38._0_4_,pMVar25);
                                pCVar26 = __this;
                                Cameras_MapEditorCamera__UpdateZoomMovement
                                          (__this,(float)local_38._0_4_,pMVar25);
                                pSVar5 = (__this->fields)._input;
                                if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                   (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ToggleOrthographic
                                   , pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                                  bVar17 = Settings_KeybindSetting__GetKeyDown
                                                     ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0
                                                     );
                                  if ((char)bVar17 == '\0') {
                                    return;
                                  }
                                  unaff_RBX = (Cameras_MapEditorCamera_o *)(__this->fields).Camera;
                                  if (unaff_RBX != (Cameras_MapEditorCamera_o *)0x0) {
                                    bVar17 = UnityEngine_Camera__get_orthographic
                                                       ((UnityEngine_Camera_o *)unaff_RBX,(MethodInfo *)0x0);
                                    UnityEngine_Camera__set_orthographic
                                              ((UnityEngine_Camera_o *)unaff_RBX,
                                               (uint)(byte)((byte)bVar17 ^ 1),(MethodInfo *)0x0);
                                    pUVar23 = (__this->fields).Camera;
                                    pCVar26 = (Cameras_MapEditorCamera_o *)0x0;
                                    if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
                                      bVar17 = UnityEngine_Camera__get_orthographic(pUVar23,(MethodInfo *)0x0)
                                      ;
                                      if ((char)bVar17 == '\0') {
                                        return;
                                      }
                                      pUVar23 = (__this->fields).Camera;
                                      pCVar26 = (Cameras_MapEditorCamera_o *)0x0;
                                      iVar18 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
                                      unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
                                      if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
                                        UnityEngine_Camera__set_orthographicSize
                                                  (pUVar23,(float)iVar18 * 0.25,(MethodInfo *)0x0);
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
                    }
                  }
                  else {
                    pUVar6 = (__this->fields).Cache;
                    if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                       (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                       pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                      UVar44 = UnityEngine_Transform__get_up
                                         ((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
                      local_48 = CONCAT44(local_48._4_4_ + UVar44.fields.y,(float)local_48 + UVar44.fields.x);
                      uStack_40 = CONCAT44(uStack_40._4_4_ + extraout_XMM0_Dd_03,
                                           (float)uStack_40 + extraout_XMM0_Dc_03);
                      local_4c = local_4c + UVar44.fields.z;
                      goto label_0447c1e5;
                    }
                  }
                }
              }
            }
            else {
              pUVar6 = (__this->fields).Cache;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                 pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
                UVar44 = UnityEngine_Transform__get_right
                                   ((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
                local_48 = CONCAT44(local_48._4_4_ + UVar44.fields.y,(float)local_48 + UVar44.fields.x);
                uStack_40 = CONCAT44(uStack_40._4_4_ + extraout_XMM0_Dd_01,
                                     (float)uStack_40 + extraout_XMM0_Dc_01);
                local_4c = local_4c + UVar44.fields.z;
                goto label_0447c11f;
              }
            }
          }
        }
      }
      else {
        pUVar6 = (__this->fields).Cache;
        if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
           (pCVar26 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
           pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
          UVar44 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar26,(MethodInfo *)0x0);
          local_48 = CONCAT44(local_48._4_4_ + UVar44.fields.y,(float)local_48 + UVar44.fields.x);
          uStack_40 = CONCAT44(uStack_40._4_4_ + extraout_XMM0_Dd,(float)uStack_40 + extraout_XMM0_Dc);
          local_4c = local_4c + UVar44.fields.z;
          goto label_0447c059;
        }
      }
    }
  }
label_0447c3c0:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = pCVar26;
  if (g_data_057ae87a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    __this_02 = (Cameras_MapEditorCamera_o *)&"Mouse X";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae87a = '\x01';
  }
  pCVar22 = unaff_RBX;
  if ((char)(pCVar26->fields)._wasRotating == '\0') {
    pUVar10 = (pCVar26->fields)._menu;
    if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
      if ((char)(pUVar10->fields).IsMouseUI != '\0') {
        return;
      }
      goto label_0447c419;
    }
  }
  else {
label_0447c419:
    *(undefined1 *)&(pCVar26->fields)._wasRotating = 0;
    pSVar5 = (pCVar26->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (__this_02 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).RotateCamera,
       __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
label_0447c607:
        pSVar5 = (pCVar26->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (__this_02 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraLeft,
           __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
          bVar17 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
          if ((char)bVar17 != '\0') {
            if (g_data_057ac31b == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057ac31b = '\x01';
            }
            uVar30 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            uVar33 = (undefined4)uVar30;
            uVar34 = (undefined4)((ulong)uVar30 >> 0x20);
            uVar32 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
label_0447c7b5:
            uVar30 = CONCAT44(uVar34,uVar33);
            uVar34 = 0;
            uVar33 = 0;
            goto Cameras_MapEditorCamera__SnapCameraToAxis;
          }
          pSVar5 = (pCVar26->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (__this_02 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraRight,
             __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar17 = Settings_KeybindSetting__GetKeyDown
                               ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
            if ((char)bVar17 != '\0') {
              if (g_data_057a6844 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6844 = '\x01';
              }
              uVar30 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              uVar33 = (undefined4)uVar30;
              uVar34 = (undefined4)((ulong)uVar30 >> 0x20);
              uVar32 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              goto label_0447c7b5;
            }
            pSVar5 = (pCVar26->fields)._input;
            if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (__this_02 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraUp,
               __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
              bVar17 = Settings_KeybindSetting__GetKeyDown
                                 ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                if (g_data_057abfed == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057abfed = '\x01';
                }
                uVar30 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
                uVar33 = (undefined4)uVar30;
                uVar34 = (undefined4)((ulong)uVar30 >> 0x20);
                uVar32 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
                goto label_0447c7b5;
              }
              pSVar5 = (pCVar26->fields)._input;
              if (pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) {
                pSVar9 = (pSVar5->fields).SnapCameraDown;
                __this_02 = (Cameras_MapEditorCamera_o *)0x0;
                if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
                  bVar17 = Settings_KeybindSetting__GetKeyDown(pSVar9,0,(MethodInfo *)0x0);
                  if ((char)bVar17 == '\0') {
                    return;
                  }
                  if (g_data_057ac7d4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057ac7d4 = '\x01';
                  }
                  uVar30 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
                  uVar33 = (undefined4)uVar30;
                  uVar34 = (undefined4)((ulong)uVar30 >> 0x20);
                  uVar32 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
                  goto label_0447c7b5;
                }
              }
            }
          }
        }
      }
      else {
        fVar27 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        __this_02 = "Mouse Y";
        fVar28 = UnityEngine_Input__GetAxis((System_String_o *)"Mouse Y",(MethodInfo *)0x0);
        pSVar7 = (pCVar26->fields)._settings;
        if ((pSVar7 != (Settings_MapEditorSettings_o *)0x0) &&
           (pSVar8 = (pSVar7->fields).CameraRotateSpeed, pSVar8 != (Settings_FloatSetting_o *)0x0)) {
          fVar40 = (pSVar8->fields)._value;
          fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          __this_02 = (Cameras_MapEditorCamera_o *)0x0;
          iVar18 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          pUVar6 = (pCVar26->fields).Cache;
          if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
             (pCVar22 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
             pCVar22 != (Cameras_MapEditorCamera_o *)0x0)) {
            if (0.033333335 <= fVar29) {
              fVar29 = 0.033333335;
            }
            fVar31 = 1.0;
            if (1.0 <= (float)iVar18) {
              fVar31 = (float)iVar18;
            }
            UVar44 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar22,(MethodInfo *)0x0)
            ;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            __this_02 = pCVar22;
            UnityEngine_Transform__RotateAround
                      ((UnityEngine_Transform_o *)pCVar22,UVar44,
                       (UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                       fVar27 * fVar29 * fVar40 * (fVar31 / 1080.0),(MethodInfo *)0x0);
            pUVar6 = (pCVar26->fields).Cache;
            if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
               (pCVar22 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
               pCVar22 != (Cameras_MapEditorCamera_o *)0x0)) {
              __this_02 = pCVar22;
              UVar44 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar22,(MethodInfo *)0x0);
              pUVar6 = (pCVar26->fields).Cache;
              if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar20 = (pUVar6->fields).Transform;
                __this_02 = (Cameras_MapEditorCamera_o *)0x0;
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  UVar45 = UnityEngine_Transform__get_right(pUVar20,(MethodInfo *)0x0);
                  __this_02 = pCVar22;
                  UnityEngine_Transform__RotateAround
                            ((UnityEngine_Transform_o *)pCVar22,UVar44,UVar45,
                             -(fVar40 * fVar28 * fVar29 * (fVar31 / 1080.0)),(MethodInfo *)0x0);
                  *(undefined1 *)&(pCVar26->fields)._wasRotating = 1;
                  goto label_0447c607;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar5 = (__this_02->fields)._input;
  unaff_RBX = pCVar22;
  unaff_R15 = __this_02;
  __this = pCVar26;
  if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (unaff_R15 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan, unaff_RBX = __this_02,
     unaff_R15 != (Cameras_MapEditorCamera_o *)0x0)) {
    bVar17 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)unaff_R15,0,(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      *(undefined1 *)((long)&(__this_02->fields)._wasRotating + 1) = 1;
      UVar44 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (__this_02->fields)._startDrag = (int)UVar44.fields._0_8_;
      (__this_02->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar44.fields._0_8_ >> 0x20);
      (__this_02->fields)._lastDragPosition.fields.y = UVar44.fields.z;
      return;
    }
    pSVar5 = (__this_02->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (unaff_R15 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan,
       unaff_R15 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R15,0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        pSVar5 = (__this_02->fields)._input;
        if (pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) {
          pSVar9 = (pSVar5->fields).Pan;
          unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
          if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
            bVar17 = Settings_KeybindSetting__GetKeyUp(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar17 == '\0') {
              return;
            }
            *(undefined1 *)((long)&(__this_02->fields)._wasRotating + 1) = 0;
            return;
          }
        }
      }
      else {
        if (*(char *)((long)&(__this_02->fields)._wasRotating + 1) == '\0') {
          return;
        }
        UVar44 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar1 = (__this_02->fields)._startDrag;
        uVar2 = (__this_02->fields)._lastDragPosition.fields.x;
        UVar45 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (__this_02->fields)._startDrag = (int)UVar45.fields._0_8_;
        (__this_02->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar45.fields._0_8_ >> 0x20);
        (__this_02->fields)._lastDragPosition.fields.y = UVar45.fields.z;
        fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
        iVar18 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar6 = (__this_02->fields).Cache;
        if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
           (__this = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
           __this != (Cameras_MapEditorCamera_o *)0x0)) {
          unaff_R15 = __this;
          UVar45 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
          pUVar6 = (__this_02->fields).Cache;
          if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar20 = (pUVar6->fields).Transform;
            unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
              fStack_148 = UVar44.fields.x;
              fStack_144 = UVar44.fields.y;
              if (0.033333335 <= fVar28) {
                fVar28 = 0.033333335;
              }
              fStack_148 = fStack_148 - (float)uVar1;
              fVar40 = 1.0;
              if (1.0 <= (float)iVar18) {
                fVar40 = (float)iVar18;
              }
              fVar40 = fVar40 / 1080.0;
              UVar44 = UnityEngine_Transform__get_right(pUVar20,(MethodInfo *)0x0);
              fStack_138 = UVar45.fields.x;
              fStack_134 = UVar45.fields.y;
              value.fields.x = fStack_138 - fStack_148 * UVar44.fields.x * fVar28 * fVar27 * fVar40;
              value.fields.y = fStack_134 - fStack_148 * UVar44.fields.y * fVar28 * fVar27 * fVar40;
              value.fields.z = UVar45.fields.z - UVar44.fields.z * fStack_148 * fVar28 * fVar27 * fVar40;
              unaff_R15 = __this;
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this,value,(MethodInfo *)0x0);
              pUVar6 = (__this_02->fields).Cache;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (__this = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                 __this != (Cameras_MapEditorCamera_o *)0x0)) {
                unaff_R15 = __this;
                UVar44 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                pUVar6 = (__this_02->fields).Cache;
                if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                  pUVar20 = (pUVar6->fields).Transform;
                  unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    fStack_144 = fStack_144 - (float)uVar2;
                    UVar45 = UnityEngine_Transform__get_up(pUVar20,(MethodInfo *)0x0);
                    fStack_138 = UVar44.fields.x;
                    fStack_134 = UVar44.fields.y;
                    value_00.fields.x = fStack_138 - fVar40 * fVar28 * fStack_144 * UVar45.fields.x * fVar27;
                    value_00.fields.y = fStack_134 - fVar40 * fVar28 * fStack_144 * UVar45.fields.y * fVar27;
                    value_00.fields.z =
                         UVar44.fields.z - fVar40 * fVar28 * UVar45.fields.z * fStack_144 * fVar27;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)__this,value_00,(MethodInfo *)0x0);
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
  uStack_1a0 = il2cpp_runtime_helper_022b2c90();
  puVar24 = auStack_1c0;
  pCVar26 = unaff_R15;
  pCStack_180 = unaff_RBX;
  pCStack_178 = __this;
  if (g_data_057ae879 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pCVar26 = (Cameras_MapEditorCamera_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae879 = '\x01';
  }
  pUVar10 = (unaff_R15->fields)._menu;
  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
    if ((char)(pUVar10->fields).IsMouseUI != '\0') {
      return;
    }
    pCVar26 = *(Cameras_MapEditorCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar26 == (Cameras_MapEditorCamera_o *)0x0) {
label_0447cb5f:
      unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
      iVar4 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
      if ((((Settings_KeybindSetting_c *)pCVar26->klass)->_2).naturalAligment < bVar3) goto label_0447cb5f;
      unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
      if ((((Settings_KeybindSetting_c *)pCVar26->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapEditorGameManager)
      {
        unaff_RBX = pCVar26;
      }
      iVar4 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar26 = unaff_RBX;
    bVar17 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      if (unaff_RBX == (Cameras_MapEditorCamera_o *)0x0) goto label_0447ce2d;
      pUVar6 = unaff_RBX[1].fields.Cache;
      if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) && (*(char *)&(pUVar6->fields).Transform != '\0')) {
        return;
      }
    }
    fStack_1b0 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pCVar26 = (Cameras_MapEditorCamera_o *)(unaff_R15->fields).Camera;
    if (pCVar26 != (Cameras_MapEditorCamera_o *)0x0) {
      uVar19 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)pCVar26,(MethodInfo *)0x0);
      unaff_RBX = (Cameras_MapEditorCamera_o *)(ulong)uVar19;
      pSVar5 = (unaff_R15->fields)._input;
      if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
         (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomIn,
         pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
        if (0.033333335 <= fStack_1b0) {
          fStack_1b0 = 0.033333335;
        }
        bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
        if ((char)uVar19 == '\0') {
          if ((char)bVar17 == '\0') {
            pSVar5 = (unaff_R15->fields)._input;
            if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
               pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
              bVar17 = Settings_KeybindSetting__GetKey
                                 ((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
                return;
              }
              pUVar6 = (unaff_R15->fields).Cache;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (__this = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                 __this != (Cameras_MapEditorCamera_o *)0x0)) {
                pCVar26 = __this;
                UVar44 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
                pUVar6 = (unaff_R15->fields).Cache;
                if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                  auStack_190._8_4_ = extraout_XMM0_Dc_06;
                  auStack_190._0_8_ = UVar44.fields._0_8_;
                  auStack_190._12_4_ = extraout_XMM0_Dd_06;
                  pUVar20 = (pUVar6->fields).Transform;
                  pCVar26 = (Cameras_MapEditorCamera_o *)0x0;
                  fStack_1b4 = UVar44.fields.z;
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    UVar44 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                    fVar40 = UVar44.fields.z * fStack_1b0 * (float)uStack_1a0;
                    fVar27 = (float)uStack_1a0 * fStack_1b0 * UVar44.fields.x;
                    fVar28 = (float)uStack_1a0 * fStack_1b0 * UVar44.fields.y;
                    fVar27 = (float)auStack_190._0_4_ - (fVar27 + fVar27);
                    fVar28 = (float)auStack_190._4_4_ - (fVar28 + fVar28);
                    fVar40 = fStack_1b4 - (fVar40 + fVar40);
                    goto label_0447ce1d;
                  }
                }
              }
            }
          }
          else {
            pUVar6 = (unaff_R15->fields).Cache;
            if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
               (__this = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
               __this != (Cameras_MapEditorCamera_o *)0x0)) {
              pCVar26 = __this;
              UVar44 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
              pUVar6 = (unaff_R15->fields).Cache;
              if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                auStack_190._8_4_ = extraout_XMM0_Dc_05;
                auStack_190._0_8_ = UVar44.fields._0_8_;
                auStack_190._12_4_ = extraout_XMM0_Dd_05;
                pUVar20 = (pUVar6->fields).Transform;
                pCVar26 = (Cameras_MapEditorCamera_o *)0x0;
                fStack_1b4 = UVar44.fields.z;
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  UVar44 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                  fVar40 = UVar44.fields.z * fStack_1b0 * (float)uStack_1a0;
                  fVar27 = (float)uStack_1a0 * fStack_1b0 * UVar44.fields.x;
                  fVar28 = (float)uStack_1a0 * fStack_1b0 * UVar44.fields.y;
                  fVar27 = (float)auStack_190._0_4_ + fVar27 + fVar27;
                  fVar28 = (float)auStack_190._4_4_ + fVar28 + fVar28;
                  fVar40 = fVar40 + fVar40 + fStack_1b4;
label_0447ce1d:
                  UVar44.fields.y = fVar28;
                  UVar44.fields.x = fVar27;
                  UVar44.fields.z = fVar40;
                  UnityEngine_Transform__set_position
                            ((UnityEngine_Transform_o *)__this,UVar44,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else if ((char)bVar17 == '\0') {
          pSVar5 = (unaff_R15->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pCVar26 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
             pCVar26 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar26,0,(MethodInfo *)0x0)
            ;
            if ((char)bVar17 == '\0') {
              return;
            }
            pUVar23 = (unaff_R15->fields).Camera;
            unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
              fVar27 = UnityEngine_Camera__get_orthographicSize(pUVar23,(MethodInfo *)0x0);
              fVar27 = fVar27 + fStack_1b0 * (float)uStack_1a0 + fStack_1b0 * (float)uStack_1a0;
              goto label_0447cd55;
            }
          }
        }
        else {
          pUVar23 = (unaff_R15->fields).Camera;
          unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
          if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
            fVar27 = UnityEngine_Camera__get_orthographicSize(pUVar23,(MethodInfo *)0x0);
            fVar27 = fVar27 - (fStack_1b0 * (float)uStack_1a0 + fStack_1b0 * (float)uStack_1a0);
label_0447cd55:
            UnityEngine_Camera__set_orthographicSize(pUVar23,fVar27,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0447ce2d:
  uVar30 = il2cpp_runtime_helper_022b2c90();
  uVar33 = extraout_XMM0_Dc_07;
  uVar34 = extraout_XMM0_Dd_07;
  uVar32 = extraout_XMM1_Da;
Cameras_MapEditorCamera__SnapCameraToAxis:
  *(Cameras_MapEditorCamera_o **)(puVar24 + -8) = unaff_R15;
  *(Cameras_MapEditorCamera_o **)(puVar24 + -0x10) = __this;
  *(undefined8 *)(puVar24 + -0x18) = unaff_R12;
  *(Cameras_MapEditorCamera_o **)(puVar24 + -0x20) = unaff_RBX;
  *(undefined4 *)(puVar24 + -0x58) = uVar32;
  *(undefined8 *)(puVar24 + -0x68) = uVar30;
  *(undefined4 *)(puVar24 + -0x60) = uVar33;
  *(undefined4 *)(puVar24 + -0x5c) = uVar34;
  if (g_data_057ae87b == '\0') {
    *(undefined8 *)(puVar24 + -0xe0) = 0x447ce74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447ce80;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447ce8c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447ce98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447cea4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447ceb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    *(undefined8 *)(puVar24 + -0xe0) = 0x447cebc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  *(undefined8 *)(puVar24 + -0xa8) = 0;
  *(undefined8 *)(puVar24 + -0xa0) = 0;
  *(undefined8 *)(puVar24 + -0x98) = 0;
  plVar11 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar11 != (long *)0x0) {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (*(byte *)(*plVar11 + 0x130) < bVar3) goto label_0447d3e9;
    if (*(Il2CppClass **)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    *(undefined8 *)(puVar24 + -0xe0) = 0x447cf36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar11 == (long *)0x0) goto label_0447d3d5;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)plVar11[7];
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_00->fields)._count == 0) {
    pUVar6 = (pCVar26->fields).Cache;
    if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    pUVar20 = (pUVar6->fields).Transform;
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d37a;
    UVar44 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
    *(float *)(puVar24 + -0xcc) = UVar44.fields.z;
    pUVar6 = (pCVar26->fields).Cache;
    if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    auVar36._8_4_ = extraout_XMM0_Dc_13;
    auVar36._0_8_ = UVar44.fields._0_8_;
    auVar36._12_4_ = extraout_XMM0_Dd_13;
    *(undefined1 (*) [16])(puVar24 + -200) = auVar36;
    pUVar20 = (pUVar6->fields).Transform;
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d39e;
    UVar44 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
    fVar27 = *(float *)(puVar24 + -200) + UVar44.fields.x * 50.0;
    fVar28 = *(float *)(puVar24 + -0xc4) + UVar44.fields.y * 50.0;
    fVar40 = *(float *)(puVar24 + -0xc0) + extraout_XMM0_Dc_14 * 0.0;
    fVar29 = *(float *)(puVar24 + -0xbc) + extraout_XMM0_Dd_14 * 0.0;
    *(float *)(puVar24 + -0xcc) = *(float *)(puVar24 + -0xcc) + UVar44.fields.z * 50.0;
    pUVar6 = (pCVar26->fields).Cache;
    goto joined_r0x0447d3cf;
  }
  puVar12 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined8 *)(puVar24 + -200) = *puVar12;
  *(undefined8 *)(puVar24 + -0xc0) = 0;
  *(undefined4 *)(puVar24 + -0xcc) = *(undefined4 *)(puVar12 + 1);
  *(undefined8 *)(puVar24 + -0xe0) = 0x447cf9a;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)(puVar24 + -0x38),__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  *(undefined8 *)(puVar24 + -0x98) = *(undefined8 *)(puVar24 + -0x28);
  *(undefined8 *)(puVar24 + -0xa8) = *(undefined8 *)(puVar24 + -0x38);
  *(undefined8 *)(puVar24 + -0xa0) = *(undefined8 *)(puVar24 + -0x30);
  while( true ) {
    *(undefined8 *)(puVar24 + -0xe0) = 0x447cfcb;
    bVar17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       ((System_Collections_Generic_HashSet_Enumerator_T__o)
                        *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar24 + -0xd8),
                        (MethodInfo_3219C40 *)(puVar24 + -0xa8));
    if ((char)bVar17 == '\0') {
      *(undefined8 *)(puVar24 + -0xe0) = 0x447d037;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)
                 *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar24 + -0xd8),
                 (MethodInfo_3219C30 *)(puVar24 + -0xa8));
      goto label_0447d037;
    }
    if (*(long *)(puVar24 + -0x98) == 0) goto label_0447d3df;
    __this_01 = *(UnityEngine_GameObject_o **)(*(long *)(puVar24 + -0x98) + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_0447d3e4;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447cff1;
    pUVar20 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) break;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d004;
    UVar44 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
    *(float *)(puVar24 + -200) = *(float *)(puVar24 + -200) + UVar44.fields.x;
    *(float *)(puVar24 + -0xc4) = *(float *)(puVar24 + -0xc4) + UVar44.fields.y;
    *(float *)(puVar24 + -0xc0) = *(float *)(puVar24 + -0xc0) + extraout_XMM0_Dc_08;
    *(float *)(puVar24 + -0xbc) = *(float *)(puVar24 + -0xbc) + extraout_XMM0_Dd_08;
    *(float *)(puVar24 + -0xcc) = *(float *)(puVar24 + -0xcc) + UVar44.fields.z;
  }
  while( true ) {
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d3df;
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d3e4;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d3e9;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d3f1;
    auVar43 = il2cpp_runtime_helper_022b2fd0(plVar11);
    if (auVar43._8_4_ != 1) break;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d433;
    plVar21 = (long *)__cxa_begin_catch(auVar43._0_8_);
    lVar13 = *plVar21;
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d43b;
    __cxa_end_catch();
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d44f;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o)
               *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar24 + -0xd8),
               (MethodInfo_3219C30 *)(puVar24 + -0xa8));
    if (lVar13 != 0) {
      *(undefined8 *)(puVar24 + -0xe0) = 0x447d460;
      il2cpp_runtime_helper_022fefe0(lVar13);
      break;
    }
label_0447d037:
    if (plVar11[7] != 0) {
      fVar27 = (float)*(int *)(plVar11[7] + 0x20);
      *(float *)(puVar24 + -0xcc) = *(float *)(puVar24 + -0xcc) / fVar27;
      auVar14._4_4_ = fVar27;
      auVar14._0_4_ = fVar27;
      auVar14._8_8_ = 0;
      auVar36 = divps(*(undefined1 (*) [16])(puVar24 + -200),auVar14);
      fVar27 = auVar36._0_4_;
      fVar28 = auVar36._4_4_;
      fVar40 = auVar36._8_4_;
      fVar29 = auVar36._12_4_;
      pUVar6 = (pCVar26->fields).Cache;
joined_r0x0447d3cf:
      if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
        *(float *)(puVar24 + -200) = fVar27;
        *(float *)(puVar24 + -0xc4) = fVar28;
        *(float *)(puVar24 + -0xc0) = fVar40;
        *(float *)(puVar24 + -0xbc) = fVar29;
        pUVar20 = (pUVar6->fields).Transform;
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          pMVar25 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar24 + -0xe0) = 0x447d092;
          UVar44 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
          fVar27 = UVar44.fields.z;
          fVar29 = UVar44.fields.x;
          fVar31 = UVar44.fields.y;
          fVar28 = *(float *)(puVar24 + -200);
          fVar40 = *(float *)(puVar24 + -0xc4);
          uVar32 = extraout_XMM0_Dc_09;
          uVar33 = extraout_XMM0_Dd_09;
          fVar39 = fVar31;
          fVar35 = fVar31;
          uVar34 = extraout_XMM0_Dc_09;
          uVar41 = extraout_XMM0_Dd_09;
          if (g_data_057a6841 == '\0') {
            *(float *)(puVar24 + -0xb8) = fVar27;
            *(float *)(puVar24 + -0x78) = fVar31;
            *(float *)(puVar24 + -0x74) = fVar31;
            *(undefined4 *)(puVar24 + -0x70) = extraout_XMM0_Dc_09;
            *(undefined4 *)(puVar24 + -0x6c) = extraout_XMM0_Dd_09;
            auVar15._8_4_ = extraout_XMM0_Dc_09;
            auVar15._0_8_ = UVar44.fields._0_8_;
            auVar15._12_4_ = extraout_XMM0_Dd_09;
            *(undefined1 (*) [16])(puVar24 + -0x88) = auVar15;
            *(float *)(puVar24 + -0x48) = fVar40;
            *(float *)(puVar24 + -0x44) = fVar40;
            *(undefined4 *)(puVar24 + -0x40) = *(undefined4 *)(puVar24 + -0xc0);
            *(undefined4 *)(puVar24 + -0x3c) = *(undefined4 *)(puVar24 + -0xbc);
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d0d2;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            fVar40 = *(float *)(puVar24 + -0x48);
            fVar29 = *(float *)(puVar24 + -0x88);
            fVar31 = *(float *)(puVar24 + -0x84);
            uVar32 = *(undefined4 *)(puVar24 + -0x80);
            uVar33 = *(undefined4 *)(puVar24 + -0x7c);
            fVar39 = *(float *)(puVar24 + -0x78);
            fVar35 = *(float *)(puVar24 + -0x74);
            uVar34 = *(undefined4 *)(puVar24 + -0x70);
            uVar41 = *(undefined4 *)(puVar24 + -0x6c);
            fVar27 = *(float *)(puVar24 + -0xb8);
            fVar28 = *(float *)(puVar24 + -200);
            g_data_057a6841 = '\x01';
          }
          fVar29 = fVar29 - fVar28;
          fVar39 = fVar39 - fVar40;
          fVar27 = fVar27 - *(float *)(puVar24 + -0xcc);
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            *(float *)(puVar24 + -0xb8) = fVar27;
            *(float *)(puVar24 + -0x78) = fVar39;
            *(float *)(puVar24 + -0x74) = fVar35;
            *(undefined4 *)(puVar24 + -0x70) = uVar34;
            *(undefined4 *)(puVar24 + -0x6c) = uVar41;
            *(float *)(puVar24 + -0x88) = fVar29;
            *(float *)(puVar24 + -0x84) = fVar31;
            *(undefined4 *)(puVar24 + -0x80) = uVar32;
            *(undefined4 *)(puVar24 + -0x7c) = uVar33;
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d12c;
            il2cpp_runtime_helper_02337ed0();
            fVar29 = *(float *)(puVar24 + -0x88);
            fVar39 = *(float *)(puVar24 + -0x78);
            fVar27 = *(float *)(puVar24 + -0xb8);
          }
          fVar27 = fVar27 * fVar27 + fVar39 * fVar39 + fVar29 * fVar29;
          if (fVar27 < 0.0) {
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d169;
            fVar27 = sqrtf(fVar27);
            uVar32 = extraout_XMM0_Db;
            uVar33 = extraout_XMM0_Dc_10;
            uVar34 = extraout_XMM0_Dd_10;
          }
          else {
            uVar32 = 0;
            uVar33 = 0;
            uVar34 = 0;
            fVar27 = SQRT(fVar27);
          }
          *(float *)(puVar24 + -0xb8) = fVar27;
          *(undefined4 *)(puVar24 + -0xb4) = uVar32;
          *(undefined4 *)(puVar24 + -0xb0) = uVar33;
          *(undefined4 *)(puVar24 + -0xac) = uVar34;
          *(undefined8 *)(puVar24 + -0xe0) = 0x447d176;
          bVar17 = Cameras_MapEditorCamera__AlignedWithWorldAxis(pCVar26,pMVar25);
          if ((char)bVar17 == '\0') {
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d352;
            Cameras_MapEditorCamera__AlignToWorldAxis(pCVar26,pMVar25);
            return;
          }
          pUVar6 = (pCVar26->fields).Cache;
          if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar20 = (pUVar6->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d1ad;
            direction.fields.z = *(float *)(puVar24 + -0x58);
            direction.fields._0_8_ = *(undefined8 *)(puVar24 + -0x68);
            UVar44 = UnityEngine_Transform__TransformDirection(pUVar20,direction,(MethodInfo *)0x0);
            auVar37._0_8_ = UVar44.fields._0_8_;
            auVar37._8_4_ = extraout_XMM0_Dc_11;
            auVar37._12_4_ = extraout_XMM0_Dd_11;
            *(undefined8 *)(puVar24 + -0xe0) = 0x447d1c8;
            uVar30 = auVar37._8_8_;
            UVar42 = UnityEngine_Quaternion__AngleAxis(90.0,UVar44,(MethodInfo *)0x0);
            pUVar6 = (pCVar26->fields).Cache;
            if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
              auVar16._8_4_ = extraout_XMM0_Dc_12;
              auVar16._0_8_ = UVar42.fields._0_8_;
              auVar16._12_4_ = extraout_XMM0_Dd_12;
              *(undefined1 (*) [16])(puVar24 + -0x68) = auVar16;
              *(long *)(puVar24 + -0x58) = UVar42.fields._8_8_;
              *(undefined8 *)(puVar24 + -0x50) = uVar30;
              pUVar20 = (pUVar6->fields).Transform;
              if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)(puVar24 + -0xe0) = 0x447d1f9;
                UVar42 = UnityEngine_Transform__get_rotation(pUVar20,(MethodInfo *)0x0);
                fVar31 = UVar42.fields.x;
                fVar39 = UVar42.fields.y;
                fVar27 = *(float *)(puVar24 + -0x58);
                fVar28 = *(float *)(puVar24 + -0x54);
                fVar35 = UVar42.fields.z;
                fVar38 = UVar42.fields.w;
                fVar40 = *(float *)(puVar24 + -0x68);
                fVar29 = *(float *)(puVar24 + -100);
                UVar42.fields.w = ((fVar38 * fVar28 - fVar31 * fVar40) - fVar39 * fVar29) - fVar35 * fVar27;
                UVar42.fields.z = (fVar40 * fVar39 + fVar27 * fVar38 + fVar28 * fVar35) - fVar29 * fVar31;
                *(undefined8 *)(puVar24 + -0xe0) = 0x447d2c6;
                UVar42.fields.y = (fVar27 * fVar31 + fVar29 * fVar38 + fVar28 * fVar39) - fVar35 * fVar40;
                UVar42.fields.x = (fVar29 * fVar35 + fVar40 * fVar38 + fVar28 * fVar31) - fVar39 * fVar27;
                UnityEngine_Transform__set_rotation(pUVar20,UVar42,(MethodInfo *)0x0);
                pUVar6 = (pCVar26->fields).Cache;
                if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar20 = (pUVar6->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                  *(undefined8 *)(puVar24 + -0xe0) = 0x447d2ea;
                  UVar44 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                  fVar27 = *(float *)(puVar24 + -0xb8);
                  value_01.fields.x = *(float *)(puVar24 + -200) - fVar27 * UVar44.fields.x;
                  value_01.fields.y = *(float *)(puVar24 + -0xc4) - fVar27 * UVar44.fields.y;
                  *(undefined8 *)(puVar24 + -0xe0) = 0x447d31c;
                  value_01.fields.z = *(float *)(puVar24 + -0xcc) - UVar44.fields.z * fVar27;
                  UnityEngine_Transform__set_position(pUVar20,value_01,(MethodInfo *)0x0);
                  pUVar6 = (pCVar26->fields).Cache;
                  if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                     (pUVar20 = (pUVar6->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    *(undefined8 *)(puVar24 + -0xe0) = 0x447d348;
                    worldPosition.fields.z = *(float *)(puVar24 + -0xcc);
                    worldPosition.fields._0_8_ = *(undefined8 *)(puVar24 + -200);
                    UnityEngine_Transform__LookAt_4e0aa40(pUVar20,worldPosition,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    *(undefined8 *)(puVar24 + -0xe0) = 0x447d3da;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)(puVar24 + -0xe0) = 0x447d47b;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)
             *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)(puVar24 + -0xd8),
             (MethodInfo_3219C30 *)(puVar24 + -0xa8));
  *(undefined8 *)(puVar24 + -0xe0) = 0x447d488;
  _Unwind_Resume(auVar43._0_8_);
}


// Cameras.MapEditorCamera$$UpdateDragMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateDragMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x447c7d0

void Cameras_MapEditorCamera__UpdateDragMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  Settings_KeybindSetting_o *__this_00;
  UI_MapEditorMenu_o *pUVar7;
  long *plVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  undefined1 auVar10 [16];
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  UnityEngine_Transform_o *pUVar14;
  long *plVar15;
  Cameras_MapEditorCamera_o *unaff_RBX;
  UnityEngine_Camera_o *__this_06;
  MethodInfo *method_00;
  Cameras_MapEditorCamera_o *__this_07;
  Cameras_MapEditorCamera_o *pCVar16;
  Cameras_MapEditorCamera_o *__this_08;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  float fVar23;
  undefined4 extraout_XMM1_Da;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Quaternion_o UVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o worldPosition;
  undefined1 in_stack_fffffffffffffe18 [12];
  float in_stack_fffffffffffffe24;
  float in_stack_fffffffffffffe28;
  float in_stack_fffffffffffffe2c;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [8];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  undefined1 auStack_178 [16];
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [16];
  Il2CppObject *pIStack_138;
  Cameras_MapEditorCamera_o *pCStack_130;
  float fStack_e0;
  float fStack_dc;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_58;
  float fStack_54;
  
  pSVar5 = (__this->fields)._input;
  __this_07 = __this;
  if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (__this_07 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan, unaff_RBX = __this,
     __this_07 != (Cameras_MapEditorCamera_o *)0x0)) {
    bVar11 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_07,0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      *(undefined1 *)((long)&(__this->fields)._wasRotating + 1) = 1;
      UVar33 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (__this->fields)._startDrag = (int)UVar33.fields._0_8_;
      (__this->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
      (__this->fields)._lastDragPosition.fields.y = UVar33.fields.z;
      return;
    }
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (__this_07 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan,
       __this_07 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_07,0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pSVar5 = (__this->fields)._input;
        if (pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) {
          __this_00 = (pSVar5->fields).Pan;
          __this_07 = (Cameras_MapEditorCamera_o *)0x0;
          if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
            bVar11 = Settings_KeybindSetting__GetKeyUp(__this_00,0,(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            *(undefined1 *)((long)&(__this->fields)._wasRotating + 1) = 0;
            return;
          }
        }
      }
      else {
        if (*(char *)((long)&(__this->fields)._wasRotating + 1) == '\0') {
          return;
        }
        UVar33 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar1 = (__this->fields)._startDrag;
        uVar2 = (__this->fields)._lastDragPosition.fields.x;
        UVar34 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (__this->fields)._startDrag = (int)UVar34.fields._0_8_;
        (__this->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
        (__this->fields)._lastDragPosition.fields.y = UVar34.fields.z;
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        __this_07 = (Cameras_MapEditorCamera_o *)0x0;
        iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar6 = (__this->fields).Cache;
        if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
           (pCVar16 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
           pCVar16 != (Cameras_MapEditorCamera_o *)0x0)) {
          __this_07 = pCVar16;
          UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar16,(MethodInfo *)0x0);
          pUVar6 = (__this->fields).Cache;
          if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar14 = (pUVar6->fields).Transform;
            __this_07 = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              local_98 = UVar33.fields.x;
              fStack_94 = UVar33.fields.y;
              if (0.033333335 <= fVar17) {
                fVar17 = 0.033333335;
              }
              local_98 = local_98 - (float)uVar1;
              fVar23 = 1.0;
              if (1.0 <= (float)iVar12) {
                fVar23 = (float)iVar12;
              }
              fVar23 = fVar23 / 1080.0;
              UVar33 = UnityEngine_Transform__get_right(pUVar14,(MethodInfo *)0x0);
              local_88 = UVar34.fields.x;
              fStack_84 = UVar34.fields.y;
              value.fields.x = local_88 - local_98 * UVar33.fields.x * fVar17 * speed * fVar23;
              value.fields.y = fStack_84 - local_98 * UVar33.fields.y * fVar17 * speed * fVar23;
              value.fields.z = UVar34.fields.z - UVar33.fields.z * local_98 * fVar17 * speed * fVar23;
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar16,value,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).Cache;
              __this_07 = pCVar16;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pCVar16 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
                 pCVar16 != (Cameras_MapEditorCamera_o *)0x0)) {
                __this_07 = pCVar16;
                UVar33 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar16,(MethodInfo *)0x0);
                pUVar6 = (__this->fields).Cache;
                if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                  pUVar14 = (pUVar6->fields).Transform;
                  __this_07 = (Cameras_MapEditorCamera_o *)0x0;
                  if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                    fStack_94 = fStack_94 - (float)uVar2;
                    UVar34 = UnityEngine_Transform__get_up(pUVar14,(MethodInfo *)0x0);
                    local_88 = UVar33.fields.x;
                    fStack_84 = UVar33.fields.y;
                    value_00.fields.x = local_88 - fVar23 * fVar17 * fStack_94 * UVar34.fields.x * speed;
                    value_00.fields.y = fStack_84 - fVar23 * fVar17 * fStack_94 * UVar34.fields.y * speed;
                    value_00.fields.z =
                         UVar33.fields.z - fVar23 * fVar17 * UVar34.fields.z * fStack_94 * speed;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pCVar16,value_00,(MethodInfo *)0x0);
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
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar16 = __this_07;
  if (g_data_057ae879 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pCVar16 = (Cameras_MapEditorCamera_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae879 = '\x01';
  }
  pUVar7 = (__this_07->fields)._menu;
  if (pUVar7 == (UI_MapEditorMenu_o *)0x0) goto label_0447ce2d;
  if ((char)(pUVar7->fields).IsMouseUI != '\0') {
    return;
  }
  pCVar16 = *(Cameras_MapEditorCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pCVar16 == (Cameras_MapEditorCamera_o *)0x0) {
label_0447cb5f:
    unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((((Settings_KeybindSetting_c *)pCVar16->klass)->_2).naturalAligment < bVar3) goto label_0447cb5f;
    unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
    if ((((Settings_KeybindSetting_c *)pCVar16->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapEditorGameManager) {
      unaff_RBX = pCVar16;
    }
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar16 = unaff_RBX;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (unaff_RBX == (Cameras_MapEditorCamera_o *)0x0) goto label_0447ce2d;
    pUVar6 = unaff_RBX[1].fields.Cache;
    if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) && (*(char *)&(pUVar6->fields).Transform != '\0')) {
      return;
    }
  }
  fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pCVar16 = (Cameras_MapEditorCamera_o *)(__this_07->fields).Camera;
  if (pCVar16 != (Cameras_MapEditorCamera_o *)0x0) {
    uVar13 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)pCVar16,(MethodInfo *)0x0);
    unaff_RBX = (Cameras_MapEditorCamera_o *)(ulong)uVar13;
    pSVar5 = (__this_07->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pCVar16 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomIn,
       pCVar16 != (Cameras_MapEditorCamera_o *)0x0)) {
      if (0.033333335 <= fVar23) {
        fVar23 = 0.033333335;
      }
      bVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar16,0,(MethodInfo *)0x0);
      if ((char)uVar13 == '\0') {
        if ((char)bVar11 == '\0') {
          pSVar5 = (__this_07->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pCVar16 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
             pCVar16 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar16,0,(MethodInfo *)0x0)
            ;
            if ((char)bVar11 == '\0') {
              return;
            }
            pUVar6 = (__this_07->fields).Cache;
            if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
               (__this_08 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
               __this_08 != (Cameras_MapEditorCamera_o *)0x0)) {
              pCVar16 = __this_08;
              UVar33 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this_08,(MethodInfo *)0x0);
              pUVar6 = (__this_07->fields).Cache;
              if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar14 = (pUVar6->fields).Transform;
                pCVar16 = (Cameras_MapEditorCamera_o *)0x0;
                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                  UVar34 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
                  fVar18 = UVar34.fields.z * fVar23 * fVar17;
                  fVar29 = fVar17 * fVar23 * UVar34.fields.x;
                  fVar17 = fVar17 * fVar23 * UVar34.fields.y;
                  fStack_e0 = UVar33.fields.x;
                  fStack_dc = UVar33.fields.y;
                  fStack_e0 = fStack_e0 - (fVar29 + fVar29);
                  fStack_dc = fStack_dc - (fVar17 + fVar17);
                  fVar17 = UVar33.fields.z - (fVar18 + fVar18);
                  goto label_0447ce1d;
                }
              }
            }
          }
        }
        else {
          pUVar6 = (__this_07->fields).Cache;
          if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
             (__this_08 = (Cameras_MapEditorCamera_o *)(pUVar6->fields).Transform,
             __this_08 != (Cameras_MapEditorCamera_o *)0x0)) {
            pCVar16 = __this_08;
            UVar33 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_08,(MethodInfo *)0x0);
            pUVar6 = (__this_07->fields).Cache;
            if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar14 = (pUVar6->fields).Transform;
              pCVar16 = (Cameras_MapEditorCamera_o *)0x0;
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                UVar34 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
                fVar18 = UVar34.fields.z * fVar23 * fVar17;
                fVar29 = fVar17 * fVar23 * UVar34.fields.x;
                fVar17 = fVar17 * fVar23 * UVar34.fields.y;
                fStack_e0 = UVar33.fields.x;
                fStack_dc = UVar33.fields.y;
                fStack_e0 = fStack_e0 + fVar29 + fVar29;
                fStack_dc = fStack_dc + fVar17 + fVar17;
                fVar17 = fVar18 + fVar18 + UVar33.fields.z;
label_0447ce1d:
                UVar33.fields.y = fStack_dc;
                UVar33.fields.x = fStack_e0;
                UVar33.fields.z = fVar17;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)__this_08,UVar33,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else if ((char)bVar11 == '\0') {
        pSVar5 = (__this_07->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pCVar16 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
           pCVar16 != (Cameras_MapEditorCamera_o *)0x0)) {
          bVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar16,0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return;
          }
          __this_06 = (__this_07->fields).Camera;
          unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
          if (__this_06 != (UnityEngine_Camera_o *)0x0) {
            fVar18 = UnityEngine_Camera__get_orthographicSize(__this_06,(MethodInfo *)0x0);
            fVar18 = fVar18 + fVar23 * fVar17 + fVar23 * fVar17;
            goto label_0447cd55;
          }
        }
      }
      else {
        __this_06 = (__this_07->fields).Camera;
        unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
        if (__this_06 != (UnityEngine_Camera_o *)0x0) {
          fVar18 = UnityEngine_Camera__get_orthographicSize(__this_06,(MethodInfo *)0x0);
          fVar18 = fVar18 - (fVar23 * fVar17 + fVar23 * fVar17);
label_0447cd55:
          UnityEngine_Camera__set_orthographicSize(__this_06,fVar18,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0447ce2d:
  auStack_178._0_8_ = il2cpp_runtime_helper_022b2c90();
  fStack_168._0_2_ = (short)extraout_XMM1_Da;
  fStack_168._2_1_ = (char)((uint)extraout_XMM1_Da >> 0x10);
  fStack_168._3_1_ = (char)((uint)extraout_XMM1_Da >> 0x18);
  auStack_178._8_4_ = extraout_XMM0_Dc;
  auStack_178._12_4_ = extraout_XMM0_Dd;
  pCStack_130 = unaff_RBX;
  if (g_data_057ae87b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  auStack_1b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_1b8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1b8._16_8_ = (Il2CppObject *)0x0;
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar8 != (long *)0x0) {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (*(byte *)(*plVar8 + 0x130) < bVar3) goto label_0447d3e9;
    if (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar8 == (long *)0x0) goto label_0447d3d5;
  __this_01 = (System_Collections_Generic_HashSet_object__o *)plVar8[7];
  if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_01->fields)._count == 0) {
    pUVar6 = (pCVar16->fields).Cache;
    if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    pUVar14 = (pUVar6->fields).Transform;
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar33 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    in_stack_fffffffffffffe24 = UVar33.fields.z;
    pUVar6 = (pCVar16->fields).Cache;
    if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    in_stack_fffffffffffffe28 = UVar33.fields.x;
    in_stack_fffffffffffffe2c = UVar33.fields.y;
    pUVar14 = (pUVar6->fields).Transform;
    fStack_1d0 = extraout_XMM0_Dc_04;
    fStack_1cc = extraout_XMM0_Dd_04;
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar33 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
    fVar17 = in_stack_fffffffffffffe28 + UVar33.fields.x * 50.0;
    fVar23 = in_stack_fffffffffffffe2c + UVar33.fields.y * 50.0;
    fVar18 = extraout_XMM0_Dc_04 + extraout_XMM0_Dc_05 * 0.0;
    fVar29 = extraout_XMM0_Dd_04 + extraout_XMM0_Dd_05 * 0.0;
    in_stack_fffffffffffffe24 = in_stack_fffffffffffffe24 + UVar33.fields.z * 50.0;
    pUVar6 = (pCVar16->fields).Cache;
    goto joined_r0x0447d3cf;
  }
  uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  in_stack_fffffffffffffe28 = (float)uVar26;
  in_stack_fffffffffffffe2c = (float)((ulong)uVar26 >> 0x20);
  fStack_1d0 = 0.0;
  fStack_1cc = 0.0;
  in_stack_fffffffffffffe24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_148,__this_01,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  auStack_1b8._16_8_ = pIStack_138;
  auStack_1b8._0_8_ = auStack_148._0_8_;
  auStack_1b8._8_8_ = auStack_148._8_8_;
  while( true ) {
    __this_02.fields._version = (int32_t)in_stack_fffffffffffffe24;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe18._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffe18._8_4_;
    __this_02.fields._current._0_4_ = in_stack_fffffffffffffe28;
    __this_02.fields._current._4_4_ = in_stack_fffffffffffffe2c;
    bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       (__this_02,(MethodInfo_3219C40 *)auStack_1b8);
    if ((char)bVar11 == '\0') {
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffe24;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe18._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffe18._8_4_;
      __this_03.fields._current._0_4_ = in_stack_fffffffffffffe28;
      __this_03.fields._current._4_4_ = in_stack_fffffffffffffe2c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)auStack_1b8);
      goto label_0447d037;
    }
    if ((Il2CppObject *)auStack_1b8._16_8_ == (Il2CppObject *)0x0) goto label_0447d3df;
    if (((Il2CppObject *)(auStack_1b8._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
    goto label_0447d3e4;
    pUVar14 = UnityEngine_GameObject__get_transform
                        (((Il2CppObject *)(auStack_1b8._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) break;
    UVar33 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    in_stack_fffffffffffffe28 = in_stack_fffffffffffffe28 + UVar33.fields.x;
    in_stack_fffffffffffffe2c = in_stack_fffffffffffffe2c + UVar33.fields.y;
    fStack_1d0 = fStack_1d0 + extraout_XMM0_Dc_00;
    fStack_1cc = fStack_1cc + extraout_XMM0_Dd_00;
    in_stack_fffffffffffffe24 = in_stack_fffffffffffffe24 + UVar33.fields.z;
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    auVar32 = il2cpp_runtime_helper_022b2fd0(plVar8);
    if (auVar32._8_4_ != 1) break;
    plVar15 = (long *)__cxa_begin_catch(auVar32._0_8_);
    lVar9 = *plVar15;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_stack_fffffffffffffe24;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe18._0_8_;
    __this_04.fields._index = in_stack_fffffffffffffe18._8_4_;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffe28;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffe2c;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)auStack_1b8);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      break;
    }
label_0447d037:
    if (plVar8[7] != 0) {
      fVar17 = (float)*(int *)(plVar8[7] + 0x20);
      in_stack_fffffffffffffe24 = in_stack_fffffffffffffe24 / fVar17;
      auVar10._4_4_ = in_stack_fffffffffffffe2c;
      auVar10._0_4_ = in_stack_fffffffffffffe28;
      auVar10._8_4_ = fStack_1d0;
      auVar10._12_4_ = fStack_1cc;
      auVar24._4_4_ = fVar17;
      auVar24._0_4_ = fVar17;
      auVar24._8_8_ = 0;
      auVar24 = divps(auVar10,auVar24);
      fVar17 = auVar24._0_4_;
      fVar23 = auVar24._4_4_;
      fVar18 = auVar24._8_4_;
      fVar29 = auVar24._12_4_;
      pUVar6 = (pCVar16->fields).Cache;
joined_r0x0447d3cf:
      if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar14 = (pUVar6->fields).Transform, in_stack_fffffffffffffe28 = fVar17,
         in_stack_fffffffffffffe2c = fVar23, fStack_1d0 = fVar18, fStack_1cc = fVar29,
         pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UVar33 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
        fVar20 = UVar33.fields.y;
        fVar19 = UVar33.fields.x;
        uVar21 = extraout_XMM0_Dc_01;
        uVar22 = extraout_XMM0_Dd_01;
        fVar27 = fVar20;
        fVar28 = fVar20;
        fVar30 = fVar23;
        in_stack_fffffffffffffe28 = fVar17;
        in_stack_fffffffffffffe2c = fVar23;
        if (g_data_057a6841 == '\0') {
          uStack_190 = extraout_XMM0_Dc_01;
          auStack_198 = (undefined1  [8])UVar33.fields._0_8_;
          uStack_18c = extraout_XMM0_Dd_01;
          fStack_188 = fVar20;
          fStack_184 = fVar20;
          fStack_158 = fVar23;
          fStack_154 = fVar23;
          fStack_150 = fVar18;
          fStack_14c = fVar29;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar19 = (float)auStack_198._0_4_;
          fVar20 = (float)auStack_198._4_4_;
          uVar21 = uStack_190;
          uVar22 = uStack_18c;
          fVar27 = fStack_188;
          fVar28 = fStack_184;
          fVar30 = fStack_158;
          in_stack_fffffffffffffe28 = fVar17;
          in_stack_fffffffffffffe2c = fVar23;
        }
        fVar18 = UVar33.fields.z - in_stack_fffffffffffffe24;
        fVar17 = fVar19 - in_stack_fffffffffffffe28;
        fVar23 = fVar27 - fVar30;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          auStack_198._4_4_ = fVar20;
          auStack_198._0_4_ = fVar19 - in_stack_fffffffffffffe28;
          uStack_190 = uVar21;
          uStack_18c = uVar22;
          fStack_188 = fVar27 - fVar30;
          fStack_184 = fVar28;
          il2cpp_runtime_helper_02337ed0();
          fVar17 = (float)auStack_198._0_4_;
          fVar23 = fStack_188;
        }
        fVar17 = fVar18 * fVar18 + fVar23 * fVar23 + fVar17 * fVar17;
        if (fVar17 < 0.0) {
          fVar17 = sqrtf(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        bVar11 = Cameras_MapEditorCamera__AlignedWithWorldAxis(pCVar16,method_00);
        auVar24 = auStack_178;
        if ((char)bVar11 == '\0') {
          Cameras_MapEditorCamera__AlignToWorldAxis(pCVar16,method_00);
          return;
        }
        pUVar6 = (pCVar16->fields).Cache;
        if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar14 = (pUVar6->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
          UVar34.fields.z = fStack_168;
          UVar34.fields.x = (float)auStack_178._0_4_;
          UVar34.fields.y = (float)auStack_178._4_4_;
          auStack_178 = auVar24;
          UVar33 = UnityEngine_Transform__TransformDirection(pUVar14,UVar34,(MethodInfo *)0x0);
          auVar25._0_8_ = UVar33.fields._0_8_;
          auVar25._8_4_ = extraout_XMM0_Dc_02;
          auVar25._12_4_ = extraout_XMM0_Dd_02;
          uVar26 = auVar25._8_8_;
          UVar31 = UnityEngine_Quaternion__AngleAxis(90.0,UVar33,(MethodInfo *)0x0);
          pUVar6 = (pCVar16->fields).Cache;
          if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
            auStack_178._8_4_ = extraout_XMM0_Dc_03;
            auStack_178._0_8_ = UVar31.fields._0_8_;
            auStack_178._12_4_ = extraout_XMM0_Dd_03;
            pUVar14 = (pUVar6->fields).Transform;
            _fStack_168 = UVar31.fields._8_8_;
            uStack_160 = uVar26;
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              UVar31 = UnityEngine_Transform__get_rotation(pUVar14,(MethodInfo *)0x0);
              fVar23 = UVar31.fields.x;
              fVar18 = UVar31.fields.y;
              fVar29 = UVar31.fields.z;
              fVar19 = UVar31.fields.w;
              UVar31.fields.w =
                   ((fVar19 * fStack_164 - fVar23 * (float)auStack_178._0_4_) -
                   fVar18 * (float)auStack_178._4_4_) - fVar29 * fStack_168;
              UVar31.fields.z =
                   ((float)auStack_178._0_4_ * fVar18 + fStack_168 * fVar19 + fStack_164 * fVar29) -
                   (float)auStack_178._4_4_ * fVar23;
              UVar31.fields.y =
                   (fStack_168 * fVar23 + (float)auStack_178._4_4_ * fVar19 + fStack_164 * fVar18) -
                   fVar29 * (float)auStack_178._0_4_;
              UVar31.fields.x =
                   ((float)auStack_178._4_4_ * fVar29 +
                   (float)auStack_178._0_4_ * fVar19 + fStack_164 * fVar23) - fVar18 * fStack_168;
              UnityEngine_Transform__set_rotation(pUVar14,UVar31,(MethodInfo *)0x0);
              pUVar6 = (pCVar16->fields).Cache;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar14 = (pUVar6->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                UVar33 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
                value_01.fields.x = in_stack_fffffffffffffe28 - fVar17 * UVar33.fields.x;
                value_01.fields.y = in_stack_fffffffffffffe2c - fVar17 * UVar33.fields.y;
                value_01.fields.z = in_stack_fffffffffffffe24 - UVar33.fields.z * fVar17;
                UnityEngine_Transform__set_position(pUVar14,value_01,(MethodInfo *)0x0);
                pUVar6 = (pCVar16->fields).Cache;
                if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar14 = (pUVar6->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                  worldPosition.fields.y = in_stack_fffffffffffffe2c;
                  worldPosition.fields.x = in_stack_fffffffffffffe28;
                  worldPosition.fields.z = in_stack_fffffffffffffe24;
                  UnityEngine_Transform__LookAt_4e0aa40(pUVar14,worldPosition,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    il2cpp_runtime_helper_022b2c90();
  }
  __this_05.fields._version = (int32_t)in_stack_fffffffffffffe24;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe18._0_8_;
  __this_05.fields._index = in_stack_fffffffffffffe18._8_4_;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffe28;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffe2c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_05,(MethodInfo_3219C30 *)auStack_1b8);
  _Unwind_Resume(auVar32._0_8_);
}


// Cameras.MapEditorCamera$$UpdateZoomMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateZoomMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x447cac0

void Cameras_MapEditorCamera__UpdateZoomMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_MapEditorMenu_o *pUVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  long *plVar6;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  uint uVar10;
  UnityEngine_Transform_o *pUVar11;
  long *plVar12;
  Cameras_MapEditorCamera_o *unaff_RBX;
  UnityEngine_Camera_o *__this_05;
  MethodInfo *method_00;
  Cameras_MapEditorCamera_o *pCVar13;
  Cameras_MapEditorCamera_o *__this_06;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined4 extraout_XMM1_Da;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Quaternion_o UVar28;
  undefined1 auVar29 [12];
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o worldPosition;
  undefined1 in_stack_fffffffffffffed0 [12];
  float in_stack_fffffffffffffedc;
  float in_stack_fffffffffffffee0;
  float in_stack_fffffffffffffee4;
  float fStack_118;
  float fStack_114;
  undefined1 local_100 [32];
  undefined1 local_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  undefined1 local_c0 [16];
  float local_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  Cameras_MapEditorCamera_o *pCStack_78;
  float local_28;
  float fStack_24;
  
  pCVar13 = __this;
  if (g_data_057ae879 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pCVar13 = (Cameras_MapEditorCamera_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae879 = '\x01';
  }
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_0447ce2d;
  if ((char)(pUVar3->fields).IsMouseUI != '\0') {
    return;
  }
  pCVar13 = *(Cameras_MapEditorCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pCVar13 == (Cameras_MapEditorCamera_o *)0x0) {
label_0447cb5f:
    unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((((Settings_KeybindSetting_c *)pCVar13->klass)->_2).naturalAligment < bVar1) goto label_0447cb5f;
    unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
    if ((((Settings_KeybindSetting_c *)pCVar13->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager) {
      unaff_RBX = pCVar13;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar13 = unaff_RBX;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (unaff_RBX == (Cameras_MapEditorCamera_o *)0x0) goto label_0447ce2d;
    pUVar4 = unaff_RBX[1].fields.Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) && (*(char *)&(pUVar4->fields).Transform != '\0')) {
      return;
    }
  }
  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pCVar13 = (Cameras_MapEditorCamera_o *)(__this->fields).Camera;
  if (pCVar13 != (Cameras_MapEditorCamera_o *)0x0) {
    uVar10 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)pCVar13,(MethodInfo *)0x0);
    unaff_RBX = (Cameras_MapEditorCamera_o *)(ulong)uVar10;
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pCVar13 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomIn,
       pCVar13 != (Cameras_MapEditorCamera_o *)0x0)) {
      if (0.033333335 <= fVar14) {
        fVar14 = 0.033333335;
      }
      bVar9 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar13,0,(MethodInfo *)0x0);
      if ((char)uVar10 == '\0') {
        if ((char)bVar9 == '\0') {
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pCVar13 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
             pCVar13 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar9 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar13,0,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            pUVar4 = (__this->fields).Cache;
            if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
               (__this_06 = (Cameras_MapEditorCamera_o *)(pUVar4->fields).Transform,
               __this_06 != (Cameras_MapEditorCamera_o *)0x0)) {
              pCVar13 = __this_06;
              UVar31 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this_06,(MethodInfo *)0x0);
              pUVar4 = (__this->fields).Cache;
              if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar11 = (pUVar4->fields).Transform;
                pCVar13 = (Cameras_MapEditorCamera_o *)0x0;
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  UVar30 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
                  fVar15 = UVar30.fields.z * fVar14 * speed;
                  fVar20 = speed * fVar14 * UVar30.fields.x;
                  fVar14 = speed * fVar14 * UVar30.fields.y;
                  local_28 = UVar31.fields.x;
                  fStack_24 = UVar31.fields.y;
                  local_28 = local_28 - (fVar20 + fVar20);
                  fStack_24 = fStack_24 - (fVar14 + fVar14);
                  fVar14 = UVar31.fields.z - (fVar15 + fVar15);
                  goto label_0447ce1d;
                }
              }
            }
          }
        }
        else {
          pUVar4 = (__this->fields).Cache;
          if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
             (__this_06 = (Cameras_MapEditorCamera_o *)(pUVar4->fields).Transform,
             __this_06 != (Cameras_MapEditorCamera_o *)0x0)) {
            pCVar13 = __this_06;
            UVar31 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_06,(MethodInfo *)0x0);
            pUVar4 = (__this->fields).Cache;
            if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar11 = (pUVar4->fields).Transform;
              pCVar13 = (Cameras_MapEditorCamera_o *)0x0;
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                UVar30 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
                fVar15 = UVar30.fields.z * fVar14 * speed;
                fVar20 = speed * fVar14 * UVar30.fields.x;
                fVar14 = speed * fVar14 * UVar30.fields.y;
                local_28 = UVar31.fields.x;
                fStack_24 = UVar31.fields.y;
                local_28 = local_28 + fVar20 + fVar20;
                fStack_24 = fStack_24 + fVar14 + fVar14;
                fVar14 = fVar15 + fVar15 + UVar31.fields.z;
label_0447ce1d:
                UVar31.fields.y = fStack_24;
                UVar31.fields.x = local_28;
                UVar31.fields.z = fVar14;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)__this_06,UVar31,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else if ((char)bVar9 == '\0') {
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pCVar13 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
           pCVar13 != (Cameras_MapEditorCamera_o *)0x0)) {
          bVar9 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar13,0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          __this_05 = (__this->fields).Camera;
          unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
          if (__this_05 != (UnityEngine_Camera_o *)0x0) {
            fVar15 = UnityEngine_Camera__get_orthographicSize(__this_05,(MethodInfo *)0x0);
            fVar15 = fVar15 + fVar14 * speed + fVar14 * speed;
            goto label_0447cd55;
          }
        }
      }
      else {
        __this_05 = (__this->fields).Camera;
        unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
        if (__this_05 != (UnityEngine_Camera_o *)0x0) {
          fVar15 = UnityEngine_Camera__get_orthographicSize(__this_05,(MethodInfo *)0x0);
          fVar15 = fVar15 - (fVar14 * speed + fVar14 * speed);
label_0447cd55:
          UnityEngine_Camera__set_orthographicSize(__this_05,fVar15,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0447ce2d:
  local_c0._0_8_ = il2cpp_runtime_helper_022b2c90();
  local_b0._0_2_ = (short)extraout_XMM1_Da;
  local_b0._2_1_ = (char)((uint)extraout_XMM1_Da >> 0x10);
  local_b0._3_1_ = (char)((uint)extraout_XMM1_Da >> 0x18);
  local_c0._8_4_ = extraout_XMM0_Dc;
  local_c0._12_4_ = extraout_XMM0_Dd;
  pCStack_78 = unaff_RBX;
  if (g_data_057ae87b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  local_100._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_100._8_8_ = (Il2CppMethodPointer)0x0;
  local_100._16_8_ = (Il2CppObject *)0x0;
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (*(byte *)(*plVar6 + 0x130) < bVar1) goto label_0447d3e9;
    if (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar6 == (long *)0x0) goto label_0447d3d5;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)plVar6[7];
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_00->fields)._count == 0) {
    pUVar4 = (pCVar13->fields).Cache;
    if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    pUVar11 = (pUVar4->fields).Transform;
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar31 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    in_stack_fffffffffffffedc = UVar31.fields.z;
    pUVar4 = (pCVar13->fields).Cache;
    if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    in_stack_fffffffffffffee0 = UVar31.fields.x;
    in_stack_fffffffffffffee4 = UVar31.fields.y;
    pUVar11 = (pUVar4->fields).Transform;
    fStack_118 = extraout_XMM0_Dc_04;
    fStack_114 = extraout_XMM0_Dd_04;
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar31 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
    fVar14 = in_stack_fffffffffffffee0 + UVar31.fields.x * 50.0;
    fVar15 = in_stack_fffffffffffffee4 + UVar31.fields.y * 50.0;
    fVar20 = extraout_XMM0_Dc_04 + extraout_XMM0_Dc_05 * 0.0;
    fVar26 = extraout_XMM0_Dd_04 + extraout_XMM0_Dd_05 * 0.0;
    in_stack_fffffffffffffedc = in_stack_fffffffffffffedc + UVar31.fields.z * 50.0;
    pUVar4 = (pCVar13->fields).Cache;
    goto joined_r0x0447d3cf;
  }
  uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  in_stack_fffffffffffffee0 = (float)uVar23;
  in_stack_fffffffffffffee4 = (float)((ulong)uVar23 >> 0x20);
  fStack_118 = 0.0;
  fStack_114 = 0.0;
  in_stack_fffffffffffffedc = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_90,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  local_100._16_8_ = local_80;
  local_100._0_8_ = local_90._0_8_;
  local_100._8_8_ = local_90._8_8_;
  while( true ) {
    __this_01.fields._version = (int32_t)in_stack_fffffffffffffedc;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed0._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffed0._8_4_;
    __this_01.fields._current._0_4_ = in_stack_fffffffffffffee0;
    __this_01.fields._current._4_4_ = in_stack_fffffffffffffee4;
    bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)local_100);
    if ((char)bVar9 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_fffffffffffffedc;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed0._0_8_;
      __this_02.fields._index = in_stack_fffffffffffffed0._8_4_;
      __this_02.fields._current._0_4_ = in_stack_fffffffffffffee0;
      __this_02.fields._current._4_4_ = in_stack_fffffffffffffee4;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)local_100);
      goto label_0447d037;
    }
    if ((Il2CppObject *)local_100._16_8_ == (Il2CppObject *)0x0) goto label_0447d3df;
    if (((Il2CppObject *)(local_100._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
    goto label_0447d3e4;
    pUVar11 = UnityEngine_GameObject__get_transform
                        (((Il2CppObject *)(local_100._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
    UVar31 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 + UVar31.fields.x;
    in_stack_fffffffffffffee4 = in_stack_fffffffffffffee4 + UVar31.fields.y;
    fStack_118 = fStack_118 + extraout_XMM0_Dc_00;
    fStack_114 = fStack_114 + extraout_XMM0_Dd_00;
    in_stack_fffffffffffffedc = in_stack_fffffffffffffedc + UVar31.fields.z;
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    auVar29 = il2cpp_runtime_helper_022b2fd0(plVar6);
    if (auVar29._8_4_ != 1) break;
    plVar12 = (long *)__cxa_begin_catch(auVar29._0_8_);
    lVar7 = *plVar12;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_fffffffffffffedc;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed0._0_8_;
    __this_03.fields._index = in_stack_fffffffffffffed0._8_4_;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffee0;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffee4;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)local_100);
    if (lVar7 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar7);
      break;
    }
label_0447d037:
    if (plVar6[7] != 0) {
      fVar14 = (float)*(int *)(plVar6[7] + 0x20);
      in_stack_fffffffffffffedc = in_stack_fffffffffffffedc / fVar14;
      auVar8._4_4_ = in_stack_fffffffffffffee4;
      auVar8._0_4_ = in_stack_fffffffffffffee0;
      auVar8._8_4_ = fStack_118;
      auVar8._12_4_ = fStack_114;
      auVar21._4_4_ = fVar14;
      auVar21._0_4_ = fVar14;
      auVar21._8_8_ = 0;
      auVar21 = divps(auVar8,auVar21);
      fVar14 = auVar21._0_4_;
      fVar15 = auVar21._4_4_;
      fVar20 = auVar21._8_4_;
      fVar26 = auVar21._12_4_;
      pUVar4 = (pCVar13->fields).Cache;
joined_r0x0447d3cf:
      if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar11 = (pUVar4->fields).Transform, in_stack_fffffffffffffee0 = fVar14,
         in_stack_fffffffffffffee4 = fVar15, fStack_118 = fVar20, fStack_114 = fVar26,
         pUVar11 != (UnityEngine_Transform_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UVar31 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
        fVar17 = UVar31.fields.y;
        fVar16 = UVar31.fields.x;
        uVar18 = extraout_XMM0_Dc_01;
        uVar19 = extraout_XMM0_Dd_01;
        fVar24 = fVar17;
        fVar25 = fVar17;
        fVar27 = fVar15;
        in_stack_fffffffffffffee0 = fVar14;
        in_stack_fffffffffffffee4 = fVar15;
        if (g_data_057a6841 == '\0') {
          uStack_d8 = extraout_XMM0_Dc_01;
          local_e0 = (undefined1  [8])UVar31.fields._0_8_;
          uStack_d4 = extraout_XMM0_Dd_01;
          local_d0 = fVar17;
          fStack_cc = fVar17;
          local_a0 = fVar15;
          fStack_9c = fVar15;
          fStack_98 = fVar20;
          fStack_94 = fVar26;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar16 = (float)local_e0._0_4_;
          fVar17 = (float)local_e0._4_4_;
          uVar18 = uStack_d8;
          uVar19 = uStack_d4;
          fVar24 = local_d0;
          fVar25 = fStack_cc;
          fVar27 = local_a0;
          in_stack_fffffffffffffee0 = fVar14;
          in_stack_fffffffffffffee4 = fVar15;
        }
        fVar20 = UVar31.fields.z - in_stack_fffffffffffffedc;
        fVar14 = fVar16 - in_stack_fffffffffffffee0;
        fVar15 = fVar24 - fVar27;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_e0._4_4_ = fVar17;
          local_e0._0_4_ = fVar16 - in_stack_fffffffffffffee0;
          uStack_d8 = uVar18;
          uStack_d4 = uVar19;
          local_d0 = fVar24 - fVar27;
          fStack_cc = fVar25;
          il2cpp_runtime_helper_02337ed0();
          fVar14 = (float)local_e0._0_4_;
          fVar15 = local_d0;
        }
        fVar14 = fVar20 * fVar20 + fVar15 * fVar15 + fVar14 * fVar14;
        if (fVar14 < 0.0) {
          fVar14 = sqrtf(fVar14);
        }
        else {
          fVar14 = SQRT(fVar14);
        }
        bVar9 = Cameras_MapEditorCamera__AlignedWithWorldAxis(pCVar13,method_00);
        auVar21 = local_c0;
        if ((char)bVar9 == '\0') {
          Cameras_MapEditorCamera__AlignToWorldAxis(pCVar13,method_00);
          return;
        }
        pUVar4 = (pCVar13->fields).Cache;
        if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar11 = (pUVar4->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          UVar30.fields.z = local_b0;
          UVar30.fields.x = (float)local_c0._0_4_;
          UVar30.fields.y = (float)local_c0._4_4_;
          local_c0 = auVar21;
          UVar31 = UnityEngine_Transform__TransformDirection(pUVar11,UVar30,(MethodInfo *)0x0);
          auVar22._0_8_ = UVar31.fields._0_8_;
          auVar22._8_4_ = extraout_XMM0_Dc_02;
          auVar22._12_4_ = extraout_XMM0_Dd_02;
          uVar23 = auVar22._8_8_;
          UVar28 = UnityEngine_Quaternion__AngleAxis(90.0,UVar31,(MethodInfo *)0x0);
          pUVar4 = (pCVar13->fields).Cache;
          if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
            local_c0._8_4_ = extraout_XMM0_Dc_03;
            local_c0._0_8_ = UVar28.fields._0_8_;
            local_c0._12_4_ = extraout_XMM0_Dd_03;
            pUVar11 = (pUVar4->fields).Transform;
            _local_b0 = UVar28.fields._8_8_;
            uStack_a8 = uVar23;
            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
              UVar28 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
              fVar15 = UVar28.fields.x;
              fVar20 = UVar28.fields.y;
              fVar26 = UVar28.fields.z;
              fVar16 = UVar28.fields.w;
              UVar28.fields.w =
                   ((fVar16 * fStack_ac - fVar15 * (float)local_c0._0_4_) - fVar20 * (float)local_c0._4_4_) -
                   fVar26 * local_b0;
              UVar28.fields.z =
                   ((float)local_c0._0_4_ * fVar20 + local_b0 * fVar16 + fStack_ac * fVar26) -
                   (float)local_c0._4_4_ * fVar15;
              UVar28.fields.y =
                   (local_b0 * fVar15 + (float)local_c0._4_4_ * fVar16 + fStack_ac * fVar20) -
                   fVar26 * (float)local_c0._0_4_;
              UVar28.fields.x =
                   ((float)local_c0._4_4_ * fVar26 + (float)local_c0._0_4_ * fVar16 + fStack_ac * fVar15) -
                   fVar20 * local_b0;
              UnityEngine_Transform__set_rotation(pUVar11,UVar28,(MethodInfo *)0x0);
              pUVar4 = (pCVar13->fields).Cache;
              if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar11 = (pUVar4->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                UVar31 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
                value.fields.x = in_stack_fffffffffffffee0 - fVar14 * UVar31.fields.x;
                value.fields.y = in_stack_fffffffffffffee4 - fVar14 * UVar31.fields.y;
                value.fields.z = in_stack_fffffffffffffedc - UVar31.fields.z * fVar14;
                UnityEngine_Transform__set_position(pUVar11,value,(MethodInfo *)0x0);
                pUVar4 = (pCVar13->fields).Cache;
                if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar11 = (pUVar4->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                  worldPosition.fields.y = in_stack_fffffffffffffee4;
                  worldPosition.fields.x = in_stack_fffffffffffffee0;
                  worldPosition.fields.z = in_stack_fffffffffffffedc;
                  UnityEngine_Transform__LookAt_4e0aa40(pUVar11,worldPosition,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    il2cpp_runtime_helper_022b2c90();
  }
  __this_04.fields._version = (int32_t)in_stack_fffffffffffffedc;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed0._0_8_;
  __this_04.fields._index = in_stack_fffffffffffffed0._8_4_;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffee0;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffee4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)local_100);
  _Unwind_Resume(auVar29._0_8_);
}


// Cameras.MapEditorCamera$$UpdateRotation
// il2cpp: void Cameras_MapEditorCamera__UpdateRotation (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447c3d0

void Cameras_MapEditorCamera__UpdateRotation(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  Settings_MapEditorSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Utility_BaseComponentCache_o *pUVar8;
  Settings_KeybindSetting_o *pSVar9;
  UI_MapEditorMenu_o *pUVar10;
  long *plVar11;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined8 *puVar12;
  UnityEngine_GameObject_o *__this_01;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool_conflict bVar17;
  int32_t iVar18;
  uint uVar19;
  UnityEngine_Transform_o *pUVar20;
  long *plVar21;
  Cameras_MapEditorCamera_o *unaff_RBX;
  Cameras_MapEditorCamera_o *pCVar22;
  UnityEngine_Camera_o *__this_02;
  MethodInfo *method_00;
  Cameras_MapEditorCamera_o *pCVar23;
  undefined8 unaff_R12;
  Cameras_MapEditorCamera_o *unaff_R14;
  Cameras_MapEditorCamera_o *unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar32;
  undefined4 extraout_XMM1_Da;
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  UnityEngine_Quaternion_o UVar39;
  undefined1 auVar40 [12];
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o worldPosition;
  undefined1 auStack_168 [12];
  float fStack_15c;
  float fStack_158;
  undefined8 uStack_148;
  undefined1 auStack_138 [16];
  Cameras_MapEditorCamera_o *pCStack_128;
  Cameras_MapEditorCamera_o *pCStack_120;
  float fStack_f0;
  float fStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_b0;
  float fStack_ac;
  
  pCVar23 = __this;
  if (g_data_057ae87a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    pCVar23 = (Cameras_MapEditorCamera_o *)&"Mouse X";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae87a = '\x01';
  }
  pCVar22 = unaff_RBX;
  if ((char)(__this->fields)._wasRotating == '\0') {
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
      if ((char)(pUVar10->fields).IsMouseUI != '\0') {
        return;
      }
      goto label_0447c419;
    }
  }
  else {
label_0447c419:
    *(undefined1 *)&(__this->fields)._wasRotating = 0;
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pCVar23 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).RotateCamera,
       pCVar23 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pCVar23,0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
label_0447c607:
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pCVar23 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraLeft,
           pCVar23 != (Cameras_MapEditorCamera_o *)0x0)) {
          bVar17 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)pCVar23,0,(MethodInfo *)0x0);
          if ((char)bVar17 != '\0') {
            if (g_data_057ac31b == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057ac31b = '\x01';
            }
            uVar27 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            uVar30 = (undefined4)uVar27;
            uVar31 = (undefined4)((ulong)uVar27 >> 0x20);
            uVar29 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
label_0447c7b5:
            uVar27 = CONCAT44(uVar31,uVar30);
            uVar31 = 0;
            uVar30 = 0;
            goto Cameras_MapEditorCamera__SnapCameraToAxis;
          }
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pCVar23 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraRight,
             pCVar23 != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar17 = Settings_KeybindSetting__GetKeyDown
                               ((Settings_KeybindSetting_o *)pCVar23,0,(MethodInfo *)0x0);
            if ((char)bVar17 != '\0') {
              if (g_data_057a6844 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6844 = '\x01';
              }
              uVar27 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              uVar30 = (undefined4)uVar27;
              uVar31 = (undefined4)((ulong)uVar27 >> 0x20);
              uVar29 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              goto label_0447c7b5;
            }
            pSVar5 = (__this->fields)._input;
            if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pCVar23 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).SnapCameraUp,
               pCVar23 != (Cameras_MapEditorCamera_o *)0x0)) {
              bVar17 = Settings_KeybindSetting__GetKeyDown
                                 ((Settings_KeybindSetting_o *)pCVar23,0,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                if (g_data_057abfed == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057abfed = '\x01';
                }
                uVar27 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
                uVar30 = (undefined4)uVar27;
                uVar31 = (undefined4)((ulong)uVar27 >> 0x20);
                uVar29 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
                goto label_0447c7b5;
              }
              pSVar5 = (__this->fields)._input;
              if (pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) {
                pSVar9 = (pSVar5->fields).SnapCameraDown;
                pCVar23 = (Cameras_MapEditorCamera_o *)0x0;
                if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
                  bVar17 = Settings_KeybindSetting__GetKeyDown(pSVar9,0,(MethodInfo *)0x0);
                  if ((char)bVar17 == '\0') {
                    return;
                  }
                  if (g_data_057ac7d4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057ac7d4 = '\x01';
                  }
                  uVar27 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
                  uVar30 = (undefined4)uVar27;
                  uVar31 = (undefined4)((ulong)uVar27 >> 0x20);
                  uVar29 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
                  goto label_0447c7b5;
                }
              }
            }
          }
        }
      }
      else {
        fVar24 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        pCVar23 = "Mouse Y";
        fVar25 = UnityEngine_Input__GetAxis((System_String_o *)"Mouse Y",(MethodInfo *)0x0);
        pSVar6 = (__this->fields)._settings;
        if ((pSVar6 != (Settings_MapEditorSettings_o *)0x0) &&
           (pSVar7 = (pSVar6->fields).CameraRotateSpeed, pSVar7 != (Settings_FloatSetting_o *)0x0)) {
          fVar37 = (pSVar7->fields)._value;
          fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pCVar23 = (Cameras_MapEditorCamera_o *)0x0;
          iVar18 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          pUVar8 = (__this->fields).Cache;
          if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
             (pCVar22 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
             pCVar22 != (Cameras_MapEditorCamera_o *)0x0)) {
            if (0.033333335 <= fVar26) {
              fVar26 = 0.033333335;
            }
            fVar28 = 1.0;
            if (1.0 <= (float)iVar18) {
              fVar28 = (float)iVar18;
            }
            UVar41 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar22,(MethodInfo *)0x0)
            ;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            pCVar23 = pCVar22;
            UnityEngine_Transform__RotateAround
                      ((UnityEngine_Transform_o *)pCVar22,UVar41,
                       (UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                       fVar24 * fVar26 * fVar37 * (fVar28 / 1080.0),(MethodInfo *)0x0);
            pUVar8 = (__this->fields).Cache;
            if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
               (pCVar22 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
               pCVar22 != (Cameras_MapEditorCamera_o *)0x0)) {
              pCVar23 = pCVar22;
              UVar41 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar22,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).Cache;
              if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar20 = (pUVar8->fields).Transform;
                pCVar23 = (Cameras_MapEditorCamera_o *)0x0;
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  UVar42 = UnityEngine_Transform__get_right(pUVar20,(MethodInfo *)0x0);
                  pCVar23 = pCVar22;
                  UnityEngine_Transform__RotateAround
                            ((UnityEngine_Transform_o *)pCVar22,UVar41,UVar42,
                             -(fVar37 * fVar25 * fVar26 * (fVar28 / 1080.0)),(MethodInfo *)0x0);
                  *(undefined1 *)&(__this->fields)._wasRotating = 1;
                  goto label_0447c607;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar5 = (pCVar23->fields)._input;
  unaff_RBX = pCVar22;
  unaff_R15 = pCVar23;
  unaff_R14 = __this;
  if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (unaff_R15 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan, unaff_RBX = pCVar23,
     unaff_R15 != (Cameras_MapEditorCamera_o *)0x0)) {
    bVar17 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)unaff_R15,0,(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      *(undefined1 *)((long)&(pCVar23->fields)._wasRotating + 1) = 1;
      UVar41 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (pCVar23->fields)._startDrag = (int)UVar41.fields._0_8_;
      (pCVar23->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar41.fields._0_8_ >> 0x20);
      (pCVar23->fields)._lastDragPosition.fields.y = UVar41.fields.z;
      return;
    }
    pSVar5 = (pCVar23->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (unaff_R15 = (Cameras_MapEditorCamera_o *)(pSVar5->fields).Pan,
       unaff_R15 != (Cameras_MapEditorCamera_o *)0x0)) {
      bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R15,0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        pSVar5 = (pCVar23->fields)._input;
        if (pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) {
          pSVar9 = (pSVar5->fields).Pan;
          unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
          if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
            bVar17 = Settings_KeybindSetting__GetKeyUp(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar17 == '\0') {
              return;
            }
            *(undefined1 *)((long)&(pCVar23->fields)._wasRotating + 1) = 0;
            return;
          }
        }
      }
      else {
        if (*(char *)((long)&(pCVar23->fields)._wasRotating + 1) == '\0') {
          return;
        }
        UVar41 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar1 = (pCVar23->fields)._startDrag;
        uVar2 = (pCVar23->fields)._lastDragPosition.fields.x;
        UVar42 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (pCVar23->fields)._startDrag = (int)UVar42.fields._0_8_;
        (pCVar23->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar42.fields._0_8_ >> 0x20);
        (pCVar23->fields)._lastDragPosition.fields.y = UVar42.fields.z;
        fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
        iVar18 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar8 = (pCVar23->fields).Cache;
        if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
           (unaff_R14 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
           unaff_R14 != (Cameras_MapEditorCamera_o *)0x0)) {
          unaff_R15 = unaff_R14;
          UVar42 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)unaff_R14,(MethodInfo *)0x0)
          ;
          pUVar8 = (pCVar23->fields).Cache;
          if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar20 = (pUVar8->fields).Transform;
            unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
              fStack_f0 = UVar41.fields.x;
              fStack_ec = UVar41.fields.y;
              if (0.033333335 <= fVar25) {
                fVar25 = 0.033333335;
              }
              fStack_f0 = fStack_f0 - (float)uVar1;
              fVar37 = 1.0;
              if (1.0 <= (float)iVar18) {
                fVar37 = (float)iVar18;
              }
              fVar37 = fVar37 / 1080.0;
              UVar41 = UnityEngine_Transform__get_right(pUVar20,(MethodInfo *)0x0);
              fStack_e0 = UVar42.fields.x;
              fStack_dc = UVar42.fields.y;
              value.fields.x = fStack_e0 - fStack_f0 * UVar41.fields.x * fVar25 * fVar24 * fVar37;
              value.fields.y = fStack_dc - fStack_f0 * UVar41.fields.y * fVar25 * fVar24 * fVar37;
              value.fields.z = UVar42.fields.z - UVar41.fields.z * fStack_f0 * fVar25 * fVar24 * fVar37;
              unaff_R15 = unaff_R14;
              UnityEngine_Transform__set_position
                        ((UnityEngine_Transform_o *)unaff_R14,value,(MethodInfo *)0x0);
              pUVar8 = (pCVar23->fields).Cache;
              if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                 (unaff_R14 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
                 unaff_R14 != (Cameras_MapEditorCamera_o *)0x0)) {
                unaff_R15 = unaff_R14;
                UVar41 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)unaff_R14,(MethodInfo *)0x0);
                pUVar8 = (pCVar23->fields).Cache;
                if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                  pUVar20 = (pUVar8->fields).Transform;
                  unaff_R15 = (Cameras_MapEditorCamera_o *)0x0;
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    fStack_ec = fStack_ec - (float)uVar2;
                    UVar42 = UnityEngine_Transform__get_up(pUVar20,(MethodInfo *)0x0);
                    fStack_e0 = UVar41.fields.x;
                    fStack_dc = UVar41.fields.y;
                    value_00.fields.x = fStack_e0 - fVar37 * fVar25 * fStack_ec * UVar42.fields.x * fVar24;
                    value_00.fields.y = fStack_dc - fVar37 * fVar25 * fStack_ec * UVar42.fields.y * fVar24;
                    value_00.fields.z =
                         UVar41.fields.z - fVar37 * fVar25 * UVar42.fields.z * fStack_ec * fVar24;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)unaff_R14,value_00,(MethodInfo *)0x0);
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
  uStack_148 = il2cpp_runtime_helper_022b2c90();
  register0x00000020 = (BADSPACEBASE *)auStack_168;
  __this = unaff_R15;
  pCStack_128 = unaff_RBX;
  pCStack_120 = unaff_R14;
  if (g_data_057ae879 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this = (Cameras_MapEditorCamera_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae879 = '\x01';
  }
  pUVar10 = (unaff_R15->fields)._menu;
  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
    if ((char)(pUVar10->fields).IsMouseUI != '\0') {
      return;
    }
    pCVar23 = *(Cameras_MapEditorCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar23 == (Cameras_MapEditorCamera_o *)0x0) {
label_0447cb5f:
      unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
      iVar4 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
      if ((((Settings_KeybindSetting_c *)pCVar23->klass)->_2).naturalAligment < bVar3) goto label_0447cb5f;
      unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
      if ((((Settings_KeybindSetting_c *)pCVar23->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapEditorGameManager)
      {
        unaff_RBX = pCVar23;
      }
      iVar4 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = unaff_RBX;
    bVar17 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      if (unaff_RBX == (Cameras_MapEditorCamera_o *)0x0) goto label_0447ce2d;
      pUVar8 = unaff_RBX[1].fields.Cache;
      if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) && (*(char *)&(pUVar8->fields).Transform != '\0')) {
        return;
      }
    }
    fStack_158 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    __this = (Cameras_MapEditorCamera_o *)(unaff_R15->fields).Camera;
    if (__this != (Cameras_MapEditorCamera_o *)0x0) {
      uVar19 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
      unaff_RBX = (Cameras_MapEditorCamera_o *)(ulong)uVar19;
      pSVar5 = (unaff_R15->fields)._input;
      if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
         (__this = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomIn,
         __this != (Cameras_MapEditorCamera_o *)0x0)) {
        if (0.033333335 <= fStack_158) {
          fStack_158 = 0.033333335;
        }
        bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
        if ((char)uVar19 == '\0') {
          if ((char)bVar17 == '\0') {
            pSVar5 = (unaff_R15->fields)._input;
            if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (__this = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
               __this != (Cameras_MapEditorCamera_o *)0x0)) {
              bVar17 = Settings_KeybindSetting__GetKey
                                 ((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
                return;
              }
              pUVar8 = (unaff_R15->fields).Cache;
              if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                 (unaff_R14 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
                 unaff_R14 != (Cameras_MapEditorCamera_o *)0x0)) {
                __this = unaff_R14;
                UVar41 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)unaff_R14,(MethodInfo *)0x0);
                pUVar8 = (unaff_R15->fields).Cache;
                if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                  auStack_138._8_4_ = extraout_XMM0_Dc_00;
                  auStack_138._0_8_ = UVar41.fields._0_8_;
                  auStack_138._12_4_ = extraout_XMM0_Dd_00;
                  pUVar20 = (pUVar8->fields).Transform;
                  __this = (Cameras_MapEditorCamera_o *)0x0;
                  fStack_15c = UVar41.fields.z;
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    UVar41 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                    fVar37 = UVar41.fields.z * fStack_158 * (float)uStack_148;
                    fVar24 = (float)uStack_148 * fStack_158 * UVar41.fields.x;
                    fVar25 = (float)uStack_148 * fStack_158 * UVar41.fields.y;
                    fVar24 = (float)auStack_138._0_4_ - (fVar24 + fVar24);
                    fVar25 = (float)auStack_138._4_4_ - (fVar25 + fVar25);
                    fVar37 = fStack_15c - (fVar37 + fVar37);
                    goto label_0447ce1d;
                  }
                }
              }
            }
          }
          else {
            pUVar8 = (unaff_R15->fields).Cache;
            if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
               (unaff_R14 = (Cameras_MapEditorCamera_o *)(pUVar8->fields).Transform,
               unaff_R14 != (Cameras_MapEditorCamera_o *)0x0)) {
              __this = unaff_R14;
              UVar41 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)unaff_R14,(MethodInfo *)0x0);
              pUVar8 = (unaff_R15->fields).Cache;
              if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                auStack_138._8_4_ = extraout_XMM0_Dc;
                auStack_138._0_8_ = UVar41.fields._0_8_;
                auStack_138._12_4_ = extraout_XMM0_Dd;
                pUVar20 = (pUVar8->fields).Transform;
                __this = (Cameras_MapEditorCamera_o *)0x0;
                fStack_15c = UVar41.fields.z;
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  UVar41 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                  fVar37 = UVar41.fields.z * fStack_158 * (float)uStack_148;
                  fVar24 = (float)uStack_148 * fStack_158 * UVar41.fields.x;
                  fVar25 = (float)uStack_148 * fStack_158 * UVar41.fields.y;
                  fVar24 = (float)auStack_138._0_4_ + fVar24 + fVar24;
                  fVar25 = (float)auStack_138._4_4_ + fVar25 + fVar25;
                  fVar37 = fVar37 + fVar37 + fStack_15c;
label_0447ce1d:
                  UVar41.fields.y = fVar25;
                  UVar41.fields.x = fVar24;
                  UVar41.fields.z = fVar37;
                  UnityEngine_Transform__set_position
                            ((UnityEngine_Transform_o *)unaff_R14,UVar41,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else if ((char)bVar17 == '\0') {
          pSVar5 = (unaff_R15->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (__this = (Cameras_MapEditorCamera_o *)(pSVar5->fields).ZoomOut,
             __this != (Cameras_MapEditorCamera_o *)0x0)) {
            bVar17 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this,0,(MethodInfo *)0x0);
            if ((char)bVar17 == '\0') {
              return;
            }
            __this_02 = (unaff_R15->fields).Camera;
            unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
            if (__this_02 != (UnityEngine_Camera_o *)0x0) {
              fVar24 = UnityEngine_Camera__get_orthographicSize(__this_02,(MethodInfo *)0x0);
              fVar24 = fVar24 + fStack_158 * (float)uStack_148 + fStack_158 * (float)uStack_148;
              goto label_0447cd55;
            }
          }
        }
        else {
          __this_02 = (unaff_R15->fields).Camera;
          unaff_RBX = (Cameras_MapEditorCamera_o *)0x0;
          if (__this_02 != (UnityEngine_Camera_o *)0x0) {
            fVar24 = UnityEngine_Camera__get_orthographicSize(__this_02,(MethodInfo *)0x0);
            fVar24 = fVar24 - (fStack_158 * (float)uStack_148 + fStack_158 * (float)uStack_148);
label_0447cd55:
            UnityEngine_Camera__set_orthographicSize(__this_02,fVar24,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0447ce2d:
  uVar27 = il2cpp_runtime_helper_022b2c90();
  uVar30 = extraout_XMM0_Dc_01;
  uVar31 = extraout_XMM0_Dd_01;
  uVar29 = extraout_XMM1_Da;
Cameras_MapEditorCamera__SnapCameraToAxis:
  *(Cameras_MapEditorCamera_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(Cameras_MapEditorCamera_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R12;
  *(Cameras_MapEditorCamera_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined4 *)((long)register0x00000020 + -0x58) = uVar29;
  *(undefined8 *)((long)register0x00000020 + -0x68) = uVar27;
  *(undefined4 *)((long)register0x00000020 + -0x60) = uVar30;
  *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar31;
  if (g_data_057ae87b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447ce74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447ce80;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447ce8c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447ce98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cea4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447ceb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cebc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
  plVar11 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar11 != (long *)0x0) {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (*(byte *)(*plVar11 + 0x130) < bVar3) goto label_0447d3e9;
    if (*(Il2CppClass **)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cf36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar11 == (long *)0x0) goto label_0447d3d5;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)plVar11[7];
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_00->fields)._count == 0) {
    pUVar8 = (__this->fields).Cache;
    if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    pUVar20 = (pUVar8->fields).Transform;
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d37a;
    UVar41 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
    *(float *)((long)register0x00000020 + -0xcc) = UVar41.fields.z;
    pUVar8 = (__this->fields).Cache;
    if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    auVar33._8_4_ = extraout_XMM0_Dc_07;
    auVar33._0_8_ = UVar41.fields._0_8_;
    auVar33._12_4_ = extraout_XMM0_Dd_07;
    *(undefined1 (*) [16])((long)register0x00000020 + -200) = auVar33;
    pUVar20 = (pUVar8->fields).Transform;
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d39e;
    UVar41 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
    fVar24 = *(float *)((long)register0x00000020 + -200) + UVar41.fields.x * 50.0;
    fVar25 = *(float *)((long)register0x00000020 + -0xc4) + UVar41.fields.y * 50.0;
    fVar37 = *(float *)((long)register0x00000020 + -0xc0) + extraout_XMM0_Dc_08 * 0.0;
    fVar26 = *(float *)((long)register0x00000020 + -0xbc) + extraout_XMM0_Dd_08 * 0.0;
    *(float *)((long)register0x00000020 + -0xcc) =
         *(float *)((long)register0x00000020 + -0xcc) + UVar41.fields.z * 50.0;
    pUVar8 = (__this->fields).Cache;
    goto joined_r0x0447d3cf;
  }
  puVar12 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -200) = *puVar12;
  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xcc) = *(undefined4 *)(puVar12 + 1);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cf9a;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)((long)register0x00000020 + -0x38),
             __this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  *(undefined8 *)((long)register0x00000020 + -0x98) = *(undefined8 *)((long)register0x00000020 + -0x28);
  *(undefined8 *)((long)register0x00000020 + -0xa8) = *(undefined8 *)((long)register0x00000020 + -0x38);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = *(undefined8 *)((long)register0x00000020 + -0x30);
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cfcb;
    bVar17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       ((System_Collections_Generic_HashSet_Enumerator_T__o)
                        *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)
                         ((long)register0x00000020 + -0xd8),
                        (MethodInfo_3219C40 *)((long)register0x00000020 + -0xa8));
    if ((char)bVar17 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d037;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)
                 *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)
                  ((long)register0x00000020 + -0xd8),(MethodInfo_3219C30 *)((long)register0x00000020 + -0xa8))
      ;
      goto label_0447d037;
    }
    if (*(long *)((long)register0x00000020 + -0x98) == 0) goto label_0447d3df;
    __this_01 = *(UnityEngine_GameObject_o **)(*(long *)((long)register0x00000020 + -0x98) + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_0447d3e4;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447cff1;
    pUVar20 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d004;
    UVar41 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
    *(float *)((long)register0x00000020 + -200) =
         *(float *)((long)register0x00000020 + -200) + UVar41.fields.x;
    *(float *)((long)register0x00000020 + -0xc4) =
         *(float *)((long)register0x00000020 + -0xc4) + UVar41.fields.y;
    *(float *)((long)register0x00000020 + -0xc0) =
         *(float *)((long)register0x00000020 + -0xc0) + extraout_XMM0_Dc_02;
    *(float *)((long)register0x00000020 + -0xbc) =
         *(float *)((long)register0x00000020 + -0xbc) + extraout_XMM0_Dd_02;
    *(float *)((long)register0x00000020 + -0xcc) =
         *(float *)((long)register0x00000020 + -0xcc) + UVar41.fields.z;
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d3df;
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d3e4;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d3e9;
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d3f1;
    auVar40 = il2cpp_runtime_helper_022b2fd0(plVar11);
    if (auVar40._8_4_ != 1) break;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d433;
    plVar21 = (long *)__cxa_begin_catch(auVar40._0_8_);
    lVar13 = *plVar21;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d43b;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d44f;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o)
               *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)((long)register0x00000020 + -0xd8),
               (MethodInfo_3219C30 *)((long)register0x00000020 + -0xa8));
    if (lVar13 != 0) {
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d460;
      il2cpp_runtime_helper_022fefe0(lVar13);
      break;
    }
label_0447d037:
    if (plVar11[7] != 0) {
      fVar24 = (float)*(int *)(plVar11[7] + 0x20);
      *(float *)((long)register0x00000020 + -0xcc) = *(float *)((long)register0x00000020 + -0xcc) / fVar24;
      auVar14._4_4_ = fVar24;
      auVar14._0_4_ = fVar24;
      auVar14._8_8_ = 0;
      auVar33 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -200),auVar14);
      fVar24 = auVar33._0_4_;
      fVar25 = auVar33._4_4_;
      fVar37 = auVar33._8_4_;
      fVar26 = auVar33._12_4_;
      pUVar8 = (__this->fields).Cache;
joined_r0x0447d3cf:
      if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
        *(float *)((long)register0x00000020 + -200) = fVar24;
        *(float *)((long)register0x00000020 + -0xc4) = fVar25;
        *(float *)((long)register0x00000020 + -0xc0) = fVar37;
        *(float *)((long)register0x00000020 + -0xbc) = fVar26;
        pUVar20 = (pUVar8->fields).Transform;
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d092;
          UVar41 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
          fVar24 = UVar41.fields.z;
          fVar26 = UVar41.fields.x;
          fVar28 = UVar41.fields.y;
          fVar25 = *(float *)((long)register0x00000020 + -200);
          fVar37 = *(float *)((long)register0x00000020 + -0xc4);
          uVar29 = extraout_XMM0_Dc_03;
          uVar30 = extraout_XMM0_Dd_03;
          fVar36 = fVar28;
          fVar32 = fVar28;
          uVar31 = extraout_XMM0_Dc_03;
          uVar38 = extraout_XMM0_Dd_03;
          if (g_data_057a6841 == '\0') {
            *(float *)((long)register0x00000020 + -0xb8) = fVar24;
            *(float *)((long)register0x00000020 + -0x78) = fVar28;
            *(float *)((long)register0x00000020 + -0x74) = fVar28;
            *(undefined4 *)((long)register0x00000020 + -0x70) = extraout_XMM0_Dc_03;
            *(undefined4 *)((long)register0x00000020 + -0x6c) = extraout_XMM0_Dd_03;
            auVar15._8_4_ = extraout_XMM0_Dc_03;
            auVar15._0_8_ = UVar41.fields._0_8_;
            auVar15._12_4_ = extraout_XMM0_Dd_03;
            *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar15;
            *(float *)((long)register0x00000020 + -0x48) = fVar37;
            *(float *)((long)register0x00000020 + -0x44) = fVar37;
            *(undefined4 *)((long)register0x00000020 + -0x40) =
                 *(undefined4 *)((long)register0x00000020 + -0xc0);
            *(undefined4 *)((long)register0x00000020 + -0x3c) =
                 *(undefined4 *)((long)register0x00000020 + -0xbc);
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d0d2;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            fVar37 = *(float *)((long)register0x00000020 + -0x48);
            fVar26 = *(float *)((long)register0x00000020 + -0x88);
            fVar28 = *(float *)((long)register0x00000020 + -0x84);
            uVar29 = *(undefined4 *)((long)register0x00000020 + -0x80);
            uVar30 = *(undefined4 *)((long)register0x00000020 + -0x7c);
            fVar36 = *(float *)((long)register0x00000020 + -0x78);
            fVar32 = *(float *)((long)register0x00000020 + -0x74);
            uVar31 = *(undefined4 *)((long)register0x00000020 + -0x70);
            uVar38 = *(undefined4 *)((long)register0x00000020 + -0x6c);
            fVar24 = *(float *)((long)register0x00000020 + -0xb8);
            fVar25 = *(float *)((long)register0x00000020 + -200);
            g_data_057a6841 = '\x01';
          }
          fVar26 = fVar26 - fVar25;
          fVar36 = fVar36 - fVar37;
          fVar24 = fVar24 - *(float *)((long)register0x00000020 + -0xcc);
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            *(float *)((long)register0x00000020 + -0xb8) = fVar24;
            *(float *)((long)register0x00000020 + -0x78) = fVar36;
            *(float *)((long)register0x00000020 + -0x74) = fVar32;
            *(undefined4 *)((long)register0x00000020 + -0x70) = uVar31;
            *(undefined4 *)((long)register0x00000020 + -0x6c) = uVar38;
            *(float *)((long)register0x00000020 + -0x88) = fVar26;
            *(float *)((long)register0x00000020 + -0x84) = fVar28;
            *(undefined4 *)((long)register0x00000020 + -0x80) = uVar29;
            *(undefined4 *)((long)register0x00000020 + -0x7c) = uVar30;
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d12c;
            il2cpp_runtime_helper_02337ed0();
            fVar26 = *(float *)((long)register0x00000020 + -0x88);
            fVar36 = *(float *)((long)register0x00000020 + -0x78);
            fVar24 = *(float *)((long)register0x00000020 + -0xb8);
          }
          fVar24 = fVar24 * fVar24 + fVar36 * fVar36 + fVar26 * fVar26;
          if (fVar24 < 0.0) {
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d169;
            fVar24 = sqrtf(fVar24);
            uVar29 = extraout_XMM0_Db;
            uVar30 = extraout_XMM0_Dc_04;
            uVar31 = extraout_XMM0_Dd_04;
          }
          else {
            uVar29 = 0;
            uVar30 = 0;
            uVar31 = 0;
            fVar24 = SQRT(fVar24);
          }
          *(float *)((long)register0x00000020 + -0xb8) = fVar24;
          *(undefined4 *)((long)register0x00000020 + -0xb4) = uVar29;
          *(undefined4 *)((long)register0x00000020 + -0xb0) = uVar30;
          *(undefined4 *)((long)register0x00000020 + -0xac) = uVar31;
          *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d176;
          bVar17 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,method_00);
          if ((char)bVar17 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d352;
            Cameras_MapEditorCamera__AlignToWorldAxis(__this,method_00);
            return;
          }
          pUVar8 = (__this->fields).Cache;
          if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar20 = (pUVar8->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d1ad;
            UVar42.fields.z = *(float *)((long)register0x00000020 + -0x58);
            UVar42.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x68);
            UVar41 = UnityEngine_Transform__TransformDirection(pUVar20,UVar42,(MethodInfo *)0x0);
            auVar34._0_8_ = UVar41.fields._0_8_;
            auVar34._8_4_ = extraout_XMM0_Dc_05;
            auVar34._12_4_ = extraout_XMM0_Dd_05;
            *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d1c8;
            uVar27 = auVar34._8_8_;
            UVar39 = UnityEngine_Quaternion__AngleAxis(90.0,UVar41,(MethodInfo *)0x0);
            pUVar8 = (__this->fields).Cache;
            if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
              auVar16._8_4_ = extraout_XMM0_Dc_06;
              auVar16._0_8_ = UVar39.fields._0_8_;
              auVar16._12_4_ = extraout_XMM0_Dd_06;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x68) = auVar16;
              *(long *)((long)register0x00000020 + -0x58) = UVar39.fields._8_8_;
              *(undefined8 *)((long)register0x00000020 + -0x50) = uVar27;
              pUVar20 = (pUVar8->fields).Transform;
              if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d1f9;
                UVar39 = UnityEngine_Transform__get_rotation(pUVar20,(MethodInfo *)0x0);
                fVar28 = UVar39.fields.x;
                fVar36 = UVar39.fields.y;
                fVar24 = *(float *)((long)register0x00000020 + -0x58);
                fVar25 = *(float *)((long)register0x00000020 + -0x54);
                fVar32 = UVar39.fields.z;
                fVar35 = UVar39.fields.w;
                fVar37 = *(float *)((long)register0x00000020 + -0x68);
                fVar26 = *(float *)((long)register0x00000020 + -100);
                UVar39.fields.w = ((fVar35 * fVar25 - fVar28 * fVar37) - fVar36 * fVar26) - fVar32 * fVar24;
                UVar39.fields.z = (fVar37 * fVar36 + fVar24 * fVar35 + fVar25 * fVar32) - fVar26 * fVar28;
                *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d2c6;
                UVar39.fields.y = (fVar24 * fVar28 + fVar26 * fVar35 + fVar25 * fVar36) - fVar32 * fVar37;
                UVar39.fields.x = (fVar26 * fVar32 + fVar37 * fVar35 + fVar25 * fVar28) - fVar36 * fVar24;
                UnityEngine_Transform__set_rotation(pUVar20,UVar39,(MethodInfo *)0x0);
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar20 = (pUVar8->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d2ea;
                  UVar41 = UnityEngine_Transform__get_forward(pUVar20,(MethodInfo *)0x0);
                  fVar24 = *(float *)((long)register0x00000020 + -0xb8);
                  value_01.fields.x = *(float *)((long)register0x00000020 + -200) - fVar24 * UVar41.fields.x;
                  value_01.fields.y = *(float *)((long)register0x00000020 + -0xc4) - fVar24 * UVar41.fields.y;
                  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d31c;
                  value_01.fields.z = *(float *)((long)register0x00000020 + -0xcc) - UVar41.fields.z * fVar24;
                  UnityEngine_Transform__set_position(pUVar20,value_01,(MethodInfo *)0x0);
                  pUVar8 = (__this->fields).Cache;
                  if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                     (pUVar20 = (pUVar8->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d348;
                    worldPosition.fields.z = *(float *)((long)register0x00000020 + -0xcc);
                    worldPosition.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -200);
                    UnityEngine_Transform__LookAt_4e0aa40(pUVar20,worldPosition,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d3da;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d47b;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)
             *(System_Collections_Generic_HashSet_Enumerator_T__Fields *)((long)register0x00000020 + -0xd8),
             (MethodInfo_3219C30 *)((long)register0x00000020 + -0xa8));
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x447d488;
  _Unwind_Resume(auVar40._0_8_);
}


// Cameras.MapEditorCamera$$AlignedWithWorldAxis
// il2cpp: bool Cameras_MapEditorCamera__AlignedWithWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447d4a0

bool_conflict
Cameras_MapEditorCamera__AlignedWithWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Utility_BaseComponentCache_o *pUVar3;
  System_String_o *tag;
  Il2CppClass *pIVar4;
  bool_conflict extraout_EAX;
  bool_conflict bVar5;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  float *pfVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar7;
  undefined8 *puVar8;
  undefined8 unaff_RBP;
  undefined7 uVar9;
  UI_MapEditorMenu_o *__this_00;
  Cameras_MapEditorCamera_o *__this_01;
  Cameras_MapEditorCamera_o *__this_02;
  UnityEngine_Transform_o *pUVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Quaternion_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o value;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c0;
  
  pUVar3 = (__this->fields).Cache;
  __this_01 = __this;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
     __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
    UVar24 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    if (g_data_057a6846 == '\0') {
      __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6846 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
    fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    fVar12 = UVar24.fields.x - (float)uVar1;
    uVar9 = (undefined7)((ulong)unaff_RBP >> 8);
    bVar5 = (bool_conflict)CONCAT71(uVar9,1);
    if (fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
      return bVar5;
    }
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
       __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
      UVar24 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      if (g_data_057ac4bc == '\0') {
        __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac4bc = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
      fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
      fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
      fVar12 = UVar24.fields.x - (float)uVar1;
      if (fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
        return bVar5;
      }
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
         (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
         __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
        UVar24 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
        if (g_data_057ac7d4 == '\0') {
          __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac7d4 = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
        fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
        fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
        fVar12 = UVar24.fields.x - (float)uVar1;
        if (fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
          return bVar5;
        }
        pUVar3 = (__this->fields).Cache;
        if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
           (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
           __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
          UVar24 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
          if (g_data_057abfed == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057abfed = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
          fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
          fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
          fVar12 = UVar24.fields.x - (float)uVar1;
          if (fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
            return bVar5;
          }
          pUVar3 = (__this->fields).Cache;
          if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
             (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
             __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
            UVar24 = UnityEngine_Transform__get_forward
                               ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            if (g_data_057a6844 == '\0') {
              __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6844 = '\x01';
            }
            uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
            fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
            fVar12 = UVar24.fields.x - (float)uVar1;
            if (fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
              return bVar5;
            }
            pUVar3 = (__this->fields).Cache;
            if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar10 = (pUVar3->fields).Transform;
              __this_01 = (Cameras_MapEditorCamera_o *)0x0;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UVar24 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
                if (g_data_057ac31b == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057ac31b = '\x01';
                }
                uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
                fVar15 = UVar24.fields.y - (float)((ulong)uVar1 >> 0x20);
                fVar11 = UVar24.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
                fVar12 = UVar24.fields.x - (float)uVar1;
                return (bool_conflict)
                       CONCAT71(uVar9,fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11);
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (__this_01->fields).Cache;
  __this_02 = __this_01;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_02 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
     __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
    UVar24 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
    pUVar3 = (__this_01->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_02 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
       __this_02 != (Cameras_MapEditorCamera_o *)0x0)) {
      UVar25 = UnityEngine_Transform__get_up((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar19 = (undefined4)*puVar8;
      uVar20 = (undefined4)((ulong)*puVar8 >> 0x20);
      fVar11 = *(float *)(puVar8 + 1);
      fStack_d0 = UVar24.fields.x;
      fStack_cc = UVar24.fields.y;
      fVar18 = ABS(fStack_d0);
      fVar12 = ABS(fStack_cc);
      fVar15 = ABS(UVar24.fields.z);
      fVar22 = ABS(UVar25.fields.x);
      fVar21 = ABS(UVar25.fields.y);
      fVar17 = ABS(UVar25.fields.z);
      if ((fVar18 <= fVar12) || (fVar18 <= fVar15)) {
        if ((fVar12 <= fVar18) || (fVar12 <= fVar15)) {
          fVar16 = fVar11;
          uVar13 = uVar19;
          uVar14 = uVar20;
          if ((fVar18 < fVar15) && (fVar12 < fVar15)) {
            if (UVar24.fields.z <= 0.0) {
              if (g_data_057ac4bc == '\0') {
                __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
                puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              }
              uVar13 = (undefined4)*(undefined8 *)((long)puVar8 + 0x54);
              uVar14 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x54) >> 0x20);
              fVar16 = *(float *)((long)puVar8 + 0x5c);
            }
            else {
              if (g_data_057a6846 == '\0') {
                __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6846 = '\x01';
                puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              }
              uVar13 = (undefined4)puVar8[9];
              uVar14 = (undefined4)((ulong)puVar8[9] >> 0x20);
              fVar16 = *(float *)(puVar8 + 10);
            }
          }
        }
        else if (0.0 < fStack_cc) {
          if (g_data_057a6844 == '\0') {
            __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar13 = (undefined4)puVar8[3];
          uVar14 = (undefined4)((ulong)puVar8[3] >> 0x20);
          fVar16 = *(float *)(puVar8 + 4);
        }
        else {
          if (g_data_057ac31b == '\0') {
            __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac31b = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar16 = *(float *)((long)puVar8 + 0x2c);
          uVar13 = (int)*(undefined8 *)((long)puVar8 + 0x24);
          uVar14 = (int)((ulong)*(undefined8 *)((long)puVar8 + 0x24) >> 0x20);
        }
joined_r0x0447dc4a:
        if (fVar22 <= fVar21) goto label_0447dd7e;
label_0447dc50:
        if (fVar22 <= fVar17) goto label_0447dd7e;
        if (UVar25.fields.x <= 0.0) {
          if (g_data_057ac7d4 == '\0') {
            __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac7d4 = '\x01';
          }
          puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
          pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
        }
        else {
          if (g_data_057abfed == '\0') {
            __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057abfed = '\x01';
          }
          puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
          pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
        }
label_0447df59:
        uVar19 = (undefined4)*puVar8;
        uVar20 = (undefined4)((ulong)*puVar8 >> 0x20);
        fVar11 = *pfVar6;
      }
      else {
        if (fStack_d0 <= 0.0) {
          if (g_data_057ac7d4 == '\0') {
            __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac7d4 = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar13 = (undefined4)puVar8[6];
          uVar14 = (undefined4)((ulong)puVar8[6] >> 0x20);
          fVar16 = *(float *)(puVar8 + 7);
          goto joined_r0x0447dc4a;
        }
        if (g_data_057abfed == '\0') {
          __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057abfed = '\x01';
          puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        }
        uVar13 = (undefined4)*(undefined8 *)((long)puVar8 + 0x3c);
        uVar14 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x3c) >> 0x20);
        fVar16 = *(float *)((long)puVar8 + 0x44);
        if (fVar21 < fVar22) goto label_0447dc50;
label_0447dd7e:
        if ((fVar22 < fVar21) && (fVar17 < fVar21)) {
          if (UVar25.fields.y <= 0.0) {
            if (g_data_057ac31b == '\0') {
              __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057ac31b = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          }
          else {
            if (g_data_057a6844 == '\0') {
              __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6844 = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          }
          goto label_0447df59;
        }
        if ((fVar22 < fVar17) && (fVar21 < fVar17)) {
          if (UVar25.fields.z <= 0.0) {
            if (g_data_057ac4bc == '\0') {
              __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057ac4bc = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
          }
          else {
            if (g_data_057a6846 == '\0') {
              __this_02 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6846 = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
          }
          goto label_0447df59;
        }
      }
      pUVar3 = (__this_01->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        __this_02 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform;
        if (__this_02 != (Cameras_MapEditorCamera_o *)0x0) {
          UVar24.fields.y = (float)uVar14;
          UVar24.fields.x = (float)uVar13;
          UVar24.fields.z = fVar16;
          UnityEngine_Transform__set_forward((UnityEngine_Transform_o *)__this_02,UVar24,(MethodInfo *)0x0);
          pUVar3 = (__this_01->fields).Cache;
          if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar10 = (pUVar3->fields).Transform;
            __this_02 = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              UVar25.fields.z = fVar11;
              UVar25.fields.x = (float)uVar19;
              UVar25.fields.y = (float)uVar20;
              UnityEngine_Transform__set_up(pUVar10,UVar25,(MethodInfo *)0x0);
              return extraout_EAX;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae87c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTags);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae87c = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0447dfec;
label_0447e0ba:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) goto label_0447e000;
label_0447e0d6:
    (__this_02->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0447e0ba;
label_0447dfec:
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_0447e0d6;
label_0447e000:
    pIVar4 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_0447e297;
    (__this_02->fields)._menu = __this_00;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)) goto label_0447e297;
  }
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._menu);
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  tag = (System_String_o *)**(undefined8 **)(TypeInfo_MapTags + 0xb8);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_MapEditorMenu_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this_02->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar10 = (pUVar3->fields).Transform;
    if ((char)bVar5 == '\0') {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        value.fields.x = (float)uVar1 * 100.0;
        value.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
        value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 100.0;
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UnityEngine_Transform__set_position(pUVar10,value,(MethodInfo *)0x0);
        pUVar3 = (__this_02->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar10 = (pUVar3->fields).Transform;
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            uVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            fVar11 = (float)uVar1;
            fVar12 = (float)((ulong)uVar1 >> 0x20);
            uVar1 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            fVar15 = (float)uVar1;
            fVar17 = (float)((ulong)uVar1 >> 0x20);
label_0447e286:
            UVar23.fields.y = fVar12;
            UVar23.fields.x = fVar11;
            UVar23.fields.w = fVar17;
            UVar23.fields.z = fVar15;
            UnityEngine_Transform__set_rotation(pUVar10,UVar23,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
    else if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UI_MapEditorMenu_o *)0x0;
      pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UVar24 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = (UI_MapEditorMenu_o *)0x0;
          UnityEngine_Transform__set_position(pUVar10,UVar24,(MethodInfo *)0x0);
          pUVar3 = (__this_02->fields).Cache;
          if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar10 = (pUVar3->fields).Transform;
            __this_00 = (UI_MapEditorMenu_o *)0x0;
            pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (UI_MapEditorMenu_o *)0x0;
              UVar23 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
              fVar15 = UVar23.fields.z;
              fVar17 = UVar23.fields.w;
              fVar11 = UVar23.fields.x;
              fVar12 = UVar23.fields.y;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) goto label_0447e286;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447e297:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// Cameras.MapEditorCamera$$AlignToWorldAxis
// il2cpp: void Cameras_MapEditorCamera__AlignToWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447d890

void Cameras_MapEditorCamera__AlignToWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Utility_BaseComponentCache_o *pUVar3;
  System_String_o *tag;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  float *pfVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar7;
  undefined8 *puVar8;
  UI_MapEditorMenu_o *__this_00;
  Cameras_MapEditorCamera_o *__this_01;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Quaternion_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  
  pUVar3 = (__this->fields).Cache;
  __this_01 = __this;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
     __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
    UVar23 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform,
       __this_01 != (Cameras_MapEditorCamera_o *)0x0)) {
      UVar24 = UnityEngine_Transform__get_up((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar18 = (undefined4)*puVar8;
      uVar19 = (undefined4)((ulong)*puVar8 >> 0x20);
      fVar10 = *(float *)(puVar8 + 1);
      local_98 = UVar23.fields.x;
      fStack_94 = UVar23.fields.y;
      fVar17 = ABS(local_98);
      fVar11 = ABS(fStack_94);
      fVar14 = ABS(UVar23.fields.z);
      fVar21 = ABS(UVar24.fields.x);
      fVar20 = ABS(UVar24.fields.y);
      fVar16 = ABS(UVar24.fields.z);
      if ((fVar17 <= fVar11) || (fVar17 <= fVar14)) {
        if ((fVar11 <= fVar17) || (fVar11 <= fVar14)) {
          fVar15 = fVar10;
          uVar12 = uVar18;
          uVar13 = uVar19;
          if ((fVar17 < fVar14) && (fVar11 < fVar14)) {
            if (UVar23.fields.z <= 0.0) {
              if (g_data_057ac4bc == '\0') {
                __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
                puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              }
              uVar12 = (undefined4)*(undefined8 *)((long)puVar8 + 0x54);
              uVar13 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x54) >> 0x20);
              fVar15 = *(float *)((long)puVar8 + 0x5c);
            }
            else {
              if (g_data_057a6846 == '\0') {
                __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6846 = '\x01';
                puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              }
              uVar12 = (undefined4)puVar8[9];
              uVar13 = (undefined4)((ulong)puVar8[9] >> 0x20);
              fVar15 = *(float *)(puVar8 + 10);
            }
          }
        }
        else if (0.0 < fStack_94) {
          if (g_data_057a6844 == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar12 = (undefined4)puVar8[3];
          uVar13 = (undefined4)((ulong)puVar8[3] >> 0x20);
          fVar15 = *(float *)(puVar8 + 4);
        }
        else {
          if (g_data_057ac31b == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac31b = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar15 = *(float *)((long)puVar8 + 0x2c);
          uVar12 = (int)*(undefined8 *)((long)puVar8 + 0x24);
          uVar13 = (int)((ulong)*(undefined8 *)((long)puVar8 + 0x24) >> 0x20);
        }
joined_r0x0447dc4a:
        if (fVar21 <= fVar20) goto label_0447dd7e;
label_0447dc50:
        if (fVar21 <= fVar16) goto label_0447dd7e;
        if (UVar24.fields.x <= 0.0) {
          if (g_data_057ac7d4 == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac7d4 = '\x01';
          }
          puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
          pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
        }
        else {
          if (g_data_057abfed == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057abfed = '\x01';
          }
          puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
          pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
        }
label_0447df59:
        uVar18 = (undefined4)*puVar8;
        uVar19 = (undefined4)((ulong)*puVar8 >> 0x20);
        fVar10 = *pfVar6;
      }
      else {
        if (local_98 <= 0.0) {
          if (g_data_057ac7d4 == '\0') {
            __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac7d4 = '\x01';
            puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar12 = (undefined4)puVar8[6];
          uVar13 = (undefined4)((ulong)puVar8[6] >> 0x20);
          fVar15 = *(float *)(puVar8 + 7);
          goto joined_r0x0447dc4a;
        }
        if (g_data_057abfed == '\0') {
          __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057abfed = '\x01';
          puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        }
        uVar12 = (undefined4)*(undefined8 *)((long)puVar8 + 0x3c);
        uVar13 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x3c) >> 0x20);
        fVar15 = *(float *)((long)puVar8 + 0x44);
        if (fVar20 < fVar21) goto label_0447dc50;
label_0447dd7e:
        if ((fVar21 < fVar20) && (fVar16 < fVar20)) {
          if (UVar24.fields.y <= 0.0) {
            if (g_data_057ac31b == '\0') {
              __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057ac31b = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          }
          else {
            if (g_data_057a6844 == '\0') {
              __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6844 = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          }
          goto label_0447df59;
        }
        if ((fVar21 < fVar16) && (fVar20 < fVar16)) {
          if (UVar24.fields.z <= 0.0) {
            if (g_data_057ac4bc == '\0') {
              __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057ac4bc = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
          }
          else {
            if (g_data_057a6846 == '\0') {
              __this_01 = (Cameras_MapEditorCamera_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6846 = '\x01';
            }
            puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
            pfVar6 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
          }
          goto label_0447df59;
        }
      }
      pUVar3 = (__this->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (Cameras_MapEditorCamera_o *)(pUVar3->fields).Transform;
        if (__this_01 != (Cameras_MapEditorCamera_o *)0x0) {
          UVar23.fields.y = (float)uVar13;
          UVar23.fields.x = (float)uVar12;
          UVar23.fields.z = fVar15;
          UnityEngine_Transform__set_forward((UnityEngine_Transform_o *)__this_01,UVar23,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).Cache;
          if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar9 = (pUVar3->fields).Transform;
            __this_01 = (Cameras_MapEditorCamera_o *)0x0;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              UVar24.fields.z = fVar10;
              UVar24.fields.x = (float)uVar18;
              UVar24.fields.y = (float)uVar19;
              UnityEngine_Transform__set_up(pUVar9,UVar24,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae87c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTags);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae87c = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0447e0ba;
label_0447dfec:
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) goto label_0447e000;
label_0447e0d6:
    (__this_01->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0447dfec;
label_0447e0ba:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_0447e0d6;
label_0447e000:
    pIVar4 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_0447e297;
    (__this_01->fields)._menu = __this_00;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)) goto label_0447e297;
  }
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._menu);
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  tag = (System_String_o *)**(undefined8 **)(TypeInfo_MapTags + 0xb8);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_MapEditorMenu_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this_01->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar9 = (pUVar3->fields).Transform;
    if ((char)bVar5 == '\0') {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        value.fields.x = (float)uVar1 * 100.0;
        value.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
        value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 100.0;
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UnityEngine_Transform__set_position(pUVar9,value,(MethodInfo *)0x0);
        pUVar3 = (__this_01->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar9 = (pUVar3->fields).Transform;
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            uVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            fVar10 = (float)uVar1;
            fVar11 = (float)((ulong)uVar1 >> 0x20);
            uVar1 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            fVar14 = (float)uVar1;
            fVar16 = (float)((ulong)uVar1 >> 0x20);
label_0447e286:
            UVar22.fields.y = fVar11;
            UVar22.fields.x = fVar10;
            UVar22.fields.w = fVar16;
            UVar22.fields.z = fVar14;
            UnityEngine_Transform__set_rotation(pUVar9,UVar22,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UI_MapEditorMenu_o *)0x0;
      pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UVar23 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = (UI_MapEditorMenu_o *)0x0;
          UnityEngine_Transform__set_position(pUVar9,UVar23,(MethodInfo *)0x0);
          pUVar3 = (__this_01->fields).Cache;
          if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar9 = (pUVar3->fields).Transform;
            __this_00 = (UI_MapEditorMenu_o *)0x0;
            pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (UI_MapEditorMenu_o *)0x0;
              UVar22 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
              fVar14 = UVar22.fields.z;
              fVar16 = UVar22.fields.w;
              fVar10 = UVar22.fields.x;
              fVar11 = UVar22.fields.y;
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) goto label_0447e286;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447e297:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Cameras.MapEditorCamera$$SnapCameraToAxis
// il2cpp: void Cameras_MapEditorCamera__SnapCameraToAxis (Cameras_MapEditorCamera_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x447ce40

void Cameras_MapEditorCamera__SnapCameraToAxis
               (Cameras_MapEditorCamera_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  long *plVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  long *plVar7;
  MethodInfo *method_00;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Quaternion_o UVar22;
  undefined1 auVar23 [12];
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o worldPosition;
  undefined1 in_stack_ffffffffffffff28 [12];
  float in_stack_ffffffffffffff34;
  float in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  fStack_58 = direction.fields.z;
  auStack_68._8_4_ = in_XMM0_Dc;
  auStack_68._0_8_ = direction.fields._0_8_;
  auStack_68._12_4_ = in_XMM0_Dd;
  if (g_data_057ae87b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae87b = '\x01';
  }
  auStack_a8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_a8._16_8_ = (Il2CppObject *)0x0;
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) goto label_0447d3e9;
    if (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) != TypeInfo_MapEditorGameManager)
    goto label_0447d3e9;
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (plVar1 == (long *)0x0) goto label_0447d3d5;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)plVar1[7];
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0447d3d5;
  if ((__this_00->fields)._count == 0) {
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    pUVar6 = (pUVar2->fields).Transform;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar24 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    in_stack_ffffffffffffff34 = UVar24.fields.z;
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_0447d3d5;
    in_stack_ffffffffffffff38 = UVar24.fields.x;
    in_stack_ffffffffffffff3c = UVar24.fields.y;
    pUVar6 = (pUVar2->fields).Transform;
    fStack_c0 = extraout_XMM0_Dc_03;
    fStack_bc = extraout_XMM0_Dd_03;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0447d3d5;
    UVar24 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
    fVar8 = in_stack_ffffffffffffff38 + UVar24.fields.x * 50.0;
    fVar19 = in_stack_ffffffffffffff3c + UVar24.fields.y * 50.0;
    fVar13 = extraout_XMM0_Dc_03 + extraout_XMM0_Dc_04 * 0.0;
    fVar20 = extraout_XMM0_Dd_03 + extraout_XMM0_Dd_04 * 0.0;
    in_stack_ffffffffffffff34 = in_stack_ffffffffffffff34 + UVar24.fields.z * 50.0;
    pUVar2 = (__this->fields).Cache;
    goto joined_r0x0447d3cf;
  }
  uVar16 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  in_stack_ffffffffffffff38 = (float)uVar16;
  in_stack_ffffffffffffff3c = (float)((ulong)uVar16 >> 0x20);
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  in_stack_ffffffffffffff34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  auStack_a8._16_8_ = pIStack_28;
  auStack_a8._0_8_ = auStack_38._0_8_;
  auStack_a8._8_8_ = auStack_38._8_8_;
  while( true ) {
    __this_01.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff28._8_4_;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffff3c;
    bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)auStack_a8);
    if ((char)bVar5 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff34;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff28._8_4_;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)auStack_a8);
      goto label_0447d037;
    }
    if ((Il2CppObject *)auStack_a8._16_8_ == (Il2CppObject *)0x0) goto label_0447d3df;
    if (((Il2CppObject *)(auStack_a8._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
    goto label_0447d3e4;
    pUVar6 = UnityEngine_GameObject__get_transform
                       (((Il2CppObject *)(auStack_a8._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
    UVar24 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 + UVar24.fields.x;
    in_stack_ffffffffffffff3c = in_stack_ffffffffffffff3c + UVar24.fields.y;
    fStack_c0 = fStack_c0 + extraout_XMM0_Dc;
    fStack_bc = fStack_bc + extraout_XMM0_Dd;
    in_stack_ffffffffffffff34 = in_stack_ffffffffffffff34 + UVar24.fields.z;
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_0447d3df:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e4:
    il2cpp_runtime_helper_022b2c90();
label_0447d3e9:
    auVar23 = il2cpp_runtime_helper_022b2fd0(plVar1);
    if (auVar23._8_4_ != 1) break;
    plVar7 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff28._8_4_;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff3c;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)auStack_a8)
    ;
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      break;
    }
label_0447d037:
    if (plVar1[7] != 0) {
      fVar8 = (float)*(int *)(plVar1[7] + 0x20);
      in_stack_ffffffffffffff34 = in_stack_ffffffffffffff34 / fVar8;
      auVar4._4_4_ = in_stack_ffffffffffffff3c;
      auVar4._0_4_ = in_stack_ffffffffffffff38;
      auVar4._8_4_ = fStack_c0;
      auVar4._12_4_ = fStack_bc;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar8;
      auVar14._8_8_ = 0;
      auVar14 = divps(auVar4,auVar14);
      fVar8 = auVar14._0_4_;
      fVar19 = auVar14._4_4_;
      fVar13 = auVar14._8_4_;
      fVar20 = auVar14._12_4_;
      pUVar2 = (__this->fields).Cache;
joined_r0x0447d3cf:
      if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar6 = (pUVar2->fields).Transform, in_stack_ffffffffffffff38 = fVar8,
         in_stack_ffffffffffffff3c = fVar19, fStack_c0 = fVar13, fStack_bc = fVar20,
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UVar24 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        fVar10 = UVar24.fields.y;
        fVar9 = UVar24.fields.x;
        uVar11 = extraout_XMM0_Dc_00;
        uVar12 = extraout_XMM0_Dd_00;
        fVar17 = fVar10;
        fVar18 = fVar10;
        fVar21 = fVar19;
        in_stack_ffffffffffffff38 = fVar8;
        in_stack_ffffffffffffff3c = fVar19;
        if (g_data_057a6841 == '\0') {
          uStack_80 = extraout_XMM0_Dc_00;
          auStack_88 = (undefined1  [8])UVar24.fields._0_8_;
          uStack_7c = extraout_XMM0_Dd_00;
          fStack_78 = fVar10;
          fStack_74 = fVar10;
          fStack_48 = fVar19;
          fStack_44 = fVar19;
          fStack_40 = fVar13;
          fStack_3c = fVar20;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar9 = (float)auStack_88._0_4_;
          fVar10 = (float)auStack_88._4_4_;
          uVar11 = uStack_80;
          uVar12 = uStack_7c;
          fVar17 = fStack_78;
          fVar18 = fStack_74;
          fVar21 = fStack_48;
          in_stack_ffffffffffffff38 = fVar8;
          in_stack_ffffffffffffff3c = fVar19;
        }
        fVar13 = UVar24.fields.z - in_stack_ffffffffffffff34;
        fVar8 = fVar9 - in_stack_ffffffffffffff38;
        fVar19 = fVar17 - fVar21;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          auStack_88._4_4_ = fVar10;
          auStack_88._0_4_ = fVar9 - in_stack_ffffffffffffff38;
          uStack_80 = uVar11;
          uStack_7c = uVar12;
          fStack_78 = fVar17 - fVar21;
          fStack_74 = fVar18;
          il2cpp_runtime_helper_02337ed0();
          fVar8 = (float)auStack_88._0_4_;
          fVar19 = fStack_78;
        }
        fVar8 = fVar13 * fVar13 + fVar19 * fVar19 + fVar8 * fVar8;
        if (fVar8 < 0.0) {
          fVar8 = sqrtf(fVar8);
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        bVar5 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,method_00);
        auVar14 = auStack_68;
        if ((char)bVar5 == '\0') {
          Cameras_MapEditorCamera__AlignToWorldAxis(__this,method_00);
          return;
        }
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar6 = (pUVar2->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UVar24.fields.z = fStack_58;
          UVar24.fields.x = (float)auStack_68._0_4_;
          UVar24.fields.y = (float)auStack_68._4_4_;
          auStack_68 = auVar14;
          UVar24 = UnityEngine_Transform__TransformDirection(pUVar6,UVar24,(MethodInfo *)0x0);
          auVar15._0_8_ = UVar24.fields._0_8_;
          auVar15._8_4_ = extraout_XMM0_Dc_01;
          auVar15._12_4_ = extraout_XMM0_Dd_01;
          uVar16 = auVar15._8_8_;
          UVar22 = UnityEngine_Quaternion__AngleAxis(90.0,UVar24,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).Cache;
          if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
            auStack_68._8_4_ = extraout_XMM0_Dc_02;
            auStack_68._0_8_ = UVar22.fields._0_8_;
            auStack_68._12_4_ = extraout_XMM0_Dd_02;
            pUVar6 = (pUVar2->fields).Transform;
            _fStack_58 = UVar22.fields._8_8_;
            uStack_50 = uVar16;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UVar22 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
              fVar19 = UVar22.fields.x;
              fVar13 = UVar22.fields.y;
              fVar20 = UVar22.fields.z;
              fVar9 = UVar22.fields.w;
              UVar22.fields.w =
                   ((fVar9 * fStack_54 - fVar19 * (float)auStack_68._0_4_) - fVar13 * (float)auStack_68._4_4_)
                   - fVar20 * fStack_58;
              UVar22.fields.z =
                   ((float)auStack_68._0_4_ * fVar13 + fStack_58 * fVar9 + fStack_54 * fVar20) -
                   (float)auStack_68._4_4_ * fVar19;
              UVar22.fields.y =
                   (fStack_58 * fVar19 + (float)auStack_68._4_4_ * fVar9 + fStack_54 * fVar13) -
                   fVar20 * (float)auStack_68._0_4_;
              UVar22.fields.x =
                   ((float)auStack_68._4_4_ * fVar20 + (float)auStack_68._0_4_ * fVar9 + fStack_54 * fVar19) -
                   fVar13 * fStack_58;
              UnityEngine_Transform__set_rotation(pUVar6,UVar22,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).Cache;
              if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar6 = (pUVar2->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UVar24 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
                value.fields.x = in_stack_ffffffffffffff38 - fVar8 * UVar24.fields.x;
                value.fields.y = in_stack_ffffffffffffff3c - fVar8 * UVar24.fields.y;
                value.fields.z = in_stack_ffffffffffffff34 - UVar24.fields.z * fVar8;
                UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).Cache;
                if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar6 = (pUVar2->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  worldPosition.fields.y = in_stack_ffffffffffffff3c;
                  worldPosition.fields.x = in_stack_ffffffffffffff38;
                  worldPosition.fields.z = in_stack_ffffffffffffff34;
                  UnityEngine_Transform__LookAt_4e0aa40(pUVar6,worldPosition,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
label_0447d3d5:
    il2cpp_runtime_helper_022b2c90();
  }
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff34;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff28._8_4_;
  __this_04.fields._current._0_4_ = in_stack_ffffffffffffff38;
  __this_04.fields._current._4_4_ = in_stack_ffffffffffffff3c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)auStack_a8);
  _Unwind_Resume(auVar23._0_8_);
}


// Cameras.MapEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_MapEditorCamera__SetDefaultCameraPosition (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447dfc0

void Cameras_MapEditorCamera__SetDefaultCameraPosition(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar6;
  UI_MapEditorMenu_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Quaternion_Fields value;
  UnityEngine_Vector3_o UVar8;
  
  if (g_data_057ae87c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTags);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae87c = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0447dfec;
label_0447e0ba:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) goto label_0447e000;
label_0447e0d6:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0447e0ba;
label_0447dfec:
    __this_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_0447e0d6;
label_0447e000:
    pIVar4 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_0447e297;
    (__this->fields)._menu = __this_00;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)) goto label_0447e297;
  }
  il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  tag = (System_String_o *)**(undefined8 **)(TypeInfo_MapTags + 0xb8);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_MapEditorMenu_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar7 = (pUVar3->fields).Transform;
    if ((char)bVar5 == '\0') {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar8.fields.x = (float)uVar1 * 100.0;
        UVar8.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
        UVar8.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 100.0;
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UnityEngine_Transform__set_position(pUVar7,UVar8,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar7 = (pUVar3->fields).Transform;
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            value = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
label_0447e286:
            UnityEngine_Transform__set_rotation(pUVar7,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UI_MapEditorMenu_o *)0x0;
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UI_MapEditorMenu_o *)0x0;
        UVar8 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = (UI_MapEditorMenu_o *)0x0;
          UnityEngine_Transform__set_position(pUVar7,UVar8,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).Cache;
          if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar7 = (pUVar3->fields).Transform;
            __this_00 = (UI_MapEditorMenu_o *)0x0;
            pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (UI_MapEditorMenu_o *)0x0;
              value = (UnityEngine_Quaternion_Fields)
                      UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) goto label_0447e286;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447e297:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Cameras.MapEditorCamera$$.ctor
// il2cpp: void Cameras_MapEditorCamera___ctor (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x447e2b0

void Cameras_MapEditorCamera___ctor(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



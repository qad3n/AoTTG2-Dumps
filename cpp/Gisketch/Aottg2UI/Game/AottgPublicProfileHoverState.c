// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowLoading
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x4532350

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
          UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar3;
  int iVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *extraout_RAX;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  SimpleJSONFixed_JSONNode_o *requested;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  undefined4 extraout_var_01;
  undefined8 *puVar9;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Threading_CancellationTokenSource_o **ppSVar10;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *a;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  System_String_o *pSVar12;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar13;
  bool bVar14;
  undefined8 *unaff_R12;
  undefined1 auVar15 [16];
  undefined8 uStack_60;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_58;
  undefined8 *puStack_50;
  
  if (g_data_057aeebc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bannerSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_String_o *)0x0;
  pGVar8 = root;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = (root->fields)._codeActions;
    if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    pSVar12 = "publicProfile.hover.accountId";
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.accountId",accountId,(MethodInfo *)0x0);
    pGVar2 = (root->fields)._codeActions;
    pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar12 = "publicProfile.hover.loading";
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",1,(MethodInfo *)0x0);
      pGVar2 = (root->fields)._codeActions;
      pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar12 = "publicProfile.hover.ready";
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
        pGVar2 = (root->fields)._codeActions;
        pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar12 = "publicProfile.hover.error";
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",0,(MethodInfo *)0x0);
          pGVar2 = (root->fields)._codeActions;
          pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pSVar12 = "publicProfile.hover.hasBio";
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0);
            pGVar2 = (root->fields)._codeActions;
            pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              pSVar12 = "publicProfile.hover.hasBadges";
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0)
              ;
              pGVar2 = (root->fields)._codeActions;
              pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                unaff_R12 = &g_data_057b9b70;
                pSVar12 = "publicProfile.hover.characterName";
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                pGVar2 = (root->fields)._codeActions;
                pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  pSVar12 = "publicProfile.hover.displayName";
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.displayName",
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                  pGVar2 = (root->fields)._codeActions;
                  pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    pSVar12 = "publicProfile.hover.bio";
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bio",
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                    pGVar2 = (root->fields)._codeActions;
                    pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                      pGVar2 = (root->fields)._codeActions;
                      pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                      pSVar12 = (System_String_o *)0x0;
                      pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                                         ((System_String_o *)0x0,(MethodInfo *)0x0);
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.avatarSprite",pSVar5,
                                   (MethodInfo *)0x0);
                        pGVar2 = (root->fields)._codeActions;
                        pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                        pSVar12 = (System_String_o *)0x0;
                        pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                                           ((System_String_o *)0x0,(MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          pSVar12 = "publicProfile.hover.bannerSprite";
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bannerSprite",pSVar5,
                                     (MethodInfo *)0x0);
                          pGVar2 = (root->fields)._codeActions;
                          pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                            pSVar12 = "publicProfile.hover.errorText";
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.errorText",
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                       (MethodInfo *)0x0);
                            __this = (root->fields)._Theme_k__BackingField;
                            pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                            if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                              pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                                                 ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
                                                  __this,"public-profile-hover",anchor,0,8.0,(MethodInfo *)0x0);
                              return pUVar6;
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
  auVar15 = il2cpp_runtime_helper_022b2c90();
  pGVar13 = auVar15._8_8_;
  uStack_60 = auVar15._0_8_;
  pGStack_58 = root;
  puStack_50 = unaff_R12;
  if (g_data_057aeebd == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bannerSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    auVar15._8_8_ = extraout_RDX;
    auVar15._0_8_ = uStack_60;
    g_data_057aeebd = '\x01';
  }
  uStack_60 = auVar15._0_8_;
  uStack_60 = uStack_60 & 0xffffffffffffff;
  bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(pGVar8,pSVar12,auVar15._8_8_);
  if ((pGVar13 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) || ((char)bVar3 == '\0')) {
    return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar3);
  }
  pGVar7 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)&(pGVar13->fields)._createEventSystem;
  if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar12 = (System_String_o *)((long)&uStack_60 + 7);
  value = pGVar13;
  pSVar5 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
                     ((ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)pGVar13,
                      (bool_conflict *)pSVar12,method_00);
  if (pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = (pGVar8->fields)._codeActions;
    value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar12 = "publicProfile.hover.loading";
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
      pGVar2 = (pGVar8->fields)._codeActions;
      value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar12 = "publicProfile.hover.ready";
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",1,(MethodInfo *)0x0);
        pGVar2 = (pGVar8->fields)._codeActions;
        value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",0,(MethodInfo *)0x0);
          pGVar2 = (pGVar8->fields)._codeActions;
          pSVar12 = (System_String_o *)0x0;
          value = pGVar7;
          bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)pGVar7,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pSVar12 = "publicProfile.hover.hasBio";
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",
                       (uint)(byte)((byte)bVar3 ^ 1),(MethodInfo *)0x0);
            pGVar2 = (pGVar8->fields)._codeActions;
            value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",
                         (uint)uStack_60._7_1_,(MethodInfo *)0x0);
              pGVar2 = (pGVar8->fields)._codeActions;
              value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pGVar13->fields)._selectedScreenId;
              pSVar12 = (System_String_o *)0x0;
              bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                ppSVar1 = &(pGVar13->fields).m_CancellationTokenSource;
                ppSVar10 = (System_Threading_CancellationTokenSource_o **)&(pGVar13->fields)._selectedScreenId
                ;
                if ((char)bVar3 != '\0') {
                  ppSVar10 = ppSVar1;
                }
                pSVar12 = "publicProfile.hover.characterName";
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",
                           (System_String_o *)*ppSVar10,(MethodInfo *)0x0);
                pGVar2 = (pGVar8->fields)._codeActions;
                value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  pSVar12 = "publicProfile.hover.displayName";
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.displayName",
                             (System_String_o *)*ppSVar1,(MethodInfo *)0x0);
                  pGVar2 = (pGVar8->fields)._codeActions;
                  value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    pSVar12 = "publicProfile.hover.bio";
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bio",
                               (System_String_o *)pGVar7,(MethodInfo *)0x0);
                    pGVar2 = (pGVar8->fields)._codeActions;
                    value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",pSVar5,
                                 (MethodInfo *)0x0);
                      pGVar2 = (pGVar8->fields)._codeActions;
                      value = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)&(pGVar13->fields)._motionScale;
                      pSVar12 = (System_String_o *)0x0;
                      pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite
                                         ((System_String_o *)value,(MethodInfo *)0x0);
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.avatarSprite",pSVar5,
                                   (MethodInfo *)0x0);
                        pGVar2 = (pGVar8->fields)._codeActions;
                        value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pGVar13->fields)._actionHandler;
                        pSVar12 = (System_String_o *)0x0;
                        pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite
                                           ((System_String_o *)value,(MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bannerSprite",pSVar5,
                                     (MethodInfo *)0x0);
                          return extraout_RAX;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeec0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)0x0;
  pGVar8 = value;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (value == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      method_01 = pMVar11;
      pGVar13 = pGVar8;
      if (g_data_057aeec2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        pGVar13 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&"badges";
        il2cpp_runtime_helper_023445d0();
        g_data_057aeec2 = '\x01';
      }
      *(undefined1 *)&pMVar11->methodPointer = 0;
      if (pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                           ((System_String_o *)(pGVar8->fields)._themeJson,method_01);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        requested = (SimpleJSONFixed_JSONNode_o *)0x0;
        method_01 = (MethodInfo *)0x0;
        pGVar13 = pGVar7;
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pGVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
          requested = (SimpleJSONFixed_JSONNode_o *)
                      (*(((SimpleJSONFixed_JSONArray_c *)pGVar7->klass)->vtable)._7_get_Item.methodPtr)
                                (pGVar7,"badges",
                                 (((SimpleJSONFixed_JSONArray_c *)pGVar7->klass)->vtable)._7_get_Item.method);
        }
        pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                           (requested,
                            (System_Collections_Generic_IEnumerable_string__o *)
                            *(System_String_array **)&(pGVar8->fields)._buildOnStart,(MethodInfo *)0x0);
        pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        method_01 = (MethodInfo *)0x0;
        pGVar13 = pGVar7;
        SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pGVar7,(MethodInfo *)0x0);
        if (pGVar7 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          (*(((SimpleJSONFixed_JSONObject_c *)pGVar7->klass)->vtable)._8_set_Item.methodPtr)
                    (pGVar7,"badges",pGVar8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = false;
          method_01 = (MethodInfo *)0x0;
          pGVar13 = pGVar8;
          bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pGVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (pGVar8 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
            iVar4 = (*(((SimpleJSONFixed_JSONArray_c *)pGVar8->klass)->vtable)._11_get_Count.methodPtr)
                              (pGVar8,(((SimpleJSONFixed_JSONArray_c *)pGVar8->klass)->vtable)._11_get_Count.
                                      method);
            bVar14 = 0 < iVar4;
          }
          *(bool *)&pMVar11->methodPointer = bVar14;
          pUVar6 = (UnityEngine_GameObject_o *)
                   (*(((SimpleJSONFixed_JSONObject_c *)pGVar7->klass)->vtable)._3_ToString.methodPtr)
                             (pGVar7,(((SimpleJSONFixed_JSONObject_c *)pGVar7->klass)->vtable)._3_ToString.
                                     method);
          return pUVar6;
        }
      }
label_04532bcc:
      il2cpp_runtime_helper_022b2c90();
      if (pGVar13 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        bVar3 = System_String__IsNullOrWhiteSpace((pGVar13->fields)._selectedScreenId,(MethodInfo *)0x0);
        return (UnityEngine_GameObject_o *)
               (&(pGVar13->fields).m_CancellationTokenSource)[(byte)((byte)bVar3 ^ 1)];
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar11 = a;
      if (g_data_057aeebe == '\0') {
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
        g_data_057aeebe = '\x01';
        pMVar11 = extraout_RDX_00;
      }
      bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                        (pGVar13,(System_String_o *)method_01,pMVar11);
      pUVar6 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var_01,bVar3);
      if ((char)bVar3 != '\0') {
        if ((pGVar13 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar2 = (pGVar13->fields)._codeActions,
           pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
          pGVar2 = (pGVar13->fields)._codeActions;
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
            pGVar2 = (pGVar13->fields)._codeActions;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",1,(MethodInfo *)0x0)
              ;
              pGVar2 = (pGVar13->fields)._codeActions;
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",0,
                           (MethodInfo *)0x0);
                pGVar2 = (pGVar13->fields)._codeActions;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",0,
                             (MethodInfo *)0x0);
                  pGVar2 = (pGVar13->fields)._codeActions;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                    pGVar2 = (pGVar13->fields)._codeActions;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                      pGVar2 = (pGVar13->fields)._codeActions;
                      if (g_data_057aeec1 == '\0') {
                        il2cpp_runtime_helper_023445d0(&"http_404");
                        il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                        il2cpp_runtime_helper_023445d0(&"network_error");
                        il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                        g_data_057aeec1 = '\x01';
                      }
                      bVar3 = System_String__op_Equality((System_String_o *)a,"http_404",(MethodInfo *)0x0);
                      if (((char)bVar3 == '\0') &&
                         (bVar3 = System_String__op_Equality
                                            ((System_String_o *)a,"network_error",(MethodInfo *)0x0),
                         (char)bVar3 != '\0')) {
                        puVar9 = &"Could not load profile.";
                      }
                      else {
                        puVar9 = &"Profile unavailable.";
                      }
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.errorText",
                                   (System_String_o *)*puVar9,(MethodInfo *)0x0);
                        return extraout_RAX_00;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
      }
      return pUVar6;
    }
    pGVar2 = (value->fields)._codeActions;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar5 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.accountId","",
                          (MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar5,pSVar12,(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar3);
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x45326d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  bool_conflict bVar3;
  int iVar4;
  ulong in_RAX;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  SimpleJSONFixed_JSONNode_o *requested;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  undefined8 *puVar8;
  System_String_o **ppSVar9;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *extraout_RDX;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *method_00;
  MethodInfo *method_01;
  MethodInfo *a;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  System_String_o *b;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar11;
  bool bVar12;
  undefined8 uStack_38;
  
  method_00 = profile;
  uStack_38 = in_RAX;
  if (g_data_057aeebd == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bannerSprite");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    g_data_057aeebd = '\x01';
    method_00 = extraout_RDX;
  }
  uStack_38 = uStack_38 & 0xffffffffffffff;
  bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    (root,accountId,(MethodInfo *)method_00);
  if ((profile == (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) || ((char)bVar3 == '\0')) {
    return;
  }
  pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(profile->fields)._Description_k__BackingField;
  if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  b = (System_String_o *)((long)&uStack_38 + 7);
  pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)profile;
  pSVar5 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
                     (profile,(bool_conflict *)b,method_01);
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = (root->fields)._codeActions;
    pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      b = "publicProfile.hover.loading";
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
      pGVar2 = (root->fields)._codeActions;
      pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        b = "publicProfile.hover.ready";
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",1,(MethodInfo *)0x0);
        pGVar2 = (root->fields)._codeActions;
        pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",0,(MethodInfo *)0x0);
          pGVar2 = (root->fields)._codeActions;
          b = (System_String_o *)0x0;
          pGVar11 = pGVar7;
          bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)pGVar7,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            b = "publicProfile.hover.hasBio";
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",
                       (uint)(byte)((byte)bVar3 ^ 1),(MethodInfo *)0x0);
            pGVar2 = (root->fields)._codeActions;
            pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",
                         (uint)uStack_38._7_1_,(MethodInfo *)0x0);
              pGVar2 = (root->fields)._codeActions;
              pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(profile->fields)._CharacterName_k__BackingField
              ;
              b = (System_String_o *)0x0;
              bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)pGVar11,(MethodInfo *)0x0);
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                ppSVar1 = &(profile->fields)._DisplayName_k__BackingField;
                ppSVar9 = &(profile->fields)._CharacterName_k__BackingField;
                if ((char)bVar3 != '\0') {
                  ppSVar9 = ppSVar1;
                }
                b = "publicProfile.hover.characterName";
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",*ppSVar9,
                           (MethodInfo *)0x0);
                pGVar2 = (root->fields)._codeActions;
                pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  b = "publicProfile.hover.displayName";
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.displayName",*ppSVar1,
                             (MethodInfo *)0x0);
                  pGVar2 = (root->fields)._codeActions;
                  pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    b = "publicProfile.hover.bio";
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bio",
                               (System_String_o *)pGVar7,(MethodInfo *)0x0);
                    pGVar2 = (root->fields)._codeActions;
                    pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",pSVar5,
                                 (MethodInfo *)0x0);
                      pGVar2 = (root->fields)._codeActions;
                      pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                                (profile->fields)._AvatarKey_k__BackingField;
                      b = (System_String_o *)0x0;
                      pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite
                                         ((System_String_o *)pGVar11,(MethodInfo *)0x0);
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.avatarSprite",pSVar5,
                                   (MethodInfo *)0x0);
                        pGVar2 = (root->fields)._codeActions;
                        pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                                  (profile->fields)._BannerKey_k__BackingField;
                        b = (System_String_o *)0x0;
                        pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite
                                           ((System_String_o *)pGVar11,(MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bannerSprite",pSVar5,
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
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeec0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  pGVar7 = pGVar11;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (pGVar11 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      method_02 = pMVar10;
      pGVar11 = pGVar7;
      if (g_data_057aeec2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&"badges";
        il2cpp_runtime_helper_023445d0();
        g_data_057aeec2 = '\x01';
      }
      *(undefined1 *)&pMVar10->methodPointer = 0;
      if (pGVar7 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                           ((System_String_o *)(pGVar7->fields)._themeJson,method_02);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        requested = (SimpleJSONFixed_JSONNode_o *)0x0;
        method_02 = (MethodInfo *)0x0;
        pGVar11 = pGVar6;
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pGVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
          requested = (SimpleJSONFixed_JSONNode_o *)
                      (*(((SimpleJSONFixed_JSONArray_c *)pGVar6->klass)->vtable)._7_get_Item.methodPtr)
                                (pGVar6,"badges",
                                 (((SimpleJSONFixed_JSONArray_c *)pGVar6->klass)->vtable)._7_get_Item.method);
        }
        pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                           (requested,
                            (System_Collections_Generic_IEnumerable_string__o *)
                            *(System_String_array **)&(pGVar7->fields)._buildOnStart,(MethodInfo *)0x0);
        pGVar6 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        method_02 = (MethodInfo *)0x0;
        pGVar11 = pGVar6;
        SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          (*(((SimpleJSONFixed_JSONObject_c *)pGVar6->klass)->vtable)._8_set_Item.methodPtr)
                    (pGVar6,"badges",pGVar7);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = false;
          method_02 = (MethodInfo *)0x0;
          pGVar11 = pGVar7;
          bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pGVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
            iVar4 = (*(((SimpleJSONFixed_JSONArray_c *)pGVar7->klass)->vtable)._11_get_Count.methodPtr)
                              (pGVar7,(((SimpleJSONFixed_JSONArray_c *)pGVar7->klass)->vtable)._11_get_Count.
                                      method);
            bVar12 = 0 < iVar4;
          }
          *(bool *)&pMVar10->methodPointer = bVar12;
          (*(((SimpleJSONFixed_JSONObject_c *)pGVar6->klass)->vtable)._3_ToString.methodPtr)
                    (pGVar6,(((SimpleJSONFixed_JSONObject_c *)pGVar6->klass)->vtable)._3_ToString.method);
          return;
        }
      }
label_04532bcc:
      il2cpp_runtime_helper_022b2c90();
      if (pGVar11 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        System_String__IsNullOrWhiteSpace((pGVar11->fields)._selectedScreenId,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar10 = a;
      if (g_data_057aeebe == '\0') {
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
        g_data_057aeebe = '\x01';
        pMVar10 = extraout_RDX_00;
      }
      bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                        (pGVar11,(System_String_o *)method_02,pMVar10);
      if ((char)bVar3 != '\0') {
        if ((pGVar11 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar2 = (pGVar11->fields)._codeActions,
           pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
          pGVar2 = (pGVar11->fields)._codeActions;
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
            pGVar2 = (pGVar11->fields)._codeActions;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",1,(MethodInfo *)0x0)
              ;
              pGVar2 = (pGVar11->fields)._codeActions;
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",0,
                           (MethodInfo *)0x0);
                pGVar2 = (pGVar11->fields)._codeActions;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",0,
                             (MethodInfo *)0x0);
                  pGVar2 = (pGVar11->fields)._codeActions;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                    pGVar2 = (pGVar11->fields)._codeActions;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                      pGVar2 = (pGVar11->fields)._codeActions;
                      if (g_data_057aeec1 == '\0') {
                        il2cpp_runtime_helper_023445d0(&"http_404");
                        il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                        il2cpp_runtime_helper_023445d0(&"network_error");
                        il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                        g_data_057aeec1 = '\x01';
                      }
                      bVar3 = System_String__op_Equality((System_String_o *)a,"http_404",(MethodInfo *)0x0);
                      if (((char)bVar3 == '\0') &&
                         (bVar3 = System_String__op_Equality
                                            ((System_String_o *)a,"network_error",(MethodInfo *)0x0),
                         (char)bVar3 != '\0')) {
                        puVar8 = &"Could not load profile.";
                      }
                      else {
                        puVar8 = &"Profile unavailable.";
                      }
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.errorText",
                                   (System_String_o *)*puVar8,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
      }
      return;
    }
    pGVar2 = (pGVar11->fields)._codeActions;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar5 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.accountId","",
                          (MethodInfo *)0x0);
      System_String__op_Equality(pSVar5,b,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, System_String_o* error, const MethodInfo* method);
// 0x4532c10

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,System_String_o *error,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)error;
  if (g_data_057aeebe == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebe = '\x01';
    method_00 = extraout_RDX;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,accountId,method_00);
  if ((char)bVar2 != '\0') {
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar1 = (root->fields)._codeActions, pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
    {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._codeActions;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._codeActions;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",1,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._codeActions;
          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._codeActions;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0)
              ;
              pGVar1 = (root->fields)._codeActions;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._codeActions;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (root->fields)._codeActions;
                  if (g_data_057aeec1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"http_404");
                    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                    il2cpp_runtime_helper_023445d0(&"network_error");
                    il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                    g_data_057aeec1 = '\x01';
                  }
                  bVar2 = System_String__op_Equality(error,"http_404",(MethodInfo *)0x0);
                  if (((char)bVar2 == '\0') &&
                     (bVar2 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0),
                     (char)bVar2 != '\0')) {
                    puVar3 = &"Could not load profile.";
                  }
                  else {
                    puVar3 = &"Profile unavailable.";
                  }
                  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.errorText",
                               (System_String_o *)*puVar3,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Close
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x4532f00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  System_String_o *a;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  
  if (g_data_057aeebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeebf = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = root;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._codeActions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return;
    }
    if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      return;
    }
    bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this = (root->fields)._codeActions;
      value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      if (__this == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04533000;
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"publicProfile.hover.accountId","",
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(a,accountId,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
    }
    __this_00 = (root->fields)._Theme_k__BackingField;
    value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"public-profile-hover",1,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_04533000:
  il2cpp_runtime_helper_022b2c90();
  bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    SimpleJSONFixed_JSON__Parse((System_String_o *)value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x45329a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  int iVar3;
  bool_conflict extraout_EAX;
  System_String_o *a;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  SimpleJSONFixed_JSONNode_o *requested;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  undefined8 *puVar6;
  MethodInfo *a_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root_00;
  bool bVar8;
  
  if (g_data_057aeec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeec0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  pGVar5 = root;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      method_00 = pMVar7;
      root_00 = pGVar5;
      if (g_data_057aeec2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        root_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&"badges";
        il2cpp_runtime_helper_023445d0();
        g_data_057aeec2 = '\x01';
      }
      *(undefined1 *)&pMVar7->methodPointer = 0;
      if (pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        pGVar4 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                           ((System_String_o *)(pGVar5->fields)._themeJson,method_00);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        requested = (SimpleJSONFixed_JSONNode_o *)0x0;
        method_00 = (MethodInfo *)0x0;
        root_00 = pGVar4;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pGVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
          requested = (SimpleJSONFixed_JSONNode_o *)
                      (*(((SimpleJSONFixed_JSONNode_c *)pGVar4->klass)->vtable)._7_get_Item.methodPtr)
                                (pGVar4,"badges",
                                 (((SimpleJSONFixed_JSONNode_c *)pGVar4->klass)->vtable)._7_get_Item.method);
        }
        pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                           (requested,
                            *(System_Collections_Generic_IEnumerable_string__o **)
                             &(pGVar5->fields)._buildOnStart,(MethodInfo *)0x0);
        pGVar4 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        method_00 = (MethodInfo *)0x0;
        root_00 = pGVar4;
        SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          (*(((SimpleJSONFixed_JSONObject_c *)pGVar4->klass)->vtable)._8_set_Item.methodPtr)
                    (pGVar4,"badges",pGVar5);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar8 = false;
          method_00 = (MethodInfo *)0x0;
          root_00 = pGVar5;
          bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pGVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (pGVar5 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
            iVar3 = (*(((SimpleJSONFixed_JSONArray_c *)pGVar5->klass)->vtable)._11_get_Count.methodPtr)
                              (pGVar5,(((SimpleJSONFixed_JSONArray_c *)pGVar5->klass)->vtable)._11_get_Count.
                                      method);
            bVar8 = 0 < iVar3;
          }
          *(bool *)&pMVar7->methodPointer = bVar8;
          bVar2 = (*(((SimpleJSONFixed_JSONObject_c *)pGVar4->klass)->vtable)._3_ToString.methodPtr)
                            (pGVar4,(((SimpleJSONFixed_JSONObject_c *)pGVar4->klass)->vtable)._3_ToString.
                                    method);
          return bVar2;
        }
      }
label_04532bcc:
      il2cpp_runtime_helper_022b2c90();
      if (root_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        bVar2 = System_String__IsNullOrWhiteSpace((root_00->fields)._selectedScreenId,(MethodInfo *)0x0);
        return (bool_conflict)(&(root_00->fields).m_CancellationTokenSource)[(byte)((byte)bVar2 ^ 1)];
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar7 = a_00;
      if (g_data_057aeebe == '\0') {
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
        g_data_057aeebe = '\x01';
        pMVar7 = extraout_RDX;
      }
      bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                        (root_00,(System_String_o *)method_00,pMVar7);
      if ((char)bVar2 != '\0') {
        if ((root_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar1 = (root_00->fields)._codeActions,
           pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
          pGVar1 = (root_00->fields)._codeActions;
          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
            pGVar1 = (root_00->fields)._codeActions;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",1,(MethodInfo *)0x0)
              ;
              pGVar1 = (root_00->fields)._codeActions;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,
                           (MethodInfo *)0x0);
                pGVar1 = (root_00->fields)._codeActions;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,
                             (MethodInfo *)0x0);
                  pGVar1 = (root_00->fields)._codeActions;
                  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                    pGVar1 = (root_00->fields)._codeActions;
                    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                      pGVar1 = (root_00->fields)._codeActions;
                      if (g_data_057aeec1 == '\0') {
                        il2cpp_runtime_helper_023445d0(&"http_404");
                        il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                        il2cpp_runtime_helper_023445d0(&"network_error");
                        il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                        g_data_057aeec1 = '\x01';
                      }
                      bVar2 = System_String__op_Equality
                                        ((System_String_o *)a_00,"http_404",(MethodInfo *)0x0);
                      if (((char)bVar2 == '\0') &&
                         (bVar2 = System_String__op_Equality
                                            ((System_String_o *)a_00,"network_error",(MethodInfo *)0x0),
                         (char)bVar2 != '\0')) {
                        puVar6 = &"Could not load profile.";
                      }
                      else {
                        puVar6 = &"Profile unavailable.";
                      }
                      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.errorText",
                                   (System_String_o *)*puVar6,(MethodInfo *)0x0);
                        return extraout_EAX;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar2 = il2cpp_runtime_helper_022b2c90();
      }
      return bVar2;
    }
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.accountId","",
                     (MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,accountId,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x4532e70

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText(System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aeec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_404");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"network_error");
    il2cpp_runtime_helper_023445d0(&"Could not load profile.");
    g_data_057aeec1 = '\x01';
  }
  bVar1 = System_String__op_Equality(error,"http_404",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return "Could not load profile.";
    }
  }
  return "Profile unavailable.";
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x4532be0

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  undefined4 extraout_var;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  System_String_o *extraout_RAX;
  MethodInfo *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    bVar2 = System_String__IsNullOrWhiteSpace
                      ((profile->fields)._CharacterName_k__BackingField,(MethodInfo *)0x0);
    return (&(profile->fields)._DisplayName_k__BackingField)[(byte)((byte)bVar2 ^ 1)];
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = a;
  if (g_data_057aeebe == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebe = '\x01';
    method_00 = extraout_RDX;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile,(System_String_o *)method,method_00);
  pSVar4 = (System_String_o *)CONCAT44(extraout_var,bVar2);
  if ((char)bVar2 != '\0') {
    if (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions,
       pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
      pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
        pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",1,(MethodInfo *)0x0);
          pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0);
            pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0)
              ;
              pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)profile)->fields)._codeActions;
                  if (g_data_057aeec1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"http_404");
                    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                    il2cpp_runtime_helper_023445d0(&"network_error");
                    il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                    g_data_057aeec1 = '\x01';
                  }
                  bVar2 = System_String__op_Equality((System_String_o *)a,"http_404",(MethodInfo *)0x0);
                  if (((char)bVar2 == '\0') &&
                     (bVar2 = System_String__op_Equality((System_String_o *)a,"network_error",(MethodInfo *)0x0),
                     (char)bVar2 != '\0')) {
                    puVar3 = &"Could not load profile.";
                  }
                  else {
                    puVar3 = &"Profile unavailable.";
                  }
                  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.errorText",
                               (System_String_o *)*puVar3,(MethodInfo *)0x0);
                    return extraout_RAX;
                  }
                }
              }
            }
          }
        }
      }
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$BadgesJson
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, bool* hasBadges, const MethodInfo* method);
// 0x4532a60

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,bool_conflict *hasBadges,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  int iVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  SimpleJSONFixed_JSONNode_o *requested;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  System_String_o *pSVar5;
  undefined4 extraout_var;
  undefined8 *puVar6;
  System_String_o *extraout_RAX;
  MethodInfo *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar7;
  
  method_01 = (MethodInfo *)hasBadges;
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)profile;
  if (g_data_057aeec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&"badges";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeec2 = '\x01';
  }
  *(undefined1 *)hasBadges = 0;
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                       ((profile->fields)._CharacterInfoJson_k__BackingField,method_01);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    requested = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_01 = (MethodInfo *)0x0;
    root = pGVar4;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pGVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
      requested = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_c *)pGVar4->klass)->vtable)._7_get_Item.methodPtr)
                            (pGVar4,"badges",
                             (((SimpleJSONFixed_JSONNode_c *)pGVar4->klass)->vtable)._7_get_Item.method);
    }
    pGVar4 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                       (requested,
                        (System_Collections_Generic_IEnumerable_string__o *)
                        (profile->fields)._Roles_k__BackingField,(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    method_01 = (MethodInfo *)0x0;
    root = __this;
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      (*(((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._8_set_Item.methodPtr)
                (__this,"badges",pGVar4);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = false;
      method_01 = (MethodInfo *)0x0;
      root = pGVar4;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pGVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
        iVar3 = (*(((SimpleJSONFixed_JSONArray_c *)pGVar4->klass)->vtable)._11_get_Count.methodPtr)
                          (pGVar4,(((SimpleJSONFixed_JSONArray_c *)pGVar4->klass)->vtable)._11_get_Count.
                                  method);
        bVar7 = 0 < iVar3;
      }
      *(bool *)hasBadges = bVar7;
      pSVar5 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._3_ToString.methodPtr)
                         (__this,(((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._3_ToString.method)
      ;
      return pSVar5;
    }
  }
label_04532bcc:
  il2cpp_runtime_helper_022b2c90();
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    bVar2 = System_String__IsNullOrWhiteSpace((root->fields)._selectedScreenId,(MethodInfo *)0x0);
    return (System_String_o *)(&(root->fields).m_CancellationTokenSource)[(byte)((byte)bVar2 ^ 1)];
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = a;
  if (g_data_057aeebe == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebe = '\x01';
    method_00 = extraout_RDX;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    (root,(System_String_o *)method_01,method_00);
  pSVar5 = (System_String_o *)CONCAT44(extraout_var,bVar2);
  if ((char)bVar2 != '\0') {
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar1 = (root->fields)._codeActions, pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
    {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._codeActions;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._codeActions;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",1,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._codeActions;
          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._codeActions;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0)
              ;
              pGVar1 = (root->fields)._codeActions;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._codeActions;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (root->fields)._codeActions;
                  if (g_data_057aeec1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"http_404");
                    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
                    il2cpp_runtime_helper_023445d0(&"network_error");
                    il2cpp_runtime_helper_023445d0(&"Could not load profile.");
                    g_data_057aeec1 = '\x01';
                  }
                  bVar2 = System_String__op_Equality((System_String_o *)a,"http_404",(MethodInfo *)0x0);
                  if (((char)bVar2 == '\0') &&
                     (bVar2 = System_String__op_Equality((System_String_o *)a,"network_error",(MethodInfo *)0x0),
                     (char)bVar2 != '\0')) {
                    puVar6 = &"Could not load profile.";
                  }
                  else {
                    puVar6 = &"Profile unavailable.";
                  }
                  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.errorText",
                               (System_String_o *)*puVar6,(MethodInfo *)0x0);
                    return extraout_RAX;
                  }
                }
              }
            }
          }
        }
      }
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse (System_String_o* json, const MethodInfo* method);
// 0x4533010

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse(System_String_o *json,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}



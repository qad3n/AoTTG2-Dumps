// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverState.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowLoading
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x41fe6a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
          UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (DAT_05704fe1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_init_method_metadata(&"publicProfile.hover.loading");
    il2cpp_init_method_metadata(&"publicProfile.hover.displayName");
    il2cpp_init_method_metadata(&"publicProfile.hover.characterName");
    il2cpp_init_method_metadata(&"public-profile-hover");
    il2cpp_init_method_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_init_method_metadata(&"publicProfile.hover.bio");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_init_method_metadata(&"publicProfile.hover.ready");
    il2cpp_init_method_metadata(&"publicProfile.hover.accountId");
    il2cpp_init_method_metadata(&"publicProfile.hover.bannerSprite");
    il2cpp_init_method_metadata(&"publicProfile.hover.error");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBio");
    il2cpp_init_method_metadata(&"publicProfile.hover.errorText");
    DAT_05704fe1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.accountId",accountId,
               (MethodInfo *)0x0);
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",1,
                 (MethodInfo *)0x0);
      pGVar1 = (root->fields)._codeActions;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,
                   (MethodInfo *)0x0);
        pGVar1 = (root->fields)._codeActions;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",0,
                     (MethodInfo *)0x0);
          pGVar1 = (root->fields)._codeActions;
          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,
                       (MethodInfo *)0x0);
            pGVar1 = (root->fields)._codeActions;
            if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,
                         (MethodInfo *)0x0);
              pGVar1 = (root->fields)._codeActions;
              if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
                pGVar1 = (root->fields)._codeActions;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.displayName",
                             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
                  pGVar1 = (root->fields)._codeActions;
                  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.bio",
                               (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
                    pGVar1 = (root->fields)._codeActions;
                    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                 (MethodInfo *)0x0);
                      pGVar1 = (root->fields)._codeActions;
                      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                                         ((System_String_o *)0x0,(MethodInfo *)0x0);
                      if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.avatarSprite",
                                   pSVar3,(MethodInfo *)0x0);
                        pGVar1 = (root->fields)._codeActions;
                        pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                                           ((System_String_o *)0x0,(MethodInfo *)0x0);
                        if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,
                                     "publicProfile.hover.bannerSprite",pSVar3,(MethodInfo *)0x0);
                          pGVar1 = (root->fields)._codeActions;
                          if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,
                                       "publicProfile.hover.errorText",
                                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                       (MethodInfo *)0x0);
                            __this = (root->fields)._Theme_k__BackingField;
                            if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                              pUVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                                                 ((
                                                  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o
                                                  *)__this,"public-profile-hover",anchor,0,8.0,
                                                  (MethodInfo *)0x0);
                              return pUVar4;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x41fdcf0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  bool_conflict bVar3;
  ulong in_RAX;
  System_String_o *value;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *extraout_RDX;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *method_00;
  MethodInfo *method_01;
  undefined8 uStack_38;
  
  method_00 = profile;
  uStack_38 = in_RAX;
  if (DAT_05704fe2 == '\0') {
    il2cpp_init_method_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_init_method_metadata(&"publicProfile.hover.loading");
    il2cpp_init_method_metadata(&"publicProfile.hover.displayName");
    il2cpp_init_method_metadata(&"publicProfile.hover.characterName");
    il2cpp_init_method_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_init_method_metadata(&"publicProfile.hover.bio");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_init_method_metadata(&"publicProfile.hover.ready");
    il2cpp_init_method_metadata(&"publicProfile.hover.bannerSprite");
    il2cpp_init_method_metadata(&"publicProfile.hover.error");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBio");
    DAT_05704fe2 = '\x01';
    method_00 = extraout_RDX;
  }
  uStack_38 = uStack_38 & 0xffffffffffffff;
  bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    (root,accountId,(MethodInfo *)method_00);
  if ((profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) &&
     ((char)bVar3 != '\0')) {
    pSVar4 = (profile->fields)._Description_k__BackingField;
    if (pSVar4 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    value = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
                      (profile,(bool_conflict *)((long)&uStack_38 + 7),method_01);
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar2 = (root->fields)._codeActions,
       pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,
                 (MethodInfo *)0x0);
      pGVar2 = (root->fields)._codeActions;
      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",1,
                   (MethodInfo *)0x0);
        pGVar2 = (root->fields)._codeActions;
        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",0,
                     (MethodInfo *)0x0);
          pGVar2 = (root->fields)._codeActions;
          bVar3 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",
                       (uint)(byte)((byte)bVar3 ^ 1),(MethodInfo *)0x0);
            pGVar2 = (root->fields)._codeActions;
            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",
                         (uint)uStack_38._7_1_,(MethodInfo *)0x0);
              pGVar2 = (root->fields)._codeActions;
              bVar3 = System_String__IsNullOrWhiteSpace
                                ((profile->fields)._CharacterName_k__BackingField,(MethodInfo *)0x0)
              ;
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                ppSVar1 = &(profile->fields)._DisplayName_k__BackingField;
                ppSVar5 = &(profile->fields)._CharacterName_k__BackingField;
                if ((char)bVar3 != '\0') {
                  ppSVar5 = ppSVar1;
                }
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",*ppSVar5
                           ,(MethodInfo *)0x0);
                pGVar2 = (root->fields)._codeActions;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.displayName",
                             *ppSVar1,(MethodInfo *)0x0);
                  pGVar2 = (root->fields)._codeActions;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.bio",
                               pSVar4,(MethodInfo *)0x0);
                    pGVar2 = (root->fields)._codeActions;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.badgesJson",
                                 value,(MethodInfo *)0x0);
                      pGVar2 = (root->fields)._codeActions;
                      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                                         ((profile->fields)._AvatarKey_k__BackingField,
                                          (MethodInfo *)0x0);
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.avatarSprite",
                                   pSVar4,(MethodInfo *)0x0);
                        pGVar2 = (root->fields)._codeActions;
                        pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                                           ((profile->fields)._BannerKey_k__BackingField,
                                            (MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                     "publicProfile.hover.bannerSprite",pSVar4,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, System_String_o* error, const MethodInfo* method);
// 0x41fdfe0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               System_String_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)error;
  if (DAT_05704fe3 == '\0') {
    il2cpp_init_method_metadata(&"publicProfile.hover.loading");
    il2cpp_init_method_metadata(&"publicProfile.hover.characterName");
    il2cpp_init_method_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_init_method_metadata(&"publicProfile.hover.ready");
    il2cpp_init_method_metadata(&"publicProfile.hover.error");
    il2cpp_init_method_metadata(&"publicProfile.hover.hasBio");
    il2cpp_init_method_metadata(&"publicProfile.hover.errorText");
    DAT_05704fe3 = '\x01';
    method_00 = extraout_RDX;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,accountId,method_00);
  if ((char)bVar2 == '\0') {
    return;
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (pGVar1 = (root->fields)._codeActions,
     pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.loading",0,(MethodInfo *)0x0)
    ;
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.ready",0,(MethodInfo *)0x0)
    ;
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.error",1,(MethodInfo *)0x0)
    ;
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0)
    ;
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0)
    ;
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.characterName",
               (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    pGVar1 = (root->fields)._codeActions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.badgesJson",
               (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    pGVar1 = (root->fields)._codeActions;
    if (DAT_05704fe6 == '\0') {
      il2cpp_init_method_metadata(&"http_404");
      il2cpp_init_method_metadata(&"Profile unavailable.");
      il2cpp_init_method_metadata(&"network_error");
      il2cpp_init_method_metadata(&"Could not load profile.");
      DAT_05704fe6 = '\x01';
    }
    bVar2 = System_String__op_Equality(error,"http_404",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar3 = &"Could not load profile.";
        if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fe21a;
        goto LAB_041fe231;
      }
    }
    puVar3 = &"Profile unavailable.";
    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
LAB_041fe231:
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar1,"publicProfile.hover.errorText",
                 (System_String_o *)*puVar3,(MethodInfo *)0x0);
      return;
    }
  }
LAB_041fe21a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Close
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x41fda50

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_05704fe4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"public-profile-hover");
    il2cpp_init_method_metadata(&"publicProfile.hover.accountId");
    il2cpp_init_method_metadata(&"");
    DAT_05704fe4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
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
      if (__this == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto LAB_041fdb56;
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"publicProfile.hover.accountId","",
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(a,accountId,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
    }
    __this_00 = (root->fields)._Theme_k__BackingField;
    if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"public-profile-hover",1,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_041fdb56:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x4201400

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_05704fe5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"publicProfile.hover.accountId");
    il2cpp_init_method_metadata(&"");
    DAT_05704fe5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (root->fields)._codeActions;
    if (__this != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"publicProfile.hover.accountId","",
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,accountId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x4201670

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText
          (System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704fe6 == '\0') {
    il2cpp_init_method_metadata(&"http_404");
    il2cpp_init_method_metadata(&"Profile unavailable.");
    il2cpp_init_method_metadata(&"network_error");
    il2cpp_init_method_metadata(&"Could not load profile.");
    DAT_05704fe6 = '\x01';
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
// 0x4201640

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace
                      ((profile->fields)._CharacterName_k__BackingField,(MethodInfo *)0x0);
    return (&(profile->fields)._DisplayName_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$BadgesJson
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, bool* hasBadges, const MethodInfo* method);
// 0x42014c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,bool_conflict *hasBadges
          ,MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *requested;
  SimpleJSONFixed_JSONArray_o *a_00;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  bool bVar4;
  
  method_00 = (MethodInfo *)hasBadges;
  if (DAT_05704fe7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"badges");
    DAT_05704fe7 = '\x01';
  }
  *(undefined1 *)hasBadges = 0;
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    a = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                  ((profile->fields)._CharacterInfoJson_k__BackingField,method_00);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    requested = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0420162c;
      requested = (SimpleJSONFixed_JSONNode_o *)
                  (*(a->klass->vtable)._7_get_Item.methodPtr)
                            (a,"badges",(a->klass->vtable)._7_get_Item.method);
    }
    a_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                     (requested,
                      (System_Collections_Generic_IEnumerable_string__o *)
                      (profile->fields)._Roles_k__BackingField,(MethodInfo *)0x0);
    __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"badges",a_00,(__this->klass->vtable)._8_set_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = false;
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (a_00 == (SimpleJSONFixed_JSONArray_o *)0x0) goto LAB_0420162c;
        iVar2 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                          (a_00,(a_00->klass->vtable)._11_get_Count.method);
        bVar4 = 0 < iVar2;
      }
      *(bool *)hasBadges = bVar4;
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
LAB_0420162c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse (System_String_o* json, const MethodInfo* method);
// 0x4201700

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



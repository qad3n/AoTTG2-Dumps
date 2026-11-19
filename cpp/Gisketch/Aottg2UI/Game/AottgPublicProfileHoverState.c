// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowLoading
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x590d720

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
          UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o **method_00;
  System_String_o **method_01;
  
  if (Il2CppMethodInitialized_075456ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bannerSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.error");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBio");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.errorText");
    Il2CppMethodInitialized_075456ad = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((root->fields)._Overlays_k__BackingField == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0
       ) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"publicProfile.hover.accountId",accountId,(MethodInfo *)0x0);
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.loading",true,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.ready",false,(MethodInfo *)0x0)
        ;
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"publicProfile.hover.error",false,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"publicProfile.hover.hasBio",false,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._State_k__BackingField;
            if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        (pGVar1,"publicProfile.hover.hasBadges",false,(MethodInfo *)0x0);
              pGVar1 = (root->fields)._State_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._State_k__BackingField;
                if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            (pGVar1,"publicProfile.hover.displayName",
                             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (root->fields)._State_k__BackingField;
                  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              (pGVar1,"publicProfile.hover.bio",
                               (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                    method_00 = (System_String_o **)(root->fields)._State_k__BackingField;
                    if ((MethodInfo *)method_00 != (MethodInfo *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)method_00,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                      method_01 = (System_String_o **)(root->fields)._State_k__BackingField;
                      if (Il2CppMethodInitialized_07545649 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
                        il2cpp_codegen_initialize_runtime_metadata(&"Icon");
                        method_00 = &"UI/Icons/Profile/";
                        il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
                        Il2CppMethodInitialized_07545649 = '\x01';
                      }
                      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars
                                         ((MethodInfo *)method_00);
                      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                                         ((System_String_o *)0x0,pGVar3,"Gisketch1",
                                          (MethodInfo *)&"Gisketch1");
                      pSVar4 = System_String__Concat_5301f10
                                         ("UI/Icons/Profile/",pSVar4,"Icon",(MethodInfo *)0x0
                                         );
                      if ((MethodInfo *)method_01 != (MethodInfo *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)method_01,
                                   "publicProfile.hover.avatarSprite",pSVar4,(MethodInfo *)0x0);
                        pGVar1 = (root->fields)._State_k__BackingField;
                        if (Il2CppMethodInitialized_0754564a == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
                          method_01 = &"UI/Backgrounds/";
                          il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/");
                          Il2CppMethodInitialized_0754564a = '\x01';
                        }
                        pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners
                                           ((MethodInfo *)method_01);
                        pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                                           ((System_String_o *)0x0,pGVar3,"MainBackground2Texture",
                                            (MethodInfo *)&"MainBackground2Texture");
                        pSVar4 = System_String__Concat_52f0320("UI/Backgrounds/",pSVar4,(MethodInfo *)0x0)
                        ;
                        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    (pGVar1,"publicProfile.hover.bannerSprite",pSVar4,(MethodInfo *)0x0);
                          pGVar1 = (root->fields)._State_k__BackingField;
                          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      (pGVar1,"publicProfile.hover.errorText",
                                       (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                       (MethodInfo *)0x0);
                            __this = (root->fields)._Overlays_k__BackingField;
                            if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
                              pUVar5 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                                                 (__this,"public-profile-hover",anchor,false,8.0,
                                                  (MethodInfo *)0x0);
                              return pUVar5;
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x590cdb0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *extraout_RDX;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *method_01;
  MethodInfo *method_02;
  System_String_o **ppSVar5;
  MethodInfo *method_03;
  System_String_o *pSVar6;
  bool local_31;
  System_String_o *local_30;
  
  method_01 = profile;
  if (Il2CppMethodInitialized_075456ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bannerSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.error");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBio");
    Il2CppMethodInitialized_075456ae = '\x01';
    method_01 = extraout_RDX;
  }
  local_31 = false;
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    (root,accountId,(MethodInfo *)method_01);
  if ((!bVar2) || (profile == (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0)) {
    return;
  }
  pSVar6 = (profile->fields)._Description_k__BackingField;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  value = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson(profile,&local_31,method_02);
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (pGVar1 = (root->fields)._State_k__BackingField,
     pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.loading",false,(MethodInfo *)0x0);
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.ready",true,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.error",false,(MethodInfo *)0x0)
        ;
        pGVar1 = (root->fields)._State_k__BackingField;
        bVar2 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"publicProfile.hover.hasBio",!bVar2,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"publicProfile.hover.hasBadges",local_31,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._State_k__BackingField;
            bVar2 = System_String__IsNullOrWhiteSpace
                              ((profile->fields)._CharacterName_k__BackingField,(MethodInfo *)0x0);
            if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__Set
                        (pGVar1,"publicProfile.hover.characterName",
                         (&(profile->fields)._DisplayName_k__BackingField)[!bVar2],(MethodInfo *)0x0);
              pGVar1 = (root->fields)._State_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (pGVar1,"publicProfile.hover.displayName",(profile->fields)._DisplayName_k__BackingField,
                           (MethodInfo *)0x0);
                pGVar1 = (root->fields)._State_k__BackingField;
                if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            (pGVar1,"publicProfile.hover.bio",pSVar6,(MethodInfo *)0x0);
                  pMVar4 = (MethodInfo *)(root->fields)._State_k__BackingField;
                  if (pMVar4 != (MethodInfo *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pMVar4,"publicProfile.hover.badgesJson",value
                               ,(MethodInfo *)0x0);
                    method_03 = (MethodInfo *)(root->fields)._State_k__BackingField;
                    pSVar6 = (profile->fields)._AvatarKey_k__BackingField;
                    local_30 = (System_String_o *)0x0;
                    pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar4);
                    ppSVar5 = &local_30;
                    bVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                                      (pSVar6,pGVar3,ppSVar5,method_00);
                    if (!bVar2) {
                      ppSVar5 = *(System_String_o ***)(g_data_07556758 + 0xb8);
                    }
                    if (method_03 != (MethodInfo *)0x0) {
                      pMVar4 = (MethodInfo *)0x0;
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)method_03,"publicProfile.hover.avatarSprite",
                                 *ppSVar5,(MethodInfo *)0x0);
                      pGVar1 = (root->fields)._State_k__BackingField;
                      pSVar6 = (profile->fields)._BannerKey_k__BackingField;
                      local_30 = (System_String_o *)0x0;
                      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_03);
                      ppSVar5 = &local_30;
                      bVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                                        (pSVar6,pGVar3,ppSVar5,pMVar4);
                      if (!bVar2) {
                        ppSVar5 = *(System_String_o ***)(g_data_07556758 + 0xb8);
                      }
                      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  (pGVar1,"publicProfile.hover.bannerSprite",*ppSVar5,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, System_String_o* error, const MethodInfo* method);
// 0x590d100

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,System_String_o *error,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)error;
  if (Il2CppMethodInitialized_075456af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.error");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBio");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.errorText");
    Il2CppMethodInitialized_075456af = '\x01';
    pMVar3 = extraout_RDX;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,accountId,pMVar3);
  if (bVar2) {
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar1 = (root->fields)._State_k__BackingField,
       pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.loading",false,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.ready",false,(MethodInfo *)0x0)
        ;
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"publicProfile.hover.error",true,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"publicProfile.hover.hasBio",false,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._State_k__BackingField;
            if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        (pGVar1,"publicProfile.hover.hasBadges",false,(MethodInfo *)0x0);
              pGVar1 = (root->fields)._State_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (pGVar1,"publicProfile.hover.characterName",
                           (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._State_k__BackingField;
                if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  pMVar3 = (MethodInfo *)"publicProfile.hover.badgesJson";
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            (pGVar1,"publicProfile.hover.badgesJson",
                             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (root->fields)._State_k__BackingField;
                  value = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText(error,pMVar3);
                  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              (pGVar1,"publicProfile.hover.errorText",value,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Close
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x590cb00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075456b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075456b0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    if ((root->fields)._Overlays_k__BackingField == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0
       ) {
      return;
    }
    bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
    if (!bVar1) {
      __this = (root->fields)._State_k__BackingField;
      if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_0590cc06;
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    (__this,"publicProfile.hover.accountId","",(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(a,accountId,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
    }
    __this_00 = (root->fields)._Overlays_k__BackingField;
    if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
                (__this_00,"public-profile-hover",true,(MethodInfo *)0x0);
      return;
    }
  }
label_0590cc06:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x5910550

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075456b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075456b1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (root->fields)._State_k__BackingField;
    if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    (__this,"publicProfile.hover.accountId","",(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,accountId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x59107b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591081d: test bl, bl
// asm:   0x591081f: je 0x591083c

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText(System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075456b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Unavailable");
    Il2CppMethodInitialized_075456b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.LoadFailed",(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.Unavailable",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x5910780

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  bool bVar1;
  
  if (profile == (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__IsNullOrWhiteSpace
                    ((profile->fields)._CharacterName_k__BackingField,(MethodInfo *)0x0);
  return (&(profile->fields)._DisplayName_k__BackingField)[!bVar1];
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$BadgesJson
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, bool* hasBadges, const MethodInfo* method);
// 0x5910610

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,bool *hasBadges,MethodInfo *method
          )

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONArray_o *a_00;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar4;
  ulong extraout_RDX;
  MethodInfo *method_00;
  undefined1 auVar5 [16];
  
  method_00 = (MethodInfo *)hasBadges;
  if (Il2CppMethodInitialized_075456b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_075456b3 = '\x01';
  }
  *hasBadges = false;
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    a = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                  ((profile->fields)._CharacterInfoJson_k__BackingField,method_00);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = extraout_RDX;
    auVar5 = auVar5 << 0x40;
    if (bVar1) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591077a;
      auVar5 = (undefined1  [16])
               (*(a->klass->vtable)._7_get_Item.methodPtr)
                         (a,"badges",(a->klass->vtable)._7_get_Item.method);
    }
    a_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_5800680
                     (auVar5._0_8_,
                      (System_Collections_Generic_IEnumerable_string__o *)
                      (profile->fields)._Roles_k__BackingField,auVar5._8_8_);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"badges",(SimpleJSONFixed_JSONNode_o *)a_00,
                 (__this->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = false;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (a_00 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_0591077a;
        iVar3 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                          (a_00,(a_00->klass->vtable)._11_get_Count.method);
        bVar1 = 0 < iVar3;
      }
      *hasBadges = bVar1;
      pSVar4 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
label_0591077a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse (System_String_o* json, const MethodInfo* method);
// 0x5910850
// eh: try 0x5910865..0x591086f -> pad 0x591087d catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59108a1..0x59108d5 -> pad 0x59108d5 (+1 call sites) cleanup
// eh: try 0x59108d8..0x59108dd -> pad 0x59108e5 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591087d: mov rbx, rax
// asm:   0x5910880: cmp edx, 1
// asm:   0x5910883: jne 0x59108dd
// asm:   0x5910885: mov rdi, rbx
// asm:   0x5910888: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591088d: mov rbx, rax
// asm:   0x5910890: lea rax, [rip + 0x1c45e31]
// asm:   0x5910897: mov rdi, qword ptr [rax + 0x10]
// asm:   0x591089b: mov rax, qword ptr [rbx]
// asm:   0x591089e: mov rsi, qword ptr [rax]
// asm:   0x59108a1: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59108a6: test al, al
// asm:   0x59108a8: je 0x59108b4
// asm:   0x59108aa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59108af: xor r14d, r14d
// asm:   0x59108b2: jmp 0x5910872
// asm:   0x59108b4: mov edi, 8
// asm:   0x59108b9: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59108be: mov rcx, qword ptr [rbx]
// asm:   0x59108c1: mov qword ptr [rax], rcx
// asm:   0x59108c4: lea rsi, [rip + 0x151cc35]
// asm:   0x59108cb: mov rdi, rax
// asm:   0x59108ce: xor edx, edx
// asm:   0x59108d0: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59108d5: mov rbx, rax
// asm:   0x59108d8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59108dd: mov rdi, rbx
// asm:   0x59108e0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59108e5: mov rdi, rax
// asm:   0x59108e8: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse(System_String_o *json,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}



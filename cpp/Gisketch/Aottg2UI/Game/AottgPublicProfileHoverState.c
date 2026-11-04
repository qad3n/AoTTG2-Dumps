// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowLoading
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x181e2cd00

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
          UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_184344d37 == '\0') {
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
    Il2CppMethodInitialized_184344d37 = '\x01';
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
    if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((root->fields)._Overlays_k__BackingField == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0
       ) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((root->fields)._State_k__BackingField,"publicProfile.hover.accountId",accountId,(MethodInfo *)0x0);
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
                           (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._State_k__BackingField;
                if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            (pGVar1,"publicProfile.hover.displayName",
                             (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
                  pGVar1 = (root->fields)._State_k__BackingField;
                  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              (pGVar1,"publicProfile.hover.bio",
                               (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
                    pGVar1 = (root->fields)._State_k__BackingField;
                    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                (pGVar1,"publicProfile.hover.badgesJson",
                                 (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0)
                      ;
                      pGVar1 = (root->fields)._State_k__BackingField;
                      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                                         ((System_String_o *)0x0,(MethodInfo *)0x0);
                      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  (pGVar1,"publicProfile.hover.avatarSprite",pSVar3,(MethodInfo *)0x0);
                        pGVar1 = (root->fields)._State_k__BackingField;
                        pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                                           ((System_String_o *)0x0,(MethodInfo *)0x0);
                        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    (pGVar1,"publicProfile.hover.bannerSprite",pSVar3,(MethodInfo *)0x0);
                          pGVar1 = (root->fields)._State_k__BackingField;
                          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      (pGVar1,"publicProfile.hover.errorText",
                                       (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                       (MethodInfo *)0x0);
                            __this = (root->fields)._Overlays_k__BackingField;
                            if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
                              pUVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                                                 (__this,"public-profile-hover",anchor,false,8.0,
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x181e2d0a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o **ppSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *requested;
  SimpleJSONFixed_JSONArray_o *a_00;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *value;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344d38 == '\0') {
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
    Il2CppMethodInitialized_184344d38 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,accountId,(MethodInfo *)0x0);
  if ((!bVar2) || (profile == (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0)) {
    return;
  }
  ppSVar5 = &(profile->fields)._Description_k__BackingField;
  if ((profile->fields)._Description_k__BackingField == (System_String_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  pSVar6 = *ppSVar5;
  if (Il2CppMethodInitialized_184344d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_184344d3d = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                ((profile->fields)._CharacterInfoJson_k__BackingField,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e2d4a8;
    requested = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"badges");
  }
  else {
    requested = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  a_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_1e16050
                   ((SimpleJSONFixed_JSONNode_o *)requested,
                    (System_Collections_Generic_IEnumerable_string__o *)
                    (profile->fields)._Roles_k__BackingField,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"badges",(SimpleJSONFixed_JSONNode_o *)a_00,
               (__this->klass->vtable)._8_set_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (a_00 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_181e2d4a8;
      iVar4 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                        (a_00,(a_00->klass->vtable)._11_get_Count.method);
      bVar2 = 0 < iVar4;
    }
    else {
      bVar2 = false;
    }
    value = (*(__this->klass->vtable)._3_ToString.methodPtr)
                      (__this,(__this->klass->vtable)._3_ToString.method);
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar1 = (root->fields)._State_k__BackingField,
       pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.loading",false,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.ready",true,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"publicProfile.hover.error",false,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          bVar3 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"publicProfile.hover.hasBio",!bVar3,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._State_k__BackingField;
            if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        (pGVar1,"publicProfile.hover.hasBadges",bVar2,(MethodInfo *)0x0);
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
                    pGVar1 = (root->fields)._State_k__BackingField;
                    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                (pGVar1,"publicProfile.hover.badgesJson",value,(MethodInfo *)0x0);
                      pGVar1 = (root->fields)._State_k__BackingField;
                      pSVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite
                                         ((profile->fields)._AvatarKey_k__BackingField,(MethodInfo *)0x0);
                      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  (pGVar1,"publicProfile.hover.avatarSprite",pSVar6,(MethodInfo *)0x0);
                        pGVar1 = (root->fields)._State_k__BackingField;
                        pSVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite
                                           ((profile->fields)._BannerKey_k__BackingField,(MethodInfo *)0x0);
                        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    (pGVar1,"publicProfile.hover.bannerSprite",pSVar6,(MethodInfo *)0x0);
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
label_181e2d4a8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, System_String_o* error, const MethodInfo* method);
// 0x181e2ca90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2ccc1: jmp 0x181e2ccca
// asm:   0x181e2ccc3: mov r8, qword ptr [rip + 0x22b077e]  ; "Profile unavailable."

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,System_String_o *error,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.error");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBio");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.errorText");
    Il2CppMethodInitialized_184344d39 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,accountId,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (pGVar1 = (root->fields)._State_k__BackingField,
     pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.loading",false,(MethodInfo *)0x0);
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.ready",false,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"publicProfile.hover.error",true,(MethodInfo *)0x0);
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
                         (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
              pGVar1 = (root->fields)._State_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (pGVar1,"publicProfile.hover.badgesJson",
                           (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
                pGVar1 = (root->fields)._State_k__BackingField;
                if (Il2CppMethodInitialized_184344d3c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"http_404");
                  il2cpp_codegen_initialize_runtime_metadata(&"Profile unavailable.");
                  il2cpp_codegen_initialize_runtime_metadata(&"network_error");
                  il2cpp_codegen_initialize_runtime_metadata(&"Could not load profile.");
                  Il2CppMethodInitialized_184344d3c = '\x01';
                }
                bVar2 = System_String__op_Equality(error,"http_404",(MethodInfo *)0x0);
                value = "Profile unavailable.";
                if ((!bVar2) &&
                   (bVar2 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0),
                   value = "Could not load profile.", !bVar2)) {
                  value = "Profile unavailable.";
                }
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


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Close
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x181e2c820

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344d3a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_181e2c91a:
      ThrowNullReferenceException();
    }
    if (((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
       ((root->fields)._Overlays_k__BackingField != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0
       )) {
      bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
      if (!bVar1) {
        __this = (root->fields)._State_k__BackingField;
        if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_181e2c91a;
        a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                      (__this,"publicProfile.hover.accountId","",(MethodInfo *)0x0);
        bVar1 = System_String__op_Inequality(a,accountId,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
      }
      __this_00 = (root->fields)._Overlays_k__BackingField;
      if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_181e2c91a;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
                (__this_00,"public-profile-hover",true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* accountId, const MethodInfo* method);
// 0x181e2c9c0

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *accountId,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344d3b = '\x01';
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
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((root->fields)._State_k__BackingField,"publicProfile.hover.accountId","",
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,accountId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x181e2c920

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ErrorText(System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http_404");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile unavailable.");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&"Could not load profile.");
    Il2CppMethodInitialized_184344d3c = '\x01';
  }
  bVar1 = System_String__op_Equality(error,"http_404",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
    pSVar2 = "Could not load profile.";
    if (!bVar1) {
      pSVar2 = "Profile unavailable.";
    }
    return pSVar2;
  }
  return "Profile unavailable.";
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x181e2c7e0

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
  if (!bVar1) {
    return (profile->fields)._CharacterName_k__BackingField;
  }
  return (profile->fields)._DisplayName_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$BadgesJson
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, bool* hasBadges, const MethodInfo* method);
// 0x181e2c660

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,bool *hasBadges,MethodInfo *method
          )

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *requested;
  SimpleJSONFixed_JSONArray_o *a_00;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_184344d3d = '\x01';
  }
  *hasBadges = false;
  if (profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
    a = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                  ((profile->fields)._CharacterInfoJson_k__BackingField,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e2c7ce;
      requested = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"badges");
    }
    else {
      requested = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    a_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_1e16050
                     ((SimpleJSONFixed_JSONNode_o *)requested,
                      (System_Collections_Generic_IEnumerable_string__o *)
                      (profile->fields)._Roles_k__BackingField,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"badges",(SimpleJSONFixed_JSONNode_o *)a_00,
                 (__this->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (a_00 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_181e2c7ce;
        iVar2 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                          (a_00,(a_00->klass->vtable)._11_get_Count.method);
        bVar1 = 0 < iVar2;
      }
      else {
        bVar1 = false;
      }
      *hasBadges = bVar1;
      pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
label_181e2c7ce:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse (System_String_o* json, const MethodInfo* method);
// 0x181df0650
// eh: try 0x181df0669..0x181df0679 -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse(System_String_o *json,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  else {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}



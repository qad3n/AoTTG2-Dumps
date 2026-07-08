// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x41fdbd0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<>c__DisplayClass22_0___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$<ShowAfterDelay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x41fdbe0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<>c__DisplayClass22_0__<ShowAfterDelay>b__0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o
                *__this,ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o
                        *response,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile;
  MethodInfo *a;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *value;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_String_o **ppSVar6;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *extraout_RDX;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  System_String_o **ppSVar7;
  undefined1 auStack_38 [16];
  
  if (DAT_05704fcb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704fcb = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    if ((__this->fields).version != (pGVar1->fields)._version) {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                        ((UnityEngine_Behaviour_o *)pGVar1,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)pGVar1,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
        if ((response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0
            ) || ((char)(response->fields)._Success_k__BackingField == '\0')) {
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
            pSVar4 = (pGVar1->fields)._accountId;
            if (response ==
                (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
              ppSVar7 = (System_String_o **)&"unknown_error";
            }
            else {
              ppSVar7 = &(response->fields)._Error_k__BackingField;
            }
            a = (MethodInfo *)*ppSVar7;
            method_02 = a;
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
              method_02 = extraout_RDX_00;
            }
            bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                              (root,pSVar4,method_02);
            if ((char)bVar3 == '\0') {
              return;
            }
            if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
               (pGVar2 = (root->fields)._codeActions,
               pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.loading",0,
                         (MethodInfo *)0x0);
              pGVar2 = (root->fields)._codeActions;
              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.ready",0,
                           (MethodInfo *)0x0);
                pGVar2 = (root->fields)._codeActions;
                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.error",1,
                             (MethodInfo *)0x0);
                  pGVar2 = (root->fields)._codeActions;
                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBio",0,
                               (MethodInfo *)0x0);
                    pGVar2 = (root->fields)._codeActions;
                    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.hasBadges",0,
                                 (MethodInfo *)0x0);
                      pGVar2 = (root->fields)._codeActions;
                      if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"publicProfile.hover.characterName",
                                   (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                   (MethodInfo *)0x0);
                        pGVar2 = (root->fields)._codeActions;
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                     "publicProfile.hover.badgesJson",
                                     (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                     (MethodInfo *)0x0);
                          pGVar2 = (root->fields)._codeActions;
                          if (DAT_05704fe6 == '\0') {
                            il2cpp_init_method_metadata(&"http_404");
                            il2cpp_init_method_metadata(&"Profile unavailable.");
                            il2cpp_init_method_metadata(&"network_error");
                            il2cpp_init_method_metadata(&"Could not load profile.");
                            DAT_05704fe6 = '\x01';
                          }
                          bVar3 = System_String__op_Equality
                                            ((System_String_o *)a,"http_404",(MethodInfo *)0x0);
                          if (((char)bVar3 == '\0') &&
                             (bVar3 = System_String__op_Equality
                                                ((System_String_o *)a,"network_error",(MethodInfo *)0x0
                                                ), (char)bVar3 != '\0')) {
                            puVar5 = &"Could not load profile.";
                          }
                          else {
                            puVar5 = &"Profile unavailable.";
                          }
                          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                       "publicProfile.hover.errorText",(System_String_o *)*puVar5,(MethodInfo *)0x0);
                            return;
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
        }
        else {
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
            pSVar4 = (pGVar1->fields)._accountId;
            profile = (response->fields)._Profile_k__BackingField;
            method_00 = profile;
            auStack_38._0_8_ = root;
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
            auStack_38._0_8_ = auStack_38._0_8_ & 0xffffffffffffff;
            bVar3 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                              (root,pSVar4,(MethodInfo *)method_00);
            if ((profile != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) &&
               ((char)bVar3 != '\0')) {
              pSVar4 = (profile->fields)._Description_k__BackingField;
              if (pSVar4 == (System_String_o *)0x0) {
                pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              }
              value = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
                                (profile,(bool_conflict *)(auStack_38 + 7),method_01);
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
                                   (uint)auStack_38[7],(MethodInfo *)0x0);
                        pGVar2 = (root->fields)._codeActions;
                        bVar3 = System_String__IsNullOrWhiteSpace
                                          ((profile->fields)._CharacterName_k__BackingField,
                                           (MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          ppSVar7 = &(profile->fields)._DisplayName_k__BackingField;
                          ppSVar6 = &(profile->fields)._CharacterName_k__BackingField;
                          if ((char)bVar3 != '\0') {
                            ppSVar6 = ppSVar7;
                          }
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                     "publicProfile.hover.characterName",*ppSVar6,(MethodInfo *)0x0);
                          pGVar2 = (root->fields)._codeActions;
                          if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                       "publicProfile.hover.displayName",*ppSVar7,(MethodInfo *)0x0);
                            pGVar2 = (root->fields)._codeActions;
                            if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                              Gisketch_Aottg2UI_State_GisketchUIState__Set
                                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                         "publicProfile.hover.bio",pSVar4,(MethodInfo *)0x0);
                              pGVar2 = (root->fields)._codeActions;
                              if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                                Gisketch_Aottg2UI_State_GisketchUIState__Set
                                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                           "publicProfile.hover.badgesJson",value,(MethodInfo *)0x0);
                                pGVar2 = (root->fields)._codeActions;
                                pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                                                   ((profile->fields)._AvatarKey_k__BackingField,
                                                    (MethodInfo *)0x0);
                                if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,
                                             "publicProfile.hover.avatarSprite",pSVar4,(MethodInfo *)0x0);
                                  pGVar2 = (root->fields)._codeActions;
                                  pSVar4 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                                                     ((profile->fields)._BannerKey_k__BackingField,
                                                      (MethodInfo *)0x0);
                                  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)
                                  {
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41fda30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x41fe250

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o
                *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x41fe260

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18__MoveNext
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704fcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSecondsRealtime);
    DAT_05704fcc = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this_00->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(&(__this_00->fields)._pendingClose);
    if ((char)(__this_00->fields)._anchorHover != '\0') {
      return 0;
    }
    if (*(char *)((long)&(__this_00->fields)._anchorHover + 1) == '\0') {
      Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this_00,method_00);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_glue(TypeInfo_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_01,0.18,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x41fe330

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x41fe340

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x41fe380

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<CloseAfterGrace>d__18__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41fdb60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x41fe390

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o
                *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x41fe3a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22__MoveNext
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *x;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *pGVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_GameObject_o *anchor;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *x_01;
  System_Action_AottgPublicProfileFetchResponse__o *onResult;
  MethodInfo *in_RCX;
  
  if (DAT_05704fcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfileHoverCardRuntime_AddComponent);
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfileHoverCardRuntime_GetComponent);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__ShowAfterDelay_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass22_0);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSecondsRealtime);
    DAT_05704fcd = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    x = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (x != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      (x->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
      il2cpp_runtime_glue(&(x->fields)._pending);
      pGVar4 = (__this->fields).__8__1;
      if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *
                    )0x0) {
        if ((pGVar4->fields).version != (x->fields)._version) {
          return 0;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return 0;
        }
        bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          ((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return 0;
        }
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
        pSVar2 = (x->fields)._accountId;
        anchor = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        x_00 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
                         (root,pSVar2,anchor,in_RCX);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
LAB_041fe626:
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          *(char *)((long)&(x->fields)._anchorHover + 2) = (char)bVar3;
          pSVar2 = (x->fields)._accountId;
          onResult = (System_Action_AottgPublicProfileFetchResponse__o *)
                     il2cpp_runtime_glue(TypeInfo_Action_AottgPublicProfileFetchResponse);
          System_Action<object>___ctor();
          ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
                    (pSVar2,onResult,(MethodInfo *)0x0);
          return 0;
        }
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          x_01 = (UnityEngine_Object_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           ((UnityEngine_GameObject_o *)x_00,MethodInfo_AottgPublicProfileHoverCardRuntime_GetComponent);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            (x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            x_01 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             ((UnityEngine_GameObject_o *)x_00,MethodInfo_AottgPublicProfileHoverCardRuntime_AddComponent);
          }
          if (x_01 != (UnityEngine_Object_o *)0x0) {
            x_01[1].monitor = x;
            il2cpp_runtime_glue(&x_01[1].monitor);
            goto LAB_041fe626;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass22_0);
    System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pGVar4;
    il2cpp_runtime_glue(&(__this->fields).__8__1,pGVar4);
    pGVar4 = (__this->fields).__8__1;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)
                  0x0) {
      (pGVar4->fields).version = (__this->fields).version;
      (pGVar4->fields).__4__this = (__this->fields).__4__this;
      il2cpp_runtime_glue(&(pGVar4->fields).__4__this);
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_glue(TypeInfo_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x41fea40

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x41fea50

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x41fea90

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_<ShowAfterDelay>d__22__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, System_String_o* accountId, const MethodInfo* method);
// 0x41fd5b0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               System_String_o *accountId,MethodInfo *method)

{
  (__this->fields)._accountId = accountId;
  il2cpp_runtime_glue(&(__this->fields)._accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x41fd5c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  *(undefined1 *)&(__this->fields)._anchorHover = 1;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x41fd6f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._anchorHover = 0;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x41fd7e0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  *(undefined1 *)&(__this->fields)._anchorHover = 1;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x41fd830

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._anchorHover = 0;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd840

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd900

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd630

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  int iVar3;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._accountId,(MethodInfo *)0x0);
  if ((((char)bVar1 != '\0') || (*(char *)((long)&(__this->fields)._anchorHover + 2) != '\0')) ||
     ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0)) {
    return;
  }
  iVar3 = (__this->fields)._version + 1;
  (__this->fields)._version = iVar3;
  if (DAT_05704fca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShowAfterDelay_d__22);
    DAT_05704fca = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ShowAfterDelay_d__22);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(int *)&__this_00[2].klass = iVar3;
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine
                       ((UnityEngine_MonoBehaviour_o *)__this,
                        (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._pending,pUVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$EndOrDelay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd700

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  
  if (((char)(__this->fields)._anchorHover == '\0') &&
     (*(char *)((long)&(__this->fields)._anchorHover + 1) == '\0')) {
    if (*(char *)((long)&(__this->fields)._anchorHover + 2) == '\0') {
      ppUVar1 = &(__this->fields)._pending;
      pUVar2 = (__this->fields)._pending;
      if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
      }
      *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
      il2cpp_runtime_glue(ppUVar1,0);
      return;
    }
    if ((__this->fields)._pendingClose == (UnityEngine_Coroutine_o *)0x0) {
      if (DAT_05704fc8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CloseAfterGrace_d__18);
        DAT_05704fc8 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CloseAfterGrace_d__18);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine
                           ((UnityEngine_MonoBehaviour_o *)__this,
                            (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        (__this->fields)._pendingClose = pUVar2;
        il2cpp_runtime_glue(&(__this->fields)._pendingClose,pUVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseAfterGrace
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd9c0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704fc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CloseAfterGrace_d__18);
    DAT_05704fc8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CloseAfterGrace_d__18);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseNow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd850

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *pUVar2;
  System_String_o *value;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  System_String_o *a;
  
  if (DAT_05704fc9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704fc9 = '\x01';
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pending,0);
  pUVar2 = (__this->fields)._pendingClose;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingClose,0);
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 2) = 0;
  *(undefined2 *)&(__this->fields)._anchorHover = 0;
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponentInParent<object>
                ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
  value = (__this->fields)._accountId;
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
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    if (x[6].klass == (UnityEngine_Object_c *)0x0) {
      return;
    }
    if (x[7].monitor == (void *)0x0) {
      return;
    }
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (x[6].klass == (UnityEngine_Object_c *)0x0) goto LAB_041fdb56;
      a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)x[6].klass,"publicProfile.hover.accountId",
                     "",(MethodInfo *)0x0);
      bVar3 = System_String__op_Inequality(a,value,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
    }
    if (x[7].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
                (x[7].monitor,"public-profile-hover",1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_041fdb56:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelPending
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd990

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._pending;
  routine = (__this->fields)._pending;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelClose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fd600

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$ShowAfterDelay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, int32_t version, const MethodInfo* method);
// 0x41fd910

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,int32_t version,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704fca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShowAfterDelay_d__22);
    DAT_05704fca = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ShowAfterDelay_d__22);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].klass = version;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fdb80

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 1) = 1;
  ppUVar1 = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fdbb0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 1) = 0;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x41fdbc0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



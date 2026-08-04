// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x452f3f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$<ShowAfterDelay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x452f400

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar3;
  bool_conflict bVar4;
  int iVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *requested;
  undefined8 *puVar8;
  System_Threading_CancellationTokenSource_o **ppSVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *extraout_RDX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *a;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *unaff_RBX;
  System_String_o *b;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar11;
  bool bVar12;
  MethodInfo *unaff_R14;
  System_String_o **ppSVar13;
  Gisketch_Aottg2UI_GisketchUIRoot_o *unaff_R15;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_80;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_78;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_70;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_48;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_40;
  undefined8 uStack_38;
  
  if (g_data_057aeea6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057aeea6 = '\x01';
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
label_0452f514:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if ((__this->fields).version != (pGVar2->fields)._version) {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) goto label_0452f514;
  bVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)pGVar2,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) goto label_0452f514;
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
         UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)pGVar2,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  if ((response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) ||
     ((char)(response->fields)._Success_k__BackingField == '\0')) {
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) goto label_0452f514;
    method_02 = (MethodInfo *)(pGVar2->fields)._accountId;
    if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
      ppSVar13 = (System_String_o **)&"unknown_error";
    }
    else {
      ppSVar13 = &(response->fields)._Error_k__BackingField;
    }
    a = (MethodInfo *)*ppSVar13;
  }
  else {
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) goto label_0452f514;
    pSVar7 = (pGVar2->fields)._accountId;
    pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(response->fields)._Profile_k__BackingField;
    pGVar10 = pGVar11;
    uStack_38 = root;
    if (g_data_057aeebd == '\0') {
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45326fd;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532709;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532715;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532721;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453272d;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532739;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532745;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532751;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453275d;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bannerSprite");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532769;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532775;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
      g_data_057aeebd = '\x01';
      pGVar10 = extraout_RDX;
    }
    uStack_38 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)((ulong)uStack_38 & 0xffffffffffffff);
    pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453278c;
    bVar4 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive(root,pSVar7,(MethodInfo *)pGVar10);
    if ((pGVar11 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) || ((char)bVar4 == '\0')) {
      return;
    }
    pGVar10 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)&(pGVar11->fields)._createEventSystem;
    if (pGVar10 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    b = (System_String_o *)((long)&uStack_38 + 7);
    pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45327cb;
    value = pGVar11;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__BadgesJson
                       ((ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)pGVar11,(bool_conflict *)b,
                        method_00);
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = (root->fields)._codeActions;
      value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45327f7;
        b = "publicProfile.hover.loading";
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
        pGVar3 = (root->fields)._codeActions;
        value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        pSVar7 = pSVar6;
        if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453281a;
          b = "publicProfile.hover.ready";
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.ready",1,(MethodInfo *)0x0);
          pGVar3 = (root->fields)._codeActions;
          value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453283a;
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.error",0,(MethodInfo *)0x0);
            unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(root->fields)._codeActions;
            b = (System_String_o *)0x0;
            pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532848;
            value = pGVar10;
            bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)pGVar10,(MethodInfo *)0x0);
            if (unaff_RBX != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453286a;
              b = "publicProfile.hover.hasBio";
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX,"publicProfile.hover.hasBio",
                         (uint)(byte)((byte)bVar4 ^ 1),(MethodInfo *)0x0);
              pGVar3 = (root->fields)._codeActions;
              value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
              if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453288d;
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.hasBadges",
                           (uint)uStack_38._7_1_,(MethodInfo *)0x0);
                unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(root->fields)._codeActions;
                value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pGVar11->fields)._selectedScreenId;
                b = (System_String_o *)0x0;
                pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453289c;
                bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
                if (unaff_RBX != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                  ppSVar1 = &(pGVar11->fields).m_CancellationTokenSource;
                  ppSVar9 = (System_Threading_CancellationTokenSource_o **)
                            &(pGVar11->fields)._selectedScreenId;
                  if ((char)bVar4 != '\0') {
                    ppSVar9 = ppSVar1;
                  }
                  pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45328ca;
                  b = "publicProfile.hover.characterName";
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX,"publicProfile.hover.characterName",
                             (System_String_o *)*ppSVar9,(MethodInfo *)0x0);
                  pGVar3 = (root->fields)._codeActions;
                  value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                  if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                    pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45328ec;
                    b = "publicProfile.hover.displayName";
                    Gisketch_Aottg2UI_State_GisketchUIState__Set
                              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.displayName",
                               (System_String_o *)*ppSVar1,(MethodInfo *)0x0);
                    pGVar3 = (root->fields)._codeActions;
                    value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                    if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                      pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453290d;
                      b = "publicProfile.hover.bio";
                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.bio",
                                 (System_String_o *)pGVar10,(MethodInfo *)0x0);
                      pGVar3 = (root->fields)._codeActions;
                      value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                      if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                        pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x453292a;
                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.badgesJson",pSVar6,
                                   (MethodInfo *)0x0);
                        pGVar3 = (root->fields)._codeActions;
                        value = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)&(pGVar11->fields)._motionScale;
                        b = (System_String_o *)0x0;
                        pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532939;
                        pSVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite
                                           ((System_String_o *)value,(MethodInfo *)0x0);
                        unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                        if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                          pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532955;
                          Gisketch_Aottg2UI_State_GisketchUIState__Set
                                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.avatarSprite",pSVar6,
                                     (MethodInfo *)0x0);
                          pGVar3 = (root->fields)._codeActions;
                          value = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pGVar11->fields)._actionHandler;
                          b = (System_String_o *)0x0;
                          pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532964;
                          pSVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite
                                             ((System_String_o *)value,(MethodInfo *)0x0);
                          unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
                          if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
                            pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532980;
                            Gisketch_Aottg2UI_State_GisketchUIState__Set
                                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.bannerSprite",pSVar6
                                       ,(MethodInfo *)0x0);
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
    pGStack_40 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532994;
    uStack_50 = il2cpp_runtime_helper_022b2c90();
    pGStack_48 = unaff_RBX;
    pGStack_40 = pGVar11;
    if (g_data_057aeec0 == '\0') {
      pSStack_58 = (System_String_o *)0x45329bf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      pSStack_58 = (System_String_o *)0x45329cb;
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.accountId");
      pSStack_58 = (System_String_o *)0x45329d7;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aeec0 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_58 = (System_String_o *)0x45329f6;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (MethodInfo *)0x0;
    pSStack_58 = (System_String_o *)0x4532a02;
    unaff_R15 = value;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (value != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = (value->fields)._codeActions;
      if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        return;
      }
      pSStack_58 = (System_String_o *)0x4532a2f;
      pSVar7 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.accountId","",
                          (MethodInfo *)0x0);
      System_String__op_Equality(pSVar7,b,(MethodInfo *)0x0);
      return;
    }
    pSStack_58 = (System_String_o *)0x4532a52;
    il2cpp_runtime_helper_022b2c90();
    method_02 = unaff_R14;
    pGVar11 = unaff_R15;
    pGStack_78 = value;
    pGStack_70 = pGVar10;
    pGStack_68 = root;
    pSStack_60 = b;
    pSStack_58 = pSVar7;
    if (g_data_057aeec2 == '\0') {
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532a84;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532a90;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&"badges";
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532a9c;
      il2cpp_runtime_helper_023445d0();
      g_data_057aeec2 = '\x01';
    }
    root = pGVar11;
    *(undefined1 *)&unaff_R14->methodPointer = 0;
    unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (unaff_R15 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532ab9;
      pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse
                          ((System_String_o *)(unaff_R15->fields)._themeJson,method_02);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532ad5;
        il2cpp_runtime_helper_02337ed0();
      }
      requested = (SimpleJSONFixed_JSONNode_o *)0x0;
      method_02 = (MethodInfo *)0x0;
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532ae4;
      root = pGVar11;
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pGVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (pGVar11 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_04532bcc;
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b0e;
        requested = (SimpleJSONFixed_JSONNode_o *)
                    (*pGVar11->klass[1]._1.byval_arg.data)
                              (pGVar11,"badges",*(undefined8 *)&pGVar11->klass[1]._1.byval_arg.bits);
      }
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b1f;
      unaff_R15 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                            (requested,
                             (System_Collections_Generic_IEnumerable_string__o *)
                             *(System_String_array **)&(unaff_R15->fields)._buildOnStart,(MethodInfo *)0x0);
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b31;
      unaff_RBX = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      method_02 = (MethodInfo *)0x0;
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b3e;
      root = unaff_RBX;
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)unaff_RBX,(MethodInfo *)0x0);
      if (unaff_RBX != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b67;
        (*(code *)unaff_RBX->klass[1]._1.this_arg.data)(unaff_RBX,"badges",unaff_R15);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b79;
          il2cpp_runtime_helper_02337ed0();
        }
        bVar12 = false;
        method_02 = (MethodInfo *)0x0;
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532b88;
        root = unaff_R15;
        bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_04532baa:
          *(bool *)&unaff_R14->methodPointer = bVar12;
          (*(unaff_RBX->klass->vtable)._3_ToString.methodPtr)
                    (unaff_RBX,(unaff_RBX->klass->vtable)._3_ToString.method);
          return;
        }
        if (unaff_R15 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532ba4;
          iVar5 = (*unaff_R15->klass[1]._1.generic_class)(unaff_R15,unaff_R15->klass[1]._1.typeMetadataHandle)
          ;
          bVar12 = 0 < iVar5;
          goto label_04532baa;
        }
      }
    }
label_04532bcc:
    pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4532bd1;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&pGStack_80;
    pGStack_80 = unaff_RBX;
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      System_String__IsNullOrWhiteSpace((root->fields)._selectedScreenId,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    a = extraout_RDX_00;
  }
  *(Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  method_01 = a;
  if (g_data_057aeebe == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c33;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c3f;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c4b;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c57;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c63;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c6f;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c7b;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c87;
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebe = '\x01';
    method_01 = extraout_RDX_01;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532c99;
  bVar4 = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__IsActive
                    (root,(System_String_o *)method_02,method_01);
  if ((char)bVar4 == '\0') {
    return;
  }
  if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (pGVar3 = (root->fields)._codeActions, pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
  goto label_04532e32;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532cca;
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.loading",0,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532cea;
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.ready",0,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532d0d;
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.error",1,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532d2d;
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.hasBio",0,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532d4d;
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.hasBadges",0,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532d83;
  Gisketch_Aottg2UI_State_GisketchUIState__Set
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.characterName",pSVar7,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_04532e32;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532db2;
  Gisketch_Aottg2UI_State_GisketchUIState__Set
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.badgesJson",pSVar7,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._codeActions;
  if (g_data_057aeec1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532dcb;
    il2cpp_runtime_helper_023445d0(&"http_404");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532dd7;
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532de3;
    il2cpp_runtime_helper_023445d0(&"network_error");
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532def;
    il2cpp_runtime_helper_023445d0(&"Could not load profile.");
    g_data_057aeec1 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532e0a;
  bVar4 = System_String__op_Equality((System_String_o *)a,"http_404",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532e22;
    bVar4 = System_String__op_Equality((System_String_o *)a,"network_error",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_04532e3d;
    puVar8 = &"Could not load profile.";
  }
  else {
label_04532e3d:
    puVar8 = &"Profile unavailable.";
  }
  if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"publicProfile.hover.errorText",(System_String_o *)*puVar8,
               (MethodInfo *)0x0);
    return;
  }
label_04532e32:
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4532e37;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x452f360

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x452f520

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x452f530

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *pGVar2;
  
  pGVar2 = __this;
  if (g_data_057aeea7 == '\0') {
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *)&TypeInfo_WaitForSecondsRealtime;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeea7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pGVar2->fields).__2__current;
    }
    (__this_00->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pendingClose);
    if ((char)(__this_00->fields)._anchorHover != '\0') {
      return 0;
    }
    if (*(char *)((long)&(__this_00->fields)._anchorHover + 1) == '\0') {
      Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this_00,method_00);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_01,0.18,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x452f600

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x452f610

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x452f650

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x452f380

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x452f660

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x452f670

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext
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
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *x_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *x_01;
  System_Action_AottgPublicProfileFetchResponse__o *onResult;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *pGVar5;
  
  pGVar5 = __this;
  if (g_data_057aeea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileHoverCardRuntime_AddComponent_AottgPub);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileHoverCardRuntime_GetComponent_AottgPub);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ShowAfterDelay_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    pGVar5 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)&TypeInfo_WaitForSecondsRealtime;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeea8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    x = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (x != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)
               &(x->fields)._pending;
      (x->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
      il2cpp_runtime_helper_022b4080();
      pGVar4 = (__this->fields).__8__1;
      if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
        if ((pGVar4->fields).version != (x->fields)._version) {
          return 0;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return 0;
        }
        bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return 0;
        }
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        pSVar2 = (x->fields)._accountId;
        anchor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        x_00 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)
               Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
                         (root,pSVar2,anchor,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar5 = x_00;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
label_0452f8f8:
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          *(char *)((long)&(x->fields)._anchorHover + 2) = (char)bVar3;
          pSVar2 = (x->fields)._accountId;
          onResult = (System_Action_AottgPublicProfileFetchResponse__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgPublicProfileFetchResponse);
          System_Action_object____ctor();
          ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
                    (pSVar2,onResult,(MethodInfo *)0x0);
          return 0;
        }
        if (x_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)0x0) {
          x_01 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_AottgPublicProfileHoverCardRuntime_GetComponent_AottgPub);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pGVar5 = x_01;
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pGVar5 = x_00;
            x_01 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)
                   UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_AottgPublicProfileHoverCardRuntime_AddComponent_AottgPub)
            ;
          }
          if (x_01 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)0x0) {
            *(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o **)&(x_01->fields).version = x;
            il2cpp_runtime_helper_022b4080(&(x_01->fields).version);
            goto label_0452f8f8;
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
             il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
    System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pGVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,pGVar4);
    pGVar4 = (__this->fields).__8__1;
    pGVar5 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *)0x0;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
      (pGVar4->fields).version = (__this->fields).version;
      (pGVar4->fields).__4__this = (__this->fields).__4__this;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).__4__this);
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pGVar5->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x452f970

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x452f980

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x452f9c0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, System_String_o* accountId, const MethodInfo* method);
// 0x452eee0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,System_String_o *accountId,
               MethodInfo *method)

{
  (__this->fields)._accountId = accountId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x452eef0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  *(undefined1 *)&(__this->fields)._anchorHover = 1;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x452f020

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
// 0x452f110

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  *(undefined1 *)&(__this->fields)._anchorHover = 1;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x452f160

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
// 0x452f170

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f230

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452ef60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  int iVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_01;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._accountId,(MethodInfo *)0x0);
  if ((((char)bVar1 != '\0') || (*(char *)((long)&(__this->fields)._anchorHover + 2) != '\0')) ||
     ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0)) {
    return;
  }
  iVar3 = (__this->fields)._version + 1;
  (__this->fields)._version = iVar3;
  if (g_data_057aeea5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowAfterDelay_d__22);
    g_data_057aeea5 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowAfterDelay_d__22);
  method_00 = (MethodInfo *)0x0;
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    (__this_00->fields)._pending = (UnityEngine_Coroutine_o *)__this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pending,__this);
    *(int *)&(__this_00->fields)._accountId = iVar3;
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                        (MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pending,pUVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(__this_01->fields)._anchorHover = 0;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this_01,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$EndOrDelay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f030

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_01;
  
  if (((char)(__this->fields)._anchorHover == '\0') &&
     (*(char *)((long)&(__this->fields)._anchorHover + 1) == '\0')) {
    if (*(char *)((long)&(__this->fields)._anchorHover + 2) == '\0') {
      ppUVar1 = &(__this->fields)._pending;
      pUVar2 = (__this->fields)._pending;
      if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
      }
      *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1,0);
      return;
    }
    if ((__this->fields)._pendingClose == (UnityEngine_Coroutine_o *)0x0) {
      if (g_data_057aeea3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CloseAfterGrace_d__18);
        g_data_057aeea3 = '\x01';
      }
      __this_00 = (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CloseAfterGrace_d__18);
      __this_01 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
        (__this_00->fields)._accountId = (System_String_o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._accountId,__this);
        pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this,
                            (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        (__this->fields)._pendingClose = pUVar2;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingClose,pUVar2);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(__this_01->fields)._anchorHover = 1;
      pUVar2 = (__this_01->fields)._pendingClose;
      if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                  ((UnityEngine_MonoBehaviour_o *)__this_01,pUVar2,(MethodInfo *)0x0);
      }
      (__this_01->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
      method_00 = (MethodInfo *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._pendingClose);
      Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this_01,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseAfterGrace
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f2f0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aeea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CloseAfterGrace_d__18);
    g_data_057aeea3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CloseAfterGrace_d__18);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseNow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f180

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (g_data_057aeea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aeea4 = '\x01';
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pending,0);
  pUVar2 = (__this->fields)._pendingClose;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingClose,0);
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 2) = 0;
  *(undefined2 *)&(__this->fields)._anchorHover = 0;
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
         UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
            (root,(__this->fields)._accountId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelPending
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f2c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._pending;
  routine = (__this->fields)._pending;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelClose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452ef30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$ShowAfterDelay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, int32_t version, const MethodInfo* method);
// 0x452f240

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,int32_t version,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_IEnumerator_o *pSVar1;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057aeea5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowAfterDelay_d__22);
    g_data_057aeea5 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowAfterDelay_d__22);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this_00[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,__this);
    *(int32_t *)&__this_00[1].klass = version;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01[1].monitor != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0(__this_01,__this_01[1].monitor,(MethodInfo *)0x0);
  }
  __this_01[1].monitor = (void *)0x0;
  pSVar1 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f3a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 1) = 1;
  ppUVar1 = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f3d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._anchorHover + 1) = 0;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x452f3e0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



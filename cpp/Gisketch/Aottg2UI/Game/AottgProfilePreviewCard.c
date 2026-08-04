// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewCard
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewCard.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___cctor (const MethodInfo* method);
// 0x4529cf0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, const MethodInfo* method);
// 0x4529d60

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$<Build>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___Build_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x4529d70

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___Build_b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aee74 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.accountName");
    il2cpp_runtime_helper_023445d0(&"profile.characterName");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee74 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (names,pSVar1,"profilePreviewName",(System_String_o *)0x0,"profile.characterName",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (names,pSVar1,"profilePreviewHandle",(System_String_o *)0x0,"profile.accountName",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee75 == '\0') {
    il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
    g_data_057aee75 = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x45288f0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,System_String_o *avatarSprite,
               System_String_o *bannerSprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = avatarSprite;
  il2cpp_runtime_helper_022b4080(&__this->fields,avatarSprite);
  (__this->fields)._bannerSprite = bannerSprite;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._bannerSprite,bannerSprite);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4529240

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar1;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  System_String_o *style;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  
  if (g_data_057aee6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-preview-card");
    il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
    g_data_057aee6d = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"profilePreviewCard",pSVar2,"profile-preview-card",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"profile-preview-body");
    g_data_057aee6e = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
  pGVar8 = "Center";
  pGVar9 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3
                      ,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = "profilePreviewBannerFrame";
    pGVar9 = pGVar7;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar7,(System_String_o *)"profilePreviewBannerFrame",pSVar2,"profile-preview-banner-frame",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar7,"profilePreviewBody",pSVar2,"profile-preview-body",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee6f == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee6f = '\x01';
  }
  sprite = (pGVar9->fields)._actions;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar8,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-preview-names");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aee70 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar7,"profilePreviewAvatarFrame",pSVar2,"profile-preview-avatar-frame",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    style = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar7,style,pSVar2,"profile-preview-names",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    g_data_057aee71 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar7 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar8,"profileCardAvatarBg",pSVar2,"profile-preview-avatar-bg",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite_00 = (pGVar7->fields)._children;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar9,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x45293a0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar1;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  System_String_o *style;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  
  if (g_data_057aee6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"profile-preview-body");
    g_data_057aee6e = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
  pGVar8 = "Center";
  pGVar7 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3
                      ,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = "profilePreviewBannerFrame";
    pGVar7 = card;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)"profilePreviewBannerFrame",pSVar2,"profile-preview-banner-frame",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profilePreviewBody",pSVar2,"profile-preview-body",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee6f == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee6f = '\x01';
  }
  sprite = (pGVar7->fields)._actions;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar8,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-preview-names");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aee70 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar7,"profilePreviewAvatarFrame",pSVar2,"profile-preview-avatar-frame",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    style = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar7,style,pSVar2,"profile-preview-names",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    g_data_057aee71 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar7 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar8,"profileCardAvatarBg",pSVar2,"profile-preview-avatar-bg",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite_00 = (pGVar7->fields)._children;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_01,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x4529640

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  long lVar1;
  System_String_Fields sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar7;
  
  if (g_data_057aee6f == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee6f = '\x01';
  }
  pSVar7 = (__this->fields)._bannerSprite;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (banner,pSVar7,"profilePreviewBanner","profile-preview-banner-image",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-preview-names");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aee70 = '\x01';
  }
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar6,"profilePreviewAvatarFrame",pSVar5,"profile-preview-avatar-frame",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = "default";
    pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar5;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar5);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,2.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar6,pSVar7,pSVar5,"profile-preview-names",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    g_data_057aee71 = '\x01';
  }
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar7 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,"profileCardAvatarBg",pSVar5,"profile-preview-avatar-bg",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite = pSVar7->fields;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar6,(System_String_o *)sprite,"profilePreviewAvatar","profile-preview-avatar-image",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4529770

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_Fields sprite;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  System_String_o *pSVar6;
  
  if (g_data_057aee70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-preview-names");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aee70 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"profilePreviewAvatarFrame",pSVar2,"profile-preview-avatar-frame",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,2.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar6,pSVar2,"profile-preview-names",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    g_data_057aee71 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar6 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,"profileCardAvatarBg",pSVar2,"profile-preview-avatar-bg",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite = pSVar6->fields;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_02,(System_String_o *)sprite,"profilePreviewAvatar","profile-preview-avatar-image",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x4529a50

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_String_Fields sprite;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar4;
  
  if (g_data_057aee71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    g_data_057aee71 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar4 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar1,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,"profileCardAvatarBg",build,"profile-preview-avatar-bg",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite = pSVar4->fields;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar1,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_01,(System_String_o *)sprite,"profilePreviewAvatar","profile-preview-avatar-image",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_5 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x4529bc0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_5
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *bg,
               MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_00;
  
  if (g_data_057aee72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee72 = '\x01';
  }
  sprite = (__this->fields)._avatarSprite;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (bg,sprite,"profilePreviewAvatar","profile-preview-avatar-image",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee73 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}



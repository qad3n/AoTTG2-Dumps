// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewCard
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewCard.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___cctor (const MethodInfo* method);
// 0x41f76e0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704f98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704f98 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, const MethodInfo* method);
// 0x41f7750

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$<Build>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___Build_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x41f7760

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_<>c__<Build>b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704f99 == '\0') {
    il2cpp_init_method_metadata(&"profile.accountName");
    il2cpp_init_method_metadata(&"profile.characterName");
    il2cpp_init_method_metadata(&"profilePreviewName");
    il2cpp_init_method_metadata();
    DAT_05704f99 = '\x01';
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x41f6440

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               System_String_o *avatarSprite,System_String_o *bannerSprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = avatarSprite;
  il2cpp_runtime_glue(&__this->fields,avatarSprite);
  (__this->fields)._bannerSprite = bannerSprite;
  il2cpp_runtime_glue(&(__this->fields)._bannerSprite,bannerSprite);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41f6c30

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-preview-card");
    il2cpp_init_method_metadata(&"profilePreviewCard");
    DAT_05704f92 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"profilePreviewCard",build,"profile-preview-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x41f6d90

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__<Build>b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (DAT_05704f93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_2);
    il2cpp_init_method_metadata(&"profilePreviewBannerFrame");
    il2cpp_init_method_metadata(&"profile-preview-banner-frame");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profilePreviewBody");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"profile-preview-body");
    DAT_05704f93 = '\x01';
  }
  pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,"profilePreviewBannerFrame",pSVar1,"profile-preview-banner-frame",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 1) = 1;
      pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,14.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profilePreviewBody",pSVar1,"profile-preview-body",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x41f7030

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__<Build>b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f94 == '\0') {
    il2cpp_init_method_metadata(&"profile-preview-banner-image");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704f94 = '\x01';
  }
  sprite = (__this->fields)._bannerSprite;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (banner,sprite,"profilePreviewBanner","profile-preview-banner-image",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41f7160

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__<Build>b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (DAT_05704f95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profile-preview-names");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-preview-avatar-frame");
    il2cpp_init_method_metadata(&"profilePreviewAvatarFrame");
    DAT_05704f95 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,28.0,0.0,0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"profilePreviewAvatarFrame",pSVar2,"profile-preview-avatar-frame",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    style = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
      il2cpp_runtime_glue(lVar1 + 8,pSVar2);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,pSVar2,"profile-preview-names",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x41f7440

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__<Build>b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_5);
    il2cpp_init_method_metadata(&"profile-preview-avatar-bg");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profileCardAvatarBg");
    DAT_05704f96 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,"profileCardAvatarBg",build,"profile-preview-avatar-bg",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_5 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x41f75b0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__<Build>b__5_5
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f97 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profilePreviewAvatar");
    il2cpp_init_method_metadata();
    DAT_05704f97 = '\x01';
  }
  sprite = (__this->fields)._avatarSprite;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (bg,sprite,"profilePreviewAvatar","profile-preview-avatar-image",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



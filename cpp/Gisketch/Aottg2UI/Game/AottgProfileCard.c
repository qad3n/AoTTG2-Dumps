// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileCard.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor (const MethodInfo* method);
// 0x41eb850

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704f33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704f33 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, const MethodInfo* method);
// 0x41eb8c0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x41eb8d0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildIdentity>b__4_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  MethodInfo *method_00;
  
  if (DAT_05704f34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildIdentity_b__4_4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile.characterName");
    il2cpp_init_method_metadata(&"profile-card-handle-row");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-card-player-name-skeleton");
    il2cpp_init_method_metadata(&"profile-card-player-name");
    il2cpp_init_method_metadata();
    DAT_05704f34 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (names,pSVar2,"profileCardName","profile-card-player-name","profile.characterName","profile-card-player-name-skeleton",pGVar5,method_00);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_glue(lVar1 + 8,build);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(26.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (names,pSVar2,build,"profile-card-handle-row",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* handle, const MethodInfo* method);
// 0x41ebbe0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildIdentity>b__4_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *handle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  System_String_o *fallback;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  MethodInfo *method_00;
  
  if (DAT_05704f35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgBadgeIconRow);
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"profile.accountName");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profileCardHandle");
    il2cpp_init_method_metadata(&"profile-card-auth-handle-skeleton");
    il2cpp_init_method_metadata(&"profile-card-auth-handle");
    il2cpp_init_method_metadata(&"profile.characterInfoJson");
    il2cpp_init_method_metadata(&"profile-card-badges");
    DAT_05704f35 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_glue(TypeInfo_AottgBadgeIconRow);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,"profile-card-badges",20.0,4.0,"profile.characterInfoJson","profile.identity.ready",(MethodInfo *)0x0);
  if (handle != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (handle,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    fallback = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    skeletonLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                    0.0,0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
              (handle,fallback,"profileCardHandle","profile-card-auth-handle","profile.accountName","profile-card-auth-handle-skeleton",skeletonLayout,
               method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x41ebdc0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildDetails>b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  
  if (DAT_05704f36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildDetails_b__5_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildDetails_b__5_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-card-socials");
    il2cpp_init_method_metadata(&"profile-card-about");
    DAT_05704f36 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,pSVar3,"profile-card-about",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar3;
      il2cpp_runtime_glue(lVar1 + 0x30,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,pSVar3,"profile-card-socials",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* about, const MethodInfo* method);
// 0x41ec110

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildDetails>b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *about,MethodInfo *method)

{
  System_String_o *fallback;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  MethodInfo *method_00;
  
  if (DAT_05704f37 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profileCardBodyText");
    il2cpp_init_method_metadata(&"profile.bio");
    il2cpp_init_method_metadata(&"profile-card-bio");
    il2cpp_init_method_metadata();
    DAT_05704f37 = '\x01';
  }
  fallback = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  skeletonLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                  (System_String_o *)0x0,0.0,width,height,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                  ,0.0,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (about,fallback,"profileCardBodyText","profile-card-bio","profile.bio","profile-card-bio-skeleton",skeletonLayout,
             method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x41ec250

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildDetails>b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  
  if (DAT_05704f38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildDetails_b__5_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildDetails_b__5_4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card-socials-skeletons");
    il2cpp_init_method_metadata(&"profile.identity.loading");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-card-socials-ready");
    DAT_05704f38 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (socials,pSVar2,pSVar3,"profile-card-socials-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
      if (DAT_05704f2f == '\0') {
        il2cpp_init_method_metadata(&"fade");
        DAT_05704f2f = '\x01';
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).motion = pGVar7;
      il2cpp_runtime_glue(&(pGVar6->fields).motion);
      pSVar2 = "profile.identity.ready";
      if (DAT_05704f2d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
        DAT_05704f2d = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).alignItems = pSVar2;
        il2cpp_runtime_glue(&(pGVar5->fields).alignItems,pSVar2);
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_glue(&(pGVar6->fields).contentLayout,pGVar5);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = "default";
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
          il2cpp_runtime_glue(lVar1 + 0x28,pSVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (socials,pSVar2,pSVar3,"profile-card-socials-skeletons",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
          if (DAT_05704f2f == '\0') {
            il2cpp_init_method_metadata(&"fade");
            DAT_05704f2f = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          (pGVar6->fields).motion = pGVar7;
          il2cpp_runtime_glue(&(pGVar6->fields).motion);
          pSVar2 = "profile.identity.loading";
          if (DAT_05704f2d == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
            DAT_05704f2d = '\x01';
          }
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,
                     (MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar5->fields).alignItems = pSVar2;
            il2cpp_runtime_glue(&(pGVar5->fields).alignItems,pSVar2);
            (pGVar6->fields).contentLayout = pGVar5;
            il2cpp_runtime_glue(&(pGVar6->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* readySocials, const MethodInfo* method);
// 0x41ec760

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildDetails>b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *readySocials,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  System_String_o **ppSVar4;
  MethodInfo *method_00;
  
  if (DAT_05704f39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"No social links yet.");
    il2cpp_init_method_metadata(&"profileCardBodyText");
    il2cpp_init_method_metadata();
    DAT_05704f39 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  if (readySocials == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
LAB_041eca59:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = (MethodInfo *)0x0;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (readySocials,"No social links yet.","profileCardBodyText",(System_String_o *)0x0,
                      (System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_041eca59;
  (__this_00->fields).alignItems = "profile.socials.empty";
  il2cpp_runtime_glue(&(__this_00->fields).alignItems);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_041eca59;
  (pGVar3->fields).contentLayout = __this_00;
  il2cpp_runtime_glue(&(pGVar3->fields).contentLayout);
  if (pSVar2 == (System_String_array *)0x0) goto LAB_041eca59;
  if ((int)pSVar2->max_length < 1) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xffffffff) == 0) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,0,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 2) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffffe) == 0) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 1;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,1,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 3) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xffffffff) < 3) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 2;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,2,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 4) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffffc) == 0) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 3;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,3,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 5) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xffffffff) < 5) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 4;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,4,*ppSVar4,method_00);
  uVar1 = (uint)pSVar2->max_length;
  if ((int)uVar1 < 6) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((uVar1 & 0xfffffffe) < 6) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 5;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,5,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 7) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xffffffff) < 7) goto LAB_041eca54;
    ppSVar4 = pSVar2->m_Items + 6;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,6,*ppSVar4,method_00);
  if ((int)pSVar2->max_length < 8) {
    ppSVar4 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffff8) == 0) {
LAB_041eca54:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar4 = pSVar2->m_Items + 7;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,7,*ppSVar4,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loadingSocials, const MethodInfo* method);
// 0x41eca60

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__<BuildDetails>b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loadingSocials,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (DAT_05704f3a == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card-socials-skeleton-1");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata();
    DAT_05704f3a = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (loadingSocials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-0",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-1",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x41ea840

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41ecc50

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass4_0__<BuildIdentity>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (DAT_05704f3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildIdentity_b__4_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildIdentity_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profile-card-avatar-frame");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profileCardAvatarFrame");
    il2cpp_init_method_metadata();
    DAT_05704f3b = '\x01';
  }
  pSVar2 = "profileCardAvatarFrame";
  pSVar3 = (__this->fields).__9__1;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    (__this->fields).__9__1 = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).__9__1,pSVar3);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,86.0,0.0,0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar2,pSVar3,"profile-card-avatar-frame",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
      il2cpp_runtime_glue(lVar1 + 0x10,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar2,pSVar3,"profile-card-name-stack",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x41ecf50

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass4_0__<BuildIdentity>b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildIdentity_b__3);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profileCardAvatarBg");
    il2cpp_init_method_metadata();
    DAT_05704f3c = '\x01';
  }
  style = "profileCardAvatarBg";
  build = (__this->fields).__9__3;
  if (build == (System_Action_AottgUi__o *)0x0) {
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    (__this->fields).__9__3 = build;
    il2cpp_runtime_glue(&(__this->fields).__9__3,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
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
              (frame,style,build,"profile-card-avatar-bg",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x41ed0e0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass4_0__<BuildIdentity>b__3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  MethodInfo *method_00;
  
  if (DAT_05704f3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"profile.avatarSprite");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Change Avatar");
    il2cpp_init_method_metadata(&"profile-card-avatar-edit");
    il2cpp_init_method_metadata(&"Account");
    il2cpp_init_method_metadata(&"profile.identity.loading");
    il2cpp_init_method_metadata(&"profile-card-avatar-skeleton");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata(&"profile-card-avatar");
    il2cpp_init_method_metadata(&"profile-change-avatar");
    il2cpp_init_method_metadata(&"Change avatar");
    il2cpp_init_method_metadata();
    DAT_05704f3d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (bg,"profile-card-avatar-skeleton",pGVar3,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    sprite = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,sprite,"profileCardAvatarImage","profile-card-avatar",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
      if (DAT_05704f2f == '\0') {
        il2cpp_init_method_metadata(&"fade");
        DAT_05704f2f = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).motion = pGVar5;
      il2cpp_runtime_glue(&(pGVar4->fields).motion);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_glue(&(pGVar3->fields).justify);
        (pGVar3->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_glue(&(pGVar3->fields).alignItems);
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar3);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (bg,"profile-card-avatar-edit","Change avatar","Change Avatar","profile-change-avatar",
                   (uint)(byte)(__this->fields).isMine,"Account",0.0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x41eac80

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41ed490

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass6_0__<Social>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  int __this_00;
  
  if (DAT_05704f3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Social_b__1);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card-social-label-");
    il2cpp_init_method_metadata(&"Icons/kenney-icons/share2");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profileCardSocialIcon");
    il2cpp_init_method_metadata(&"profile-card-social-icon-");
    DAT_05704f3e = '\x01';
  }
  __this_00 = (int)__this + 0x10;
  pSVar1 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-card-social-icon-",pSVar1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "default";
    build = (__this->fields).__9__1;
    if (build == (System_Action_AottgUi__o *)0x0) {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      (__this->fields).__9__1 = build;
      il2cpp_runtime_glue(&(__this->fields).__9__1);
    }
    pSVar5 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat("profile-card-social-label-",pSVar5,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,build,pSVar5,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x41ed730

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass6_0__<Social>b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *pSVar1;
  System_String_o *bindText;
  
  if (DAT_05704f3f == '\0') {
    il2cpp_init_method_metadata(&"profileCardSocialText");
    il2cpp_init_method_metadata(&"profile-card-social-text-");
    DAT_05704f3f = '\x01';
  }
  text = (__this->fields).value;
  pSVar1 = System_Int32__ToString((int)__this + 0x10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-card-social-text-",pSVar1,(MethodInfo *)0x0);
  bindText = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__Social
                       ((__this->fields).index,(MethodInfo *)0x0);
  if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (label,text,"profileCardSocialText",pSVar1,bindText,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x41eb130

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$<AddEditOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* overlay, const MethodInfo* method);
// 0x41ed7e0

void Gisketch_Aottg2UI_Game_AottgProfileCard_<>c__DisplayClass9_0__<AddEditOverlay>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *overlay,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *actionId;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f40 == '\0') {
    il2cpp_init_method_metadata(&"dialog.");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"material-icons/edit");
    il2cpp_init_method_metadata(&"-button");
    il2cpp_init_method_metadata(&"account");
    DAT_05704f40 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  actionId = System_String__Concat("dialog.",(__this->fields).dialogId,(MethodInfo *)0x0);
  id = System_String__Concat((__this->fields).id,"-button",(MethodInfo *)0x0);
  if (overlay != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (overlay,4,text,actionId,id,(__this->fields).tooltip,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",
                      (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(node->fields).search,pGVar1);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,(__this->fields).searchTitle,(System_String_o *)0x0,"material-icons/edit",
                 (System_String_o *)0x0,"account",(__this->fields).sectionTitle,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, bool isMine, const MethodInfo* method);
// 0x41ea520

void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,bool_conflict isMine,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._isMine = (char)isMine;
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Build (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41ea540

void Gisketch_Aottg2UI_Game_AottgProfileCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card");
    il2cpp_init_method_metadata(&"profileCard");
    DAT_05704f28 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
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
              (ui,"profileCard",build,"profile-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildIdentity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity (Gisketch_Aottg2UI_Code_AottgUi_o* body, bool isMine, const MethodInfo* method);
// 0x41ea6a0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,bool_conflict isMine,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildIdentity_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&"profile-card-identity");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05704f29 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(char *)&__this[1].klass = (char)isMine;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                        (System_String_o *)0x0,24.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"default",build,"profile-card-identity",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41ea850

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildDetails_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"profile-card-columns");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05704f2a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = build;
    il2cpp_runtime_glue(lVar1 + 0x38,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,48.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,56.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,build,"profile-card-columns",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Social
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Social (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x41eaa40

void Gisketch_Aottg2UI_Game_AottgProfileCard__Social
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,
               MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (DAT_05704f2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__Social_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass6_0);
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-card-social-");
    DAT_05704f2b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass6_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[1].klass = index;
    __this[1].monitor = value;
    il2cpp_runtime_glue(&__this[1].monitor,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar1 = System_Int32__ToString((int32_t)(__this + 1),(MethodInfo *)0x0);
    pSVar1 = System_String__Concat("profile-card-social-",pSVar1,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",build,pSVar1,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__SocialVisible
                         (*(int32_t *)&__this[1].klass,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar2->fields).alignItems = pSVar1;
        il2cpp_runtime_glue(&(pGVar2->fields).alignItems,pSVar1);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).contentLayout = pGVar2;
          il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BoundProfileText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fallback, System_String_o* style, System_String_o* id, System_String_o* textKey, System_String_o* skeletonId, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* skeletonLayout, const MethodInfo* method);
// 0x41eac90

void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fallback,
               System_String_o *style,System_String_o *id,System_String_o *textKey,
               System_String_o *skeletonId,
               Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_05704f2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"profile.identity.loading");
    il2cpp_init_method_metadata(&"skeleton");
    DAT_05704f2c = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,fallback,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar1->fields).hasIcon + 2) = 0;
      if (DAT_05704f2f == '\0') {
        il2cpp_init_method_metadata(&"fade");
        DAT_05704f2f = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).motion = pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).motion);
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this->fields).direction = textKey;
        il2cpp_runtime_glue(&__this->fields,textKey);
        (__this->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_glue(&(__this->fields).alignItems);
        (pGVar1->fields).contentLayout = __this;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,__this);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (ui,skeletonId,skeletonLayout,"skeleton","profile.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__Visible (System_String_o* key, const MethodInfo* method);
// 0x41eae80

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704f2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704f2d = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    il2cpp_runtime_glue(&(__this->fields).visible,key);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$AddEditOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* dialogId, bool isMine, System_String_o* sectionTitle, float offsetX, const MethodInfo* method);
// 0x41eaef0

void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *tooltip,
               System_String_o *searchTitle,System_String_o *dialogId,bool_conflict isMine,
               System_String_o *sectionTitle,float offsetX,MethodInfo *method)

{
  System_String_o *id_00;
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  char local_3c;
  
  if (DAT_05704f2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddEditOverlay_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass9_0);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05704f2e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass9_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)dialogId;
    il2cpp_runtime_glue(__this + 1,dialogId);
    __this[1].monitor = id;
    il2cpp_runtime_glue(&__this[1].monitor,id);
    __this[2].klass = (Il2CppClass *)tooltip;
    il2cpp_runtime_glue(__this + 2,tooltip);
    __this[2].monitor = searchTitle;
    il2cpp_runtime_glue(&__this[2].monitor,searchTitle);
    __this[3].klass = (Il2CppClass *)sectionTitle;
    il2cpp_runtime_glue(__this + 3,sectionTitle);
    local_3c = (char)isMine;
    if (local_3c != '\0') {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      id_00 = __this[1].monitor;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexEnd","Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0
                          ,offsetX,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_041eb11f;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    return;
  }
LAB_041eb11f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion (const MethodInfo* method);
// 0x41eae30

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704f2f == '\0') {
    il2cpp_init_method_metadata(&"fade");
    DAT_05704f2f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x41eb140

void Gisketch_Aottg2UI_Game_AottgProfileCard__<Build>b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (DAT_05704f30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_2);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card-body");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"profileCardBody");
    il2cpp_init_method_metadata(&"profile-card-banner");
    il2cpp_init_method_metadata(&"profileCardBanner");
    DAT_05704f30 = '\x01';
  }
  pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
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
                       (card,"profileCardBanner",pSVar1,"profile-card-banner",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 1) = 1;
      pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,24.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,36.0,0.0,0.0,0.0,0.0,
                          32.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profileCardBody",pSVar1,"profile-card-body",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x41eb3e0

void Gisketch_Aottg2UI_Game_AottgProfileCard__<Build>b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  MethodInfo *method_00;
  
  if (DAT_05704f31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-card-banner-image");
    il2cpp_init_method_metadata(&"profile-card-banner-skeleton");
    il2cpp_init_method_metadata(&"Change banner");
    il2cpp_init_method_metadata(&"profileCardBannerImage");
    il2cpp_init_method_metadata(&"profile-change-banner");
    il2cpp_init_method_metadata(&"profile-card-banner-edit");
    il2cpp_init_method_metadata(&"Account");
    il2cpp_init_method_metadata(&"Change Banner");
    il2cpp_init_method_metadata(&"profile.identity.loading");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata();
    DAT_05704f31 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (banner,"profile-card-banner-skeleton",pGVar3,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    sprite = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,sprite,"profileCardBannerImage","profile-card-banner-image",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
      if (DAT_05704f2f == '\0') {
        il2cpp_init_method_metadata(&"fade");
        DAT_05704f2f = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).motion = pGVar5;
      il2cpp_runtime_glue(&(pGVar4->fields).motion);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).justify = "profile.bannerSprite";
        il2cpp_runtime_glue(&(pGVar3->fields).justify);
        (pGVar3->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_glue(&(pGVar3->fields).alignItems);
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar3);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (banner,"profile-card-banner-edit","Change banner","Change Banner","profile-change-banner",
                   (uint)(byte)(__this->fields)._isMine,"Account",0.0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41eb790

void Gisketch_Aottg2UI_Game_AottgProfileCard__<Build>b__3_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704f32 == '\0') {
    il2cpp_init_method_metadata(&"profile-edit-details");
    il2cpp_init_method_metadata(&"Account");
    il2cpp_init_method_metadata(&"Edit profile details");
    il2cpp_init_method_metadata(&"profile-card-details-edit");
    il2cpp_init_method_metadata(&"Edit Details");
    DAT_05704f32 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (body,"profile-card-details-edit","Edit profile details","Edit Details","profile-edit-details",
             (uint)(byte)(__this->fields)._isMine,"Account",72.0,in_stack_ffffffffffffffe0);
  bVar1 = (byte)(__this->fields)._isMine;
  method_01 = (MethodInfo *)(ulong)bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity(body,(uint)bVar1,method_00);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails(body,method_01);
  return;
}



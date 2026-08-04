// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileCard.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor (const MethodInfo* method);
// 0x451cb50

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee0b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, const MethodInfo* method);
// 0x451cbc0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x451cbd0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *names,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  MethodInfo *pMVar8;
  
  if (g_data_057aee0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__4_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile.characterName");
    il2cpp_runtime_helper_023445d0(&"profile-card-handle-row");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-player-name-skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-player-name");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee0c = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (names,pSVar2,"profileCardName","profile-card-player-name","profile.characterName","profile-card-player-name-skeleton",pGVar5,pMVar8);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(26.0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (names,pSVar2,pSVar6,"profile-card-handle-row",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.accountName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardHandle");
    il2cpp_runtime_helper_023445d0(&"profile-card-auth-handle-skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-auth-handle");
    il2cpp_runtime_helper_023445d0(&"profile.characterInfoJson");
    il2cpp_runtime_helper_023445d0(&"profile-card-badges");
    g_data_057aee0d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  __this_01 = "profile-card-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"profile-card-badges",20.0,4.0,"profile.characterInfoJson","profile.identity.ready",(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar7,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
              (pGVar7,pSVar2,"profileCardHandle","profile-card-auth-handle","profile.accountName",_DAT_055e06a8,pGVar5,pMVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials");
    il2cpp_runtime_helper_023445d0(&"profile-card-about");
    g_data_057aee0e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,pSVar2,pSVar6,"profile-card-about",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,pSVar2,pSVar6,"profile-card-socials",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"profile.bio");
    il2cpp_runtime_helper_023445d0(&"profile-card-bio");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee0f = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (pGVar7,pSVar2,"profileCardBodyText","profile-card-bio","profile.bio","profile-card-bio-skeleton",pGVar5,pMVar8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* handle, const MethodInfo* method);
// 0x451cee0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *handle
               ,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *ui;
  MethodInfo *pMVar7;
  
  if (g_data_057aee0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.accountName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardHandle");
    il2cpp_runtime_helper_023445d0(&"profile-card-auth-handle-skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-auth-handle");
    il2cpp_runtime_helper_023445d0(&"profile.characterInfoJson");
    il2cpp_runtime_helper_023445d0(&"profile-card-badges");
    g_data_057aee0d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  __this_01 = "profile-card-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"profile-card-badges",20.0,4.0,"profile.characterInfoJson","profile.identity.ready",(MethodInfo *)0x0);
  if (handle != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (handle,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pMVar7 = (MethodInfo *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
              (handle,pSVar2,"profileCardHandle","profile-card-auth-handle","profile.accountName",_DAT_055e06a8,pGVar5,pMVar7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials");
    il2cpp_runtime_helper_023445d0(&"profile-card-about");
    g_data_057aee0e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,pSVar2,pSVar6,"profile-card-about",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,pSVar2,pSVar6,"profile-card-socials",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"profile.bio");
    il2cpp_runtime_helper_023445d0(&"profile-card-bio");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee0f = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  pMVar7 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (ui,pSVar2,"profileCardBodyText","profile-card-bio","profile.bio","profile-card-bio-skeleton",pGVar5,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x451d0c0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *ui;
  MethodInfo *method_00;
  
  if (g_data_057aee0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials");
    il2cpp_runtime_helper_023445d0(&"profile-card-about");
    g_data_057aee0e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = "default";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar6,pSVar2,"profile-card-about",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar2);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar6,pSVar2,"profile-card-socials",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"profile.bio");
    il2cpp_runtime_helper_023445d0(&"profile-card-bio");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee0f = '\x01';
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (ui,pSVar6,"profileCardBodyText","profile-card-bio","profile.bio","profile-card-bio-skeleton",pGVar5,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* about, const MethodInfo* method);
// 0x451d410

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *about,
               MethodInfo *method)

{
  System_String_o *fallback;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  MethodInfo *method_00;
  
  if (g_data_057aee0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"profile.bio");
    il2cpp_runtime_helper_023445d0(&"profile-card-bio");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee0f = '\x01';
  }
  fallback = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  skeletonLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                  (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                  (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (about,fallback,"profileCardBodyText","profile-card-bio","profile.bio","profile-card-bio-skeleton",skeletonLayout,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x451d550

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_array *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o **ppSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar19;
  int __this_00;
  long lStack_300;
  uint uStack_2fc;
  
  if (g_data_057aee10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials-skeletons");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials-ready");
    g_data_057aee10 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar8 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (socials,(System_String_o *)pGVar8,pSVar3,"profile-card-socials-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar17 = pGVar8;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).motion = pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion);
      pSVar13 = "profile.identity.ready";
      if (g_data_057aee05 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aee05 = '\x01';
      }
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).alignItems = pSVar13;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems,pSVar13);
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar17 = "default";
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (socials,(System_String_o *)pGVar17,pSVar3,"profile-card-socials-skeletons",pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
          if (g_data_057aee07 == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aee07 = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          (pGVar6->fields).motion = pGVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion);
          pSVar13 = "profile.identity.loading";
          if (g_data_057aee05 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aee05 = '\x01';
          }
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar8->fields).alignItems = pSVar13;
            il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems,pSVar13);
            (pGVar6->fields).contentLayout = pGVar8;
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar17;
  if (g_data_057aee11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"No social links yet.");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee11 = '\x01';
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0451dd59;
  pMVar16 = (MethodInfo *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,"No social links yet.","profileCardBodyText",
                      (System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
  pGVar5 = "profile.socials.empty";
  if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0451dd59;
  (pGVar10->fields).alignItems = (System_String_o *)"profile.socials.empty";
  il2cpp_runtime_helper_022b4080();
  pGVar8 = pGVar5;
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0451dd59;
  (pGVar6->fields).contentLayout = pGVar10;
  il2cpp_runtime_helper_022b4080();
  pGVar8 = pGVar10;
  if (pSVar9 == (System_String_array *)0x0) goto label_0451dd59;
  if ((int)pSVar9->max_length < 1) {
    ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
label_0451db86:
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,0,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 2) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 1;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x1;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,1,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 3) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar9->max_length & 0xffffffff) < 3) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 2;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x2;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,2,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 4) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar9->max_length & 0xfffffffc) == 0) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 3;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,3,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 5) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar9->max_length & 0xffffffff) < 5) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 4;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&g_data_00000004;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,4,*ppSVar11,pMVar16);
    uVar2 = (uint)pSVar9->max_length;
    if ((int)uVar2 < 6) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((uVar2 & 0xfffffffe) < 6) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 5;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&g_data_00000005;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,5,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 7) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar9->max_length & 0xffffffff) < 7) goto label_0451dd54;
      ppSVar11 = pSVar9->m_Items + 6;
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x6;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,6,*ppSVar11,pMVar16);
    if ((int)pSVar9->max_length < 8) {
      ppSVar11 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
label_0451dd39:
      Gisketch_Aottg2UI_Game_AottgProfileCard__Social
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,7,*ppSVar11,pMVar16);
      return;
    }
    if ((pSVar9->max_length & 0xfffffff8) != 0) {
      ppSVar11 = pSVar9->m_Items + 7;
      goto label_0451dd39;
    }
  }
  else if ((pSVar9->max_length & 0xffffffff) != 0) {
    ppSVar11 = pSVar9->m_Items;
    goto label_0451db86;
  }
label_0451dd54:
  il2cpp_runtime_helper_022b2ca0();
  pGVar8 = pGVar10;
label_0451dd59:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee12 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials-skeleton-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee12 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar17 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,"profile-card-socials-skeleton-0",pGVar5,"skeleton",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,"profile-card-socials-skeleton-1",pGVar17,"skeleton",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__4_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarFrame");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee13 = '\x01';
  }
  pSVar13 = "profileCardAvatarFrame";
  pSVar3 = (System_Action_AottgUi__o *)(pGVar17->fields).alignItems;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar17->fields).alignItems = (System_String_o *)pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar17->fields).alignItems,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Column";
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,86.0,0.0
                       ,0.0,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,pSVar13,pSVar3,"profile-card-avatar-frame",pGVar17,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar8 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
    }
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,(System_String_o *)pGVar8,pSVar3,"profile-card-name-stack",pGVar17,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__3);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee14 = '\x01';
  }
  pSVar13 = "profileCardAvatarBg";
  pSVar3 = (System_Action_AottgUi__o *)(pGVar8->fields).justify;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar8->fields).justify = (System_String_o *)pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).justify,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar8 = "Column";
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar19,pSVar13,pSVar3,"profile-card-avatar-bg",pGVar17,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar17 = "Column";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,"profile-card-avatar-skeleton",pGVar10,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pMVar16 = (MethodInfo *)0x0;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    pGVar17 = pGVar5;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)pGVar18,"profileCardAvatarImage",
                        "profile-card-avatar",pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).motion = pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar17 = pGVar10;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar10->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).justify);
        (pGVar10->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).alignItems);
        (pGVar6->fields).contentLayout = pGVar10;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar10);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,"profile-card-avatar-edit","Change avatar","Change Avatar",
                   "profile-change-avatar",(uint)*(byte *)&(pGVar8->fields).direction,"Account",0.0,pMVar16);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_00 = (int)pGVar17 + 0x10;
  pSVar13 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar13,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_300 = (ulong)uStack_2fc << 0x20;
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar12,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar18,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar13,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = "default";
    pSVar3 = (System_Action_AottgUi__o *)(pGVar17->fields).alignItems;
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar17->fields).alignItems = (System_String_o *)pSVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar17->fields).alignItems);
    }
    pSVar13 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar13,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_300 = 0;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar12,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,(System_String_o *)pGVar8,pSVar3,pSVar13,pGVar17,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar13 = (pGVar8->fields).justify;
  pSVar14 = System_Int32__ToString((int)pGVar8 + 0x10,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar14,(MethodInfo *)0x0);
  lStack_300 = CONCAT44(*(int32_t *)&(pGVar8->fields).direction,(undefined4)lStack_300);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar15 = System_Int32__ToString((int32_t)&uStack_2fc,(MethodInfo *)0x0);
  pSVar15 = System_String__Concat_3ae5ba0("profile.social.",pSVar15,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar19,pSVar13,"profileCardSocialText",pSVar14,pSVar15,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar13 = System_Int32__ToString((int32_t)&stack0xfffffffffffffcec,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* readySocials, const MethodInfo* method);
// 0x451da60

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *readySocials,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o **ppSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_Action_AottgUi__o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  System_String_o *pSVar16;
  MethodInfo *pMVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar19;
  int __this_00;
  long lStack_278;
  uint uStack_274;
  
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)readySocials;
  if (g_data_057aee11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"No social links yet.");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee11 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  if (readySocials == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0451dd59;
  pMVar17 = (MethodInfo *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (readySocials,"No social links yet.","profileCardBodyText",(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
  pGVar9 = "profile.socials.empty";
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0451dd59;
  (pGVar5->fields).alignItems = (System_String_o *)"profile.socials.empty";
  il2cpp_runtime_helper_022b4080();
  pGVar11 = pGVar9;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0451dd59;
  (pGVar4->fields).contentLayout = pGVar5;
  il2cpp_runtime_helper_022b4080();
  pGVar11 = pGVar5;
  if (pSVar3 == (System_String_array *)0x0) goto label_0451dd59;
  if ((int)pSVar3->max_length < 1) {
    ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
label_0451db86:
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,0,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 2) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar3->max_length & 0xfffffffe) == 0) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 1;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x1;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,1,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 3) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar3->max_length & 0xffffffff) < 3) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 2;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x2;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,2,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 4) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar3->max_length & 0xfffffffc) == 0) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 3;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,3,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 5) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar3->max_length & 0xffffffff) < 5) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 4;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&g_data_00000004;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,4,*ppSVar6,pMVar17);
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar2 < 6) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((uVar2 & 0xfffffffe) < 6) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 5;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&g_data_00000005;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,5,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 7) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if ((pSVar3->max_length & 0xffffffff) < 7) goto label_0451dd54;
      ppSVar6 = pSVar3->m_Items + 6;
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x6;
    Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,6,*ppSVar6,pMVar17);
    if ((int)pSVar3->max_length < 8) {
      ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
label_0451dd39:
      Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,7,*ppSVar6,pMVar17);
      return;
    }
    if ((pSVar3->max_length & 0xfffffff8) != 0) {
      ppSVar6 = pSVar3->m_Items + 7;
      goto label_0451dd39;
    }
  }
  else if ((pSVar3->max_length & 0xffffffff) != 0) {
    ppSVar6 = pSVar3->m_Items;
    goto label_0451db86;
  }
label_0451dd54:
  il2cpp_runtime_helper_022b2ca0();
  pGVar11 = pGVar5;
label_0451dd59:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee12 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials-skeleton-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee12 = '\x01';
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar9 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,"profile-card-socials-skeleton-0",pGVar5,"skeleton",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,"profile-card-socials-skeleton-1",pGVar9,"skeleton",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__4_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarFrame");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee13 = '\x01';
  }
  pSVar14 = "profileCardAvatarFrame";
  pSVar10 = (System_Action_AottgUi__o *)(pGVar9->fields).alignItems;
  if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
    pSVar10 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar9->fields).alignItems = (System_String_o *)pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).alignItems,pSVar10);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar11 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,86.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,pSVar14,pSVar10,"profile-card-avatar-frame",pGVar9,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = "default";
    pSVar10 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar10;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar10);
    }
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,pSVar14,pSVar10,"profile-card-name-stack",pGVar11,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__3);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee14 = '\x01';
  }
  pSVar14 = "profileCardAvatarBg";
  pSVar10 = (System_Action_AottgUi__o *)(pGVar11->fields).justify;
  if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
    pSVar10 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar11->fields).justify = (System_String_o *)pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).justify,pSVar10);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar11 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar19,pSVar14,pSVar10,"profile-card-avatar-bg",pGVar9,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar9 = "Column";
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,"profile-card-avatar-skeleton",pGVar12,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pMVar17 = (MethodInfo *)0x0;
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    pGVar9 = pGVar5;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)pGVar18,"profileCardAvatarImage",
                        "profile-card-avatar",pGVar12,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                          ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).motion = pGVar13;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).motion);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar9 = pGVar12;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar12,(MethodInfo *)0x0);
      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar12->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar12->fields).justify);
        (pGVar12->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar12->fields).alignItems);
        (pGVar4->fields).contentLayout = pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar12);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,"profile-card-avatar-edit","Change avatar","Change Avatar",
                   "profile-change-avatar",(uint)*(byte *)&(pGVar11->fields).direction,"Account",0.0,pMVar17);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_00 = (int)pGVar9 + 0x10;
  pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar14,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_278 = (ulong)uStack_274 << 0x20;
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar11 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar18,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar14,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar14 = "default";
    pSVar10 = (System_Action_AottgUi__o *)(pGVar9->fields).alignItems;
    if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
      pSVar10 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar9->fields).alignItems = (System_String_o *)pSVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).alignItems);
    }
    pSVar15 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    pSVar15 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar15,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_278 = 0;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar8,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,pSVar14,pSVar10,pSVar15,pGVar11,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar14 = (pGVar11->fields).justify;
  pSVar15 = System_Int32__ToString((int)pGVar11 + 0x10,(MethodInfo *)0x0);
  pSVar15 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar15,(MethodInfo *)0x0);
  lStack_278 = CONCAT44(*(int32_t *)&(pGVar11->fields).direction,(undefined4)lStack_278);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar16 = System_Int32__ToString((int32_t)&uStack_274,(MethodInfo *)0x0);
  pSVar16 = System_String__Concat_3ae5ba0("profile.social.",pSVar16,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar19,pSVar14,"profileCardSocialText",pSVar15,pSVar16,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar14 = System_Int32__ToString((int32_t)&stack0xfffffffffffffd74,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar14,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loadingSocials, const MethodInfo* method);
// 0x451dd60

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loadingSocials,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar15;
  int __this_00;
  long lStack_250;
  uint uStack_24c;
  MethodInfo *method_00;
  
  if (g_data_057aee12 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-socials-skeleton-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee12 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (loadingSocials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-0",pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-1",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__4_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarFrame");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee13 = '\x01';
  }
  pSVar10 = "profileCardAvatarFrame";
  pSVar6 = (System_Action_AottgUi__o *)(pGVar5->fields).alignItems;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar5->fields).alignItems = (System_String_o *)pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems,pSVar6);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,86.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,pSVar10,pSVar6,"profile-card-avatar-frame",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar6);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,
                        1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,pSVar10,pSVar6,"profile-card-name-stack",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__3);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee14 = '\x01';
  }
  pSVar10 = "profileCardAvatarBg";
  pSVar6 = (System_Action_AottgUi__o *)(pGVar5->fields).justify;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar5->fields).justify = (System_String_o *)pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify,pSVar6);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar5 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar14,pSVar10,pSVar6,"profile-card-avatar-bg",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,"profile-card-avatar-skeleton",pGVar7,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = pGVar15;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,(System_String_o *)pGVar13,"profileCardAvatarImage",
                        "profile-card-avatar",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar8->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar8->fields).motion = pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = pGVar7;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar7->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify);
        (pGVar7->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).alignItems);
        (pGVar8->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar7);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,"profile-card-avatar-edit","Change avatar","Change Avatar",
                   "profile-change-avatar",(uint)*(byte *)&(pGVar5->fields).direction,"Account",0.0,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_00 = (int)pGVar4 + 0x10;
  pSVar10 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar10,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_250 = (ulong)uStack_24c << 0x20;
  pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = "Column";
  pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar13,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar10,pGVar15,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar10 = "default";
    pSVar6 = (System_Action_AottgUi__o *)(pGVar4->fields).alignItems;
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar4->fields).alignItems = (System_String_o *)pSVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
    }
    pSVar11 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar11,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_250 = 0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,pSVar10,pSVar6,pSVar11,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar10 = (pGVar5->fields).justify;
  pSVar11 = System_Int32__ToString((int)pGVar5 + 0x10,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar11,(MethodInfo *)0x0);
  lStack_250 = CONCAT44(*(int32_t *)&(pGVar5->fields).direction,(undefined4)lStack_250);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar12 = System_Int32__ToString((int32_t)&uStack_24c,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat_3ae5ba0("profile.social.",pSVar12,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar14,pSVar10,"profileCardSocialText",pSVar11,pSVar12,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar10 = System_Int32__ToString((int32_t)&stack0xfffffffffffffd9c,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar10,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x451ba90

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x451df50

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  int __this_01;
  long lStack_1d8;
  uint uStack_1d4;
  MethodInfo *method_00;
  
  if (g_data_057aee13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__4_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarFrame");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee13 = '\x01';
  }
  pSVar10 = "profileCardAvatarFrame";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (__this->fields).__9__1 = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1,pSVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,86.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar10,pSVar2,"profile-card-avatar-frame",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = "default";
    pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,
                        1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar10,pSVar2,"profile-card-name-stack",pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__3);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee14 = '\x01';
  }
  pSVar10 = "profileCardAvatarBg";
  pSVar2 = (System_Action_AottgUi__o *)(pGVar6->fields).justify;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (pGVar6->fields).justify = (System_String_o *)pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify,pSVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar6 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,pSVar10,pSVar2,"profile-card-avatar-bg",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,"profile-card-avatar-skeleton",pGVar7,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar5 = pGVar14;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)pGVar13,"profileCardAvatarImage",
                        "profile-card-avatar",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar8->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar8->fields).motion = pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = pGVar7;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar7->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify);
        (pGVar7->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).alignItems);
        (pGVar8->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar7);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,"profile-card-avatar-edit","Change avatar","Change Avatar",
                   "profile-change-avatar",(uint)*(byte *)&(pGVar6->fields).direction,"Account",0.0,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_01 = (int)pGVar5 + 0x10;
  pSVar10 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar10,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_1d8 = (ulong)uStack_1d4 << 0x20;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = "Column";
  pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (pGVar13,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar10,pGVar14,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar10 = "default";
    pSVar2 = (System_Action_AottgUi__o *)(pGVar5->fields).alignItems;
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar5->fields).alignItems = (System_String_o *)pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
    }
    pSVar11 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar11,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_1d8 = 0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,pSVar10,pSVar2,pSVar11,pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar10 = (pGVar6->fields).justify;
  pSVar11 = System_Int32__ToString((int)pGVar6 + 0x10,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar11,(MethodInfo *)0x0);
  lStack_1d8 = CONCAT44(*(int32_t *)&(pGVar6->fields).direction,(undefined4)lStack_1d8);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar12 = System_Int32__ToString((int32_t)&uStack_1d4,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat_3ae5ba0("profile.social.",pSVar12,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_00,pSVar10,"profileCardSocialText",pSVar11,pSVar12,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar10 = System_Int32__ToString((int32_t)&stack0xfffffffffffffe14,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar10,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x451e250

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  int __this_02;
  long lStack_150;
  uint uStack_14c;
  MethodInfo *method_00;
  
  if (g_data_057aee14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__3);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee14 = '\x01';
  }
  pSVar8 = "profileCardAvatarBg";
  pSVar1 = (__this->fields).__9__3;
  if (pSVar1 == (System_Action_AottgUi__o *)0x0) {
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (__this->fields).__9__3 = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__9__3,pSVar1);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar10 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,pSVar8,pSVar1,"profile-card-avatar-bg",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,"profile-card-avatar-skeleton",pGVar5,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = pGVar12;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,(System_String_o *)__this_00,"profileCardAvatarImage",
                        "profile-card-avatar",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).motion = pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
        (pGVar5->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,"profile-card-avatar-edit","Change avatar","Change Avatar",
                   "profile-change-avatar",(uint)*(byte *)&(pGVar10->fields).direction,"Account",0.0,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_02 = (int)pGVar4 + 0x10;
  pSVar8 = System_Int32__ToString(__this_02,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar8,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_150 = (ulong)uStack_14c << 0x20;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar10 = "Column";
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_00,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar8,pGVar12,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar8 = "default";
    pSVar1 = (System_Action_AottgUi__o *)(pGVar4->fields).alignItems;
    if (pSVar1 == (System_Action_AottgUi__o *)0x0) {
      pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar4->fields).alignItems = (System_String_o *)pSVar1;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
    }
    pSVar9 = System_Int32__ToString(__this_02,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar9,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_150 = 0;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_00,pSVar8,pSVar1,pSVar9,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar8 = (pGVar10->fields).justify;
  pSVar9 = System_Int32__ToString((int)pGVar10 + 0x10,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar9,(MethodInfo *)0x0);
  lStack_150 = CONCAT44(*(int32_t *)&(pGVar10->fields).direction,(undefined4)lStack_150);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar11 = System_Int32__ToString((int32_t)&uStack_14c,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0("profile.social.",pSVar11,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_01,pSVar8,"profileCardSocialText",pSVar9,pSVar11,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar8 = System_Int32__ToString((int32_t)&stack0xfffffffffffffe9c,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x451e3e0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  int __this_02;
  long local_d8;
  uint uStack_d4;
  MethodInfo *method_00;
  
  if (g_data_057aee15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar-skeleton");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"profile-card-avatar");
    il2cpp_runtime_helper_023445d0(&"profile-change-avatar");
    il2cpp_runtime_helper_023445d0(&"Change avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee15 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (bg,"profile-card-avatar-skeleton",pGVar3,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)bg;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,(System_String_o *)__this_00,"profileCardAvatarImage","profile-card-avatar",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).motion = pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).motion);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar8 = pGVar3;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).justify = "profile.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).justify);
        (pGVar3->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (bg,"profile-card-avatar-edit","Change avatar","Change Avatar","profile-change-avatar",(uint)(byte)(__this->fields).isMine,
                   "Account",0.0,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_02 = (int)pGVar8 + 0x10;
  pSVar6 = System_Int32__ToString(__this_02,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar6,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  local_d8 = (ulong)uStack_d4 << 0x20;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar3 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_00,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar6,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar6 = "default";
    build = (System_Action_AottgUi__o *)(pGVar8->fields).alignItems;
    if (build == (System_Action_AottgUi__o *)0x0) {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (pGVar8->fields).alignItems = (System_String_o *)build;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems);
    }
    pSVar7 = System_Int32__ToString(__this_02,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar7,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    local_d8 = 0;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_00,pSVar6,build,pSVar7,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar6 = (pGVar3->fields).justify;
  pSVar7 = System_Int32__ToString((int)pGVar3 + 0x10,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar7,(MethodInfo *)0x0);
  local_d8 = CONCAT44(*(int32_t *)&(pGVar3->fields).direction,(undefined4)local_d8);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar9 = System_Int32__ToString((int32_t)&uStack_d4,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0("profile.social.",pSVar9,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_01,pSVar6,"profileCardSocialText",pSVar7,pSVar9,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff14,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x451bf20

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x451e790

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_c *text;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  int __this_01;
  long lStack_60;
  uint uStack_5c;
  
  if (g_data_057aee16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-label-");
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-icon-");
    g_data_057aee16 = '\x01';
  }
  __this_01 = (int)__this + 0x10;
  pSVar1 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3ae5ba0("profile-card-social-icon-",pSVar1,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  lStack_60 = (ulong)uStack_5c << 0x20;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar1 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar2,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "default";
    build = (__this->fields).__9__1;
    if (build == (System_Action_AottgUi__o *)0x0) {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (__this->fields).__9__1 = build;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1);
    }
    pSVar2 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_3ae5ba0("profile-card-social-label-",pSVar2,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    lStack_60 = 0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        minWidth,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,build,pSVar2,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  text = pSVar1[1].klass;
  pSVar2 = System_Int32__ToString((int)pSVar1 + 0x10,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar2,(MethodInfo *)0x0);
  lStack_60 = CONCAT44((pSVar1->fields)._stringLength,(undefined4)lStack_60);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)&uStack_5c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("profile.social.",pSVar1,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_00,(System_String_o *)text,"profileCardSocialText",pSVar2,pSVar1,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x451ea30

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  undefined4 uVar5;
  undefined8 uStackY_40;
  int32_t iStack_24;
  System_String_o *pSVar6;
  
  if (g_data_057aee17 == '\0') {
    uStackY_40 = 0x451ea56;
    il2cpp_runtime_helper_023445d0(&"profileCardSocialText");
    uStackY_40 = 0x451ea62;
    il2cpp_runtime_helper_023445d0(&"profile-card-social-text-");
    g_data_057aee17 = '\x01';
  }
  pSVar4 = (__this->fields).value;
  uStackY_40 = 0x451ea78;
  pSVar2 = System_Int32__ToString((int)__this + 0x10,(MethodInfo *)0x0);
  uStackY_40 = 0x451ea8c;
  pSVar2 = System_String__Concat_3ae5ba0("profile-card-social-text-",pSVar2,(MethodInfo *)0x0);
  iStack_24 = (__this->fields).index;
  if (g_data_057aee95 == '\0') {
    uStackY_40 = 0x451eaab;
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  uStackY_40 = 0x451eabe;
  pSVar3 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
  uStackY_40 = 0x451ead2;
  pSVar6 = "profile.social.";
  pSVar3 = System_String__Concat_3ae5ba0("profile.social.",pSVar3,(MethodInfo *)0x0);
  uVar5 = SUB84(pSVar6,0);
  if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uStackY_40 = 0x451eafd;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (label,pSVar4,"profileCardSocialText",pSVar2,pSVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  uStackY_40 = 0x451eb0e;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStackY_40 = CONCAT44(uVar5,uVar1);
  if (g_data_057aee95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.social.");
    g_data_057aee95 = '\x01';
  }
  pSVar4 = System_Int32__ToString((int)&uStackY_40 + 4,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("profile.social.",pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x451c430

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$<AddEditOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* overlay, const MethodInfo* method);
// 0x451eb60

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0
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
  
  if (g_data_057aee18 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialog.");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    il2cpp_runtime_helper_023445d0(&"-button");
    il2cpp_runtime_helper_023445d0(&"account");
    g_data_057aee18 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  actionId = System_String__Concat_3ae5ba0("dialog.",(__this->fields).dialogId,(MethodInfo *)0x0);
  id = System_String__Concat_3ae5ba0((__this->fields).id,"-button",(MethodInfo *)0x0);
  if (overlay != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (overlay,4,text,actionId,id,(__this->fields).tooltip,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",(MethodInfo *)0x0)
    ;
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_helper_022b4080(&(node->fields).search,pGVar1);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,(__this->fields).searchTitle,(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                 "account",(__this->fields).sectionTitle,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Change Avatar");
    g_data_057aee19 = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, bool isMine, const MethodInfo* method);
// 0x451b770

void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,bool_conflict isMine,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._isMine = (char)isMine;
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Build (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x451b790

void Gisketch_Aottg2UI_Game_AottgProfileCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *__this_00;
  undefined1 uVar4;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *__this_02;
  
  if (g_data_057aee00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card");
    il2cpp_runtime_helper_023445d0(&"profileCard");
    g_data_057aee00 = '\x01';
  }
  pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar4 = 0;
  __this_01 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"profileCard",pSVar1,"profile-card",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"profile-card-identity");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aee01 = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_02 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    *(undefined1 *)&(__this_00->fields)._stringLength = uVar4;
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_02 = "Row";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                        (System_String_o *)0x0,24.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_01,"default",pSVar1,"profile-card-identity",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildIdentity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity (Gisketch_Aottg2UI_Code_AottgUi_o* body, bool isMine, const MethodInfo* method);
// 0x451b8f0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,bool_conflict isMine,MethodInfo *method)

{
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_00;
  
  if (g_data_057aee01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildIdentity_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"profile-card-identity");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aee01 = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    *(char *)&(__this->fields)._stringLength = (char)isMine;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_00 = "Row";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                        (System_String_o *)0x0,24.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"default",build,"profile-card-identity",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x451baa0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  int32_t iVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  int32_t iStack_9c;
  System_Action_AottgUi__o *pSStack_98;
  System_String_o *pSStack_90;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_88;
  System_String_o *pSVar8;
  
  if (g_data_057aee02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildDetails_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"profile-card-columns");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aee02 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = "default";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar8 = "SpaceBetween";
  __this_00 = "Row";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row","SpaceBetween","FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,48.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,56.0,0.0,
                      1.0,(MethodInfo *)0x0);
  iVar7 = (int32_t)pSVar8;
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar5,pSVar2,"profile-card-columns",pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = pSVar5;
  pSStack_98 = pSVar2;
  pGStack_88 = body;
  if (g_data_057aee03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-");
    g_data_057aee03 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  __this_01 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    *(int32_t *)&(__this->fields)._children = iVar7;
    (__this->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._actions,extraout_RDX);
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar5 = System_Int32__ToString((int32_t)&__this->fields,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("profile-card-social-",pSVar5,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_01 = "Row";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (__this_00,"default",pSVar2,pSVar5,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      iStack_9c = *(int32_t *)&(__this->fields)._children;
      if (g_data_057aee96 == '\0') {
        il2cpp_runtime_helper_023445d0(&"profile.social.");
        il2cpp_runtime_helper_023445d0(&".visible");
        g_data_057aee96 = '\x01';
      }
      pSVar5 = System_Int32__ToString((int32_t)&iStack_9c,(MethodInfo *)0x0);
      __this_01 = "profile.social.";
      pSVar5 = System_String__Concat_3af7150
                         ((System_String_o *)"profile.social.",pSVar5,".visible",(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar4->fields).alignItems;
        (pGVar4->fields).alignItems = pSVar5;
        il2cpp_runtime_helper_022b4080();
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Social
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Social (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x451bc90

void Gisketch_Aottg2UI_Game_AottgProfileCard__Social
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  int32_t local_24;
  
  if (g_data_057aee03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Social_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-card-social-");
    g_data_057aee03 = '\x01';
  }
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar2 = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    (pSVar1->fields)._stringLength = index;
    pSVar1[1].klass = (System_String_c *)value;
    il2cpp_runtime_helper_022b4080(pSVar1 + 1,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar2 = System_Int32__ToString((int32_t)&pSVar1->fields,(MethodInfo *)0x0);
    id = System_String__Concat_3ae5ba0("profile-card-social-",pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar2 = "Row";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",build,id,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      local_24 = (pSVar1->fields)._stringLength;
      if (g_data_057aee96 == '\0') {
        il2cpp_runtime_helper_023445d0(&"profile.social.");
        il2cpp_runtime_helper_023445d0(&".visible");
        g_data_057aee96 = '\x01';
      }
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar2 = "profile.social.";
      pSVar1 = System_String__Concat_3af7150("profile.social.",pSVar1,".visible",(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pSVar2 = (System_String_o *)&(pGVar3->fields).alignItems;
        (pGVar3->fields).alignItems = pSVar1;
        il2cpp_runtime_helper_022b4080();
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar4->fields).contentLayout = pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BoundProfileText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fallback, System_String_o* style, System_String_o* id, System_String_o* textKey, System_String_o* skeletonId, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* skeletonLayout, const MethodInfo* method);
// 0x451bf90

void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fallback,System_String_o *style,
               System_String_o *id,System_String_o *textKey,System_String_o *skeletonId,
               Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (g_data_057aee04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    g_data_057aee04 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,fallback,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar1->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).motion = pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion);
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this->fields).direction = textKey;
        il2cpp_runtime_helper_022b4080(&__this->fields,textKey);
        (__this->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(__this->fields).alignItems);
        (pGVar1->fields).contentLayout = __this;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,__this);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (ui,skeletonId,skeletonLayout,"skeleton","profile.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aee07 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgUi__Motion("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__Visible (System_String_o* key, const MethodInfo* method);
// 0x451c180

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__Visible(System_String_o *key,MethodInfo *method)

{
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  void *in_RCX;
  Il2CppClass *extraout_RDX;
  Il2CppClass *unaff_RBX;
  void *pvVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Il2CppObject *__this_02;
  Il2CppClass *in_R8;
  char in_R9B;
  float offsetX;
  
  if (g_data_057aee05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aee05 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pvVar2 = (void *)0x0;
  __this_01 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    il2cpp_runtime_helper_022b4080(&(__this->fields).visible,key);
    return __this;
  }
  offsetX = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddEditOverlay_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aee06 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = in_R8;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,in_R8);
    __this_00[1].monitor = pvVar2;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pvVar2);
    __this_00[2].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,extraout_RDX);
    __this_00[2].monitor = in_RCX;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,in_RCX);
    __this_00[3].klass = unaff_RBX;
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_022b4080(__this_00 + 3,unaff_RBX);
    if (in_R9B != '\0') {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      id = __this_00[1].monitor;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexEnd","Absolute",(System_String_o *)0x0
                          ,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0,offsetX,
                          0.0,0.0,1.0,(MethodInfo *)0x0);
      __this_02 = (Il2CppObject *)0x0;
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_0451c41f;
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,"default",build,id,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1;
  }
label_0451c41f:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$AddEditOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* dialogId, bool isMine, System_String_o* sectionTitle, float offsetX, const MethodInfo* method);
// 0x451c1f0

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
  Il2CppObject *__this_00;
  char local_3c;
  
  if (g_data_057aee06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddEditOverlay_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aee06 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)dialogId;
    il2cpp_runtime_helper_022b4080(__this + 1,dialogId);
    __this[1].monitor = id;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor,id);
    __this[2].klass = (Il2CppClass *)tooltip;
    il2cpp_runtime_helper_022b4080(__this + 2,tooltip);
    __this[2].monitor = searchTitle;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,searchTitle);
    __this[3].klass = (Il2CppClass *)sectionTitle;
    il2cpp_runtime_helper_022b4080(__this + 3,sectionTitle);
    local_3c = (char)isMine;
    if (local_3c != '\0') {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      id_00 = __this[1].monitor;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexEnd","Absolute",(System_String_o *)0x0
                          ,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0,offsetX,
                          0.0,0.0,1.0,(MethodInfo *)0x0);
      __this_00 = (Il2CppObject *)0x0;
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0451c41f;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,id_00,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_0451c41f:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion (const MethodInfo* method);
// 0x451c130

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aee07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aee07 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x451c440

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *card,
               MethodInfo *method)

{
  byte bVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *ui;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  MethodInfo *in_stack_fffffffffffffee0;
  
  if (g_data_057aee08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_2);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-body");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"profileCardBody");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner");
    il2cpp_runtime_helper_023445d0(&"profileCardBanner");
    g_data_057aee08 = '\x01';
  }
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  pGVar7 = "Center";
  pGVar11 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3
                      ,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = "profileCardBanner";
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)card;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)"profileCardBanner",pSVar2,"profile-card-banner",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
      pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,24.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,36.0,0.0,0.0,0.0,0.0,32.0,0.0,0.0
                          ,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profileCardBody",pSVar2,"profile-card-body",pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-image");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-skeleton");
    il2cpp_runtime_helper_023445d0(&"Change banner");
    il2cpp_runtime_helper_023445d0(&"profileCardBannerImage");
    il2cpp_runtime_helper_023445d0(&"profile-change-banner");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Change Banner");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee09 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,"profile-card-banner-skeleton",pGVar8,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)
         Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pMVar10 = (MethodInfo *)0x0;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    pGVar5 = pGVar7;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,(System_String_o *)ui,"profileCardBannerImage",
                        "profile-card-banner-image",pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).motion = pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).justify = "profile.bannerSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).justify);
        (pGVar8->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems);
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,"profile-card-banner-edit","Change banner","Change Banner",
                   "profile-change-banner",(uint)*(byte *)&(pGVar11->fields).direction,"Account",0.0,pMVar10);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0a == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-edit-details");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Edit profile details");
    il2cpp_runtime_helper_023445d0(&"profile-card-details-edit");
    il2cpp_runtime_helper_023445d0(&"Edit Details");
    g_data_057aee0a = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (ui,"profile-card-details-edit","Edit profile details","Edit Details","profile-edit-details",(uint)*(byte *)&(pGVar5->fields).direction
             ,"Account",72.0,in_stack_fffffffffffffee0);
  bVar1 = *(byte *)&(pGVar5->fields).direction;
  pMVar10 = (MethodInfo *)(ulong)bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity(ui,(uint)bVar1,method_00);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails(ui,pMVar10);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x451c6e0

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *banner,
               MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *ui;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  MethodInfo *in_stack_ffffffffffffff68;
  
  if (g_data_057aee09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"profile.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-image");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-skeleton");
    il2cpp_runtime_helper_023445d0(&"Change banner");
    il2cpp_runtime_helper_023445d0(&"profileCardBannerImage");
    il2cpp_runtime_helper_023445d0(&"profile-change-banner");
    il2cpp_runtime_helper_023445d0(&"profile-card-banner-edit");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Change Banner");
    il2cpp_runtime_helper_023445d0(&"profile.identity.loading");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee09 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (banner,"profile-card-banner-skeleton",pGVar4,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)
         Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pMVar7 = (MethodInfo *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)banner;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,(System_String_o *)ui,"profileCardBannerImage","profile-card-banner-image",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
      if (g_data_057aee07 == '\0') {
        il2cpp_runtime_helper_023445d0(&"fade");
        g_data_057aee07 = '\x01';
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar5->fields).motion = pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).motion);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar8 = pGVar4;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).justify = "profile.bannerSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).justify);
        (pGVar4->fields).alignItems = "profile.identity.ready";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (banner,"profile-card-banner-edit","Change banner","Change Banner","profile-change-banner",
                   (uint)(byte)(__this->fields)._isMine,"Account",0.0,pMVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee0a == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-edit-details");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Edit profile details");
    il2cpp_runtime_helper_023445d0(&"profile-card-details-edit");
    il2cpp_runtime_helper_023445d0(&"Edit Details");
    g_data_057aee0a = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (ui,"profile-card-details-edit","Edit profile details","Edit Details","profile-edit-details",(uint)*(byte *)&(pGVar8->fields).direction
             ,"Account",72.0,in_stack_ffffffffffffff68);
  bVar1 = *(byte *)&(pGVar8->fields).direction;
  pMVar7 = (MethodInfo *)(ulong)bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity(ui,(uint)bVar1,method_00);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails(ui,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x451ca90

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057aee0a == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-edit-details");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Edit profile details");
    il2cpp_runtime_helper_023445d0(&"profile-card-details-edit");
    il2cpp_runtime_helper_023445d0(&"Edit Details");
    g_data_057aee0a = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (body,"profile-card-details-edit","Edit profile details","Edit Details","profile-edit-details",(uint)(byte)(__this->fields)._isMine,
             "Account",72.0,in_stack_ffffffffffffffe0);
  bVar1 = (byte)(__this->fields)._isMine;
  method_01 = (MethodInfo *)(ulong)bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity(body,(uint)bVar1,method_00);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails(body,method_01);
  return;
}



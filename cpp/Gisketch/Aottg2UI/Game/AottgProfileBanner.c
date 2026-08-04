// Type: Gisketch.Aottg2UI.Game.AottgProfileBanner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileBanner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor (const MethodInfo* method);
// 0x44f1370

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec80 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, const MethodInfo* method);
// 0x44f13e0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedOut, const MethodInfo* method);
// 0x44f13f0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedOut,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  if (g_data_057aec81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"account-banner-logged-out-content");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    g_data_057aec81 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  }
  pGVar10 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedOut != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (loggedOut,pSVar2,pSVar3,"account-banner-logged-out-content",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aec82 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.LoggedOut");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Logged Out");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    il2cpp_runtime_helper_023445d0(&"account-logged-out-status");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    il2cpp_runtime_helper_023445d0(&"account-login-open");
    g_data_057aec82 = '\x01';
  }
  if ((pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar11 = "Logged Out",
     pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (pGVar10,(System_String_o *)"Logged Out","accountBannerSubtext","account-logged-out-status",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar5->fields).textKey = "MainMenu.Account.LoggedOut";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar10,0,"Sign In","account.openLogin","account-login-open",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-content");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    g_data_057aec83 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
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
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar2,pSVar3,"account-banner-offline-content",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account-offline-banner-top");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOnline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account-go-online");
    il2cpp_runtime_helper_023445d0(&"account.goOnlineCta");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec84 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar11 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-offline-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar10,0,"Go Online","account.goOnline","account-go-online",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (g_data_057aec78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aec78 = '\x01';
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      pMVar9 = "MainMenu.Account.GoOnline";
      (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOnline";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",pMVar9);
      (pGVar5->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-name-column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-offline-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec85 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar2,pSVar3,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar11,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar12 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      pGVar11 = pGVar12;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
        (pGVar5->fields).motion = pGVar7;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        pGVar11 = "Offline Mode";
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar5->fields).textKey;
          (pGVar5->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar11 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec89 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"gear");
        il2cpp_runtime_helper_023445d0(&"Common.Edit");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"Stretch");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"account-profile-edit");
        il2cpp_runtime_helper_023445d0(&"main.profile");
        il2cpp_runtime_helper_023445d0(&"Edit");
        il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
        il2cpp_runtime_helper_023445d0(&"account.auth.idle");
        g_data_057aec89 = '\x01';
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pGVar11,pSVar2,pSVar3,"account-banner-name-column",pGVar4,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                            (MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).textKey = "Common.Edit";
          il2cpp_runtime_helper_022b4080();
          if (g_data_057aec77 == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec77 = '\x01';
          }
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
          pSVar2 = "account.auth.idle";
          if (g_data_057aec7c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7c = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).alignSelf = pSVar2;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pGVar11 = pGVar10;
      if (g_data_057aec8a == '\0') {
        il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
        il2cpp_runtime_helper_023445d0(&"Account");
        il2cpp_runtime_helper_023445d0(&"account.identity.ready");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
        il2cpp_runtime_helper_023445d0(&"account.identity.loading");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
        il2cpp_runtime_helper_023445d0(&"skeleton");
        il2cpp_runtime_helper_023445d0(&"Scout");
        il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
        il2cpp_runtime_helper_023445d0(&"accountBannerName");
        il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
        g_data_057aec8a = '\x01';
      }
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.ingameDisplayName";
        pGVar12 = "account.identity.ready";
        if (g_data_057aec7d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7d = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).direction = pSVar2;
          il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
          (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          pGVar11 = pGVar12;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
            if (g_data_057aec7f == '\0') {
              il2cpp_runtime_helper_023445d0(&"fade");
              g_data_057aec7f = '\x01';
            }
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
            pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
            (pGVar5->fields).motion = pGVar7;
            il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
            (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
            if (g_data_057aec7b == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057aec7b = '\x01';
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (pGVar10,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                               (pGVar10,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar12 = "account.identity.ready";
            pSVar2 = "account.authDisplayName";
            if (g_data_057aec7d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec7d = '\x01';
            }
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar4->fields).direction = pSVar2;
              il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
              (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
              il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
              pGVar11 = pGVar12;
              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar5->fields).contentLayout = pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
                *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
                if (g_data_057aec7f == '\0') {
                  il2cpp_runtime_helper_023445d0(&"fade");
                  g_data_057aec7f = '\x01';
                }
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                   ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
                pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
                (pGVar5->fields).motion = pGVar7;
                il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
                pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
                (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
                if (g_data_057aec7b == '\0') {
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aec7b = '\x01';
                }
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                          (pGVar10,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec8b == '\0') {
        il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
        il2cpp_runtime_helper_023445d0(&"account-go-offline");
        il2cpp_runtime_helper_023445d0(&"account.logoutCta");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
        il2cpp_runtime_helper_023445d0(&"account-logout");
        il2cpp_runtime_helper_023445d0(&"Logout");
        il2cpp_runtime_helper_023445d0(&"account.goOffline");
        il2cpp_runtime_helper_023445d0(&"Go Offline");
        il2cpp_runtime_helper_023445d0(&"material-icons/logout");
        il2cpp_runtime_helper_023445d0(&"account.logout");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
        il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
        g_data_057aec8b = '\x01';
      }
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.GoOffline";
          (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
          (pGVar5->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (pGVar11,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                              (MethodInfo *)0x0);
          if (g_data_057aec79 == '\0') {
            il2cpp_runtime_helper_023445d0(&"Column");
            g_data_057aec79 = '\x01';
          }
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,0.0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
            pMVar9 = "MainMenu.Account.Logout";
            (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                     Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = extraout_RDX;
      if (g_data_057aec8c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
        il2cpp_runtime_helper_023445d0(&"Create Account");
        g_data_057aec8c = '\x01';
        pMVar9 = extraout_RDX_00;
      }
      if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar11,pSVar2,pSVar3,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x44f15e0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  pGVar11 = content;
  if (g_data_057aec82 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.LoggedOut");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Logged Out");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    il2cpp_runtime_helper_023445d0(&"account-logged-out-status");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    il2cpp_runtime_helper_023445d0(&"account-login-open");
    g_data_057aec82 = '\x01';
  }
  if ((content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar11 = "Logged Out",
     pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (content,(System_String_o *)"Logged Out","accountBannerSubtext","account-logged-out-status",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar3->fields).textKey = "MainMenu.Account.LoggedOut";
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (content,0,"Sign In","account.openLogin","account-login-open",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-content");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    g_data_057aec83 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar5);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar2,pSVar5,"account-banner-offline-content",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account-offline-banner-top");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOnline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account-go-online");
    il2cpp_runtime_helper_023445d0(&"account.goOnlineCta");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec84 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar5);
  }
  pGVar11 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar5,"account-offline-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar10,0,"Go Online","account.goOnline","account-go-online",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (g_data_057aec78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aec78 = '\x01';
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      pMVar9 = "MainMenu.Account.GoOnline";
      (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.GoOnline";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",pMVar9);
      (pGVar3->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-name-column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-offline-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec85 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar5);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar2,pSVar5,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar11,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar12 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      pGVar11 = pGVar12;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
        (pGVar3->fields).motion = pGVar7;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
        pGVar11 = "Offline Mode";
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar3->fields).textKey;
          (pGVar3->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar5);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar5;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar5);
    }
    pGVar11 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec89 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"gear");
        il2cpp_runtime_helper_023445d0(&"Common.Edit");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"Stretch");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"account-profile-edit");
        il2cpp_runtime_helper_023445d0(&"main.profile");
        il2cpp_runtime_helper_023445d0(&"Edit");
        il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
        il2cpp_runtime_helper_023445d0(&"account.auth.idle");
        g_data_057aec89 = '\x01';
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar5);
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pGVar11,pSVar2,pSVar5,"account-banner-name-column",pGVar4,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                            (MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).textKey = "Common.Edit";
          il2cpp_runtime_helper_022b4080();
          if (g_data_057aec77 == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec77 = '\x01';
          }
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
          pSVar2 = "account.auth.idle";
          if (g_data_057aec7c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7c = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).alignSelf = pSVar2;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
            (pGVar3->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pGVar11 = pGVar10;
      if (g_data_057aec8a == '\0') {
        il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
        il2cpp_runtime_helper_023445d0(&"Account");
        il2cpp_runtime_helper_023445d0(&"account.identity.ready");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
        il2cpp_runtime_helper_023445d0(&"account.identity.loading");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
        il2cpp_runtime_helper_023445d0(&"skeleton");
        il2cpp_runtime_helper_023445d0(&"Scout");
        il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
        il2cpp_runtime_helper_023445d0(&"accountBannerName");
        il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
        g_data_057aec8a = '\x01';
      }
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.ingameDisplayName";
        pGVar12 = "account.identity.ready";
        if (g_data_057aec7d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7d = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).direction = pSVar2;
          il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
          (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          pGVar11 = pGVar12;
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
            *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
            if (g_data_057aec7f == '\0') {
              il2cpp_runtime_helper_023445d0(&"fade");
              g_data_057aec7f = '\x01';
            }
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
            pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
            (pGVar3->fields).motion = pGVar7;
            il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
            (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
            if (g_data_057aec7b == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057aec7b = '\x01';
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (pGVar10,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                               (pGVar10,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar12 = "account.identity.ready";
            pSVar2 = "account.authDisplayName";
            if (g_data_057aec7d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec7d = '\x01';
            }
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar4->fields).direction = pSVar2;
              il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
              (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
              il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
              pGVar11 = pGVar12;
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar3->fields).contentLayout = pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
                *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
                if (g_data_057aec7f == '\0') {
                  il2cpp_runtime_helper_023445d0(&"fade");
                  g_data_057aec7f = '\x01';
                }
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                   ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
                pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
                (pGVar3->fields).motion = pGVar7;
                il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
                pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
                (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
                if (g_data_057aec7b == '\0') {
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aec7b = '\x01';
                }
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                          (pGVar10,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec8b == '\0') {
        il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
        il2cpp_runtime_helper_023445d0(&"account-go-offline");
        il2cpp_runtime_helper_023445d0(&"account.logoutCta");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
        il2cpp_runtime_helper_023445d0(&"account-logout");
        il2cpp_runtime_helper_023445d0(&"Logout");
        il2cpp_runtime_helper_023445d0(&"account.goOffline");
        il2cpp_runtime_helper_023445d0(&"Go Offline");
        il2cpp_runtime_helper_023445d0(&"material-icons/logout");
        il2cpp_runtime_helper_023445d0(&"account.logout");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
        il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
        g_data_057aec8b = '\x01';
      }
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.GoOffline";
          (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
          (pGVar3->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (pGVar11,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                              (MethodInfo *)0x0);
          if (g_data_057aec79 == '\0') {
            il2cpp_runtime_helper_023445d0(&"Column");
            g_data_057aec79 = '\x01';
          }
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,0.0,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
            pMVar9 = "MainMenu.Account.Logout";
            (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                     Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
            (pGVar3->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = extraout_RDX;
      if (g_data_057aec8c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
        il2cpp_runtime_helper_023445d0(&"Create Account");
        g_data_057aec8c = '\x01';
        pMVar9 = extraout_RDX_00;
      }
      if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar5,"account-profile-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar5;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar5);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar5,"account-profile-banner-actions",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar11,pSVar2,pSVar5,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* offline, const MethodInfo* method);
// 0x44f17c0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *offline,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  if (g_data_057aec83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-content");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    g_data_057aec83 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
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
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (offline != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (offline,pSVar2,pSVar3,"account-banner-offline-content",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account-offline-banner-top");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOnline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account-go-online");
    il2cpp_runtime_helper_023445d0(&"account.goOnlineCta");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec84 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar11 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-offline-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar10,0,"Go Online","account.goOnline","account-go-online",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (g_data_057aec78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aec78 = '\x01';
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      pMVar9 = "MainMenu.Account.GoOnline";
      (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOnline";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",pMVar9);
      (pGVar5->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-name-column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-offline-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec85 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar2,pSVar3,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar11,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar12 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      pGVar11 = pGVar12;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
        (pGVar5->fields).motion = pGVar7;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        pGVar11 = "Offline Mode";
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar5->fields).textKey;
          (pGVar5->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar11 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec89 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"gear");
        il2cpp_runtime_helper_023445d0(&"Common.Edit");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"Stretch");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"account-profile-edit");
        il2cpp_runtime_helper_023445d0(&"main.profile");
        il2cpp_runtime_helper_023445d0(&"Edit");
        il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
        il2cpp_runtime_helper_023445d0(&"account.auth.idle");
        g_data_057aec89 = '\x01';
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pGVar11,pSVar2,pSVar3,"account-banner-name-column",pGVar4,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                            (MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).textKey = "Common.Edit";
          il2cpp_runtime_helper_022b4080();
          if (g_data_057aec77 == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec77 = '\x01';
          }
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
          pSVar2 = "account.auth.idle";
          if (g_data_057aec7c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7c = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).alignSelf = pSVar2;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pGVar11 = pGVar10;
      if (g_data_057aec8a == '\0') {
        il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
        il2cpp_runtime_helper_023445d0(&"Account");
        il2cpp_runtime_helper_023445d0(&"account.identity.ready");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
        il2cpp_runtime_helper_023445d0(&"account.identity.loading");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
        il2cpp_runtime_helper_023445d0(&"skeleton");
        il2cpp_runtime_helper_023445d0(&"Scout");
        il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
        il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
        il2cpp_runtime_helper_023445d0(&"accountBannerName");
        il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
        il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
        g_data_057aec8a = '\x01';
      }
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.ingameDisplayName";
        pGVar12 = "account.identity.ready";
        if (g_data_057aec7d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7d = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).direction = pSVar2;
          il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
          (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          pGVar11 = pGVar12;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
            if (g_data_057aec7f == '\0') {
              il2cpp_runtime_helper_023445d0(&"fade");
              g_data_057aec7f = '\x01';
            }
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
            pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
            (pGVar5->fields).motion = pGVar7;
            il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
            (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
            if (g_data_057aec7b == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057aec7b = '\x01';
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (pGVar10,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                               (pGVar10,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pGVar12 = "account.identity.ready";
            pSVar2 = "account.authDisplayName";
            if (g_data_057aec7d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec7d = '\x01';
            }
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar4->fields).direction = pSVar2;
              il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
              (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
              il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
              pGVar11 = pGVar12;
              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar5->fields).contentLayout = pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
                *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
                if (g_data_057aec7f == '\0') {
                  il2cpp_runtime_helper_023445d0(&"fade");
                  g_data_057aec7f = '\x01';
                }
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                   ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
                pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
                (pGVar5->fields).motion = pGVar7;
                il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
                pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
                (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
                if (g_data_057aec7b == '\0') {
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aec7b = '\x01';
                }
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                          (pGVar10,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec8b == '\0') {
        il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
        il2cpp_runtime_helper_023445d0(&"account-go-offline");
        il2cpp_runtime_helper_023445d0(&"account.logoutCta");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
        il2cpp_runtime_helper_023445d0(&"account-logout");
        il2cpp_runtime_helper_023445d0(&"Logout");
        il2cpp_runtime_helper_023445d0(&"account.goOffline");
        il2cpp_runtime_helper_023445d0(&"Go Offline");
        il2cpp_runtime_helper_023445d0(&"material-icons/logout");
        il2cpp_runtime_helper_023445d0(&"account.logout");
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
        il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
        g_data_057aec8b = '\x01';
      }
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.GoOffline";
          (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
          (pGVar5->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (pGVar11,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                              (MethodInfo *)0x0);
          if (g_data_057aec79 == '\0') {
            il2cpp_runtime_helper_023445d0(&"Column");
            g_data_057aec79 = '\x01';
          }
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,0.0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
            pMVar9 = "MainMenu.Account.Logout";
            (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                     Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = extraout_RDX;
      if (g_data_057aec8c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
        il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
        il2cpp_runtime_helper_023445d0(&"Create Account");
        g_data_057aec8c = '\x01';
        pMVar9 = extraout_RDX_00;
      }
      if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar11,pSVar2,pSVar3,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x44f19a0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  if (g_data_057aec84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account-offline-banner-top");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOnline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account-go-online");
    il2cpp_runtime_helper_023445d0(&"account.goOnlineCta");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec84 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar10 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,pSVar2,pSVar3,"account-offline-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (content,0,"Go Online","account.goOnline","account-go-online",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (g_data_057aec78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aec78 = '\x01';
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      pMVar9 = "MainMenu.Account.GoOnline";
      (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOnline";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",pMVar9);
      (pGVar5->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-name-column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-offline-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec85 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar2,pSVar3,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar10,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar11;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar11,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar12 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      pGVar10 = pGVar12;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
        (pGVar5->fields).motion = pGVar7;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        pGVar10 = "Offline Mode";
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar11,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar5->fields).textKey;
          (pGVar5->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  }
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar10 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec89 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"gear");
      il2cpp_runtime_helper_023445d0(&"Common.Edit");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"default");
      il2cpp_runtime_helper_023445d0(&"account-profile-edit");
      il2cpp_runtime_helper_023445d0(&"main.profile");
      il2cpp_runtime_helper_023445d0(&"Edit");
      il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
      il2cpp_runtime_helper_023445d0(&"account.auth.idle");
      g_data_057aec89 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-banner-name-column",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).textKey = "Common.Edit";
        il2cpp_runtime_helper_022b4080();
        if (g_data_057aec77 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec77 = '\x01';
        }
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
        pSVar2 = "account.auth.idle";
        if (g_data_057aec7c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7c = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignSelf = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
          (pGVar5->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar10 = pGVar11;
    if (g_data_057aec8a == '\0') {
      il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
      il2cpp_runtime_helper_023445d0(&"Account");
      il2cpp_runtime_helper_023445d0(&"account.identity.ready");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
      il2cpp_runtime_helper_023445d0(&"account.identity.loading");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"Scout");
      il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
      il2cpp_runtime_helper_023445d0(&"accountBannerName");
      il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
      g_data_057aec8a = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar11,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = "account.ingameDisplayName";
      pGVar12 = "account.identity.ready";
      if (g_data_057aec7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7d = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).direction = pSVar2;
        il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
        (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
        pGVar10 = pGVar12;
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
          *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
          if (g_data_057aec7f == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aec7f = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
          (pGVar5->fields).motion = pGVar7;
          il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          if (g_data_057aec7b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec7b = '\x01';
          }
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                    (pGVar11,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (pGVar11,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar12 = "account.identity.ready";
          pSVar2 = "account.authDisplayName";
          if (g_data_057aec7d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7d = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).direction = pSVar2;
            il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
            (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
            pGVar10 = pGVar12;
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar5->fields).contentLayout = pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
              *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
              if (g_data_057aec7f == '\0') {
                il2cpp_runtime_helper_023445d0(&"fade");
                g_data_057aec7f = '\x01';
              }
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                 ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)&(pGVar5->fields).motion;
              (pGVar5->fields).motion = pGVar7;
              il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
              pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
              (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
              if (g_data_057aec7b == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aec7b = '\x01';
              }
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar8,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                        (pGVar11,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec8b == '\0') {
      il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
      il2cpp_runtime_helper_023445d0(&"account-go-offline");
      il2cpp_runtime_helper_023445d0(&"account.logoutCta");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
      il2cpp_runtime_helper_023445d0(&"account-logout");
      il2cpp_runtime_helper_023445d0(&"Logout");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"Go Offline");
      il2cpp_runtime_helper_023445d0(&"material-icons/logout");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
      g_data_057aec8b = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        pMVar9 = "MainMenu.Account.GoOffline";
        (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar10,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.Logout";
          (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
          (pGVar5->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = extraout_RDX;
    if (g_data_057aec8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
      il2cpp_runtime_helper_023445d0(&"Create Account");
      g_data_057aec8c = '\x01';
      pMVar9 = extraout_RDX_00;
    }
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar10,pSVar2,pSVar3,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x44f1d30

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  if (g_data_057aec85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline-name-column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-offline-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec85 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar2,pSVar3,"account-banner-offline-name-column",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf,pSVar2);
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar12 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar5->fields,pSVar2);
      (pGVar5->fields).alignItems = (System_String_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
      pGVar11 = pGVar12;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
        (pGVar6->fields).motion = pGVar7;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
        pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
        pGVar11 = "Offline Mode";
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar10,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar6->fields).textKey;
          (pGVar6->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar11 = "SpaceBetween";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-profile-banner-top",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-profile-banner-actions",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec89 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"gear");
      il2cpp_runtime_helper_023445d0(&"Common.Edit");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"default");
      il2cpp_runtime_helper_023445d0(&"account-profile-edit");
      il2cpp_runtime_helper_023445d0(&"main.profile");
      il2cpp_runtime_helper_023445d0(&"Edit");
      il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
      il2cpp_runtime_helper_023445d0(&"account.auth.idle");
      g_data_057aec89 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar3,"account-banner-name-column",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar11,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = "Common.Edit";
        il2cpp_runtime_helper_022b4080();
        if (g_data_057aec77 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec77 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
        pSVar2 = "account.auth.idle";
        if (g_data_057aec7c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7c = '\x01';
        }
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignSelf = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf,pSVar2);
          (pGVar6->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar11 = pGVar10;
    if (g_data_057aec8a == '\0') {
      il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
      il2cpp_runtime_helper_023445d0(&"Account");
      il2cpp_runtime_helper_023445d0(&"account.identity.ready");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
      il2cpp_runtime_helper_023445d0(&"account.identity.loading");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"Scout");
      il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
      il2cpp_runtime_helper_023445d0(&"accountBannerName");
      il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
      g_data_057aec8a = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar10,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = "account.ingameDisplayName";
      pGVar12 = "account.identity.ready";
      if (g_data_057aec7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7d = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).direction = pSVar2;
        il2cpp_runtime_helper_022b4080(&pGVar5->fields,pSVar2);
        (pGVar5->fields).alignItems = (System_String_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
        pGVar11 = pGVar12;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
          if (g_data_057aec7f == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aec7f = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
          (pGVar6->fields).motion = pGVar7;
          il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
          pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
          if (g_data_057aec7b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec7b = '\x01';
          }
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                    (pGVar10,"account-ingame-display-name-skeleton",pGVar5,"skeleton","account.identity.loading",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (pGVar10,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar12 = "account.identity.ready";
          pSVar2 = "account.authDisplayName";
          if (g_data_057aec7d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7d = '\x01';
          }
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar5->fields).direction = pSVar2;
            il2cpp_runtime_helper_022b4080(&pGVar5->fields,pSVar2);
            (pGVar5->fields).alignItems = (System_String_o *)pGVar12;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
            pGVar11 = pGVar12;
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).contentLayout = pGVar5;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
              *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
              if (g_data_057aec7f == '\0') {
                il2cpp_runtime_helper_023445d0(&"fade");
                g_data_057aec7f = '\x01';
              }
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                 ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
              (pGVar6->fields).motion = pGVar7;
              il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
              pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
              (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
              if (g_data_057aec7b == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aec7b = '\x01';
              }
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                        (pGVar10,"account-auth-display-name-skeleton",pGVar5,"skeleton","account.identity.loading",
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec8b == '\0') {
      il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
      il2cpp_runtime_helper_023445d0(&"account-go-offline");
      il2cpp_runtime_helper_023445d0(&"account.logoutCta");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
      il2cpp_runtime_helper_023445d0(&"account-logout");
      il2cpp_runtime_helper_023445d0(&"Logout");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"Go Offline");
      il2cpp_runtime_helper_023445d0(&"material-icons/logout");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
      g_data_057aec8b = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar11,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
        pMVar9 = "MainMenu.Account.GoOffline";
        (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar5);
          pMVar9 = "MainMenu.Account.Logout";
          (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
          (pGVar6->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = extraout_RDX;
    if (g_data_057aec8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
      il2cpp_runtime_helper_023445d0(&"Create Account");
      g_data_057aec8c = '\x01';
      pMVar9 = extraout_RDX_00;
    }
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar11,pSVar2,pSVar3,"account-profile-banner-content",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x44f2100

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  pGVar10 = names;
  if (g_data_057aec86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-offline-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.OfflineMode");
    il2cpp_runtime_helper_023445d0(&"Offline Mode");
    il2cpp_runtime_helper_023445d0(&"account-offline-status");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    g_data_057aec86 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar11 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      pGVar10 = pGVar11;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
        (pGVar3->fields).motion = pGVar5;
        il2cpp_runtime_helper_022b4080(pMVar9,pGVar5);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
        pGVar10 = "Offline Mode";
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (names,(System_String_o *)"Offline Mode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo *)&(pGVar3->fields).textKey;
          (pGVar3->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar6);
  }
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar6);
    }
    pGVar10 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar6,"account-profile-banner-top",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar6);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar6,"account-profile-banner-actions",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec89 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"gear");
      il2cpp_runtime_helper_023445d0(&"Common.Edit");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"default");
      il2cpp_runtime_helper_023445d0(&"account-profile-edit");
      il2cpp_runtime_helper_023445d0(&"main.profile");
      il2cpp_runtime_helper_023445d0(&"Edit");
      il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
      il2cpp_runtime_helper_023445d0(&"account.auth.idle");
      g_data_057aec89 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar6);
    }
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar6,"account-banner-name-column",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).textKey = "Common.Edit";
        il2cpp_runtime_helper_022b4080();
        if (g_data_057aec77 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec77 = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
        pSVar2 = "account.auth.idle";
        if (g_data_057aec7c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7c = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignSelf = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
          (pGVar3->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar10 = pGVar11;
    if (g_data_057aec8a == '\0') {
      il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
      il2cpp_runtime_helper_023445d0(&"Account");
      il2cpp_runtime_helper_023445d0(&"account.identity.ready");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
      il2cpp_runtime_helper_023445d0(&"account.identity.loading");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"Scout");
      il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
      il2cpp_runtime_helper_023445d0(&"accountBannerName");
      il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
      g_data_057aec8a = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar11,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = "account.ingameDisplayName";
      pGVar12 = "account.identity.ready";
      if (g_data_057aec7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7d = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).direction = pSVar2;
        il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
        (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
        pGVar10 = pGVar12;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
          *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
          if (g_data_057aec7f == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aec7f = '\x01';
          }
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
          (pGVar3->fields).motion = pGVar5;
          il2cpp_runtime_helper_022b4080(pMVar9,pGVar5);
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
          if (g_data_057aec7b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec7b = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                    (pGVar11,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (pGVar11,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar12 = "account.identity.ready";
          pSVar2 = "account.authDisplayName";
          if (g_data_057aec7d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7d = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).direction = pSVar2;
            il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
            (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
            pGVar10 = pGVar12;
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar3->fields).contentLayout = pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
              *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
              if (g_data_057aec7f == '\0') {
                il2cpp_runtime_helper_023445d0(&"fade");
                g_data_057aec7f = '\x01';
              }
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                 ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)&(pGVar3->fields).motion;
              (pGVar3->fields).motion = pGVar5;
              il2cpp_runtime_helper_022b4080(pMVar9,pGVar5);
              pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
              (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
              if (g_data_057aec7b == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aec7b = '\x01';
              }
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                        (pGVar11,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec8b == '\0') {
      il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
      il2cpp_runtime_helper_023445d0(&"account-go-offline");
      il2cpp_runtime_helper_023445d0(&"account.logoutCta");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
      il2cpp_runtime_helper_023445d0(&"account-logout");
      il2cpp_runtime_helper_023445d0(&"Logout");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"Go Offline");
      il2cpp_runtime_helper_023445d0(&"material-icons/logout");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
      g_data_057aec8b = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
        pMVar9 = "MainMenu.Account.GoOffline";
        (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar10,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.Logout";
          (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
          (pGVar3->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = extraout_RDX;
    if (g_data_057aec8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
      il2cpp_runtime_helper_023445d0(&"Create Account");
      g_data_057aec8c = '\x01';
      pMVar9 = extraout_RDX_00;
    }
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar10,pSVar2,pSVar6,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedIn, const MethodInfo* method);
// 0x44f2370

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedIn,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  
  if (g_data_057aec87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"accountBannerContent");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-content");
    g_data_057aec87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBannerContent";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  }
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedIn == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec88 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"FlexEnd");
      il2cpp_runtime_helper_023445d0(&"SpaceBetween");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
      il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aec88 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar11 = "SpaceBetween";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = "default";
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec89 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"gear");
      il2cpp_runtime_helper_023445d0(&"Common.Edit");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"default");
      il2cpp_runtime_helper_023445d0(&"account-profile-edit");
      il2cpp_runtime_helper_023445d0(&"main.profile");
      il2cpp_runtime_helper_023445d0(&"Edit");
      il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
      il2cpp_runtime_helper_023445d0(&"account.auth.idle");
      g_data_057aec89 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar11,pSVar2,pSVar3,"account-banner-name-column",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar11,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = "Common.Edit";
        il2cpp_runtime_helper_022b4080();
        if (g_data_057aec77 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec77 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
        pSVar2 = "account.auth.idle";
        if (g_data_057aec7c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7c = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignSelf = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar11 = pGVar10;
    if (g_data_057aec8a == '\0') {
      il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
      il2cpp_runtime_helper_023445d0(&"Account");
      il2cpp_runtime_helper_023445d0(&"account.identity.ready");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
      il2cpp_runtime_helper_023445d0(&"account.identity.loading");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"Scout");
      il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
      il2cpp_runtime_helper_023445d0(&"accountBannerName");
      il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
      g_data_057aec8a = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar10,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = "account.ingameDisplayName";
      pGVar12 = "account.identity.ready";
      if (g_data_057aec7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7d = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).direction = pSVar2;
        il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
        (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
        pGVar11 = pGVar12;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
          if (g_data_057aec7f == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aec7f = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
          (pGVar6->fields).motion = pGVar7;
          il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
          if (g_data_057aec7b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec7b = '\x01';
          }
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                    (pGVar10,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (pGVar10,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar12 = "account.identity.ready";
          pSVar2 = "account.authDisplayName";
          if (g_data_057aec7d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7d = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).direction = pSVar2;
            il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
            (pGVar4->fields).alignItems = (System_String_o *)pGVar12;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
            pGVar11 = pGVar12;
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).contentLayout = pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
              *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
              if (g_data_057aec7f == '\0') {
                il2cpp_runtime_helper_023445d0(&"fade");
                g_data_057aec7f = '\x01';
              }
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                 ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
              (pGVar6->fields).motion = pGVar7;
              il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
              pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
              (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
              if (g_data_057aec7b == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aec7b = '\x01';
              }
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar8,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                        (pGVar10,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec8b == '\0') {
      il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
      il2cpp_runtime_helper_023445d0(&"account-go-offline");
      il2cpp_runtime_helper_023445d0(&"account.logoutCta");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
      il2cpp_runtime_helper_023445d0(&"account-logout");
      il2cpp_runtime_helper_023445d0(&"Logout");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"Go Offline");
      il2cpp_runtime_helper_023445d0(&"material-icons/logout");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
      g_data_057aec8b = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar11,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
        pMVar9 = "MainMenu.Account.GoOffline";
        (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
        (pGVar6->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar11,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.Logout";
          (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = extraout_RDX;
    if (g_data_057aec8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
      il2cpp_runtime_helper_023445d0(&"Create Account");
      g_data_057aec8c = '\x01';
      pMVar9 = extraout_RDX_00;
    }
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (loggedIn,pSVar2,pSVar3,"account-profile-banner-content",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x44f2550

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  
  if (g_data_057aec88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-actions");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner-top");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec88 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
  }
  pGVar10 = "SpaceBetween";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec89 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"gear");
      il2cpp_runtime_helper_023445d0(&"Common.Edit");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"default");
      il2cpp_runtime_helper_023445d0(&"account-profile-edit");
      il2cpp_runtime_helper_023445d0(&"main.profile");
      il2cpp_runtime_helper_023445d0(&"Edit");
      il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
      il2cpp_runtime_helper_023445d0(&"account.auth.idle");
      g_data_057aec89 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar2,pSVar3,"account-banner-name-column",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = "Common.Edit";
        il2cpp_runtime_helper_022b4080();
        if (g_data_057aec77 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec77 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
        pSVar2 = "account.auth.idle";
        if (g_data_057aec7c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7c = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignSelf = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar10 = __this_00;
    if (g_data_057aec8a == '\0') {
      il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
      il2cpp_runtime_helper_023445d0(&"Account");
      il2cpp_runtime_helper_023445d0(&"account.identity.ready");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
      il2cpp_runtime_helper_023445d0(&"account.identity.loading");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"Scout");
      il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
      il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
      il2cpp_runtime_helper_023445d0(&"accountBannerName");
      il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
      il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
      g_data_057aec8a = '\x01';
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (__this_00,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = "account.ingameDisplayName";
      pGVar11 = "account.identity.ready";
      if (g_data_057aec7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7d = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).direction = pSVar2;
        il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
        (pGVar4->fields).alignItems = (System_String_o *)pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
        pGVar10 = pGVar11;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
          if (g_data_057aec7f == '\0') {
            il2cpp_runtime_helper_023445d0(&"fade");
            g_data_057aec7f = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
          (pGVar6->fields).motion = pGVar7;
          il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
          if (g_data_057aec7b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057aec7b = '\x01';
          }
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                    (__this_00,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (__this_00,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar11 = "account.identity.ready";
          pSVar2 = "account.authDisplayName";
          if (g_data_057aec7d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
            g_data_057aec7d = '\x01';
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (pGVar4->fields).direction = pSVar2;
            il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
            (pGVar4->fields).alignItems = (System_String_o *)pGVar11;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
            pGVar10 = pGVar11;
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).contentLayout = pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
              *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 0;
              if (g_data_057aec7f == '\0') {
                il2cpp_runtime_helper_023445d0(&"fade");
                g_data_057aec7f = '\x01';
              }
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                                 ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)&(pGVar6->fields).motion;
              (pGVar6->fields).motion = pGVar7;
              il2cpp_runtime_helper_022b4080(pMVar9,pGVar7);
              pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
              (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
              if (g_data_057aec7b == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aec7b = '\x01';
              }
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar8,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                        (__this_00,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec8b == '\0') {
      il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
      il2cpp_runtime_helper_023445d0(&"account-go-offline");
      il2cpp_runtime_helper_023445d0(&"account.logoutCta");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
      il2cpp_runtime_helper_023445d0(&"account-logout");
      il2cpp_runtime_helper_023445d0(&"Logout");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"Go Offline");
      il2cpp_runtime_helper_023445d0(&"material-icons/logout");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
      g_data_057aec8b = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar10,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
        pMVar9 = "MainMenu.Account.GoOffline";
        (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar9);
        (pGVar6->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (pGVar10,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                            (MethodInfo *)0x0);
        if (g_data_057aec79 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Column");
          g_data_057aec79 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,0.0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
          pMVar9 = "MainMenu.Account.Logout";
          (pGVar6->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar9);
          (pGVar6->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = extraout_RDX;
    if (g_data_057aec8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
      il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
      il2cpp_runtime_helper_023445d0(&"Create Account");
      g_data_057aec8c = '\x01';
      pMVar9 = extraout_RDX_00;
    }
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,8.0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x44f28b0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  
  if (g_data_057aec89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_10);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"Common.Edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-profile-edit");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"account-banner-name-column");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec89 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,build);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar2,build,"account-banner-name-column",pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_helper_022b4080();
      if (g_data_057aec77 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aec77 = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec7c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec7c = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00;
  if (g_data_057aec8a == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.loading");
    il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
    g_data_057aec8a = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (__this_00,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pGVar9 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = (System_String_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      __this_01 = pGVar9;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)&(pGVar5->fields).motion;
        (pGVar5->fields).motion = pGVar6;
        il2cpp_runtime_helper_022b4080(pMVar8,pGVar6);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar8);
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        if (g_data_057aec7b == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec7b = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar3,pGVar7,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (__this_00,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (__this_00,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar9 = "account.identity.ready";
        pSVar2 = "account.authDisplayName";
        if (g_data_057aec7d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7d = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).direction = pSVar2;
          il2cpp_runtime_helper_022b4080(&pGVar4->fields,pSVar2);
          (pGVar4->fields).alignItems = (System_String_o *)pGVar9;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          __this_01 = pGVar9;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
            *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
            if (g_data_057aec7f == '\0') {
              il2cpp_runtime_helper_023445d0(&"fade");
              g_data_057aec7f = '\x01';
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
            pMVar8 = (MethodInfo *)&(pGVar5->fields).motion;
            (pGVar5->fields).motion = pGVar6;
            il2cpp_runtime_helper_022b4080(pMVar8,pGVar6);
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar8);
            (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
            if (g_data_057aec7b == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057aec7b = '\x01';
            }
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar7,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (__this_00,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec8b == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
    il2cpp_runtime_helper_023445d0(&"account-go-offline");
    il2cpp_runtime_helper_023445d0(&"account.logoutCta");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
    il2cpp_runtime_helper_023445d0(&"account-logout");
    il2cpp_runtime_helper_023445d0(&"Logout");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"Go Offline");
    il2cpp_runtime_helper_023445d0(&"material-icons/logout");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
    g_data_057aec8b = '\x01';
  }
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_01,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                        (MethodInfo *)0x0);
    if (g_data_057aec79 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aec79 = '\x01';
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      pMVar8 = "MainMenu.Account.GoOffline";
      (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar8);
      (pGVar5->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (__this_01,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        pMVar8 = "MainMenu.Account.Logout";
        (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar8);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = extraout_RDX;
  if (g_data_057aec8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
    il2cpp_runtime_helper_023445d0(&"Create Account");
    g_data_057aec8c = '\x01';
    pMVar8 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x44f2c80

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  
  __this_00 = names;
  if (g_data_057aec8a == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.ingameDisplayName");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"account.identity.ready");
    il2cpp_runtime_helper_023445d0(&"account-auth-display-name");
    il2cpp_runtime_helper_023445d0(&"account.identity.loading");
    il2cpp_runtime_helper_023445d0(&"account-ingame-display-name");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"Scout");
    il2cpp_runtime_helper_023445d0(&"account.authDisplayName");
    il2cpp_runtime_helper_023445d0(&"account-auth-display-name-skeleton");
    il2cpp_runtime_helper_023445d0(&"accountBannerName");
    il2cpp_runtime_helper_023445d0(&"accountBannerSubtext");
    il2cpp_runtime_helper_023445d0(&"account-ingame-display-name-skeleton");
    g_data_057aec8a = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.ingameDisplayName";
    pGVar8 = "account.identity.ready";
    if (g_data_057aec7d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec7d = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).direction = pSVar1;
      il2cpp_runtime_helper_022b4080(&pGVar3->fields,pSVar1);
      (pGVar3->fields).alignItems = (System_String_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
      __this_00 = pGVar8;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
        *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 0;
        if (g_data_057aec7f == '\0') {
          il2cpp_runtime_helper_023445d0(&"fade");
          g_data_057aec7f = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)&(pGVar2->fields).motion;
        (pGVar2->fields).motion = pGVar4;
        il2cpp_runtime_helper_022b4080(pMVar7,pGVar4);
        pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar7);
        (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
        if (g_data_057aec7b == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aec7b = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar5,pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (names,"account-ingame-display-name-skeleton",pGVar3,"skeleton","account.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (names,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar8 = "account.identity.ready";
        pSVar1 = "account.authDisplayName";
        if (g_data_057aec7d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec7d = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).direction = pSVar1;
          il2cpp_runtime_helper_022b4080(&pGVar3->fields,pSVar1);
          (pGVar3->fields).alignItems = (System_String_o *)pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
          __this_00 = pGVar8;
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar2->fields).contentLayout = pGVar3;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
            *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 0;
            if (g_data_057aec7f == '\0') {
              il2cpp_runtime_helper_023445d0(&"fade");
              g_data_057aec7f = '\x01';
            }
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
            pMVar7 = (MethodInfo *)&(pGVar2->fields).motion;
            (pGVar2->fields).motion = pGVar4;
            il2cpp_runtime_helper_022b4080(pMVar7,pGVar4);
            pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar7);
            (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
            if (g_data_057aec7b == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057aec7b = '\x01';
            }
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (names,"account-auth-display-name-skeleton",pGVar3,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec8b == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
    il2cpp_runtime_helper_023445d0(&"account-go-offline");
    il2cpp_runtime_helper_023445d0(&"account.logoutCta");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
    il2cpp_runtime_helper_023445d0(&"account-logout");
    il2cpp_runtime_helper_023445d0(&"Logout");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"Go Offline");
    il2cpp_runtime_helper_023445d0(&"material-icons/logout");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
    g_data_057aec8b = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                        (MethodInfo *)0x0);
    if (g_data_057aec79 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aec79 = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
      pMVar7 = "MainMenu.Account.GoOffline";
      (pGVar2->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar7);
      (pGVar2->fields).contentLayout = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (__this_00,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
        pMVar7 = "MainMenu.Account.Logout";
        (pGVar2->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar7);
        (pGVar2->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = extraout_RDX;
  if (g_data_057aec8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
    il2cpp_runtime_helper_023445d0(&"Create Account");
    g_data_057aec8c = '\x01';
    pMVar7 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar7 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x44f31c0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar3;
  
  if (g_data_057aec8b == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/wifi_off");
    il2cpp_runtime_helper_023445d0(&"account-go-offline");
    il2cpp_runtime_helper_023445d0(&"account.logoutCta");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Logout");
    il2cpp_runtime_helper_023445d0(&"account-logout");
    il2cpp_runtime_helper_023445d0(&"Logout");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"Go Offline");
    il2cpp_runtime_helper_023445d0(&"material-icons/logout");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.GoOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOfflineCta");
    g_data_057aec8b = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (actions,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                        (MethodInfo *)0x0);
    if (g_data_057aec79 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aec79 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
      pMVar3 = "MainMenu.Account.GoOffline";
      (pGVar1->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).textKey);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar3);
      (pGVar1->fields).contentLayout = pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (actions,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                          (MethodInfo *)0x0);
      if (g_data_057aec79 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aec79 = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
        pMVar3 = "MainMenu.Account.Logout";
        (pGVar1->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).textKey);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar3);
        (pGVar1->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = extraout_RDX;
  if (g_data_057aec8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
    il2cpp_runtime_helper_023445d0(&"Create Account");
    g_data_057aec8c = '\x01';
    pMVar3 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",pMVar3);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44f05f0

void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  
  if (g_data_057aec74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.onlineMode");
    il2cpp_runtime_helper_023445d0(&"account.loggedOut");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner");
    il2cpp_runtime_helper_023445d0(&"account-banner-logged-out");
    il2cpp_runtime_helper_023445d0(&"accountBanner");
    il2cpp_runtime_helper_023445d0(&"account.offlineMode");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline");
    g_data_057aec74 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBanner";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  }
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar5,"account-banner-logged-out",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.loggedOut";
    if (g_data_057aec75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec75 = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout);
        *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = "accountBanner";
        pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar5;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
        }
        if (g_data_057aec76 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Stretch");
          il2cpp_runtime_helper_023445d0(&"Row");
          g_data_057aec76 = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,pSVar2,pSVar5,"account-banner-offline",pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.offlineMode";
        if (g_data_057aec75 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec75 = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignItems = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).contentLayout = pGVar3;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout);
            *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = "accountBanner";
            pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
            if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar5;
              il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
            }
            if (g_data_057aec76 == '\0') {
              il2cpp_runtime_helper_023445d0(&"Stretch");
              il2cpp_runtime_helper_023445d0(&"Row");
              g_data_057aec76 = '\x01';
            }
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                                (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (ui,pSVar2,pSVar5,"account-profile-banner",pGVar3,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = "account.onlineMode";
            if (g_data_057aec75 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec75 = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar3->fields).alignItems = pSVar2;
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
              if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar4->fields).contentLayout = pGVar3;
                il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
                *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,(System_String_o *)0x0,
             0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0
             ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible (System_String_o* key, const MethodInfo* method);
// 0x44f0d60

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec75 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    il2cpp_runtime_helper_022b4080(&(__this->fields).visible,key);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec77 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aec77 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BannerRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout (const MethodInfo* method);
// 0x44f0cb0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$EditButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout (const MethodInfo* method);
// 0x44f0dd0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec77 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aec77 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$FullWidthButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout (const MethodInfo* method);
// 0x44f0e90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec78 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aec78 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$GrowActionButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout (const MethodInfo* method);
// 0x44f0f50

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec79 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    g_data_057aec79 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$NameTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout (const MethodInfo* method);
// 0x44f0ff0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec7a == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aec7a = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$SkeletonTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout (float width, float height, const MethodInfo* method);
// 0x44f10c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout(float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec7b == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aec7b = '\x01';
  }
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width_00,height_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled (System_String_o* key, const MethodInfo* method);
// 0x44f1190

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  System_String_o *pSVar4;
  
  if (g_data_057aec7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec7c = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar4 = (System_String_o *)0x0;
  pGVar2 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar1->fields).enabled = key;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).enabled,key);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec7d = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar1 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = (System_String_o *)pGVar2;
    il2cpp_runtime_helper_022b4080(&__this->fields,pGVar2);
    (__this->fields).visible = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).visible,pSVar4);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec7e = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).text = (System_String_o *)pGVar1;
    il2cpp_runtime_helper_022b4080(&pGVar2->fields,pGVar1);
    (pGVar2->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enabled);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aec7f = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$TextVisible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible (System_String_o* textKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x44f1200

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
          (System_String_o *textKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (g_data_057aec7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec7d = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar3 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar1->fields).text = textKey;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,textKey);
    (pGVar1->fields).visible = visibleKey;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).visible,visibleKey);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec7e = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar1->fields).text = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,pGVar3);
    (pGVar1->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).enabled);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aec7f = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x44f1280

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aec7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec7e = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    il2cpp_runtime_helper_022b4080(&__this->fields,textKey);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aec7f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion (const MethodInfo* method);
// 0x44f1310

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aec7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"fade");
    g_data_057aec7f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, const MethodInfo* method);
// 0x44f1360

void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}



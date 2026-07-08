// Type: Gisketch.Aottg2UI.Game.AottgProfileBanner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileBanner.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor (const MethodInfo* method);
// 0x41c0500

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704dc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704dc1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, const MethodInfo* method);
// 0x41c0570

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedOut, const MethodInfo* method);
// 0x41c0580

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_0
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedOut,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704dc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"account-banner-logged-out-content");
    il2cpp_init_method_metadata(&"accountBannerContent");
    DAT_05704dc2 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "accountBannerContent";
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
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (loggedOut != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (loggedOut,style,build,"account-banner-logged-out-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x41c0770

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_3
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  if (DAT_05704dc3 == '\0') {
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"MainMenu.Account.LoggedOut");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"accountBannerSubtext");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"Logged Out");
    il2cpp_init_method_metadata(&"material-icons/login");
    il2cpp_init_method_metadata(&"account-logged-out-status");
    il2cpp_init_method_metadata(&"account.openLogin");
    il2cpp_init_method_metadata(&"account-login-open");
    DAT_05704dc3 = '\x01';
  }
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (content,"Logged Out","accountBannerSubtext","account-logged-out-status",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.LoggedOut";
      il2cpp_runtime_glue(&(pGVar2->fields).textKey);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (content,0,"Sign In","account.openLogin","account-login-open",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.SignIn";
        il2cpp_runtime_glue(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (DAT_05704dbd == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704dbd = '\x01';
        }
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,
                   (MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_00->fields).alignSelf = pSVar1;
          il2cpp_runtime_glue(&(__this_00->fields).alignSelf,pSVar1);
          (pGVar2->fields).contentLayout = __this_00;
          il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,__this_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* offline, const MethodInfo* method);
// 0x41c0950

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_1
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *offline,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704dc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"account-banner-offline-content");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"accountBannerContent");
    DAT_05704dc4 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "accountBannerContent";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = build;
    il2cpp_runtime_glue(lVar1 + 0x28,build);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (offline != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (offline,style,build,"account-banner-offline-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x41c0b30

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_4
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  MethodInfo *method_00;
  
  if (DAT_05704dc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Go Online");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"account-offline-banner-top");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_init_method_metadata(&"account.goOnline");
    il2cpp_init_method_metadata(&"account-go-online");
    il2cpp_init_method_metadata(&"account.goOnlineCta");
    il2cpp_init_method_metadata(&"material-icons/login");
    DAT_05704dc5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = build;
    il2cpp_runtime_glue(lVar1 + 0x20,build);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"account-offline-banner-top",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (content,0,"Go Online","account.goOnline","account-go-online",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (DAT_05704db9 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704db9 = '\x01';
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar2);
      method_00 = "MainMenu.Account.GoOnline";
      (pGVar3->fields).textKey = (System_String_o *)"MainMenu.Account.GoOnline";
      il2cpp_runtime_glue(&(pGVar3->fields).textKey);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",method_00);
      (pGVar3->fields).contentLayout = pGVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x41c0ec0

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_5
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *top,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  
  if (DAT_05704dc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"gear");
    il2cpp_init_method_metadata(&"Common.Edit");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"account-banner-offline-name-column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"account-offline-profile-edit");
    il2cpp_init_method_metadata(&"main.profile");
    il2cpp_init_method_metadata(&"Edit");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704dc6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = build;
    il2cpp_runtime_glue(lVar1 + 0x18,build);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar2,build,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-offline-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_glue();
      if (DAT_05704db8 == '\0') {
        il2cpp_init_method_metadata();
        DAT_05704db8 = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_glue(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (DAT_05704dbd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
        DAT_05704dbd = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_glue(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_glue(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x41c1290

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_6
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704dc7 == '\0') {
    il2cpp_init_method_metadata(&"account.ingameDisplayName");
    il2cpp_init_method_metadata(&"account-offline-ingame-display-name");
    il2cpp_init_method_metadata(&"account.identity.ready");
    il2cpp_init_method_metadata(&"Scout");
    il2cpp_init_method_metadata(&"accountBannerName");
    il2cpp_init_method_metadata(&"MainMenu.Account.OfflineMode");
    il2cpp_init_method_metadata(&"Offline Mode");
    il2cpp_init_method_metadata(&"account-offline-status");
    il2cpp_init_method_metadata(&"accountBannerSubtext");
    DAT_05704dc7 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-offline-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pSVar1 = "account.identity.ready";
    if (DAT_05704dbe == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704dbe = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_glue(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = pSVar1;
      il2cpp_runtime_glue(&(pGVar4->fields).alignItems,pSVar1);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
        if (DAT_05704dc0 == '\0') {
          il2cpp_init_method_metadata(&"fade");
          DAT_05704dc0 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)&(pGVar3->fields).motion;
        (pGVar3->fields).motion = pGVar5;
        il2cpp_runtime_glue(pMVar6,pGVar5);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar6);
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar4);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (names,"Offline Mode","accountBannerSubtext","account-offline-status",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar6 = (MethodInfo *)&(pGVar3->fields).textKey;
          (pGVar3->fields).textKey = "MainMenu.Account.OfflineMode";
          il2cpp_runtime_glue();
          pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar6);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedIn, const MethodInfo* method);
// 0x41c1500

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_2
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedIn,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704dc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_7);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"accountBannerContent");
    il2cpp_init_method_metadata(&"account-profile-banner-content");
    DAT_05704dc8 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "accountBannerContent";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x50) = build;
    il2cpp_runtime_glue(lVar1 + 0x50,build);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (loggedIn != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (loggedIn,style,build,"account-profile-banner-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x41c16e0

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_7
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (DAT_05704dc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_8);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_9);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"account-profile-banner-actions");
    il2cpp_init_method_metadata(&"account-profile-banner-top");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    DAT_05704dc9 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x40,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x48,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x41c1a40

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_8
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *top,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  
  if (DAT_05704dca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_10);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"gear");
    il2cpp_init_method_metadata(&"Common.Edit");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"account-profile-edit");
    il2cpp_init_method_metadata(&"main.profile");
    il2cpp_init_method_metadata(&"Edit");
    il2cpp_init_method_metadata(&"account-banner-name-column");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704dca = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "default";
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
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar2,build,"account-banner-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-profile-edit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "Common.Edit";
      il2cpp_runtime_glue();
      if (DAT_05704db8 == '\0') {
        il2cpp_init_method_metadata();
        DAT_05704db8 = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_glue(&(pGVar5->fields).search);
      pSVar2 = "account.auth.idle";
      if (DAT_05704dbd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
        DAT_05704dbd = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_glue(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_glue(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x41c1e10

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_10
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  MethodInfo *pMVar8;
  
  if (DAT_05704dcb == '\0') {
    il2cpp_init_method_metadata(&"account.ingameDisplayName");
    il2cpp_init_method_metadata(&"Account");
    il2cpp_init_method_metadata(&"account.identity.ready");
    il2cpp_init_method_metadata(&"account-auth-display-name");
    il2cpp_init_method_metadata(&"account.identity.loading");
    il2cpp_init_method_metadata(&"account-ingame-display-name");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata(&"Scout");
    il2cpp_init_method_metadata(&"account.authDisplayName");
    il2cpp_init_method_metadata(&"account-auth-display-name-skeleton");
    il2cpp_init_method_metadata(&"accountBannerName");
    il2cpp_init_method_metadata(&"accountBannerSubtext");
    il2cpp_init_method_metadata(&"account-ingame-display-name-skeleton");
    DAT_05704dcb = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-ingame-display-name",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pSVar1 = "account.identity.ready";
    if (DAT_05704dbe == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704dbe = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).direction = pSVar2;
      il2cpp_runtime_glue(&pGVar4->fields,pSVar2);
      (pGVar4->fields).alignItems = pSVar1;
      il2cpp_runtime_glue(&(pGVar4->fields).alignItems,pSVar1);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar4);
        *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
        if (DAT_05704dc0 == '\0') {
          il2cpp_init_method_metadata(&"fade");
          DAT_05704dc0 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)&(pGVar3->fields).motion;
        (pGVar3->fields).motion = pGVar5;
        il2cpp_runtime_glue(pMVar8,pGVar5);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar8);
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar4);
        if (DAT_05704dbc == '\0') {
          il2cpp_init_method_metadata();
          DAT_05704dbc = '\x01';
        }
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (names,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (names,"Account","accountBannerSubtext","account-auth-display-name",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        pSVar2 = "account.identity.ready";
        pSVar1 = "account.authDisplayName";
        if (DAT_05704dbe == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704dbe = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0)
        ;
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).direction = pSVar1;
          il2cpp_runtime_glue(&pGVar4->fields,pSVar1);
          (pGVar4->fields).alignItems = pSVar2;
          il2cpp_runtime_glue(&(pGVar4->fields).alignItems,pSVar2);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).contentLayout = pGVar4;
            il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar4);
            *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
            if (DAT_05704dc0 == '\0') {
              il2cpp_init_method_metadata(&"fade");
              DAT_05704dc0 = '\x01';
            }
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0
                               );
            pMVar8 = (MethodInfo *)&(pGVar3->fields).motion;
            (pGVar3->fields).motion = pGVar5;
            il2cpp_runtime_glue(pMVar8,pGVar5);
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar8);
            (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
            il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar4);
            if (DAT_05704dbc == '\0') {
              il2cpp_init_method_metadata();
              DAT_05704dbc = '\x01';
            }
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (names,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x41c2350

void Gisketch_Aottg2UI_Game_AottgProfileBanner_<>c__<Build>b__0_9
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *pMVar3;
  
  if (DAT_05704dcc == '\0') {
    il2cpp_init_method_metadata(&"material-icons/wifi_off");
    il2cpp_init_method_metadata(&"account-go-offline");
    il2cpp_init_method_metadata(&"account.logoutCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.Logout");
    il2cpp_init_method_metadata(&"account-logout");
    il2cpp_init_method_metadata(&"Logout");
    il2cpp_init_method_metadata(&"account.goOffline");
    il2cpp_init_method_metadata(&"Go Offline");
    il2cpp_init_method_metadata(&"material-icons/logout");
    il2cpp_init_method_metadata(&"account.logout");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOffline");
    il2cpp_init_method_metadata(&"account.goOfflineCta");
    DAT_05704dcc = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (actions,1,"Go Offline","account.goOffline","account-go-offline",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/wifi_off",
                        (MethodInfo *)0x0);
    if (DAT_05704dba == '\0') {
      il2cpp_init_method_metadata(&"Column");
      DAT_05704dba = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      pMVar3 = "MainMenu.Account.GoOffline";
      (pGVar1->fields).textKey = (System_String_o *)"MainMenu.Account.GoOffline";
      il2cpp_runtime_glue(&(pGVar1->fields).textKey);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",pMVar3);
      (pGVar1->fields).contentLayout = pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (actions,5,"Logout","account.logout","account-logout",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/logout",
                          (MethodInfo *)0x0);
      if (DAT_05704dba == '\0') {
        il2cpp_init_method_metadata(&"Column");
        DAT_05704dba = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,1.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
        pMVar3 = "MainMenu.Account.Logout";
        (pGVar1->fields).textKey = (System_String_o *)"MainMenu.Account.Logout";
        il2cpp_runtime_glue(&(pGVar1->fields).textKey);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",pMVar3);
        (pGVar1->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41bf780

void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  
  if (DAT_05704db5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"account.onlineMode");
    il2cpp_init_method_metadata(&"account.loggedOut");
    il2cpp_init_method_metadata(&"account-profile-banner");
    il2cpp_init_method_metadata(&"account-banner-logged-out");
    il2cpp_init_method_metadata(&"accountBanner");
    il2cpp_init_method_metadata(&"account.offlineMode");
    il2cpp_init_method_metadata(&"account-banner-offline");
    DAT_05704db5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "accountBanner";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar5;
    il2cpp_runtime_glue(lVar1 + 0x10);
  }
  if (DAT_05704db7 == '\0') {
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Row");
    DAT_05704db7 = '\x01';
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
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar5,"account-banner-logged-out",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.loggedOut";
    if (DAT_05704db6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704db6 = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignItems = pSVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).alignItems,pSVar2);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).contentLayout);
        *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = "accountBanner";
        pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar5;
          il2cpp_runtime_glue(lVar1 + 0x30);
        }
        if (DAT_05704db7 == '\0') {
          il2cpp_init_method_metadata(&"Stretch");
          il2cpp_init_method_metadata(&"Row");
          DAT_05704db7 = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,pSVar2,pSVar5,"account-banner-offline",pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        pSVar2 = "account.offlineMode";
        if (DAT_05704db6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704db6 = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0)
        ;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignItems = pSVar2;
          il2cpp_runtime_glue(&(pGVar3->fields).alignItems,pSVar2);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).contentLayout = pGVar3;
            il2cpp_runtime_glue(&(pGVar4->fields).contentLayout);
            *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar2 = "accountBanner";
            pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
            if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
              System_Action<object>___ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar5;
              il2cpp_runtime_glue(lVar1 + 0x58);
            }
            if (DAT_05704db7 == '\0') {
              il2cpp_init_method_metadata(&"Stretch");
              il2cpp_init_method_metadata(&"Row");
              DAT_05704db7 = '\x01';
            }
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (ui,pSVar2,pSVar5,"account-profile-banner",pGVar3,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (MethodInfo *)0x0);
            pSVar2 = "account.onlineMode";
            if (DAT_05704db6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
              DAT_05704db6 = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                     il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,
                       (MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar3->fields).alignItems = pSVar2;
              il2cpp_runtime_glue(&(pGVar3->fields).alignItems,pSVar2);
              if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar4->fields).contentLayout = pGVar3;
                il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar3);
                *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 0;
                return;
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible (System_String_o* key, const MethodInfo* method);
// 0x41bfef0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704db6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704db6 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BannerRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout (const MethodInfo* method);
// 0x41bfe40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704db7 == '\0') {
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Row");
    DAT_05704db7 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$EditButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout (const MethodInfo* method);
// 0x41bff60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704db8 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704db8 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$FullWidthButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout (const MethodInfo* method);
// 0x41c0020

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704db9 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704db9 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$GrowActionButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout (const MethodInfo* method);
// 0x41c00e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704dba == '\0') {
    il2cpp_init_method_metadata(&"Column");
    DAT_05704dba = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$NameTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout (const MethodInfo* method);
// 0x41c0180

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704dbb == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704dbb = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$SkeletonTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout (float width, float height, const MethodInfo* method);
// 0x41c0250

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout
          (float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704dbc == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704dbc = '\x01';
  }
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled (System_String_o* key, const MethodInfo* method);
// 0x41c0320

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704dbd = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = key;
    il2cpp_runtime_glue(&(__this->fields).enabled,key);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$TextVisible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible (System_String_o* textKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x41c0390

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
          (System_String_o *textKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704dbe = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    il2cpp_runtime_glue(&__this->fields,textKey);
    (__this->fields).visible = visibleKey;
    il2cpp_runtime_glue(&(__this->fields).visible,visibleKey);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x41c0410

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704dbf = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    il2cpp_runtime_glue(&__this->fields,textKey);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_glue(&(__this->fields).enabled);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion (const MethodInfo* method);
// 0x41c04a0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704dc0 == '\0') {
    il2cpp_init_method_metadata(&"fade");
    DAT_05704dc0 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, const MethodInfo* method);
// 0x41c04f0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgAccountDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor (const MethodInfo* method);
// 0x44ee630

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec59 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, const MethodInfo* method);
// 0x44ee6a0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$<Divider>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__3_0 (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44ee6b0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__3_0
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *text;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar3;
  
  if (g_data_057aec5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Or");
    il2cpp_runtime_helper_023445d0(&"OR");
    il2cpp_runtime_helper_023445d0(&"Divider");
    il2cpp_runtime_helper_023445d0(&"accountLoginDividerText");
    il2cpp_runtime_helper_023445d0(&"accountLoginDividerLine");
    g_data_057aec5a = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    (pGVar1->fields).style = "accountLoginDividerLine";
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
      pMVar3 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar3 = extraout_RDX_00;
      }
      text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.Or","OR",pMVar3);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,text,"accountLoginDividerText",(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.Or";
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).textKey);
        pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).type = "Divider";
          il2cpp_runtime_helper_022b4080(&pGVar1->fields);
          (pGVar1->fields).style = "accountLoginDividerLine";
          il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,1.0,(MethodInfo *)0x0);
          (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
          Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = extraout_RDX_01;
  if (g_data_057aec5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_runtime_helper_023445d0(&"Forgot Password");
    g_data_057aec5b = '\x01';
    pMVar3 = extraout_RDX_02;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.ForgotPasswordTitle","Forgot Password",pMVar3);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Intro
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x44ed6a0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *key,System_String_o *fallback,
               MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  undefined8 *puVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  method_00 = (MethodInfo *)fallback;
  if (g_data_057aec4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec4e = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)key;
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(key,fallback,method_00);
  if ((body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (body,text,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     fallback = text, pGVar6 = body, pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar4->fields).textKey = key;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey,key);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec54 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar7 = TypeInfo_AottgAccountDialogUi;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar7 = TypeInfo_AottgAccountDialogUi;
  }
  TypeInfo_AottgAccountDialogUi = lVar7;
  if (plVar2 == (long *)0x0) {
    auVar8 = il2cpp_runtime_helper_022b2c90();
label_044ed831:
    puVar5 = (undefined8 *)(auVar8._0_8_ + (long)*(int *)(auVar8._8_8_ + 8 + lVar7) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar8._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar8._0_8_ = lVar3;
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar7) == TypeInfo_IGisketchLocalizer) goto label_044ed831;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar7);
    }
    puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  (*(code *)*puVar5)(plVar2,pGVar6,fallback,puVar5[1],(code *)*puVar5);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Providers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44ed860

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (g_data_057aec4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-provider-discord");
    il2cpp_runtime_helper_023445d0(&"account.login.discord");
    il2cpp_runtime_helper_023445d0(&"Continue with Discord");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.LoginWithDiscord");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/DiscordIcon");
    il2cpp_runtime_helper_023445d0(&"buttonDiscord");
    il2cpp_runtime_helper_023445d0(&"account.canDiscord");
    il2cpp_runtime_helper_023445d0(&"account.login.google");
    il2cpp_runtime_helper_023445d0(&"account-provider-google");
    il2cpp_runtime_helper_023445d0(&"Continue with Google");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/GoogleIcon");
    il2cpp_runtime_helper_023445d0(&"account.canGoogle");
    il2cpp_runtime_helper_023445d0(&"buttonGoogle");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.LoginWithGoogle");
    g_data_057aec4f = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-discord","buttonDiscord","UI/Icons/Navigation/DiscordIcon","MainMenu.Account.LoginWithDiscord","Continue with Discord","account.login.discord","account.canDiscord",
             in_stack_ffffffffffffffd8);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-google","buttonGoogle","UI/Icons/Navigation/GoogleIcon","MainMenu.Account.LoginWithGoogle","Continue with Google","account.login.google","account.canGoogle",
             in_stack_ffffffffffffffd8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Divider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44edc20

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_03;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *key;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *key_00;
  System_String_o *fallback;
  int32_t iStack_88;
  int32_t iStack_80;
  System_String_o *pSVar9;
  
  if (g_data_057aec50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Divider_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.showLoginDivider");
    il2cpp_runtime_helper_023445d0(&"account-auth-divider");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec50 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = "default";
  pGVar2 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(lVar1 + 8) = pGVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pGVar2);
  }
  pSVar9 = (System_String_o *)0x0;
  pSVar6 = (System_String_o *)0x0;
  key_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  fallback = (System_String_o *)0x0;
  pGVar8 = "Row";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar9 = (System_String_o *)0x0;
    fallback = (System_String_o *)0x0;
    pSVar6 = "account-auth-divider";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar5,(System_Action_AottgUi__o *)pGVar2,"account-auth-divider",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    key_00 = pGVar3;
    pSVar5 = "account.showLoginDivider";
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      key_00 = pGVar3;
      pSVar5 = "account.showLoginDivider";
    }
    "account.showLoginDivider" = pSVar5;
    if (g_data_057aec56 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec56 = '\x01';
    }
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar2->fields).alignItems;
      (pGVar2->fields).alignItems = pSVar5;
      il2cpp_runtime_helper_022b4080();
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec56 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar5 = (System_String_o *)0x0;
  pGVar3 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).alignItems = (System_String_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).alignItems,pGVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iStack_80 = (int32_t)pGVar4;
  iStack_88 = (int32_t)pGVar2;
  pGVar2 = key;
  if (g_data_057aec51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec51 = '\x01';
    pGVar2 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pGVar2 = extraout_RDX_00;
  }
  pGVar8 = key;
  pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)key,pSVar6,(MethodInfo *)pGVar2);
  if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (pGVar8 = pGVar3,
     pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pSVar6,"accountInputLabel",(System_String_o *)0x0
                         ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar4->fields).textKey = (System_String_o *)key;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey,key);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text((System_String_o *)key_00,fallback,method_00);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pSVar5,pSVar6,iStack_88,"inputField",pGVar2
                        ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,iStack_80,(MethodInfo *)0x0);
    pGVar8 = pGVar3;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).textKey = (System_String_o *)key_00;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey,key_00);
      (pGVar4->fields).value = pSVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value);
      pSVar5 = "account.auth.idle";
      if (g_data_057aec57 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec57 = '\x01';
      }
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar8 = pGVar2;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar2->fields).alignSelf = pSVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignSelf,pSVar5);
        (pGVar4->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec57 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar5 = (System_String_o *)0x0;
  __this_04 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_00->fields).enabled = (System_String_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).enabled,pGVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar4 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,pSVar5);
    pMVar7 = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar7 = extraout_RDX_02;
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar7);
    (__this_01->fields).text = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,pSVar5);
    (__this_01->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).textKey);
    (__this_01->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
    (__this_01->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action);
    (__this_01->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style);
    pSVar5 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar4 = __this_02;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).textKey = pSVar5;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).textKey,pSVar5);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_01->fields).contentLayout;
      (__this_01->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_02;
      il2cpp_runtime_helper_022b4080(pGVar4,__this_02);
      if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = extraout_RDX_03;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar7 = extraout_RDX_04;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar7 = extraout_RDX_05;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar7);
  if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,pSVar5,"accountDialogText","account-login-no-methods",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0
     )) {
    (pGVar4->fields).textKey = "MainMenu.Account.NoMethods";
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey);
    pSVar5 = "account.noMethods";
    if (g_data_057aec56 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec56 = '\x01';
    }
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignItems = pSVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignItems,pSVar5);
      (pGVar4->fields).contentLayout = pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar2);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_03,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_03;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_03);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$LabeledInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* labelKey, System_String_o* label, System_String_o* placeholderKey, System_String_o* placeholder, int32_t type, int32_t maxCharacters, System_String_o* value, const MethodInfo* method);
// 0x44edf30

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *labelKey,
               System_String_o *label,System_String_o *placeholderKey,System_String_o *placeholder,
               int32_t type,int32_t maxCharacters,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_04;
  
  pMVar4 = (MethodInfo *)labelKey;
  if (g_data_057aec51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec51 = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)labelKey;
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(labelKey,label,pMVar4);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ui;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar1,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = labelKey;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey,labelKey);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(placeholderKey,placeholder,method_00);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (ui,id,pSVar1,type,"inputField",pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,maxCharacters,(MethodInfo *)0x0);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ui;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = placeholderKey;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey,placeholderKey);
        (pGVar2->fields).value = value;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).value);
        pSVar1 = "account.auth.idle";
        if (g_data_057aec57 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec57 = '\x01';
        }
        __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar3 = __this;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this->fields).alignSelf = pSVar1;
          il2cpp_runtime_helper_022b4080(&(__this->fields).alignSelf,pSVar1);
          (pGVar2->fields).contentLayout = __this;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec57 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar1 = (System_String_o *)0x0;
  __this_04 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_00->fields).enabled = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).enabled,pGVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar2 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,pSVar1);
    pMVar4 = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_02;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar4);
    (__this_01->fields).text = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,pSVar1);
    (__this_01->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).textKey);
    (__this_01->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
    (__this_01->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action);
    (__this_01->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style);
    pSVar1 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar2 = __this_02;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).textKey = pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).textKey,pSVar1);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_01->fields).contentLayout;
      (__this_01->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_02;
      il2cpp_runtime_helper_022b4080(pGVar2,__this_02);
      if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX_03;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar4 = extraout_RDX_04;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_05;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar4);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,pSVar1,"accountDialogText","account-login-no-methods",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (g_data_057aec56 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec56 = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).alignItems = pSVar1;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems,pSVar1);
        (pGVar2->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_03,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_03;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_03);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$KeepSignedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x44ee230

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar3;
  
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar2 = __this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields).id,id);
    pMVar3 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar3 = extraout_RDX_00;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar3);
    (__this->fields).text = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields).text,pSVar1);
    (__this->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this->fields).textKey);
    (__this->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this->fields).value);
    (__this->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this->fields).action);
    (__this->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this->fields).style);
    pSVar1 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar2 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).textKey = pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).textKey,pSVar1);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this->fields).contentLayout;
      (__this->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_00;
      il2cpp_runtime_helper_022b4080(pGVar2,__this_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = extraout_RDX_01;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar3 = extraout_RDX_02;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_03;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar3);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,pSVar1,"accountDialogText","account-login-no-methods",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (g_data_057aec56 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec56 = '\x01';
      }
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_01->fields).alignItems = pSVar1;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).alignItems,pSVar1);
        (pGVar2->fields).contentLayout = __this_01;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this_01);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_02,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_02;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_02);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$EmptyMethods
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44ee450

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",in_RDX);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,pSVar1,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (g_data_057aec56 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec56 = '\x01';
      }
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this->fields).alignItems = pSVar1;
        il2cpp_runtime_helper_022b4080(&(__this->fields).alignItems,pSVar1);
        (pGVar2->fields).contentLayout = __this;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x44ed750

System_String_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (g_data_057aec54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec54 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar6 = TypeInfo_AottgAccountDialogUi;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar6 = TypeInfo_AottgAccountDialogUi;
  }
  TypeInfo_AottgAccountDialogUi = lVar6;
  if (plVar2 == (long *)0x0) {
    auVar7 = il2cpp_runtime_helper_022b2c90();
label_044ed831:
    puVar4 = (undefined8 *)(auVar7._0_8_ + (long)*(int *)(auVar7._8_8_ + 8 + lVar6) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar7._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar7._0_8_ = lVar3;
      lVar6 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) goto label_044ed831;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar2,key,fallback,puVar4[1],(code *)*puVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Provider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* style, System_String_o* icon, System_String_o* textKey, System_String_o* fallback, System_String_o* action, System_String_o* visibleKey, const MethodInfo* method);
// 0x44eda00

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *style,
               System_String_o *icon,System_String_o *textKey,System_String_o *fallback,
               System_String_o *action,System_String_o *visibleKey,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_02;
  System_String_o *pSVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *key;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *key_00;
  System_String_o *fallback_00;
  int32_t iStack_120;
  int32_t iStack_118;
  System_String_o *pSVar11;
  
  pMVar9 = (MethodInfo *)style;
  if (g_data_057aec55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec55 = '\x01';
    pMVar9 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar9 = extraout_RDX_00;
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)textKey;
  pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(textKey,fallback,pMVar9);
  if ((body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (body,0,pSVar2,action,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0),
     pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)body,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar3->fields).textKey = textKey;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey,textKey);
    (pGVar3->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style,style);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).alignItems = visibleKey;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignItems);
      (pGVar6->fields).alignSelf = "account.auth.idle";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignSelf);
      (pGVar3->fields).contentLayout = pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Divider_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.showLoginDivider");
    il2cpp_runtime_helper_023445d0(&"account-auth-divider");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec50 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pGVar6 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(lVar1 + 8) = pGVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pGVar6);
  }
  pSVar11 = (System_String_o *)0x0;
  pSVar8 = (System_String_o *)0x0;
  key_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  fallback_00 = (System_String_o *)0x0;
  pGVar10 = "Row";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    fallback_00 = (System_String_o *)0x0;
    pSVar8 = "account-auth-divider";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,(System_Action_AottgUi__o *)pGVar6,
                        "account-auth-divider",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    key_00 = pGVar7;
    pSVar2 = "account.showLoginDivider";
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      key_00 = pGVar7;
      pSVar2 = "account.showLoginDivider";
    }
    "account.showLoginDivider" = pSVar2;
    if (g_data_057aec56 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec56 = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar10 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
      (pGVar6->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080();
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec56 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar2 = (System_String_o *)0x0;
  pGVar5 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar7->fields).alignItems = (System_String_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).alignItems,pGVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iStack_118 = (int32_t)pGVar3;
  iStack_120 = (int32_t)pGVar6;
  pGVar6 = key;
  if (g_data_057aec51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec51 = '\x01';
    pGVar6 = extraout_RDX_01;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pGVar6 = extraout_RDX_02;
  }
  pGVar10 = key;
  pSVar8 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)key,pSVar8,(MethodInfo *)pGVar6);
  if ((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (pGVar10 = pGVar5,
     pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar8,"accountInputLabel",(System_String_o *)0x0
                         ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar3->fields).textKey = (System_String_o *)key;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey,key);
    pSVar8 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                       ((System_String_o *)key_00,fallback_00,method_00);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar8,iStack_120,"inputField",
                        pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,iStack_118,(MethodInfo *)0x0);
    pGVar10 = pGVar5;
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = (System_String_o *)key_00;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey,key_00);
      (pGVar3->fields).value = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec57 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec57 = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf,pSVar2);
        (pGVar3->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec57 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar2 = (System_String_o *)0x0;
  __this_03 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = (System_String_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled,pGVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar3 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar2);
    pMVar9 = extraout_RDX_03;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_04;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar9);
    (__this_00->fields).text = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).text,pSVar2);
    (__this_00->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).textKey);
    (__this_00->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).value);
    (__this_00->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).action);
    (__this_00->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    pSVar2 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar3 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).textKey = pSVar2;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).textKey,pSVar2);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_00->fields).contentLayout;
      (__this_00->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_01;
      il2cpp_runtime_helper_022b4080(pGVar3,__this_01);
      if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX_05;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar9 = extraout_RDX_06;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar9 = extraout_RDX_07;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar9);
  if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pSVar2,"accountDialogText","account-login-no-methods",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0
     )) {
    (pGVar3->fields).textKey = "MainMenu.Account.NoMethods";
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
    pSVar2 = "account.noMethods";
    if (g_data_057aec56 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec56 = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems,pSVar2);
      (pGVar3->fields).contentLayout = pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_02,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_02;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_02);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible (System_String_o* key, const MethodInfo* method);
// 0x44edec0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_02;
  System_String_o *in_RCX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *key_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar7;
  int32_t unaff_EBX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *in_R8;
  System_String_o *in_R9;
  int32_t unaff_R14D;
  System_String_o *unaff_retaddr;
  
  if (g_data_057aec56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec56 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar6 = (System_String_o *)0x0;
  pGVar4 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar1->fields).alignItems = key;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).alignItems,key);
    return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar1 = key_00;
  if (g_data_057aec51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec51 = '\x01';
    pGVar1 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pGVar1 = extraout_RDX_00;
  }
  pGVar8 = key_00;
  pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)key_00,in_RCX,(MethodInfo *)pGVar1);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = pGVar4;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,pSVar2,"accountInputLabel",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = (System_String_o *)key_00;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey,key_00);
      pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(in_R8,in_R9,method_00);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,pSVar6,pSVar2,unaff_EBX,"inputField",
                          pGVar1,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,unaff_R14D,(MethodInfo *)0x0);
      pGVar8 = pGVar4;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).textKey = in_R8;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey,in_R8);
        (pGVar3->fields).value = unaff_retaddr;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value);
        pSVar6 = "account.auth.idle";
        if (g_data_057aec57 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec57 = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar8 = pGVar4;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignSelf = pSVar6;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar6);
          (pGVar3->fields).contentLayout = pGVar4;
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)
                   il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
          return pGVar5;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec57 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar6 = (System_String_o *)0x0;
  pGVar5 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = (System_String_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled,pGVar8);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar3 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = pSVar6;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar6);
    pMVar7 = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar7 = extraout_RDX_02;
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar7);
    (__this_00->fields).text = pSVar6;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).text,pSVar6);
    (__this_00->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).textKey);
    (__this_00->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).value);
    (__this_00->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).action);
    (__this_00->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    pSVar6 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar3 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).textKey = pSVar6;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).textKey,pSVar6);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_00->fields).contentLayout;
      (__this_00->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_01;
      il2cpp_runtime_helper_022b4080(pGVar3,__this_01);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,__this_00,(MethodInfo *)0x0);
        return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = extraout_RDX_03;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar7 = extraout_RDX_04;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar7 = extraout_RDX_05;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar7);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pSVar6,"accountDialogText","account-login-no-methods",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pSVar6 = "account.noMethods";
      if (g_data_057aec56 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec56 = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignItems = pSVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems,pSVar6);
        (pGVar3->fields).contentLayout = pGVar4;
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)
                 il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        return pGVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_02,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_02;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)
           il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_02);
  return pGVar5;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled (System_String_o* key, const MethodInfo* method);
// 0x44ee1c0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  
  if (g_data_057aec57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec57 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pSVar1 = (System_String_o *)0x0;
  pGVar3 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = key;
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled,key);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.StaySignedIn");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"Stay signed in");
    g_data_057aec52 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar2 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Checkbox";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar1);
    pMVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_00;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",pMVar4);
    (__this_00->fields).text = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).text,pSVar1);
    (__this_00->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).textKey);
    (__this_00->fields).value = "true";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).value);
    (__this_00->fields).action = "account.keepSignedIn";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).action);
    (__this_00->fields).style = "checkBox";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    pSVar1 = "account.auth.idle";
    if (g_data_057aec57 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec57 = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar2 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).textKey = pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).textKey,pSVar1);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_00->fields).contentLayout;
      (__this_00->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_01;
      il2cpp_runtime_helper_022b4080(pGVar2,__this_01);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,__this_00,(MethodInfo *)0x0);
        return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX_01;
  if (g_data_057aec53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
    il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
    il2cpp_runtime_helper_023445d0(&"account.noMethods");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec53 = '\x01';
    pMVar4 = extraout_RDX_02;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_03;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar4);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,pSVar1,"accountDialogText","account-login-no-methods",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (g_data_057aec56 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec56 = '\x01';
      }
      __this_02 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_02->fields).alignItems = pSVar1;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).alignItems,pSVar1);
        (pGVar2->fields).contentLayout = __this_02;
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)
                 il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this_02);
        return pGVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_03,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_03;
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)
           il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_03);
  return pGVar3;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor (const MethodInfo* method);
// 0x44ee5c0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this;
  
  if (g_data_057aec58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    g_data_057aec58 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this);
  return;
}



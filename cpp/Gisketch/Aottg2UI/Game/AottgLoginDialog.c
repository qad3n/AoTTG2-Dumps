// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgLoginDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor (const MethodInfo* method);
// 0x41bef60

void Gisketch_Aottg2UI_Game_AottgLoginDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704db1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704db1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, const MethodInfo* method);
// 0x41befd0

void Gisketch_Aottg2UI_Game_AottgLoginDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<BuildBody>b__16_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* email, const MethodInfo* method);
// 0x41befe0

void Gisketch_Aottg2UI_Game_AottgLoginDialog_<>c__<BuildBody>b__16_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *email,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704db2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"Email address");
    il2cpp_init_method_metadata(&"account.login.email");
    il2cpp_init_method_metadata(&"account-login-keep-signed-in");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"MainMenu.Account.Email");
    il2cpp_init_method_metadata(&"account-login-email");
    il2cpp_init_method_metadata(&"account-login-password");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"Email");
    il2cpp_init_method_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_init_method_metadata(&"Common.Password");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"account.loginCta");
    il2cpp_init_method_metadata(&"account-login-email-submit");
    il2cpp_init_method_metadata(&"material-icons/login");
    DAT_05704db2 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-password","Common.Password","Password","Common.Password","Password",2,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(email,"account-login-keep-signed-in",(MethodInfo *)0x0);
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                   ("MainMenu.Account.SignIn","Sign In",(MethodInfo *)0x0);
  if (email != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (email,0,text,"account.login.email","account-login-email-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_glue();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta("account.loginCta",(MethodInfo *)0x0);
      (pGVar1->fields).contentLayout = pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).contentLayout);
      Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks(email,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41bf300

void Gisketch_Aottg2UI_Game_AottgLoginDialog_<>c__<FooterLinks>b__17_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (DAT_05704db3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__FooterLinks_b__17_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Forgot password?");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"account.openForgotPassword");
    il2cpp_init_method_metadata(&"MainMenu.Account.ForgotPassword");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"account-login-register-link");
    il2cpp_init_method_metadata(&"account-login-open-forgot");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704db3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = build;
    il2cpp_runtime_glue(lVar1 + 0x10,build);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,4.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar3,build,"account-login-register-link",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                       ("MainMenu.Account.ForgotPassword","Forgot password?",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,pSVar3,"account.openForgotPassword","account-login-open-forgot",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).textKey = "MainMenu.Account.ForgotPassword";
      il2cpp_runtime_glue(&(pGVar4->fields).textKey);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled("account.auth.idle",(MethodInfo *)0x0);
      (pGVar4->fields).contentLayout = pGVar2;
      il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* left, const MethodInfo* method);
// 0x41bf5d0

void Gisketch_Aottg2UI_Game_AottgLoginDialog_<>c__<FooterLinks>b__17_1
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *left,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (DAT_05704db4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"No account?");
    il2cpp_init_method_metadata(&"account.openRegister");
    il2cpp_init_method_metadata(&"MainMenu.Account.NoAccount");
    il2cpp_init_method_metadata(&"account-login-open-register");
    il2cpp_init_method_metadata(&"MainMenu.Account.Register");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"accountDialogText");
    il2cpp_init_method_metadata(&"Register");
    DAT_05704db4 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.NoAccount","No account?",(MethodInfo *)0x0);
  if (left != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (left,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoAccount";
      il2cpp_runtime_glue(&(pGVar2->fields).textKey);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.Register","Register",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (left,3,pSVar1,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.Register";
        il2cpp_runtime_glue(&(pGVar2->fields).textKey);
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled("account.auth.idle",(MethodInfo *)0x0);
        (pGVar2->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177be0

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704b1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Sign In");
    DAT_05704b1c = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SignIn","Sign In",in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177c50

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704b1d == '\0') {
    il2cpp_init_method_metadata(&"material-icons/login");
    DAT_05704b1d = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177c80

int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177c90

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704b1e == '\0') {
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b1e = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177cc0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704b1f == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704b1f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x4177d90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704b20 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_05704b20 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,14.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4177e50

void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_05704b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"MainMenu.Account.ChooseMethod");
    il2cpp_init_method_metadata(&"accountLoginEmailSection");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"account-login-email-section");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Sign in to your AOTTG2 account.");
    il2cpp_init_method_metadata(&"account.canEmailPassword");
    DAT_05704b21 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = "MainMenu.Account.ChooseMethod";
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
            (body,(System_String_o *)"MainMenu.Account.ChooseMethod","Sign in to your AOTTG2 account.",in_RCX);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,method_00);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,method_00);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "accountLoginEmailSection";
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
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-login-email-section",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (DAT_05704b23 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704b23 = '\x01';
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
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,(MethodInfo *)pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$FooterLinks
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41781c0

void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704b22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__FooterLinks_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"account-login-links");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    DAT_05704b22 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
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
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,build,"account-login-links",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x4178150

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b23 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x41783b0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b24 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x4178420

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b25 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x41784b0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}



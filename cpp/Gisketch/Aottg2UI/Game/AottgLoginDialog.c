// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgLoginDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor (const MethodInfo* method);
// 0x181defdf0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    Il2CppMethodInitialized_184344ae2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<BuildBody>b__16_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* email, const MethodInfo* method);
// 0x181de8460

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *email,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"Email address");
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-keep-signed-in");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-password");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Email");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign In");
    il2cpp_codegen_initialize_runtime_metadata(&"account.loginCta");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_184344ae3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email",
             "Email",0,0,(System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-password","Common.Password","Password","Common.Password",
             "Password",3,0,(System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(email,"account-login-keep-signed-in",(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.SignIn","Sign In",(MethodInfo *)0x0);
  if (email != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (email,0,pSVar1,"account.login.email","account-login-email-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.SignIn";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.SignIn");
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar2->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
      pSVar1 = "account.loginCta";
      if (Il2CppMethodInitialized_184344ae1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
        Il2CppMethodInitialized_184344ae1 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
        (__this_00->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,"account.auth.idle");
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
        if (Il2CppMethodInitialized_184344ade == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
          il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
          il2cpp_codegen_initialize_runtime_metadata(&"account-login-links");
          il2cpp_codegen_initialize_runtime_metadata(&"Center");
          il2cpp_codegen_initialize_runtime_metadata(&"Row");
          il2cpp_codegen_initialize_runtime_metadata(&"default");
          Il2CppMethodInitialized_184344ade = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c)
          ;
        }
        pSVar1 = "default";
        __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0;
        if (__this_01 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
          }
          object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9;
          __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this_01,object,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0 =
               (System_Action_AottgUi__o *)__this_01;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0,__this_01);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","SpaceBetween","Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (email,pSVar1,(System_Action_AottgUi__o *)__this_01,"account-login-links",pGVar3,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181dec6c0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Forgot password?");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openForgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-register-link");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open-forgot");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ae4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  pSVar1 = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_1 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_1,__this_00);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,4.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-login-register-link",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                       ("MainMenu.Account.ForgotPassword","Forgot password?",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,pSVar1,"account.openForgotPassword","account-login-open-forgot",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.ForgotPassword";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.ForgotPassword");
      pSVar1 = "account.auth.idle";
      if (Il2CppMethodInitialized_184344ae0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_184344ae0 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled,pSVar1);
        (pGVar2->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* left, const MethodInfo* method);
// 0x181deca20

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *left,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"No account?");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openRegister");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.NoAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open-register");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Register");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    il2cpp_codegen_initialize_runtime_metadata(&"Register");
    Il2CppMethodInitialized_184344ae5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.NoAccount","No account?",(MethodInfo *)0x0);
  if (left != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (left,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoAccount";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.NoAccount");
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.Register","Register",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (left,3,pSVar1,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.Register";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.Register");
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_184344ae0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_184344ae0 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_00->fields).enabled = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,pSVar1);
          (pGVar2->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x181de1060

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign In");
    Il2CppMethodInitialized_184344ad8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.SignIn","Sign In",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x181de1030

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_184344ad9 = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x181de0f00

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ada = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x181de0f30

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344adb = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x181de0e10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344adc = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181de07b0

void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_BuildBody_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ChooseMethod");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign in to your AOTTG2 account.");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    Il2CppMethodInitialized_184344add = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
            (body,"MainMenu.Account.ChooseMethod","Sign in to your AOTTG2 account.",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__16_0;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_BuildBody_b__16_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__16_0 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__16_0,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-login-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_184344adf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344adf = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_01->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,pSVar1);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_01);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
        }
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$FooterLinks
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181de0b60

void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-links");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344ade = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9__17_0,__this);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this,"account-login-links",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x181de0da0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344adf = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).visible,key);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x181de0af0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ae0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,key);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x181de0710

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ae1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,textKey);
    (__this->fields).enabled = "account.auth.idle";
    Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,"account.auth.idle");
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor(Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



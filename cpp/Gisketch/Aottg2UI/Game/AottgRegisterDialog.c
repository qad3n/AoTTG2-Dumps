// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRegisterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor (const MethodInfo* method);
// 0x181defd80

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    Il2CppMethodInitialized_184344b07 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9,__this)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x181de8a40

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"At least 8 characters");
    il2cpp_codegen_initialize_runtime_metadata(&"Email address");
    il2cpp_codegen_initialize_runtime_metadata(&"Repeat password");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-login-link");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.AccountNameHint");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-password");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Create Account");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account.registerCta");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-keep-signed-in");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.RepeatPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"Email");
    il2cpp_codegen_initialize_runtime_metadata(&"Account name");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-confirm-password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.PasswordHint");
    il2cpp_codegen_initialize_runtime_metadata(&"account.register.email");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ConfirmPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.DisplayNamePlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"Your account name is your unique account identifier. It is separate from your in-game name.");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha Blouse");
    Il2CppMethodInitialized_184344b08 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email",
             "Email",0,0,(System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-display-name","MainMenu.Account.DisplayName","Account name","MainMenu.Account.DisplayNamePlaceholder",
             "Sasha Blouse",0,0,(System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.AccountNameHint","Your account name is your unique account identifier. It is separate from your in-game name.",(MethodInfo *)0x0);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (form,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.AccountNameHint";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.AccountNameHint");
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
                (form,"account-register-password","Common.Password","Password","MainMenu.Account.PasswordHint",
                 "At least 8 characters",3,0,(System_String_o *)0x0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
                (form,"account-register-confirm-password","MainMenu.Account.ConfirmPassword","Confirm password","MainMenu.Account.RepeatPassword",
                 "Repeat password",3,0,(System_String_o *)0x0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(form,"account-register-keep-signed-in",(MethodInfo *)0x0);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.CreateAccount","Create Account",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (form,0,pSVar1,"account.register.email","account-register-submit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.CreateAccount";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.CreateAccount");
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        (pGVar2->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
        pSVar1 = "account.registerCta";
        if (Il2CppMethodInitialized_184344b06 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
          Il2CppMethodInitialized_184344b06 = '\x01';
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
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
          }
          pSVar1 = "default";
          __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_1;
          if (__this_01 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
            }
            object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9
            ;
            __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (__this_01,object,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_1,
                       (MethodInfo *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_1 =
                 (System_Action_AottgUi__o *)__this_01;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_1,
                       __this_01);
          }
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","Center","Center",
                              (System_String_o *)0x0,(System_String_o *)0x0,4.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (form,pSVar1,(System_Action_AottgUi__o *)__this_01,"account-register-login-link",pGVar3,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181de91b0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row
               ,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-open-login");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.AlreadyHaveAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"Already have an account?");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign In");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_184344b09 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.AlreadyHaveAccount","Already have an account?",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.AlreadyHaveAccount";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.AlreadyHaveAccount");
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.SignIn","Sign In",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,3,pSVar1,"account.openLogin","account-register-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.SignIn";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.SignIn");
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_184344b05 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_184344b05 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x181de6460

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"Create Account");
    Il2CppMethodInitialized_184344afe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.CreateAccount","Create Account",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x181de6430

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_184344aff = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x181de6300

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344b00 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x181de6330

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344b01 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x181de6210

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344b02 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181de5df0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccountIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"Create an AOTTG2 account or continue with OAuth.");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    Il2CppMethodInitialized_184344b03 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
            (body,"MainMenu.Account.CreateAccountIntro","Create an AOTTG2 account or continue with OAuth.",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_0;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_0 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9__18_0,__this_00);
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
                       (body,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-register-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_184344b04 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344b04 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x181de61a0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344b04 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x181de6130

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344b05 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x181de5d50

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344b06 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor(Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



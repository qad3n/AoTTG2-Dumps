// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgForgotPasswordDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor (const MethodInfo* method);
// 0x181defca0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
    Il2CppMethodInitialized_184344ad6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$<BuildBody>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0 (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x181de8000

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-open-login");
    il2cpp_codegen_initialize_runtime_metadata(&"Email address");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Email");
    il2cpp_codegen_initialize_runtime_metadata(&"Send Reset Link");
    il2cpp_codegen_initialize_runtime_metadata(&"account.forgotCta");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"account.forgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.BackToSignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SendResetLink");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    il2cpp_codegen_initialize_runtime_metadata(&"Back to sign in");
    Il2CppMethodInitialized_184344ad7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-forgot-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email",
             "Email",0,0,(System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.SendResetLink","Send Reset Link",(MethodInfo *)0x0);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar1,"account.forgotPassword","account-forgot-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.SendResetLink";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.SendResetLink");
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
      (pGVar2->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value);
      pSVar1 = "account.forgotCta";
      if (Il2CppMethodInitialized_184344ad5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
        Il2CppMethodInitialized_184344ad5 = '\x01';
      }
      pGVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar3->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).text,pSVar1);
        (pGVar3->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).enabled,"account.auth.idle");
        (pGVar2->fields).bind = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,pGVar3);
        pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                           ("MainMenu.Account.BackToSignIn","Back to sign in",(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (form,3,pSVar1,"account.openLogin","account-forgot-open-login",(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).textKey = "MainMenu.Account.BackToSignIn";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.BackToSignIn");
          pSVar1 = "account.auth.idle";
          if (Il2CppMethodInitialized_184344ad4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Il2CppMethodInitialized_184344ad4 = '\x01';
          }
          pGVar3 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (pGVar3->fields).enabled = pSVar1;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).enabled,pSVar1);
            (pGVar2->fields).bind = pGVar3;
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,pGVar3);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x181dda400

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"Forgot Password");
    Il2CppMethodInitialized_184344acd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.ForgotPasswordTitle","Forgot Password",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x181dda3d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_184344ace = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x181dda2a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344acf = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x181dda2d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344ad0 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x181dda1b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ad1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344ad1 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,18.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181dd9da0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c_BuildBody_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Enter your email and we will send a reset link if an account exists.");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPasswordIntro");
    Il2CppMethodInitialized_184344ad2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
            (body,"MainMenu.Account.ForgotPasswordIntro","Enter your email and we will send a reset link if an account exists.",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9__14_0;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c_BuildBody_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9__14_0 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9__14_0,
               __this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-forgot-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_184344ad3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344ad3 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x181dda140

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ad3 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x181dda0d0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ad4 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x181dd9d00

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ad5 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor(Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgAccountDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor (const MethodInfo* method);
// 0x181defb50

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this;
  
  if (Il2CppMethodInitialized_184344acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
    Il2CppMethodInitialized_184344acb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor(Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$<Divider>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__3_0 (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181dec2f0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__3_0
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *text;
  
  if (Il2CppMethodInitialized_184344acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Or");
    il2cpp_codegen_initialize_runtime_metadata(&"OR");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginDividerText");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginDividerLine");
    Il2CppMethodInitialized_184344acc = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type,"Divider");
    (pGVar1->fields).style = "accountLoginDividerLine";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style,"accountLoginDividerLine");
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar1->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi)
        ;
      }
      text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                       ("MainMenu.Account.Or","OR",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,text,"accountLoginDividerText",(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.Or";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.Or");
        pGVar1 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).type = "Divider";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type,"Divider");
          (pGVar1->fields).style = "accountLoginDividerLine";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style,"accountLoginDividerLine");
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
          (pGVar1->fields).layout = pGVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
          Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Intro
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181dd5b20

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *key,System_String_o *fallback,
               MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_184344ac0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(key,fallback,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,text,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Providers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181dd6320

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"account-provider-discord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.discord");
    il2cpp_codegen_initialize_runtime_metadata(&"Continue with Discord");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoginWithDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/DiscordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.google");
    il2cpp_codegen_initialize_runtime_metadata(&"account-provider-google");
    il2cpp_codegen_initialize_runtime_metadata(&"Continue with Google");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/GoogleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canGoogle");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonGoogle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoginWithGoogle");
    Il2CppMethodInitialized_184344ac1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-discord","buttonDiscord","UI/Icons/Navigation/DiscordIcon","MainMenu.Account.LoginWithDiscord",
             "Continue with Discord","account.login.discord","account.canDiscord",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-google","buttonGoogle","UI/Icons/Navigation/GoogleIcon","MainMenu.Account.LoginWithGoogle",
             "Continue with Google","account.login.google","account.canGoogle",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Divider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181dd5680

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c_Divider_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account.showLoginDivider");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344ac2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
  }
  pSVar1 = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9__3_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c_Divider_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9__3_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9__3_0,__this);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,(System_Action_AottgUi__o *)__this,"account-auth-divider",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    }
    pSVar1 = "account.showLoginDivider";
    if (Il2CppMethodInitialized_184344ac8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344ac8 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,pSVar1);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$LabeledInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* labelKey, System_String_o* label, System_String_o* placeholderKey, System_String_o* placeholder, int32_t type, int32_t maxCharacters, System_String_o* value, const MethodInfo* method);
// 0x181dd5e00

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *labelKey,
               System_String_o *label,System_String_o *placeholderKey,System_String_o *placeholder,
               int32_t type,int32_t maxCharacters,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ac3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(labelKey,label,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar1,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = labelKey;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,labelKey);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(placeholderKey,placeholder,(MethodInfo *)0x0)
      ;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (ui,id,pSVar1,type,"inputField",layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,maxCharacters,
                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = placeholderKey;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,placeholderKey);
        (pGVar2->fields).value = value;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,value);
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_184344ac9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_184344ac9 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this->fields).enabled = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,pSVar1);
          (pGVar2->fields).bind = __this;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$KeepSignedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x181dd5be0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.StaySignedIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account.keepSignedIn");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay signed in");
    Il2CppMethodInitialized_184344ac4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Checkbox";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Checkbox");
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                       ("MainMenu.Account.StaySignedIn","Stay signed in",(MethodInfo *)0x0);
    (__this->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,pSVar1);
    (__this->fields).textKey = "MainMenu.Account.StaySignedIn";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey,"MainMenu.Account.StaySignedIn");
    (__this->fields).value = "true";
    Il2CppCodeGenWriteBarrier(&(__this->fields).value,"true");
    (__this->fields).action = "account.keepSignedIn";
    Il2CppCodeGenWriteBarrier(&(__this->fields).action,"account.keepSignedIn");
    (__this->fields).style = "checkBox";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"checkBox");
    pSVar1 = "account.auth.idle";
    if (Il2CppMethodInitialized_184344ac9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344ac9 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,pSVar1);
      (__this->fields).bind = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).bind,__this_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$EmptyMethods
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181dd5940

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-no-methods");
    il2cpp_codegen_initialize_runtime_metadata(&"Login service is unavailable. Please try again later.");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.NoMethods");
    il2cpp_codegen_initialize_runtime_metadata(&"account.noMethods");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_184344ac5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,pSVar1,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.NoMethods");
      pSVar1 = "account.noMethods";
      if (Il2CppMethodInitialized_184344ac8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_184344ac8 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).visible = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible,pSVar1);
        (pGVar2->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181dd64c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_184344ac6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->static_fields->Localizer;
  if (pGVar1 != (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) {
    pSVar2 = (System_String_o *)
             il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar1,key,fallback);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Provider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* style, System_String_o* icon, System_String_o* textKey, System_String_o* fallback, System_String_o* action, System_String_o* visibleKey, const MethodInfo* method);
// 0x181dd60c0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *style,
               System_String_o *icon,System_String_o *textKey,System_String_o *fallback,
               System_String_o *action,System_String_o *visibleKey,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344ac7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
  }
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(textKey,fallback,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (body,0,text,action,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = textKey;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,textKey);
      (pGVar1->fields).style = style;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style,style);
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
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).visible = visibleKey;
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible,visibleKey);
        (__this->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,"account.auth.idle");
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible (System_String_o* key, const MethodInfo* method);
// 0x181dd6550

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ac8 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled (System_String_o* key, const MethodInfo* method);
// 0x181dd5ab0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ac9 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor (const MethodInfo* method);
// 0x181dd65c0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *__this;
  
  if (Il2CppMethodInitialized_184344aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi);
    Il2CppMethodInitialized_184344aca = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->static_fields->Localizer = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi->static_fields->Localizer,__this);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgProfileBanner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileBanner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor (const MethodInfo* method);
// 0x181defa70

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this;
  
  if (Il2CppMethodInitialized_184344af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    Il2CppMethodInitialized_184344af2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor(Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedOut, const MethodInfo* method);
// 0x181de93b0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedOut,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-logged-out-content");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    Il2CppMethodInitialized_184344af3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_3;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_3,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_3 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_3,__this_00);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedOut != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (loggedOut,style,(System_Action_AottgUi__o *)__this_00,"account-banner-logged-out-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x181de9da0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoggedOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign In");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Logged Out");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"account-logged-out-status");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open");
    Il2CppMethodInitialized_184344af4 = '\x01';
  }
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (content,"Logged Out","accountBannerSubtext","account-logged-out-status",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "MainMenu.Account.LoggedOut";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.LoggedOut");
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (content,0,"Sign In","account.openLogin","account-login-open",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          "material-icons/login",(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.SignIn";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.SignIn");
        value = "account.auth.idle";
        if (Il2CppMethodInitialized_184344aee == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_184344aee = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_00->fields).enabled = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,value);
          (pGVar1->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* offline, const MethodInfo* method);
// 0x181de9940

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *offline,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    Il2CppMethodInitialized_184344af5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_4;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_4,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_4 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_4,__this_00);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (offline != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (offline,style,(System_Action_AottgUi__o *)__this_00,"account-banner-offline-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x181de9f80

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Go Online");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-banner-top");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOnline");
    il2cpp_codegen_initialize_runtime_metadata(&"account-go-online");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOnlineCta");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_184344af6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_5;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_5,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_5 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_5,__this_00);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,(System_Action_AottgUi__o *)__this_00,"account-offline-banner-top",pGVar1,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (content,0,"Go Online","account.goOnline","account-go-online",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/login",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344aea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Column");
      Il2CppMethodInitialized_184344aea = '\x01';
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar1);
      (pGVar2->fields).textKey = "MainMenu.Account.GoOnline";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Account.GoOnline");
      value = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",(MethodInfo *)0x0);
      (pGVar2->fields).bind = value;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x181dea390

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline-name-column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-profile-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344af7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar1 = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_6;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_6,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_6 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_6,__this_00);
  }
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-banner-offline-name-column",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-offline-profile-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "gear",(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "Common.Edit";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,"Common.Edit");
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout((MethodInfo *)0x0);
      (pGVar3->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar2);
      pSVar1 = "account.auth.idle";
      if (Il2CppMethodInitialized_184344aee == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_184344aee = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled,pSVar1);
        (pGVar3->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181dea700

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.ingameDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-ingame-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Scout");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerName");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.OfflineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Offline Mode");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-status");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    Il2CppMethodInitialized_184344af8 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-offline-ingame-display-name",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
                      ("account.ingameDisplayName","account.identity.ready",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).bind = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,value);
      bVar3 = Il2CppMethodInitialized_184344af1 == '\0';
      (pGVar1->fields).active = false;
      if (bVar3) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344af1 = '\x01';
      }
      value_00 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).enter = value_00;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter,value_00);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout((MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (names,"Offline Mode","accountBannerSubtext","account-offline-status",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.OfflineMode";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.OfflineMode");
        pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout((MethodInfo *)0x0);
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedIn, const MethodInfo* method);
// 0x181de9b70

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedIn,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-content");
    Il2CppMethodInitialized_184344af9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_7;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_7,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_7 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_7,__this_00);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedIn != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (loggedIn,style,(System_Action_AottgUi__o *)__this_00,"account-profile-banner-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x181dea900

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-top");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344afa = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar2 = "default";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_8;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_8,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_8 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_8,pUVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,pSVar2,(System_Action_AottgUi__o *)pUVar3,"account-profile-banner-top",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    pSVar2 = "default";
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_9;
    if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c)
        ;
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,pIVar1,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_9,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_9 =
           (System_Action_AottgUi__o *)pUVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_9,pUVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,pSVar2,(System_Action_AottgUi__o *)pUVar3,"account-profile-banner-actions",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x181dead00

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184344afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-name-column");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344afb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar1 = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_10;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_10
               ,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_10 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_10,__this_00);
  }
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-banner-name-column",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (top,1,"Edit","main.profile","account-profile-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "gear",(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "Common.Edit";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,"Common.Edit");
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout((MethodInfo *)0x0);
      (pGVar3->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar2);
      pSVar1 = "account.auth.idle";
      if (Il2CppMethodInitialized_184344aee == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_184344aee = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled,pSVar1);
        (pGVar3->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181de95f0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184344afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.ingameDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Account");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"account-ingame-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"Scout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.authDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-display-name-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerName");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"account-ingame-display-name-skeleton");
    Il2CppMethodInitialized_184344afc = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-ingame-display-name",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
                       ("account.ingameDisplayName","account.identity.ready",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).bind = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar2);
      bVar5 = Il2CppMethodInitialized_184344af1 == '\0';
      (pGVar1->fields).active = false;
      if (bVar5) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344af1 = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).enter = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter,pGVar3);
      pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout((MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar4);
      pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout(220.0,28.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                (names,"account-ingame-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (names,"Account","accountBannerSubtext","account-auth-display-name",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
                         ("account.authDisplayName","account.identity.ready",(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar2);
        bVar5 = Il2CppMethodInitialized_184344af1 == '\0';
        (pGVar1->fields).active = false;
        if (bVar5) {
          il2cpp_codegen_initialize_runtime_metadata(&"fade");
          Il2CppMethodInitialized_184344af1 = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        (pGVar1->fields).enter = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter,pGVar3);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout((MethodInfo *)0x0);
        (pGVar1->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar4);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout(170.0,18.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (names,"account-auth-display-name-skeleton",pGVar4,"skeleton","account.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x181deb070

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/wifi_off");
    il2cpp_codegen_initialize_runtime_metadata(&"account-go-offline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.logoutCta");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account-logout");
    il2cpp_codegen_initialize_runtime_metadata(&"Logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOffline");
    il2cpp_codegen_initialize_runtime_metadata(&"Go Offline");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.logout");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.GoOffline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOfflineCta");
    Il2CppMethodInitialized_184344afd = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (actions,1,"Go Offline","account.goOffline","account-go-offline",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/wifi_off",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout((MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
      (pGVar1->fields).textKey = "MainMenu.Account.GoOffline";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.GoOffline");
      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",(MethodInfo *)0x0);
      (pGVar1->fields).bind = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar3);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (actions,6,"Logout","account.logout","account-logout",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          "material-icons/logout",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout((MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
        (pGVar1->fields).textKey = "MainMenu.Account.Logout";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Account.Logout");
        pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.logoutCta",(MethodInfo *)0x0);
        (pGVar1->fields).bind = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar3);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181de5210

void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  
  if (Il2CppMethodInitialized_184344ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account.onlineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"account.loggedOut");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-logged-out");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"account.offlineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline");
    Il2CppMethodInitialized_184344ae6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar2 = "accountBanner";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_0;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_0 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_0,pUVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,(System_Action_AottgUi__o *)pUVar3,"account-banner-logged-out",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.loggedOut";
    if (Il2CppMethodInitialized_184344ae7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_184344ae7 = '\x01';
    }
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar6->fields).visible = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).visible,pSVar2);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).bind = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
        (pGVar5->fields).active = false;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
        }
        pSVar2 = "accountBanner";
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_1;
        if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,pIVar1,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_1,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_1 =
               (System_Action_AottgUi__o *)pUVar3;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_1,pUVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout((MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,pSVar2,(System_Action_AottgUi__o *)pUVar3,"account-banner-offline",pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.offlineMode";
        if (Il2CppMethodInitialized_184344ae7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_184344ae7 = '\x01';
        }
        pGVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar6->fields).visible = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).visible,pSVar2);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).bind = pGVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
            (pGVar5->fields).active = false;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
            }
            pSVar2 = "accountBanner";
            pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_2;
            if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9;
              pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        (pUVar3,pIVar1,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_2,
                         (MethodInfo *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_2 =
                   (System_Action_AottgUi__o *)pUVar3;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9__0_2,pUVar3
                        );
            }
            pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout((MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (ui,pSVar2,(System_Action_AottgUi__o *)pUVar3,"account-profile-banner",pGVar4,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = "account.onlineMode";
            if (Il2CppMethodInitialized_184344ae7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
              Il2CppMethodInitialized_184344ae7 = '\x01';
            }
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (pGVar6->fields).visible = pSVar2;
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).visible,pSVar2);
              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar5->fields).bind = pGVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
                (pGVar5->fields).active = false;
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible (System_String_o* key, const MethodInfo* method);
// 0x181de5ce0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344ae7 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BannerRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout (const MethodInfo* method);
// 0x181de5090

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344ae8 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x181de56d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344ae9 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$FullWidthButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout (const MethodInfo* method);
// 0x181de5820

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344aea = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$GrowActionButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout (const MethodInfo* method);
// 0x181de5900

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344aeb = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x181de59e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344aec = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$SkeletonTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout (float width, float height, const MethodInfo* method);
// 0x181de5b40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout(float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344aed = '\x01';
  }
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled (System_String_o* key, const MethodInfo* method);
// 0x181de57b0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344aee = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$TextVisible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible (System_String_o* textKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x181de5c50

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
          (System_String_o *textKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344aef = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,textKey);
    (__this->fields).visible = visibleKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).visible,visibleKey);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x181de5170

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_184344af0 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion (const MethodInfo* method);
// 0x181de5af0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    Il2CppMethodInitialized_184344af1 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor(Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



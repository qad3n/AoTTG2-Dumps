// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___cctor (const MethodInfo* method);
// 0x5907610

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
    Il2CppMethodInitialized_07545665 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, const MethodInfo* method);
// 0x5907680

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildAccount>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildAccount_b__9_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5907690

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildAccount_b__9_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this_00;
  
  if (Il2CppMethodInitialized_07545666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard);
    Il2CppMethodInitialized_07545666 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard);
  Gisketch_Aottg2UI_Game_AottgProfileCard___ctor(__this_00,true,(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (row,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildInfo>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildInfo_b__11_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x5907700

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildInfo_b__11_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *rows
               ,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (Il2CppMethodInitialized_07545667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.discord.status");
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    il2cpp_codegen_initialize_runtime_metadata(&"main.patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.google.link.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"account.details");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.google.status");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.discord.link.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.patreon.status");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.patreon.cta.visible");
    Il2CppMethodInitialized_07545667 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen);
  }
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"patreon","profile.patreon.status","profile.patreon.cta.visible","main.patreon",2,
             "UI/Icons/Intro/PatreonIcon",in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"discord","profile.discord.status","profile.discord.link.visible","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"google","profile.google.status","profile.google.link.visible","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildCharacter>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildCharacter_b__13_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x5907890

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildCharacter_b__13_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07545668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-preview");
    Il2CppMethodInitialized_07545668 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
            (__this_00,"profile-character-name-preview",420.0,false,(System_String_o *)0x0,true,(MethodInfo *)0x0);
  if (preview == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (preview,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildEmotes>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildEmotes_b__15_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheels, const MethodInfo* method);
// 0x5907920

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildEmotes_b__15_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *wheels,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu);
    Il2CppMethodInitialized_07545669 = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu);
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor(pGVar1,false,(MethodInfo *)0x0);
  if (wheels == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (wheels,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar1,(MethodInfo *)0x0);
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu);
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor(pGVar1,true,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (wheels,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x59074a0

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x59079b0

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_0754566a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Connection.");
    Il2CppMethodInitialized_0754566a = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Connection.",(__this->fields).id,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,pSVar1,"header",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      pSVar1 = "default";
      __this_00 = (__this->fields).__9__1;
      if (__this_00 == (System_Action_AottgUi__o *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__1
                   ,(MethodInfo_4A81BE0 *)0x0);
        (__this->fields).__9__1 = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      id = System_String__Concat_5301f10
                     ("profile-info-",(__this->fields).id,"-actions",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (row,pSVar1,__this_00,id,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x5907c90

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  int32_t variant;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *key;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754566b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileInfoStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NotConnected");
    il2cpp_codegen_initialize_runtime_metadata(&"Cta");
    il2cpp_codegen_initialize_runtime_metadata(&"-link");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Connection.");
    Il2CppMethodInitialized_0754566b = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (actions,"MainMenu.Profile.NotConnected","profileInfoStatus",(System_String_o *)0x0,
                        (__this->fields).statusKey,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      variant = (__this->fields).buttonVariant;
      key = System_String__Concat_5301f10
                      ("MainMenu.Profile.Connection.",(__this->fields).id,"Cta",(MethodInfo *)0x0);
      actionId = (__this->fields).actionId;
      id = System_String__Concat_5301f10
                     ("profile-info-",(__this->fields).id,"-link",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                         (actions,variant,key,actionId,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(__this->fields).icon,
                          (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_00->fields).visible = (__this->fields).buttonVisibleKey;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
          (__this_00->fields).enabled = "account.auth.idle";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
          (pGVar1->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x5905bd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_07545657 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x5905c00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545658 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5905cd0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgProfileScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"profile-screen");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Profile");
    Il2CppMethodInitialized_07545659 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen);
  }
  sections = Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections((MethodInfo *)method_00);
  footerOptions = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen->static_fields->Footer;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_58165f0
            (__this_00,"Common.Profile",sections,0,footerOptions,"profile-screen",
             (System_Action_AottgUi__o *)0x0,true,false,false,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections (const MethodInfo* method);
// 0x5905db0

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  System_Action_T1__T2__o *pSVar2;
  System_Action_T1__T2__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_168;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_128;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_e8;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_a8;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_68;
  
  if (Il2CppMethodInitialized_0754565a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccountHeaderActions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacterHeaderActions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildEmotes);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfoHeaderActions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildStats);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"home");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Account");
    il2cpp_codegen_initialize_runtime_metadata(&"stats");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Info");
    il2cpp_codegen_initialize_runtime_metadata(&"emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    il2cpp_codegen_initialize_runtime_metadata(&"info");
    il2cpp_codegen_initialize_runtime_metadata(&"account");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/EmotesIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"character");
    Il2CppMethodInitialized_0754565a = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,5);
  pSVar2 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (pSVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccount,
             (MethodInfo_4A897E0 *)0x0);
  pSVar3 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (pSVar3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccountHeaderActions,
             (MethodInfo_4A897E0 *)0x0);
  local_68.fields.Keywords = (System_String_o *)0x0;
  local_68.fields.AutoAddKeywords = false;
  local_68.fields.HideSearch = false;
  local_68.fields.HideHeader = false;
  local_68.fields._59_5_ = 0;
  local_68.fields.TextKey = (System_String_o *)0x0;
  local_68.fields.Icon = (System_String_o *)0x0;
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.Text = (System_String_o *)0x0;
  local_68.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_68.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
            (&local_68,"account","MainMenu.Profile.Account","singleplayer",
             (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,false,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar3,false,false,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    pGVar1->m_Items[0].fields.Keywords = local_68.fields.Keywords;
    pGVar1->m_Items[0].fields.AutoAddKeywords = local_68.fields.AutoAddKeywords;
    pGVar1->m_Items[0].fields.HideSearch = local_68.fields.HideSearch;
    pGVar1->m_Items[0].fields.HideHeader = local_68.fields.HideHeader;
    *(undefined5 *)&pGVar1->m_Items[0].fields.field_0x3b = local_68.fields._59_5_;
    pGVar1->m_Items[0].fields.TextKey = local_68.fields.TextKey;
    pGVar1->m_Items[0].fields.Icon = local_68.fields.Icon;
    pGVar1->m_Items[0].fields.Id = local_68.fields.Id;
    pGVar1->m_Items[0].fields.Text = local_68.fields.Text;
    pGVar1->m_Items[0].fields._buildContent = local_68.fields._buildContent;
    pGVar1->m_Items[0].fields._buildHeaderActions = local_68.fields._buildHeaderActions;
    Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
    pSVar2 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    System_Action_object__AottgScreenSectionContext____ctor
              (pSVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacter,
               (MethodInfo_4A897E0 *)0x0);
    pSVar3 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    System_Action_object__AottgScreenSectionContext____ctor
              (pSVar3,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacterHeaderActions,
               (MethodInfo_4A897E0 *)0x0);
    local_a8.fields.Keywords = (System_String_o *)0x0;
    local_a8.fields.AutoAddKeywords = false;
    local_a8.fields.HideSearch = false;
    local_a8.fields.HideHeader = false;
    local_a8.fields._59_5_ = 0;
    local_a8.fields.TextKey = (System_String_o *)0x0;
    local_a8.fields.Icon = (System_String_o *)0x0;
    local_a8.fields.Id = (System_String_o *)0x0;
    local_a8.fields.Text = (System_String_o *)0x0;
    local_a8.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    local_a8.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
              (&local_a8,"character","MainMenu.Profile.Character","home",
               (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,false,
               (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar3,false,false,(MethodInfo *)0x0);
    if ((pGVar1->max_length & 0xfffffffe) != 0) {
      pGVar1->m_Items[1].fields.Keywords = local_a8.fields.Keywords;
      pGVar1->m_Items[1].fields.AutoAddKeywords = local_a8.fields.AutoAddKeywords;
      pGVar1->m_Items[1].fields.HideSearch = local_a8.fields.HideSearch;
      pGVar1->m_Items[1].fields.HideHeader = local_a8.fields.HideHeader;
      *(undefined5 *)&pGVar1->m_Items[1].fields.field_0x3b = local_a8.fields._59_5_;
      pGVar1->m_Items[1].fields.TextKey = local_a8.fields.TextKey;
      pGVar1->m_Items[1].fields.Icon = local_a8.fields.Icon;
      pGVar1->m_Items[1].fields.Id = local_a8.fields.Id;
      pGVar1->m_Items[1].fields.Text = local_a8.fields.Text;
      pGVar1->m_Items[1].fields._buildContent = local_a8.fields._buildContent;
      pGVar1->m_Items[1].fields._buildHeaderActions = local_a8.fields._buildHeaderActions;
      Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 1));
      pSVar2 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (pSVar2,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfo,
                 (MethodInfo_4A897E0 *)0x0);
      pSVar3 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (pSVar3,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfoHeaderActions,
                 (MethodInfo_4A897E0 *)0x0);
      local_e8.fields.Keywords = (System_String_o *)0x0;
      local_e8.fields.AutoAddKeywords = false;
      local_e8.fields.HideSearch = false;
      local_e8.fields.HideHeader = false;
      local_e8.fields._59_5_ = 0;
      local_e8.fields.TextKey = (System_String_o *)0x0;
      local_e8.fields.Icon = (System_String_o *)0x0;
      local_e8.fields.Id = (System_String_o *)0x0;
      local_e8.fields.Text = (System_String_o *)0x0;
      local_e8.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_e8.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                (&local_e8,"info","MainMenu.Profile.Info","question",
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true,
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar3,false,false,(MethodInfo *)0x0);
      if (2 < (uint)pGVar1->max_length) {
        pGVar1->m_Items[2].fields.Keywords = local_e8.fields.Keywords;
        pGVar1->m_Items[2].fields.AutoAddKeywords = local_e8.fields.AutoAddKeywords;
        pGVar1->m_Items[2].fields.HideSearch = local_e8.fields.HideSearch;
        pGVar1->m_Items[2].fields.HideHeader = local_e8.fields.HideHeader;
        *(undefined5 *)&pGVar1->m_Items[2].fields.field_0x3b = local_e8.fields._59_5_;
        pGVar1->m_Items[2].fields.TextKey = local_e8.fields.TextKey;
        pGVar1->m_Items[2].fields.Icon = local_e8.fields.Icon;
        pGVar1->m_Items[2].fields.Id = local_e8.fields.Id;
        pGVar1->m_Items[2].fields.Text = local_e8.fields.Text;
        pGVar1->m_Items[2].fields._buildContent = local_e8.fields._buildContent;
        pGVar1->m_Items[2].fields._buildHeaderActions = local_e8.fields._buildHeaderActions;
        Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 2));
        pSVar2 = (System_Action_T1__T2__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor
                  (pSVar2,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildEmotes,
                   (MethodInfo_4A897E0 *)0x0);
        local_128.fields.Keywords = (System_String_o *)0x0;
        local_128.fields.AutoAddKeywords = false;
        local_128.fields.HideSearch = false;
        local_128.fields.HideHeader = false;
        local_128.fields._59_5_ = 0;
        local_128.fields.TextKey = (System_String_o *)0x0;
        local_128.fields.Icon = (System_String_o *)0x0;
        local_128.fields.Id = (System_String_o *)0x0;
        local_128.fields.Text = (System_String_o *)0x0;
        local_128.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        local_128.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                  (&local_128,"emotes","Common.Emotes","UI/Icons/Profile/EmotesIcon",
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,false,
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
        if ((pGVar1->max_length & 0xfffffffc) != 0) {
          pGVar1->m_Items[3].fields.Keywords = local_128.fields.Keywords;
          pGVar1->m_Items[3].fields.AutoAddKeywords = local_128.fields.AutoAddKeywords;
          pGVar1->m_Items[3].fields.HideSearch = local_128.fields.HideSearch;
          pGVar1->m_Items[3].fields.HideHeader = local_128.fields.HideHeader;
          *(undefined5 *)&pGVar1->m_Items[3].fields.field_0x3b = local_128.fields._59_5_;
          pGVar1->m_Items[3].fields.TextKey = local_128.fields.TextKey;
          pGVar1->m_Items[3].fields.Icon = local_128.fields.Icon;
          pGVar1->m_Items[3].fields.Id = local_128.fields.Id;
          pGVar1->m_Items[3].fields.Text = local_128.fields.Text;
          pGVar1->m_Items[3].fields._buildContent = local_128.fields._buildContent;
          pGVar1->m_Items[3].fields._buildHeaderActions = local_128.fields._buildHeaderActions;
          Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 3));
          pSVar2 = (System_Action_T1__T2__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
          System_Action_object__AottgScreenSectionContext____ctor
                    (pSVar2,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildStats,
                     (MethodInfo_4A897E0 *)0x0);
          local_168.fields.Keywords = (System_String_o *)0x0;
          local_168.fields.AutoAddKeywords = false;
          local_168.fields.HideSearch = false;
          local_168.fields.HideHeader = false;
          local_168.fields._59_5_ = 0;
          local_168.fields.TextKey = (System_String_o *)0x0;
          local_168.fields.Icon = (System_String_o *)0x0;
          local_168.fields.Id = (System_String_o *)0x0;
          local_168.fields.Text = (System_String_o *)0x0;
          local_168.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          local_168.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                    (&local_168,"stats","Common.Stats","trophy",
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear",false
                     ,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0
                    );
          if (4 < (uint)pGVar1->max_length) {
            pGVar1->m_Items[4].fields.Keywords = local_168.fields.Keywords;
            pGVar1->m_Items[4].fields.AutoAddKeywords = local_168.fields.AutoAddKeywords;
            pGVar1->m_Items[4].fields.HideSearch = local_168.fields.HideSearch;
            pGVar1->m_Items[4].fields.HideHeader = local_168.fields.HideHeader;
            *(undefined5 *)&pGVar1->m_Items[4].fields.field_0x3b = local_168.fields._59_5_;
            pGVar1->m_Items[4].fields.TextKey = local_168.fields.TextKey;
            pGVar1->m_Items[4].fields.Icon = local_168.fields.Icon;
            pGVar1->m_Items[4].fields.Id = local_168.fields.Id;
            pGVar1->m_Items[4].fields.Text = local_168.fields.Text;
            pGVar1->m_Items[4].fields._buildContent = local_168.fields._buildContent;
            pGVar1->m_Items[4].fields._buildHeaderActions = local_168.fields._buildHeaderActions;
            Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 4));
            return pGVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccount
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x59063c0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_0754565b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildAccount_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-account-card");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_0754565b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
  __this = pGVar1->__9__9_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildAccount_b__9_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    pGVar1->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__9_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(&context,0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this,"profile-account-card",layout,enter,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccountHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x59065a0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_0754565c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.RefreshAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"account.refreshCta");
    il2cpp_codegen_initialize_runtime_metadata(&"account.loggedIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account.refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-account-refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754565c = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (header,1,"Common.Refresh","account.refresh","profile-info-account-refresh",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      "UI/Icons/Navigation/RefreshIcon",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).text = "account.refreshCta";
        Il2CppCodeGenWriteBarrier(&(__this->fields).text);
        (__this->fields).visible = "account.loggedIn";
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
        (__this->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
        (node->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(node->fields).bind);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("MainMenu.Account.RefreshAccount",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (node,title,(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,
                   false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5906820

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_0754565d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildInfo_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-connections");
    Il2CppMethodInitialized_0754565d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
  __this = pGVar1->__9__11_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildInfo_b__11_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    pGVar1->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__11_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,20.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(&context,0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this,"profile-info-connections",layout,enter,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfoHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5906a20

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_0754565e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.AccountDetails");
    il2cpp_codegen_initialize_runtime_metadata(&"account.details");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-account-details");
    Il2CppMethodInitialized_0754565e = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (header,0,"MainMenu.Account.AccountDetails","account.details","profile-info-account-details",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      "information",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
        (node->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(node->fields).bind);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("MainMenu.Account.AccountDetails",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (node,title,(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,
                   false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5906c50

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_0754565f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildCharacter_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-layout");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_0754565f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
  __this = pGVar1->__9__13_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildCharacter_b__13_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    pGVar1->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__13_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(&context,0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this,"profile-character-layout",layout,enter,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacterHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5906e30

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_07545660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.EditCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.profile-edit-character");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/edit");
    Il2CppMethodInitialized_07545660 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (header,0,"MainMenu.Profile.EditCharacter","dialog.profile-edit-character","profile-character-edit",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      "material-icons/edit",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = pGVar1;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("MainMenu.Profile.EditCharacter",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,title,(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                 context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildEmotes
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5906fe0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_07545661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildEmotes_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-wheels");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_07545661 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
  __this = pGVar1->__9__15_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildEmotes_b__15_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c->static_fields;
    pGVar1->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__15_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,42.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(&context,0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this,"profile-emote-wheels",layout,enter,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildStats
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x59071e0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this;
  
  if (Il2CppMethodInitialized_07545662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel);
    Il2CppMethodInitialized_07545662 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$ConnectionRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* statusKey, System_String_o* buttonVisibleKey, System_String_o* actionId, int32_t buttonVariant, System_String_o* icon, const MethodInfo* method);
// 0x5907250

void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *statusKey,
               System_String_o *buttonVisibleKey,System_String_o *actionId,int32_t buttonVariant,
               System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-info-");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_07545663 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *)0x0) {
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).statusKey = statusKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).statusKey);
    (__this->fields).buttonVariant = buttonVariant;
    (__this->fields).actionId = actionId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).actionId);
    (__this->fields).icon = icon;
    Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
    (__this->fields).buttonVisibleKey = buttonVisibleKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).buttonVisibleKey);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    id_00 = System_String__Concat_52f0320("profile-info-",(__this->fields).id,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",
                        (System_String_o *)0x0,"Wrap",20.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"row",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x59074b0

void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor (const MethodInfo* method);
// 0x59074c0

void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_07545664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"screen.main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_07545664 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"back","Common.Back","screen.main-menu","return"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
  pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
  *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
  pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
  pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
  pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
  pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
  pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
  pGVar1->m_Items[0].fields._text = local_58.fields._text;
  pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen->static_fields->Footer = pGVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen->static_fields->Footer);
  return;
}



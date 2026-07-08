// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileScreen.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___cctor (const MethodInfo* method);
// 0x41f9990

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704fa8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704fa8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, const MethodInfo* method);
// 0x41f9a00

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildAccount>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildAccount_b__9_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41f9a10

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__<BuildAccount>b__9_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this_00;
  
  if (DAT_05704fa9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileCard);
    DAT_05704fa9 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgProfileCard_o *)il2cpp_runtime_glue(TypeInfo_AottgProfileCard);
  Gisketch_Aottg2UI_Game_AottgProfileCard___ctor(__this_00,1,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (row,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildInfo>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildInfo_b__11_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x41f9a80

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__<BuildInfo>b__11_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *rows,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704faa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileScreen);
    il2cpp_init_method_metadata(&"profile.discord.status");
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"main.patreon");
    il2cpp_init_method_metadata(&"patreon");
    il2cpp_init_method_metadata(&"profile.google.link.visible");
    il2cpp_init_method_metadata(&"DISCORD");
    il2cpp_init_method_metadata(&"account.details");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_init_method_metadata(&"profile.google.status");
    il2cpp_init_method_metadata(&"LINK");
    il2cpp_init_method_metadata(&"BE A SUPPORTER");
    il2cpp_init_method_metadata(&"PATREON");
    il2cpp_init_method_metadata(&"profile.discord.link.visible");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"GOOGLE");
    il2cpp_init_method_metadata(&"profile.patreon.status");
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x41f9b6d;
    il2cpp_init_method_metadata(&"profile.patreon.cta.visible");
    DAT_05704faa = '\x01';
  }
  if (*(int *)(TypeInfo_AottgProfileScreen + 0xe4) == 0) {
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x41f9b8c;
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"patreon","PATREON","profile.patreon.status","profile.patreon.cta.visible","BE A SUPPORTER","main.patreon",2,
             "UI/Icons/Intro/PatreonIcon",in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"discord","DISCORD","profile.discord.status","profile.discord.link.visible","LINK","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"google","GOOGLE","profile.google.status","profile.google.link.visible","LINK","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildCharacter>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildCharacter_b__13_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x41f9c80

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__<BuildCharacter>b__13_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_00;
  
  if (DAT_05704fab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreviewPanel);
    il2cpp_init_method_metadata(&"profile-character-name-preview");
    DAT_05704fab = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *)
              il2cpp_runtime_glue(TypeInfo_AottgCharacterNamePreviewPanel);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
            (__this_00,"profile-character-name-preview",420.0,0,(System_String_o *)0x0,1,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (preview,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildEmotes>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildEmotes_b__15_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheels, const MethodInfo* method);
// 0x41f9d10

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__<BuildEmotes>b__15_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *wheels,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *pGVar1;
  
  if (DAT_05704fac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteRadialMenu);
    DAT_05704fac = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *)il2cpp_runtime_glue(TypeInfo_AottgEmoteRadialMenu);
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor(pGVar1,0,(MethodInfo *)0x0);
  if (wheels != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (wheels,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar1,(MethodInfo *)0x0);
    pGVar1 = (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *)il2cpp_runtime_glue(TypeInfo_AottgEmoteRadialMenu);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor(pGVar1,1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (wheels,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x41f9730

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41f9da0

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__DisplayClass17_0__<ConnectionRow>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  
  if (DAT_05704fad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__ConnectionRow_b__1);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"-actions");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"profile-info-");
    DAT_05704fad = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"header",(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar3);
      style = "default";
      build = (__this->fields).__9__1;
      if (build == (System_Action_AottgUi__o *)0x0) {
        build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
        System_Action<object>___ctor();
        (__this->fields).__9__1 = build;
        il2cpp_runtime_glue(&(__this->fields).__9__1,build);
      }
      id = System_String__Concat("profile-info-",(__this->fields).id,"-actions",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (row,style,build,id,pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x41fa060

void Gisketch_Aottg2UI_Game_AottgProfileScreen_<>c__DisplayClass17_0__<ConnectionRow>b__1
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  int32_t variant;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *id;
  
  if (DAT_05704fae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"-link");
    il2cpp_init_method_metadata(&"Not Connected");
    il2cpp_init_method_metadata(&"profile-info-");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704fae = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (actions,"Not Connected","profileInfoStatus",(System_String_o *)0x0,
                        (__this->fields).statusKey,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      variant = (__this->fields).buttonVariant;
      text = (__this->fields).buttonText;
      actionId = (__this->fields).actionId;
      id = System_String__Concat("profile-info-",(__this->fields).id,"-link",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (actions,variant,text,actionId,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (__this->fields).icon,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).search);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0)
        ;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar2->fields).alignItems = (__this->fields).buttonVisibleKey;
          il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
          (pGVar2->fields).alignSelf = "account.auth.idle";
          il2cpp_runtime_glue(&(pGVar2->fields).alignSelf);
          (pGVar1->fields).contentLayout = pGVar2;
          il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,pGVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x41f7840

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  if (DAT_05704f9a == '\0') {
    il2cpp_init_method_metadata(&"mainMenuOverlay");
    DAT_05704f9a = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x41f7870

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f9b == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704f9b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41f7940

void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_05704f9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileScreen);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&"PROFILE");
    il2cpp_init_method_metadata(&"profile-screen");
    DAT_05704f9c = '\x01';
  }
  method_00 = TypeInfo_AottgProfileScreen;
  if (*(int *)((long)&TypeInfo_AottgProfileScreen[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  sections = Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections(method_00);
  footerOptions =
       *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)
        TypeInfo_AottgProfileScreen[2].virtualMethodPointer;
  __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)
              il2cpp_runtime_glue(TypeInfo_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_00,"PROFILE",sections,0,footerOptions,"profile-screen",
             (System_Action_AottgUi__o *)0x0,1,in_stack_ffffffffffffffc8);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections (const MethodInfo* method);
// 0x41f7a20

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this;
  undefined1 auVar1 [48];
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_01;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_02;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_03;
  System_String_Fields SVar2;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  undefined8 in_stack_fffffffffffffdf8;
  undefined8 uVar6;
  undefined4 in_stack_fffffffffffffe08;
  undefined4 uVar7;
  bool_conflict bVar8;
  undefined4 in_stack_fffffffffffffe0c;
  undefined4 uVar9;
  bool_conflict bVar10;
  undefined4 in_stack_fffffffffffffe10;
  undefined4 uVar11;
  bool_conflict bVar12;
  undefined4 in_stack_fffffffffffffe14;
  undefined4 uVar13;
  bool_conflict in_stack_fffffffffffffe18;
  int32_t iVar14;
  undefined4 in_stack_fffffffffffffe20;
  undefined4 uVar15;
  undefined4 in_stack_fffffffffffffe24;
  undefined4 uVar16;
  undefined4 in_stack_fffffffffffffe28;
  undefined4 uVar17;
  undefined4 in_stack_fffffffffffffe2c;
  undefined4 uVar18;
  bool_conflict in_stack_fffffffffffffe30;
  bool_conflict bVar19;
  bool_conflict in_stack_fffffffffffffe38;
  bool_conflict hideHeader;
  undefined4 in_stack_fffffffffffffe40;
  undefined4 uVar20;
  undefined4 in_stack_fffffffffffffe44;
  undefined4 uVar21;
  System_String_o local_1a8;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  System_String_o *local_168;
  System_String_o local_158;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  System_String_o *local_118;
  System_String_o local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  System_String_o *local_c8;
  System_String_o local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  System_String_o *local_78;
  System_String_o local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (DAT_05704f9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi__AottgScreenSectionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildAccountHeaderActions);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildAccount);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildCharacterHeaderActions);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildEmotes);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildInfoHeaderActions);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildStats);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenSection);
    il2cpp_init_method_metadata(&"singleplayer");
    il2cpp_init_method_metadata(&"home");
    il2cpp_init_method_metadata(&"STATS");
    il2cpp_init_method_metadata(&"ACCOUNT");
    il2cpp_init_method_metadata(&"Emotes");
    il2cpp_init_method_metadata(&"stats");
    il2cpp_init_method_metadata(&"EMOTES");
    il2cpp_init_method_metadata(&"Account");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"emotes");
    il2cpp_init_method_metadata(&"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear");
    il2cpp_init_method_metadata(&"Info");
    il2cpp_init_method_metadata(&"question");
    il2cpp_init_method_metadata(&"CHARACTER");
    il2cpp_init_method_metadata(&"info");
    il2cpp_init_method_metadata(&"account");
    il2cpp_init_method_metadata(&"trophy");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/EmotesIcon");
    il2cpp_init_method_metadata(&"INFO");
    il2cpp_init_method_metadata(&"character");
    DAT_05704f9d = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_glue_02274930(TypeInfo_AottgScreenSection,5);
  pSVar4 = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
  System_Action<object__AottgScreenSectionContext>___ctor();
  uVar5 = il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
  uVar6 = 0x41f7c18;
  System_Action<object__AottgScreenSectionContext>___ctor();
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68.fields._stringLength = 0;
  local_68.fields._firstChar = 0;
  local_68.fields._6_2_ = 0;
  uStack_50 = 0;
  local_68.klass = (System_String_c *)0x0;
  local_68.monitor = (void *)0x0;
  local_28 = 0;
  auVar1 = ZEXT3248(CONCAT824(uVar5,CONCAT816("Account",ZEXT816(0))));
  __this.fields.SearchTitle = (System_String_o *)in_stack_fffffffffffffdf8;
  __this.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
  __this.fields._buildHeaderActions =
       (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
  __this.fields.Id = (System_String_o *)auVar1._16_8_;
  __this.fields.Label = (System_String_o *)auVar1._24_8_;
  __this.fields.TextKey = (System_String_o *)auVar1._32_8_;
  __this.fields.Icon = (System_String_o *)auVar1._40_8_;
  __this.fields.Keywords = (System_String_o *)uVar6;
  __this.fields.AutoAddKeywords = in_stack_fffffffffffffe08;
  __this.fields.HideSearch = in_stack_fffffffffffffe0c;
  __this.fields.HideHeader = in_stack_fffffffffffffe10;
  __this.fields._76_4_ = in_stack_fffffffffffffe14;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
            (__this,&local_68,"account","ACCOUNT","singleplayer",pSVar4,(System_String_o *)0x0,
             in_stack_fffffffffffffe18,
             (System_String_o *)CONCAT44(in_stack_fffffffffffffe24,in_stack_fffffffffffffe20),
             (System_Action_AottgUi__AottgScreenSectionContext__o *)
             CONCAT44(in_stack_fffffffffffffe2c,in_stack_fffffffffffffe28),in_stack_fffffffffffffe30
             ,in_stack_fffffffffffffe38,
             (MethodInfo *)CONCAT44(in_stack_fffffffffffffe44,in_stack_fffffffffffffe40));
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if ((int)pGVar3->max_length != 0) {
      pGVar3->m_Items[0].fields.AutoAddKeywords = (undefined4)local_28;
      pGVar3->m_Items[0].fields.HideSearch = local_28._4_4_;
      *(bool_conflict *)&pGVar3->m_Items[0].fields.SearchTitle = (bool_conflict)local_38;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.SearchTitle + 4) = local_38._4_4_;
      *(undefined4 *)&pGVar3->m_Items[0].fields.Keywords = (undefined4)uStack_30;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Keywords + 4) = uStack_30._4_4_;
      *(undefined4 *)&pGVar3->m_Items[0].fields.TextKey = (undefined4)local_48;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.TextKey + 4) = local_48._4_4_;
      *(bool_conflict *)&pGVar3->m_Items[0].fields.Icon = (bool_conflict)uStack_40;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Icon + 4) = uStack_40._4_4_;
      *(int32_t *)&pGVar3->m_Items[0].fields.Id = local_68.fields._stringLength;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Id + 4) = local_68.fields._4_4_;
      *(undefined4 *)&pGVar3->m_Items[0].fields.Label = (undefined4)uStack_50;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Label + 4) = uStack_50._4_4_;
      *(undefined4 *)&pGVar3->m_Items[0].fields._buildContent = local_68.klass._0_4_;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields._buildContent + 4) = local_68.klass._4_4_;
      *(undefined4 *)&pGVar3->m_Items[0].fields._buildHeaderActions = local_68.monitor._0_4_;
      *(undefined4 *)((long)&pGVar3->m_Items[0].fields._buildHeaderActions + 4) =
           local_68.monitor._4_4_;
      uVar7 = local_68.klass._0_4_;
      uVar9 = local_68.klass._4_4_;
      uVar11 = local_68.monitor._0_4_;
      uVar13 = local_68.monitor._4_4_;
      iVar14 = local_68.fields._stringLength;
      uVar15 = (undefined4)uStack_50;
      uVar16 = uStack_50._4_4_;
      uVar17 = (undefined4)local_48;
      uVar18 = local_48._4_4_;
      bVar8 = (bool_conflict)uStack_40;
      bVar10 = (bool_conflict)local_38;
      uVar20 = (undefined4)uStack_30;
      uVar21 = uStack_30._4_4_;
      il2cpp_runtime_glue(pGVar3->m_Items,0);
      pSVar4 = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
      System_Action<object__AottgScreenSectionContext>___ctor();
      uVar5 = il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
      uVar6 = 0x41f7d64;
      System_Action<object__AottgScreenSectionContext>___ctor();
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_b8.fields._stringLength = 0;
      local_b8.fields._firstChar = 0;
      local_b8.fields._6_2_ = 0;
      uStack_a0 = 0;
      local_b8.klass = (System_String_c *)0x0;
      local_b8.monitor = (void *)0x0;
      local_78 = (System_String_o *)0x0;
      auVar1 = ZEXT3248(CONCAT824(uVar5,CONCAT816("Character",ZEXT816(0))));
      __this_00.fields.SearchTitle = (System_String_o *)in_stack_fffffffffffffdf8;
      __this_00.fields._buildContent =
           (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
      __this_00.fields._buildHeaderActions =
           (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
      __this_00.fields.Id = (System_String_o *)auVar1._16_8_;
      __this_00.fields.Label = (System_String_o *)auVar1._24_8_;
      __this_00.fields.TextKey = (System_String_o *)auVar1._32_8_;
      __this_00.fields.Icon = (System_String_o *)auVar1._40_8_;
      __this_00.fields.Keywords = (System_String_o *)uVar6;
      __this_00.fields.AutoAddKeywords = uVar7;
      __this_00.fields.HideSearch = uVar9;
      __this_00.fields.HideHeader = uVar11;
      __this_00.fields._76_4_ = uVar13;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
                (__this_00,&local_b8,"character","CHARACTER","home",pSVar4,
                 (System_String_o *)0x0,iVar14,(System_String_o *)CONCAT44(uVar16,uVar15),
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar18,uVar17),
                 bVar8,bVar10,(MethodInfo *)CONCAT44(uVar21,uVar20));
      if (1 < (uint)pGVar3->max_length) {
        pGVar3->m_Items[1].fields.Keywords = local_78;
        *(bool_conflict *)&pGVar3->m_Items[1].fields.Icon = (bool_conflict)local_88;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields.Icon + 4) = local_88._4_4_;
        *(undefined4 *)&pGVar3->m_Items[1].fields.SearchTitle = (undefined4)uStack_80;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields.SearchTitle + 4) = uStack_80._4_4_;
        *(undefined4 *)&pGVar3->m_Items[1].fields.Label = (undefined4)local_98;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields.Label + 4) = local_98._4_4_;
        *(bool_conflict *)&pGVar3->m_Items[1].fields.TextKey = (bool_conflict)uStack_90;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields.TextKey + 4) = uStack_90._4_4_;
        *(int32_t *)&pGVar3->m_Items[1].fields._buildHeaderActions = local_b8.fields._stringLength;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields._buildHeaderActions + 4) =
             local_b8.fields._4_4_;
        *(undefined4 *)&pGVar3->m_Items[1].fields.Id = (undefined4)uStack_a0;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields.Id + 4) = uStack_a0._4_4_;
        pGVar3->m_Items[0].fields.HideHeader = (bool_conflict)local_b8.klass;
        *(undefined4 *)&pGVar3->m_Items[0].fields.field_0x4c = local_b8.klass._4_4_;
        *(undefined4 *)&pGVar3->m_Items[1].fields._buildContent = local_b8.monitor._0_4_;
        *(undefined4 *)((long)&pGVar3->m_Items[1].fields._buildContent + 4) = local_b8.monitor._4_4_
        ;
        bVar8 = (bool_conflict)local_b8.klass;
        uVar7 = local_b8.klass._4_4_;
        uVar9 = local_b8.monitor._0_4_;
        uVar11 = local_b8.monitor._4_4_;
        iVar14 = local_b8.fields._stringLength;
        uVar13 = (undefined4)uStack_a0;
        uVar15 = uStack_a0._4_4_;
        uVar16 = (undefined4)local_98;
        uVar17 = local_98._4_4_;
        bVar10 = (bool_conflict)uStack_90;
        bVar12 = (bool_conflict)local_88;
        uVar18 = (undefined4)uStack_80;
        uVar20 = uStack_80._4_4_;
        il2cpp_runtime_glue(&pGVar3->m_Items[0].fields.HideHeader,0);
        pSVar4 = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
        System_Action<object__AottgScreenSectionContext>___ctor();
        uVar5 = il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
        uVar6 = 0x41f7eb0;
        System_Action<object__AottgScreenSectionContext>___ctor();
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_108.fields._stringLength = 0;
        local_108.fields._firstChar = 0;
        local_108.fields._6_2_ = 0;
        uStack_f0 = 0;
        local_108.klass = (System_String_c *)0x0;
        local_108.monitor = (void *)0x0;
        local_c8 = (System_String_o *)0x0;
        auVar1 = ZEXT3248(CONCAT824(uVar5,CONCAT816("Info",ZEXT816(1) << 0x40)));
        __this_01.fields.SearchTitle = (System_String_o *)in_stack_fffffffffffffdf8;
        __this_01.fields._buildContent =
             (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
        __this_01.fields._buildHeaderActions =
             (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
        __this_01.fields.Id = (System_String_o *)auVar1._16_8_;
        __this_01.fields.Label = (System_String_o *)auVar1._24_8_;
        __this_01.fields.TextKey = (System_String_o *)auVar1._32_8_;
        __this_01.fields.Icon = (System_String_o *)auVar1._40_8_;
        __this_01.fields.Keywords = (System_String_o *)uVar6;
        __this_01.fields.AutoAddKeywords = bVar8;
        __this_01.fields.HideSearch = uVar7;
        __this_01.fields.HideHeader = uVar9;
        __this_01.fields._76_4_ = uVar11;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
                  (__this_01,&local_108,"info","INFO","question",pSVar4,
                   (System_String_o *)0x0,iVar14,(System_String_o *)CONCAT44(uVar15,uVar13),
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar17,uVar16),
                   bVar10,bVar12,(MethodInfo *)CONCAT44(uVar20,uVar18));
        if (2 < (uint)pGVar3->max_length) {
          pGVar3->m_Items[2].fields.SearchTitle = local_c8;
          *(bool_conflict *)&pGVar3->m_Items[2].fields.TextKey = (bool_conflict)local_d8;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields.TextKey + 4) = local_d8._4_4_;
          *(undefined4 *)&pGVar3->m_Items[2].fields.Icon = (undefined4)uStack_d0;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields.Icon + 4) = uStack_d0._4_4_;
          *(undefined4 *)&pGVar3->m_Items[2].fields.Id = (undefined4)local_e8;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields.Id + 4) = local_e8._4_4_;
          *(bool_conflict *)&pGVar3->m_Items[2].fields.Label = (bool_conflict)uStack_e0;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields.Label + 4) = uStack_e0._4_4_;
          *(int32_t *)&pGVar3->m_Items[2].fields._buildContent = local_108.fields._stringLength;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields._buildContent + 4) =
               local_108.fields._4_4_;
          *(undefined4 *)&pGVar3->m_Items[2].fields._buildHeaderActions = (undefined4)uStack_f0;
          *(undefined4 *)((long)&pGVar3->m_Items[2].fields._buildHeaderActions + 4) =
               uStack_f0._4_4_;
          pGVar3->m_Items[1].fields.AutoAddKeywords = (bool_conflict)local_108.klass;
          pGVar3->m_Items[1].fields.HideSearch = local_108.klass._4_4_;
          pGVar3->m_Items[1].fields.HideHeader = (bool_conflict)local_108.monitor;
          *(undefined4 *)&pGVar3->m_Items[1].fields.field_0x4c = local_108.monitor._4_4_;
          bVar8 = (bool_conflict)local_108.klass;
          bVar10 = local_108.klass._4_4_;
          bVar12 = (bool_conflict)local_108.monitor;
          uVar7 = local_108.monitor._4_4_;
          iVar14 = local_108.fields._stringLength;
          uVar9 = (undefined4)uStack_f0;
          uVar11 = uStack_f0._4_4_;
          uVar13 = (undefined4)local_e8;
          uVar15 = local_e8._4_4_;
          bVar19 = (bool_conflict)uStack_e0;
          hideHeader = (bool_conflict)local_d8;
          uVar16 = (undefined4)uStack_d0;
          uVar17 = uStack_d0._4_4_;
          il2cpp_runtime_glue(&pGVar3->m_Items[1].fields.AutoAddKeywords,0);
          pSVar4 = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
          uVar5 = 0x41f7fe3;
          System_Action<object__AottgScreenSectionContext>___ctor();
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_158.fields._stringLength = 0;
          local_158.fields._firstChar = 0;
          local_158.fields._6_2_ = 0;
          uStack_140 = 0;
          local_158.klass = (System_String_c *)0x0;
          local_158.monitor = (void *)0x0;
          local_118 = (System_String_o *)0x0;
          auVar1 = ZEXT2448(CONCAT816("Emotes",ZEXT816(0)));
          __this_02.fields.SearchTitle = (System_String_o *)in_stack_fffffffffffffdf8;
          __this_02.fields._buildContent =
               (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
          __this_02.fields._buildHeaderActions =
               (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
          __this_02.fields.Id = (System_String_o *)auVar1._16_8_;
          __this_02.fields.Label = (System_String_o *)auVar1._24_8_;
          __this_02.fields.TextKey = (System_String_o *)auVar1._32_8_;
          __this_02.fields.Icon = (System_String_o *)auVar1._40_8_;
          __this_02.fields.Keywords = (System_String_o *)uVar5;
          __this_02.fields.AutoAddKeywords = bVar8;
          __this_02.fields.HideSearch = bVar10;
          __this_02.fields.HideHeader = bVar12;
          __this_02.fields._76_4_ = uVar7;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
                    (__this_02,&local_158,"emotes","EMOTES","UI/Icons/Profile/EmotesIcon",pSVar4,
                     (System_String_o *)0x0,iVar14,(System_String_o *)CONCAT44(uVar11,uVar9),
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar15,uVar13),
                     bVar19,hideHeader,(MethodInfo *)CONCAT44(uVar17,uVar16));
          SVar2 = local_158.fields;
          if (3 < (uint)pGVar3->max_length) {
            pGVar3->m_Items[3].fields.Icon = local_118;
            *(bool_conflict *)&pGVar3->m_Items[3].fields.Label = (bool_conflict)local_128;
            *(undefined4 *)((long)&pGVar3->m_Items[3].fields.Label + 4) = local_128._4_4_;
            *(undefined4 *)&pGVar3->m_Items[3].fields.TextKey = (undefined4)uStack_120;
            *(undefined4 *)((long)&pGVar3->m_Items[3].fields.TextKey + 4) = uStack_120._4_4_;
            *(undefined4 *)&pGVar3->m_Items[3].fields._buildHeaderActions = (undefined4)local_138;
            *(undefined4 *)((long)&pGVar3->m_Items[3].fields._buildHeaderActions + 4) =
                 local_138._4_4_;
            *(bool_conflict *)&pGVar3->m_Items[3].fields.Id = (bool_conflict)uStack_130;
            *(undefined4 *)((long)&pGVar3->m_Items[3].fields.Id + 4) = uStack_130._4_4_;
            pGVar3->m_Items[2].fields.HideHeader = local_158.fields._stringLength;
            *(uint16_t *)&pGVar3->m_Items[2].fields.field_0x4c = local_158.fields._firstChar;
            *(undefined2 *)&pGVar3->m_Items[2].fields.field_0x4e = local_158.fields._6_2_;
            *(undefined4 *)&pGVar3->m_Items[3].fields._buildContent = (undefined4)uStack_140;
            *(undefined4 *)((long)&pGVar3->m_Items[3].fields._buildContent + 4) = uStack_140._4_4_;
            *(undefined4 *)&pGVar3->m_Items[2].fields.Keywords = local_158.klass._0_4_;
            *(undefined4 *)((long)&pGVar3->m_Items[2].fields.Keywords + 4) = local_158.klass._4_4_;
            pGVar3->m_Items[2].fields.AutoAddKeywords = (bool_conflict)local_158.monitor;
            pGVar3->m_Items[2].fields.HideSearch = local_158.monitor._4_4_;
            uVar7 = local_158.klass._0_4_;
            uVar9 = local_158.klass._4_4_;
            bVar8 = (bool_conflict)local_158.monitor;
            bVar10 = local_158.monitor._4_4_;
            iVar14 = local_158.fields._stringLength;
            uVar11 = (undefined4)uStack_140;
            uVar13 = uStack_140._4_4_;
            uVar15 = (undefined4)local_138;
            uVar16 = local_138._4_4_;
            bVar12 = (bool_conflict)uStack_130;
            bVar19 = (bool_conflict)local_128;
            uVar17 = (undefined4)uStack_120;
            uVar18 = uStack_120._4_4_;
            local_158.fields = SVar2;
            il2cpp_runtime_glue(&pGVar3->m_Items[2].fields.Keywords,0);
            pSVar4 = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
            uVar5 = 0x41f8116;
            System_Action<object__AottgScreenSectionContext>___ctor();
            local_178 = 0;
            uStack_170 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_1a8.fields._stringLength = 0;
            local_1a8.fields._firstChar = 0;
            local_1a8.fields._6_2_ = 0;
            uStack_190 = 0;
            local_1a8.klass = (System_String_c *)0x0;
            local_1a8.monitor = (void *)0x0;
            local_168 = (System_String_o *)0x0;
            auVar1 = ZEXT2448(CONCAT816("Stats",CONCAT88(0,"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear")));
            __this_03.fields.SearchTitle = (System_String_o *)in_stack_fffffffffffffdf8;
            __this_03.fields._buildContent =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
            __this_03.fields._buildHeaderActions =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
            __this_03.fields.Id = (System_String_o *)auVar1._16_8_;
            __this_03.fields.Label = (System_String_o *)auVar1._24_8_;
            __this_03.fields.TextKey = (System_String_o *)auVar1._32_8_;
            __this_03.fields.Icon = (System_String_o *)auVar1._40_8_;
            __this_03.fields.Keywords = (System_String_o *)uVar5;
            __this_03.fields.AutoAddKeywords = uVar7;
            __this_03.fields.HideSearch = uVar9;
            __this_03.fields.HideHeader = bVar8;
            __this_03.fields._76_4_ = bVar10;
            Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
                      (__this_03,&local_1a8,"stats","STATS","trophy",pSVar4,
                       (System_String_o *)0x0,iVar14,(System_String_o *)CONCAT44(uVar13,uVar11),
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)
                       CONCAT44(uVar16,uVar15),bVar12,bVar19,(MethodInfo *)CONCAT44(uVar18,uVar17));
            if (4 < (uint)pGVar3->max_length) {
              pGVar3->m_Items[4].fields.TextKey = local_168;
              *(undefined4 *)&pGVar3->m_Items[4].fields.Id = (undefined4)local_178;
              *(undefined4 *)((long)&pGVar3->m_Items[4].fields.Id + 4) = local_178._4_4_;
              *(undefined4 *)&pGVar3->m_Items[4].fields.Label = (undefined4)uStack_170;
              *(undefined4 *)((long)&pGVar3->m_Items[4].fields.Label + 4) = uStack_170._4_4_;
              *(undefined4 *)&pGVar3->m_Items[4].fields._buildContent = (undefined4)local_188;
              *(undefined4 *)((long)&pGVar3->m_Items[4].fields._buildContent + 4) = local_188._4_4_;
              *(undefined4 *)&pGVar3->m_Items[4].fields._buildHeaderActions = (undefined4)uStack_180
              ;
              *(undefined4 *)((long)&pGVar3->m_Items[4].fields._buildHeaderActions + 4) =
                   uStack_180._4_4_;
              pGVar3->m_Items[3].fields.AutoAddKeywords = local_1a8.fields._stringLength;
              pGVar3->m_Items[3].fields.HideSearch = local_1a8.fields._4_4_;
              pGVar3->m_Items[3].fields.HideHeader = (bool_conflict)uStack_190;
              *(undefined4 *)&pGVar3->m_Items[3].fields.field_0x4c = uStack_190._4_4_;
              *(undefined4 *)&pGVar3->m_Items[3].fields.SearchTitle = local_1a8.klass._0_4_;
              *(undefined4 *)((long)&pGVar3->m_Items[3].fields.SearchTitle + 4) =
                   local_1a8.klass._4_4_;
              *(undefined4 *)&pGVar3->m_Items[3].fields.Keywords = local_1a8.monitor._0_4_;
              *(undefined4 *)((long)&pGVar3->m_Items[3].fields.Keywords + 4) =
                   local_1a8.monitor._4_4_;
              il2cpp_runtime_glue(&pGVar3->m_Items[3].fields.SearchTitle,0);
              return pGVar3;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccount
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f84c0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (DAT_05704f9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildAccount_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-account-card");
    il2cpp_init_method_metadata(&"default");
    DAT_05704f9e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
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
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (DAT_05705000 == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05705000 = '\x01';
  }
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("slideLeft",context.fields._group,0.12,0.025,0.018,context.fields._order + 1,
                     (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"profile-account-card",layout,enter,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccountHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f8760

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_init_method_metadata(&"Refresh Account");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refresh");
    il2cpp_init_method_metadata(&"account.refreshCta");
    il2cpp_init_method_metadata(&"account.loggedIn");
    il2cpp_init_method_metadata(&"account.refresh");
    il2cpp_init_method_metadata(&"profile-info-account-refresh");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"Refresh");
    DAT_05704f9f = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (header,1,"Refresh","account.refresh","profile-info-account-refresh",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"UI/Icons/Navigation/RefreshIcon",
                      (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(node->fields).search,pGVar1);
      (node->fields).textKey = "MainMenu.Account.Refresh";
      il2cpp_runtime_glue(&(node->fields).textKey);
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar1->fields).direction = "account.refreshCta";
        il2cpp_runtime_glue(&pGVar1->fields);
        (pGVar1->fields).alignItems = "account.loggedIn";
        il2cpp_runtime_glue(&(pGVar1->fields).alignItems);
        (pGVar1->fields).alignSelf = "account.auth.idle";
        il2cpp_runtime_glue(&(pGVar1->fields).alignSelf);
        (node->fields).contentLayout = pGVar1;
        il2cpp_runtime_glue(&(node->fields).contentLayout,pGVar1);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (node,"Refresh Account",(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,
                   context.fields._SectionTitle_k__BackingField,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f89e0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (DAT_05704fa0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildInfo_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-info-connections");
    DAT_05704fa0 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
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
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,20.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (DAT_05705000 == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05705000 = '\x01';
  }
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("slideLeft",context.fields._group,0.12,0.025,0.018,context.fields._order + 1,
                     (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"profile-info-connections",layout,enter,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfoHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f8c20

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704fa1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Account Details");
    il2cpp_init_method_metadata(&"MainMenu.Account.AccountDetails");
    il2cpp_init_method_metadata(&"account.details");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"profile-info-account-details");
    DAT_05704fa1 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (header,0,"Account Details","account.details","profile-info-account-details",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"information",
                      (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(node->fields).search,pGVar1);
      (node->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_glue(&(node->fields).textKey);
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar1->fields).alignSelf = "account.auth.idle";
        il2cpp_runtime_glue(&(pGVar1->fields).alignSelf);
        (node->fields).contentLayout = pGVar1;
        il2cpp_runtime_glue(&(node->fields).contentLayout,pGVar1);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (node,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,
                   context.fields._SectionTitle_k__BackingField,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f8e40

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (DAT_05704fa2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildCharacter_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profile-character-layout");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    DAT_05704fa2 = '\x01';
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
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (DAT_05705000 == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05705000 = '\x01';
  }
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("slideLeft",context.fields._group,0.12,0.025,0.018,context.fields._order + 1,
                     (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"profile-character-layout",layout,enter,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacterHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f9070

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704fa3 == '\0') {
    il2cpp_init_method_metadata(&"profile-character-edit");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"dialog.profile-edit-character");
    il2cpp_init_method_metadata(&"material-icons/edit");
    il2cpp_init_method_metadata(&"Edit Character");
    DAT_05704fa3 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (header,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",
                      (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
      il2cpp_runtime_glue(&(node->fields).search,pGVar1);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                 context.fields._SectionId_k__BackingField,
                 context.fields._SectionTitle_k__BackingField,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildEmotes
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f9200

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (DAT_05704fa4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildEmotes_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-emote-wheels");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"default");
    DAT_05704fa4 = '\x01';
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
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (DAT_05705000 == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05705000 = '\x01';
  }
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("slideLeft",context.fields._group,0.12,0.025,0.018,context.fields._order + 1,
                     (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"profile-emote-wheels",layout,enter,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildStats
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41f9440

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  
  if (DAT_05704fa5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileStatsPanel);
    DAT_05704fa5 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfileStatsPanel);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(content,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$ConnectionRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* label, System_String_o* statusKey, System_String_o* buttonVisibleKey, System_String_o* buttonText, System_String_o* actionId, int32_t buttonVariant, System_String_o* icon, const MethodInfo* method);
// 0x41f94b0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *label
               ,System_String_o *statusKey,System_String_o *buttonVisibleKey,
               System_String_o *buttonText,System_String_o *actionId,int32_t buttonVariant,
               System_String_o *icon,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704fa6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__ConnectionRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"Wrap");
    il2cpp_init_method_metadata(&"profile-info-");
    il2cpp_init_method_metadata(&"row");
    DAT_05704fa6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)label;
    il2cpp_runtime_glue(__this + 1,label);
    __this[1].monitor = statusKey;
    il2cpp_runtime_glue(&__this[1].monitor,statusKey);
    *(int32_t *)&__this[2].klass = buttonVariant;
    __this[2].monitor = buttonText;
    il2cpp_runtime_glue(&__this[2].monitor,buttonText);
    __this[3].klass = (Il2CppClass *)actionId;
    il2cpp_runtime_glue(__this + 3,actionId);
    __this[3].monitor = id;
    il2cpp_runtime_glue(&__this[3].monitor);
    __this[4].klass = (Il2CppClass *)icon;
    il2cpp_runtime_glue(__this + 4);
    __this[4].monitor = buttonVisibleKey;
    il2cpp_runtime_glue(&__this[4].monitor);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id_00 = System_String__Concat("profile-info-",__this[3].monitor,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,"Wrap",
                        20.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"row",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x41f9740

void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor (const MethodInfo* method);
// 0x41f9750

void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor(MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_05704fa7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileScreen);
    il2cpp_init_method_metadata(&"return");
    il2cpp_init_method_metadata(&"screen.main-menu");
    il2cpp_init_method_metadata(&"BACK");
    DAT_05704fa7 = '\x01';
  }
  lVar4 = il2cpp_glue_02274930(TypeInfo_AottgBrushSidePanelOption,1);
  uVar3 = "screen.main-menu";
  uVar2 = "return";
  uVar1 = "BACK";
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_60 = 0;
  local_88 = 0;
  il2cpp_runtime_glue(&local_88,0);
  uStack_80 = uVar1;
  il2cpp_runtime_glue(&uStack_80,uVar1);
  uStack_78 = 0;
  il2cpp_runtime_glue(&uStack_78,0);
  uStack_68 = uVar3;
  il2cpp_runtime_glue(&uStack_68,uVar3);
  uStack_70 = uVar2;
  il2cpp_runtime_glue(&uStack_70,uVar2);
  local_60 = 0;
  il2cpp_runtime_glue(&local_60,0);
  if (lVar4 != 0) {
    local_38 = (undefined4)uStack_68;
    uStack_34 = uStack_68._4_4_;
    uStack_30 = (undefined4)local_60;
    uStack_2c = local_60._4_4_;
    local_48 = (undefined4)uStack_78;
    uStack_44 = uStack_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = (undefined4)uStack_80;
    uStack_4c = uStack_80._4_4_;
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined4 *)(lVar4 + 0x40) = (undefined4)uStack_68;
      *(undefined4 *)(lVar4 + 0x44) = uStack_68._4_4_;
      *(undefined4 *)(lVar4 + 0x48) = (undefined4)local_60;
      *(undefined4 *)(lVar4 + 0x4c) = local_60._4_4_;
      *(undefined4 *)(lVar4 + 0x30) = (undefined4)uStack_78;
      *(undefined4 *)(lVar4 + 0x34) = uStack_78._4_4_;
      *(undefined4 *)(lVar4 + 0x38) = (undefined4)uStack_70;
      *(undefined4 *)(lVar4 + 0x3c) = uStack_70._4_4_;
      *(undefined4 *)(lVar4 + 0x20) = (undefined4)local_88;
      *(undefined4 *)(lVar4 + 0x24) = local_88._4_4_;
      *(undefined4 *)(lVar4 + 0x28) = (undefined4)uStack_80;
      *(undefined4 *)(lVar4 + 0x2c) = uStack_80._4_4_;
      il2cpp_runtime_glue(lVar4 + 0x20,0);
      **(long **)(TypeInfo_AottgProfileScreen + 0xb8) = lVar4;
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgProfileScreen + 0xb8),lVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



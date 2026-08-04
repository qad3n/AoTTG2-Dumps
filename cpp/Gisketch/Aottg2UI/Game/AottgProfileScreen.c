// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___cctor (const MethodInfo* method);
// 0x452ba90

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee83 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, const MethodInfo* method);
// 0x452bb00

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildAccount>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildAccount_b__9_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x452bb10

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildAccount_b__9_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *content;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (g_data_057aee84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileCard);
    g_data_057aee84 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileCard);
  content = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined1 *)&__this_00[1].klass = 1;
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(row,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileScreen);
    il2cpp_runtime_helper_023445d0(&"profile.discord.status");
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"main.patreon");
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"profile.google.link.visible");
    il2cpp_runtime_helper_023445d0(&"DISCORD");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_runtime_helper_023445d0(&"profile.google.status");
    il2cpp_runtime_helper_023445d0(&"LINK");
    il2cpp_runtime_helper_023445d0(&"BE A SUPPORTER");
    il2cpp_runtime_helper_023445d0(&"PATREON");
    il2cpp_runtime_helper_023445d0(&"profile.discord.link.visible");
    il2cpp_runtime_helper_023445d0(&"discord");
    il2cpp_runtime_helper_023445d0(&"GOOGLE");
    il2cpp_runtime_helper_023445d0(&"profile.patreon.status");
    in_stack_ffffffffffffffc8 = (MethodInfo *)0x452bc6d;
    il2cpp_runtime_helper_023445d0(&"profile.patreon.cta.visible");
    g_data_057aee85 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgProfileScreen + 0xe4) == 0) {
    in_stack_ffffffffffffffc8 = (MethodInfo *)0x452bc8c;
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (content,"patreon","PATREON","profile.patreon.status","profile.patreon.cta.visible","BE A SUPPORTER","main.patreon",2,
             "UI/Icons/Intro/PatreonIcon",in_stack_ffffffffffffffc8);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (content,"discord","DISCORD","profile.discord.status","profile.discord.link.visible","LINK","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffc8);
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (content,"google","GOOGLE","profile.google.status","profile.google.link.visible","LINK","account.details",0,
             (System_String_o *)0x0,in_stack_ffffffffffffffc8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildInfo>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildInfo_b__11_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x452bb80

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildInfo_b__11_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *rows
               ,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057aee85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileScreen);
    il2cpp_runtime_helper_023445d0(&"profile.discord.status");
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"main.patreon");
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"profile.google.link.visible");
    il2cpp_runtime_helper_023445d0(&"DISCORD");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_runtime_helper_023445d0(&"profile.google.status");
    il2cpp_runtime_helper_023445d0(&"LINK");
    il2cpp_runtime_helper_023445d0(&"BE A SUPPORTER");
    il2cpp_runtime_helper_023445d0(&"PATREON");
    il2cpp_runtime_helper_023445d0(&"profile.discord.link.visible");
    il2cpp_runtime_helper_023445d0(&"discord");
    il2cpp_runtime_helper_023445d0(&"GOOGLE");
    il2cpp_runtime_helper_023445d0(&"profile.patreon.status");
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x452bc6d;
    il2cpp_runtime_helper_023445d0(&"profile.patreon.cta.visible");
    g_data_057aee85 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgProfileScreen + 0xe4) == 0) {
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x452bc8c;
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
            (rows,"patreon","PATREON","profile.patreon.status","profile.patreon.cta.visible","BE A SUPPORTER","main.patreon",2,"UI/Icons/Intro/PatreonIcon"
             ,in_stack_ffffffffffffffe0);
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
// 0x452bd80

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildCharacter_b__13_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  int32_t variant;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_00;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Il2CppObject *__this_02;
  System_String_array *collection;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  Il2CppClass *pIVar9;
  
  if (g_data_057aee86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreviewPanel);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-preview");
    g_data_057aee86 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterNamePreviewPanel);
  pGVar7 = "profile-character-name-preview";
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
            (__this_00,(System_String_o *)"profile-character-name-preview",420.0,0,(System_String_o *)0x0,1,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (preview,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEmoteRadialMenu);
    g_data_057aee87 = '\x01';
  }
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgEmoteRadialMenu);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pIVar9 = pIVar2;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar2,(MethodInfo *)0x0);
  *(undefined1 *)&((System_String_Fields *)&(pIVar2->_1).name)->_stringLength = 0;
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar7,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar2,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgEmoteRadialMenu);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined1 *)&__this_01[1].klass = 1;
    Gisketch_Aottg2UI_Code_AottgUi__Component(pGVar7,__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar7 = pGVar8;
  pIVar2 = pIVar9;
  if (g_data_057aee88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectionRow_b__1);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-actions");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"header");
    pIVar2 = (Il2CppClass *)&"profile-info-";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee88 = '\x01';
  }
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar8,(System_String_o *)*(System_String_Fields *)&(pIVar9->_1).name,"header",
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pIVar2 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar5);
      pSVar1 = "default";
      pIVar2 = (pIVar9->_1).declaringType;
      if (pIVar2 == (Il2CppClass *)0x0) {
        pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        (pIVar9->_1).declaringType = pIVar2;
        il2cpp_runtime_helper_022b4080(&(pIVar9->_1).declaringType,pIVar2);
      }
      pSVar6 = System_String__Concat_3af7150
                         ("profile-info-",*(System_String_o **)&(pIVar9->_1).this_arg.bits,"-actions",
                          (MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,12.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar8,pSVar1,(System_Action_AottgUi__o *)pIVar2,pSVar6,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar7;
  if (g_data_057aee89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-link");
    il2cpp_runtime_helper_023445d0(&"Not Connected");
    il2cpp_runtime_helper_023445d0(&"profile-info-");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aee89 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar7,"Not Connected","profileInfoStatus",(System_String_o *)0x0,
                        (System_String_o *)(pIVar2->_1).namespaze,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar5);
      variant = *(int32_t *)&(pIVar2->_1).byval_arg.data;
      pSVar1 = *(System_String_o **)&(pIVar2->_1).byval_arg.bits;
      pSVar6 = (pIVar2->_1).this_arg.data;
      id = System_String__Concat_3af7150
                     ("profile-info-",*(System_String_o **)&(pIVar2->_1).this_arg.bits,"-link",
                      (MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (pGVar7,variant,pSVar1,pSVar6,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)(pIVar2->_1).element_class,(MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignItems = (System_String_o *)(pIVar2->_1).castClass;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
          (pGVar5->fields).alignSelf = "account.auth.idle";
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf);
          (pGVar3->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-socials");
    g_data_057aee8a = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pIVar9 = pIVar2;
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)pIVar2,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[1].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_02 + 1,pIVar2);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pIVar9 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar8,"default",build,"profile-details-socials",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildEmotes>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildEmotes_b__15_0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheels, const MethodInfo* method);
// 0x452be10

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c___BuildEmotes_b__15_0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *wheels,MethodInfo *method)

{
  int32_t variant;
  System_String_o *pSVar1;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Il2CppObject *__this_01;
  System_String_array *collection;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Il2CppClass *pIVar8;
  
  if (g_data_057aee87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEmoteRadialMenu);
    g_data_057aee87 = '\x01';
  }
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgEmoteRadialMenu);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pIVar8 = pIVar2;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar2,(MethodInfo *)0x0);
  *(undefined1 *)&((System_String_Fields *)&(pIVar2->_1).name)->_stringLength = 0;
  if (wheels != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (wheels,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar2,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgEmoteRadialMenu);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined1 *)&__this_00[1].klass = 1;
    Gisketch_Aottg2UI_Code_AottgUi__Component(wheels,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = pGVar7;
  pIVar2 = pIVar8;
  if (g_data_057aee88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectionRow_b__1);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-actions");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"header");
    pIVar2 = (Il2CppClass *)&"profile-info-";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee88 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar7,(System_String_o *)*(System_String_Fields *)&(pIVar8->_1).name,"header",
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pIVar2 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar5);
      pSVar1 = "default";
      pIVar2 = (pIVar8->_1).declaringType;
      if (pIVar2 == (Il2CppClass *)0x0) {
        pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        (pIVar8->_1).declaringType = pIVar2;
        il2cpp_runtime_helper_022b4080(&(pIVar8->_1).declaringType,pIVar2);
      }
      pSVar6 = System_String__Concat_3af7150
                         ("profile-info-",*(System_String_o **)&(pIVar8->_1).this_arg.bits,"-actions",
                          (MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,12.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar7,pSVar1,(System_Action_AottgUi__o *)pIVar2,pSVar6,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar7 = __this_02;
  if (g_data_057aee89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-link");
    il2cpp_runtime_helper_023445d0(&"Not Connected");
    il2cpp_runtime_helper_023445d0(&"profile-info-");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aee89 = '\x01';
  }
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (__this_02,"Not Connected","profileInfoStatus",(System_String_o *)0x0,
                        (System_String_o *)(pIVar2->_1).namespaze,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar5);
      variant = *(int32_t *)&(pIVar2->_1).byval_arg.data;
      pSVar1 = *(System_String_o **)&(pIVar2->_1).byval_arg.bits;
      pSVar6 = (pIVar2->_1).this_arg.data;
      id = System_String__Concat_3af7150
                     ("profile-info-",*(System_String_o **)&(pIVar2->_1).this_arg.bits,"-link",
                      (MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (__this_02,variant,pSVar1,pSVar6,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)(pIVar2->_1).element_class,(MethodInfo *)0x0);
      pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignItems = (System_String_o *)(pIVar2->_1).castClass;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
          (pGVar5->fields).alignSelf = "account.auth.idle";
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf);
          (pGVar3->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-socials");
    g_data_057aee8a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pIVar8 = pIVar2;
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)pIVar2,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_01 + 1,pIVar2);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pIVar8 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar7,"default",build,"profile-details-socials",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x452b940

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x452bea0

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t variant;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Il2CppObject *__this_00;
  System_String_array *collection;
  Il2CppClass *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  Il2CppClass *pIVar7;
  
  __this_02 = row;
  pIVar7 = (Il2CppClass *)__this;
  if (g_data_057aee88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectionRow_b__1);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-actions");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"header");
    pIVar7 = (Il2CppClass *)&"profile-info-";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee88 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"header",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pIVar7 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar4);
      pSVar1 = "default";
      pSVar5 = (__this->fields).__9__1;
      if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
        pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        (__this->fields).__9__1 = pSVar5;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1,pSVar5);
      }
      pSVar6 = System_String__Concat_3af7150("profile-info-",(__this->fields).id,"-actions",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,12.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (row,pSVar1,pSVar5,pSVar6,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = __this_02;
  if (g_data_057aee89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-link");
    il2cpp_runtime_helper_023445d0(&"Not Connected");
    il2cpp_runtime_helper_023445d0(&"profile-info-");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aee89 = '\x01';
  }
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (__this_02,"Not Connected","profileInfoStatus",(System_String_o *)0x0,
                        (System_String_o *)(pIVar7->_1).namespaze,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar4);
      variant = *(int32_t *)&(pIVar7->_1).byval_arg.data;
      pSVar1 = *(System_String_o **)&(pIVar7->_1).byval_arg.bits;
      pSVar6 = (pIVar7->_1).this_arg.data;
      id = System_String__Concat_3af7150
                     ("profile-info-",*(System_String_o **)&(pIVar7->_1).this_arg.bits,"-link",
                      (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (__this_02,variant,pSVar1,pSVar6,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)(pIVar7->_1).element_class,(MethodInfo *)0x0);
      __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignItems = (System_String_o *)(pIVar7->_1).castClass;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          (pGVar4->fields).alignSelf = "account.auth.idle";
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf);
          (pGVar2->fields).contentLayout = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-socials");
    g_data_057aee8a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pIVar7 = __this_01;
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pIVar7 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_03,"default",pSVar5,"profile-details-socials",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x452c160

void Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0___ConnectionRow_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileScreen___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  int32_t variant;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *id;
  Il2CppObject *__this_00;
  System_String_array *collection;
  Il2CppClass *__this_01;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Il2CppClass *__this_03;
  
  __this_02 = actions;
  if (g_data_057aee89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-link");
    il2cpp_runtime_helper_023445d0(&"Not Connected");
    il2cpp_runtime_helper_023445d0(&"profile-info-");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aee89 = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (actions,"Not Connected","profileInfoStatus",(System_String_o *)0x0,(__this->fields).statusKey,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
    __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar3);
      variant = (__this->fields).buttonVariant;
      text = (__this->fields).buttonText;
      actionId = (__this->fields).actionId;
      id = System_String__Concat_3af7150("profile-info-",(__this->fields).id,"-link",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (actions,variant,text,actionId,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(__this->fields).icon,
                          (MethodInfo *)0x0);
      __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search);
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignItems = (__this->fields).buttonVisibleKey;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
          (pGVar3->fields).alignSelf = "account.auth.idle";
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf);
          (pGVar1->fields).contentLayout = pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar3);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-socials");
    g_data_057aee8a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  __this_03 = __this_01;
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_03 = "Column";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_02,"default",build,"profile-details-socials",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x4529e30

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  if (g_data_057aee75 == '\0') {
    il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
    g_data_057aee75 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x4529e60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aee76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee76 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0
                      ,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4529f30

void Gisketch_Aottg2UI_Game_AottgProfileScreen__Build
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_01;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_02;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_03;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_04;
  undefined1 auVar1 [56];
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_05;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_06;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_07;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_08;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_09;
  long lVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar12;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_10;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar14;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_11;
  undefined8 uVar15;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_428;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_420;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_418;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_410;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_378;
  System_Action_AottgUi__o *pSStack_370;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_368;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_360;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_2c8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_2c0;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_2b8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_2b0;
  System_String_o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar19;
  undefined8 uVar20;
  undefined4 in_stack_fffffffffffffde0;
  undefined4 uVar21;
  float fVar22;
  undefined4 in_stack_fffffffffffffde4;
  undefined4 uVar23;
  float fVar24;
  undefined4 in_stack_fffffffffffffde8;
  undefined4 uVar25;
  undefined4 in_stack_fffffffffffffdec;
  undefined4 uVar26;
  bool_conflict in_stack_fffffffffffffdf0;
  bool_conflict bVar27;
  undefined4 in_stack_fffffffffffffdf8;
  undefined4 uVar28;
  undefined4 in_stack_fffffffffffffdfc;
  undefined4 uVar29;
  undefined4 in_stack_fffffffffffffe00;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffe04;
  undefined4 uVar31;
  bool_conflict in_stack_fffffffffffffe08;
  bool_conflict bVar32;
  bool_conflict in_stack_fffffffffffffe10;
  bool_conflict bVar33;
  undefined4 in_stack_fffffffffffffe18;
  undefined4 uVar34;
  undefined4 in_stack_fffffffffffffe1c;
  undefined4 uVar35;
  undefined1 auStack_1d0 [32];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  Gisketch_Aottg2UI_Code_AottgUi_o GStack_130;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  Gisketch_Aottg2UI_Code_AottgUi_o GStack_e0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  Gisketch_Aottg2UI_Code_AottgUi_o GStack_90;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (g_data_057aee77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&"PROFILE");
    il2cpp_runtime_helper_023445d0(&"profile-screen");
    g_data_057aee77 = '\x01';
  }
  method_00 = TypeInfo_AottgProfileScreen;
  if (*(int *)((long)&TypeInfo_AottgProfileScreen[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  sections = Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections(method_00);
  footerOptions =
       *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)TypeInfo_AottgProfileScreen[2].virtualMethodPointer;
  __this_09 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgScreenWithBrushSidePanel);
  uStack_50 = 0x4529feb;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_4435830
            (__this_09,"PROFILE",sections,0,footerOptions,"profile-screen",(System_Action_AottgUi__o *)0x0,1,
             (MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_09,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccountHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacterHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfoHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStats);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&"singleplayer");
    il2cpp_runtime_helper_023445d0(&"home");
    il2cpp_runtime_helper_023445d0(&"STATS");
    il2cpp_runtime_helper_023445d0(&"ACCOUNT");
    il2cpp_runtime_helper_023445d0(&"Emotes");
    il2cpp_runtime_helper_023445d0(&"stats");
    il2cpp_runtime_helper_023445d0(&"EMOTES");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"emotes");
    il2cpp_runtime_helper_023445d0(&"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear");
    il2cpp_runtime_helper_023445d0(&"Info");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"CHARACTER");
    il2cpp_runtime_helper_023445d0(&"info");
    il2cpp_runtime_helper_023445d0(&"account");
    il2cpp_runtime_helper_023445d0(&"trophy");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/EmotesIcon");
    il2cpp_runtime_helper_023445d0(&"INFO");
    il2cpp_runtime_helper_023445d0(&"character");
    g_data_057aee78 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,5);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor();
  uVar5 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
  uVar20 = 0x452a218;
  System_Action_object__AottgScreenSectionContext____ctor();
  uStack_60 = 0;
  uStack_58 = 0;
  GStack_90.fields._ownerId = (System_String_o *)0x0;
  uStack_68 = 0;
  GStack_90.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  GStack_90.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  GStack_90.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
  GStack_90.monitor = (void *)0x0;
  uStack_50 = 0;
  pGVar13 = &GStack_90;
  auVar1 = ZEXT3256(CONCAT824(uVar5,CONCAT816("Account",ZEXT816(0))));
  __this_04.fields.Keywords = (System_String_o *)uVar20;
  __this_04.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
  __this_04.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
  __this_04.fields.Id = (System_String_o *)auVar1._16_8_;
  __this_04.fields.Label = (System_String_o *)auVar1._24_8_;
  __this_04.fields.TextKey = (System_String_o *)auVar1._32_8_;
  __this_04.fields.Icon = (System_String_o *)auVar1._40_8_;
  __this_04.fields.SearchTitle = (System_String_o *)auVar1._48_8_;
  __this_04.fields.AutoAddKeywords = in_stack_fffffffffffffde0;
  __this_04.fields.HideSearch = in_stack_fffffffffffffde4;
  __this_04.fields.HideHeader = in_stack_fffffffffffffde8;
  __this_04.fields._76_4_ = in_stack_fffffffffffffdec;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
            (__this_04,(System_String_o *)pGVar13,"account","ACCOUNT","singleplayer",pSVar4,
             (System_String_o *)0x0,in_stack_fffffffffffffdf0,
             (System_String_o *)CONCAT44(in_stack_fffffffffffffdfc,in_stack_fffffffffffffdf8),
             (System_Action_AottgUi__AottgScreenSectionContext__o *)
             CONCAT44(in_stack_fffffffffffffe04,in_stack_fffffffffffffe00),in_stack_fffffffffffffe08,
             in_stack_fffffffffffffe10,
             (MethodInfo *)CONCAT44(in_stack_fffffffffffffe1c,in_stack_fffffffffffffe18));
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x60) = uStack_50;
      *(bool_conflict *)(lVar3 + 0x50) = (bool_conflict)uStack_60;
      *(undefined4 *)(lVar3 + 0x54) = uStack_60._4_4_;
      *(undefined4 *)(lVar3 + 0x58) = (undefined4)uStack_58;
      *(undefined4 *)(lVar3 + 0x5c) = uStack_58._4_4_;
      *(undefined4 *)(lVar3 + 0x40) = GStack_90.fields._ownerId._0_4_;
      *(undefined4 *)(lVar3 + 0x44) = GStack_90.fields._ownerId._4_4_;
      *(bool_conflict *)(lVar3 + 0x48) = (bool_conflict)uStack_68;
      *(undefined4 *)(lVar3 + 0x4c) = uStack_68._4_4_;
      *(bool_conflict *)(lVar3 + 0x30) = (bool_conflict)GStack_90.fields._children;
      *(undefined4 *)(lVar3 + 0x34) = GStack_90.fields._children._4_4_;
      *(undefined4 *)(lVar3 + 0x38) = GStack_90.fields._actions._0_4_;
      *(undefined4 *)(lVar3 + 0x3c) = GStack_90.fields._actions._4_4_;
      *(undefined4 *)(lVar3 + 0x20) = GStack_90.klass._0_4_;
      *(undefined4 *)(lVar3 + 0x24) = GStack_90.klass._4_4_;
      *(undefined4 *)(lVar3 + 0x28) = GStack_90.monitor._0_4_;
      *(undefined4 *)(lVar3 + 0x2c) = GStack_90.monitor._4_4_;
      uVar21 = GStack_90.klass._0_4_;
      uVar23 = GStack_90.klass._4_4_;
      uVar25 = GStack_90.monitor._0_4_;
      uVar26 = GStack_90.monitor._4_4_;
      bVar27 = (bool_conflict)GStack_90.fields._children;
      uVar28 = GStack_90.fields._actions._0_4_;
      uVar29 = GStack_90.fields._actions._4_4_;
      uVar30 = GStack_90.fields._ownerId._0_4_;
      uVar31 = GStack_90.fields._ownerId._4_4_;
      bVar32 = (bool_conflict)uStack_68;
      bVar33 = (bool_conflict)uStack_60;
      uVar34 = (undefined4)uStack_58;
      uVar35 = uStack_58._4_4_;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x20,0);
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor();
      uVar5 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      uVar20 = 0x452a366;
      System_Action_object__AottgScreenSectionContext____ctor();
      uStack_b0 = 0;
      uStack_a8 = 0;
      GStack_e0.fields._ownerId = (System_String_o *)0x0;
      uStack_b8 = 0;
      GStack_e0.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
      GStack_e0.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
      GStack_e0.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
      GStack_e0.monitor = (void *)0x0;
      uStack_a0 = 0;
      pGVar13 = &GStack_e0;
      auVar1 = ZEXT3256(CONCAT824(uVar5,CONCAT816("Character",ZEXT816(0))));
      __this_05.fields.Keywords = (System_String_o *)uVar20;
      __this_05.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
      __this_05.fields._buildHeaderActions =
           (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
      __this_05.fields.Id = (System_String_o *)auVar1._16_8_;
      __this_05.fields.Label = (System_String_o *)auVar1._24_8_;
      __this_05.fields.TextKey = (System_String_o *)auVar1._32_8_;
      __this_05.fields.Icon = (System_String_o *)auVar1._40_8_;
      __this_05.fields.SearchTitle = (System_String_o *)auVar1._48_8_;
      __this_05.fields.AutoAddKeywords = uVar21;
      __this_05.fields.HideSearch = uVar23;
      __this_05.fields.HideHeader = uVar25;
      __this_05.fields._76_4_ = uVar26;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                (__this_05,(System_String_o *)pGVar13,"character","CHARACTER","home",pSVar4,
                 (System_String_o *)0x0,bVar27,(System_String_o *)CONCAT44(uVar29,uVar28),
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar31,uVar30),bVar32,bVar33,
                 (MethodInfo *)CONCAT44(uVar35,uVar34));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0xa8) = uStack_a0;
        *(bool_conflict *)(lVar3 + 0x98) = (bool_conflict)uStack_b0;
        *(undefined4 *)(lVar3 + 0x9c) = uStack_b0._4_4_;
        *(undefined4 *)(lVar3 + 0xa0) = (undefined4)uStack_a8;
        *(undefined4 *)(lVar3 + 0xa4) = uStack_a8._4_4_;
        *(undefined4 *)(lVar3 + 0x88) = GStack_e0.fields._ownerId._0_4_;
        *(undefined4 *)(lVar3 + 0x8c) = GStack_e0.fields._ownerId._4_4_;
        *(bool_conflict *)(lVar3 + 0x90) = (bool_conflict)uStack_b8;
        *(undefined4 *)(lVar3 + 0x94) = uStack_b8._4_4_;
        *(bool_conflict *)(lVar3 + 0x78) = (bool_conflict)GStack_e0.fields._children;
        *(undefined4 *)(lVar3 + 0x7c) = GStack_e0.fields._children._4_4_;
        *(undefined4 *)(lVar3 + 0x80) = GStack_e0.fields._actions._0_4_;
        *(undefined4 *)(lVar3 + 0x84) = GStack_e0.fields._actions._4_4_;
        *(undefined4 *)(lVar3 + 0x68) = GStack_e0.klass._0_4_;
        *(undefined4 *)(lVar3 + 0x6c) = GStack_e0.klass._4_4_;
        *(undefined4 *)(lVar3 + 0x70) = GStack_e0.monitor._0_4_;
        *(undefined4 *)(lVar3 + 0x74) = GStack_e0.monitor._4_4_;
        uVar21 = GStack_e0.klass._0_4_;
        uVar23 = GStack_e0.klass._4_4_;
        uVar25 = GStack_e0.monitor._0_4_;
        uVar26 = GStack_e0.monitor._4_4_;
        bVar27 = (bool_conflict)GStack_e0.fields._children;
        uVar28 = GStack_e0.fields._actions._0_4_;
        uVar29 = GStack_e0.fields._actions._4_4_;
        uVar30 = GStack_e0.fields._ownerId._0_4_;
        uVar31 = GStack_e0.fields._ownerId._4_4_;
        bVar32 = (bool_conflict)uStack_b8;
        bVar33 = (bool_conflict)uStack_b0;
        uVar34 = (undefined4)uStack_a8;
        uVar35 = uStack_a8._4_4_;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x68,0);
        pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor();
        uVar5 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        uVar20 = 0x452a4b4;
        System_Action_object__AottgScreenSectionContext____ctor();
        uStack_100 = 0;
        uStack_f8 = 0;
        GStack_130.fields._ownerId = (System_String_o *)0x0;
        uStack_108 = 0;
        GStack_130.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
        GStack_130.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
        GStack_130.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
        GStack_130.monitor = (void *)0x0;
        uStack_f0 = 0;
        pGVar13 = &GStack_130;
        auVar1 = ZEXT3256(CONCAT824(uVar5,CONCAT816("Info",ZEXT816(1) << 0x40)));
        __this_06.fields.Keywords = (System_String_o *)uVar20;
        __this_06.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
        __this_06.fields._buildHeaderActions =
             (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
        __this_06.fields.Id = (System_String_o *)auVar1._16_8_;
        __this_06.fields.Label = (System_String_o *)auVar1._24_8_;
        __this_06.fields.TextKey = (System_String_o *)auVar1._32_8_;
        __this_06.fields.Icon = (System_String_o *)auVar1._40_8_;
        __this_06.fields.SearchTitle = (System_String_o *)auVar1._48_8_;
        __this_06.fields.AutoAddKeywords = uVar21;
        __this_06.fields.HideSearch = uVar23;
        __this_06.fields.HideHeader = uVar25;
        __this_06.fields._76_4_ = uVar26;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                  (__this_06,(System_String_o *)pGVar13,"info","INFO","question",pSVar4,
                   (System_String_o *)0x0,bVar27,(System_String_o *)CONCAT44(uVar29,uVar28),
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar31,uVar30),bVar32,
                   bVar33,(MethodInfo *)CONCAT44(uVar35,uVar34));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0xf0) = uStack_f0;
          *(bool_conflict *)(lVar3 + 0xe0) = (bool_conflict)uStack_100;
          *(undefined4 *)(lVar3 + 0xe4) = uStack_100._4_4_;
          *(undefined4 *)(lVar3 + 0xe8) = (undefined4)uStack_f8;
          *(undefined4 *)(lVar3 + 0xec) = uStack_f8._4_4_;
          *(undefined4 *)(lVar3 + 0xd0) = GStack_130.fields._ownerId._0_4_;
          *(undefined4 *)(lVar3 + 0xd4) = GStack_130.fields._ownerId._4_4_;
          *(bool_conflict *)(lVar3 + 0xd8) = (bool_conflict)uStack_108;
          *(undefined4 *)(lVar3 + 0xdc) = uStack_108._4_4_;
          *(bool_conflict *)(lVar3 + 0xc0) = (bool_conflict)GStack_130.fields._children;
          *(undefined4 *)(lVar3 + 0xc4) = GStack_130.fields._children._4_4_;
          *(undefined4 *)(lVar3 + 200) = GStack_130.fields._actions._0_4_;
          *(undefined4 *)(lVar3 + 0xcc) = GStack_130.fields._actions._4_4_;
          *(undefined4 *)(lVar3 + 0xb0) = GStack_130.klass._0_4_;
          *(undefined4 *)(lVar3 + 0xb4) = GStack_130.klass._4_4_;
          *(undefined4 *)(lVar3 + 0xb8) = GStack_130.monitor._0_4_;
          *(undefined4 *)(lVar3 + 0xbc) = GStack_130.monitor._4_4_;
          uVar21 = GStack_130.klass._0_4_;
          uVar23 = GStack_130.klass._4_4_;
          uVar25 = GStack_130.monitor._0_4_;
          uVar26 = GStack_130.monitor._4_4_;
          bVar27 = (bool_conflict)GStack_130.fields._children;
          uVar28 = GStack_130.fields._actions._0_4_;
          uVar29 = GStack_130.fields._actions._4_4_;
          uVar30 = GStack_130.fields._ownerId._0_4_;
          uVar31 = GStack_130.fields._ownerId._4_4_;
          bVar32 = (bool_conflict)uStack_108;
          bVar33 = (bool_conflict)uStack_100;
          uVar34 = (undefined4)uStack_f8;
          uVar35 = uStack_f8._4_4_;
          il2cpp_runtime_helper_022b4080(lVar3 + 0xb0,0);
          pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
          uVar5 = 0x452a5e9;
          System_Action_object__AottgScreenSectionContext____ctor();
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_160 = (System_String_o *)0x0;
          uStack_158 = 0;
          uStack_170 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
          uStack_168 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
          auStack_180 = (undefined1  [8])0x0;
          uStack_178 = (void *)0x0;
          uStack_140 = 0;
          pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)auStack_180;
          auVar1 = ZEXT2456(CONCAT816("Emotes",ZEXT816(0)));
          __this_07.fields.Keywords = (System_String_o *)uVar5;
          __this_07.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_
          ;
          __this_07.fields._buildHeaderActions =
               (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
          __this_07.fields.Id = (System_String_o *)auVar1._16_8_;
          __this_07.fields.Label = (System_String_o *)auVar1._24_8_;
          __this_07.fields.TextKey = (System_String_o *)auVar1._32_8_;
          __this_07.fields.Icon = (System_String_o *)auVar1._40_8_;
          __this_07.fields.SearchTitle = (System_String_o *)auVar1._48_8_;
          __this_07.fields.AutoAddKeywords = uVar21;
          __this_07.fields.HideSearch = uVar23;
          __this_07.fields.HideHeader = uVar25;
          __this_07.fields._76_4_ = uVar26;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                    (__this_07,(System_String_o *)pGVar13,"emotes","EMOTES","UI/Icons/Profile/EmotesIcon",pSVar4,
                     (System_String_o *)0x0,bVar27,(System_String_o *)CONCAT44(uVar29,uVar28),
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar31,uVar30),bVar32,
                     bVar33,(MethodInfo *)CONCAT44(uVar35,uVar34));
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x138) = uStack_140;
            *(bool_conflict *)(lVar3 + 0x128) = (bool_conflict)uStack_150;
            *(undefined4 *)(lVar3 + 300) = uStack_150._4_4_;
            *(undefined4 *)(lVar3 + 0x130) = (undefined4)uStack_148;
            *(undefined4 *)(lVar3 + 0x134) = uStack_148._4_4_;
            *(undefined4 *)(lVar3 + 0x118) = (undefined4)uStack_160;
            *(undefined4 *)(lVar3 + 0x11c) = uStack_160._4_4_;
            *(bool_conflict *)(lVar3 + 0x120) = (bool_conflict)uStack_158;
            *(undefined4 *)(lVar3 + 0x124) = uStack_158._4_4_;
            *(bool_conflict *)(lVar3 + 0x108) = (bool_conflict)uStack_170;
            *(undefined4 *)(lVar3 + 0x10c) = uStack_170._4_4_;
            *(undefined4 *)(lVar3 + 0x110) = (undefined4)uStack_168;
            *(undefined4 *)(lVar3 + 0x114) = uStack_168._4_4_;
            *(undefined4 *)(lVar3 + 0xf8) = auStack_180._0_4_;
            *(undefined4 *)(lVar3 + 0xfc) = auStack_180._4_4_;
            *(undefined4 *)(lVar3 + 0x100) = (undefined4)uStack_178;
            *(undefined4 *)(lVar3 + 0x104) = uStack_178._4_4_;
            fVar22 = (float)auStack_180._0_4_;
            fVar24 = (float)auStack_180._4_4_;
            uVar21 = (undefined4)uStack_178;
            uVar23 = uStack_178._4_4_;
            bVar27 = (bool_conflict)uStack_170;
            uVar25 = (undefined4)uStack_168;
            uVar26 = uStack_168._4_4_;
            uVar28 = (undefined4)uStack_160;
            uVar29 = uStack_160._4_4_;
            bVar32 = (bool_conflict)uStack_158;
            bVar33 = (bool_conflict)uStack_150;
            uVar30 = (undefined4)uStack_148;
            uVar31 = uStack_148._4_4_;
            il2cpp_runtime_helper_022b4080(lVar3 + 0xf8,0);
            pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
            uVar5 = 0x452a71e;
            System_Action_object__AottgScreenSectionContext____ctor();
            uStack_1a0._0_4_ = 0.0;
            uStack_1a0._4_4_ = 0.0;
            uStack_198._0_4_ = 0.0;
            uStack_198._4_4_ = 0.0;
            uStack_1b0 = (System_String_o *)0x0;
            uStack_1a8._0_4_ = 0.0;
            uStack_1a8._4_4_ = 0.0;
            auStack_1d0._16_8_ = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
            auStack_1d0._24_8_ = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
            auStack_1d0._0_8_ = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
            auStack_1d0._8_8_ = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
            uStack_190._0_4_ = 0.0;
            uStack_190._4_4_ = 0.0;
            pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)auStack_1d0;
            auVar1 = ZEXT2456(CONCAT816("Stats",CONCAT88(0,"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear")));
            __this_08.fields.Keywords = (System_String_o *)uVar5;
            __this_08.fields._buildContent =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._0_8_;
            __this_08.fields._buildHeaderActions =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar1._8_8_;
            __this_08.fields.Id = (System_String_o *)auVar1._16_8_;
            __this_08.fields.Label = (System_String_o *)auVar1._24_8_;
            __this_08.fields.TextKey = (System_String_o *)auVar1._32_8_;
            __this_08.fields.Icon = (System_String_o *)auVar1._40_8_;
            __this_08.fields.SearchTitle = (System_String_o *)auVar1._48_8_;
            __this_08.fields.AutoAddKeywords = (bool_conflict)fVar22;
            __this_08.fields.HideSearch = (bool_conflict)fVar24;
            __this_08.fields.HideHeader = uVar21;
            __this_08.fields._76_4_ = uVar23;
            Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                      (__this_08,(System_String_o *)pGVar13,"stats","STATS","trophy",pSVar4,
                       (System_String_o *)0x0,bVar27,(System_String_o *)CONCAT44(uVar26,uVar25),
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar29,uVar28),bVar32,
                       bVar33,(MethodInfo *)CONCAT44(uVar31,uVar30));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x180) = uStack_190;
              *(float *)(lVar3 + 0x170) = (float)uStack_1a0;
              *(float *)(lVar3 + 0x174) = uStack_1a0._4_4_;
              *(float *)(lVar3 + 0x178) = (float)uStack_198;
              *(float *)(lVar3 + 0x17c) = uStack_198._4_4_;
              *(float *)(lVar3 + 0x160) = (float)uStack_1b0;
              *(float *)(lVar3 + 0x164) = uStack_1b0._4_4_;
              *(float *)(lVar3 + 0x168) = (float)uStack_1a8;
              *(float *)(lVar3 + 0x16c) = uStack_1a8._4_4_;
              *(undefined4 *)(lVar3 + 0x150) = auStack_1d0._16_4_;
              *(undefined4 *)(lVar3 + 0x154) = auStack_1d0._20_4_;
              *(undefined4 *)(lVar3 + 0x158) = auStack_1d0._24_4_;
              *(undefined4 *)(lVar3 + 0x15c) = auStack_1d0._28_4_;
              *(undefined4 *)(lVar3 + 0x140) = auStack_1d0._0_4_;
              *(undefined4 *)(lVar3 + 0x144) = auStack_1d0._4_4_;
              *(undefined4 *)(lVar3 + 0x148) = auStack_1d0._8_4_;
              *(undefined4 *)(lVar3 + 0x14c) = auStack_1d0._12_4_;
              il2cpp_runtime_helper_022b4080(lVar3 + 0x140,0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee79 == '\0') {
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a866;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a872;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccount_b__9_0);
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a87e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a88a;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a896;
    il2cpp_runtime_helper_023445d0(&"profile-account-card");
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8a2;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee79 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8f6;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a913;
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a92d;
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 8) = pSVar6;
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a948;
    il2cpp_runtime_helper_022b4080(lVar3 + 8,pSVar6);
  }
  pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a957;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar16 = (System_String_o *)0x0;
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar4 = (System_String_o *)0x0;
  pSVar17 = (System_String_o *)0x0;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9d4;
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9e3;
  __this_03.fields._8_8_ = pSVar17;
  __this_03.fields._group = pSVar4;
  __this_03.fields._SectionId_k__BackingField = pSVar16;
  __this_03.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar18;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffde8;
  pGVar9 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_03,
                      (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffde8,
                      (MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa0e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar13,(System_String_o *)pSVar2,pSVar6,"profile-account-card",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar8,pGVar9,(MethodInfo *)0x0);
    return;
  }
  pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa22;
  il2cpp_runtime_helper_022b2c90();
  pSStack_2b8 = pSVar2;
  pGVar14 = pGVar12;
  pGStack_2c8 = pGVar8;
  pGStack_2c0 = pGVar13;
  pGStack_2b0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffde8;
  if (g_data_057aee7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_runtime_helper_023445d0(&"Refresh Account");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Refresh");
    il2cpp_runtime_helper_023445d0(&"account.refreshCta");
    il2cpp_runtime_helper_023445d0(&"account.loggedIn");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"profile-info-account-refresh");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Refresh";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7a = '\x01';
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,1,"Refresh","account.refresh","profile-info-account-refresh",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "UI/Icons/Navigation/RefreshIcon",(MethodInfo *)0x0);
    pGVar14 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar11);
      (pGVar10->fields).textKey = "MainMenu.Account.Refresh";
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).textKey);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar14 = pGVar12;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar12,(MethodInfo *)0x0);
      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar12->_1).name)->direction =
             "account.refreshCta";
        il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar12->_1).name);
        (pGVar12->_1).byval_arg.data = "account.loggedIn";
        il2cpp_runtime_helper_022b4080(&(pGVar12->_1).byval_arg);
        *(System_String_o **)&(pGVar12->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar12->_1).byval_arg.bits);
        (pGVar10->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).contentLayout,pGVar12);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar10,"Refresh Account",(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                   (System_String_o *)pGVar18,(System_String_o *)pGVar19,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7b == '\0') {
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ace2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo_b__11_0);
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acfa;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad06;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad12;
    il2cpp_runtime_helper_023445d0(&"default");
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad1e;
    il2cpp_runtime_helper_023445d0(&"profile-info-connections");
    g_data_057aee7b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad3e;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad72;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad8f;
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ada9;
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 0x10) = pSVar6;
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452adc4;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar6);
  }
  pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452add3;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar16 = (System_String_o *)0x0;
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar4 = (System_String_o *)0x0;
  pSVar17 = (System_String_o *)0x0;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae5a;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                       (System_String_o *)0x0,(System_String_o *)0x0,20.0,pGVar7,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae69;
  __this_02.fields._8_8_ = pSVar17;
  __this_02.fields._group = pSVar4;
  __this_02.fields._SectionId_k__BackingField = pSVar16;
  __this_02.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar18;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_2c8;
  pGVar9 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_02,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_2c8,
                      (MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae94;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)pSVar2,pSVar6,"profile-info-connections",
               pGVar11,pGVar9,(MethodInfo *)0x0);
    return;
  }
  pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aea8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_368 = pSVar2;
  pGVar8 = pGVar12;
  pGStack_378 = pGVar14;
  pSStack_370 = pSVar6;
  pGStack_360 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_2c8;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,0,"Account Details","account.details","profile-info-account-details",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "information",(MethodInfo *)0x0);
    pGVar8 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar11);
      (pGVar10->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).textKey);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar8 = pGVar12;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar12,(MethodInfo *)0x0);
      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        *(System_String_o **)&(pGVar12->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar12->_1).byval_arg.bits);
        (pGVar10->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).contentLayout,pGVar12);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar10,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   (System_String_o *)pGVar18,(System_String_o *)pGVar19,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1a3;
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1bd;
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 0x18) = pSVar6;
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x18,pSVar6);
  }
  pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1e7;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar20 = 0;
  pSVar17 = (System_String_o *)0x0;
  pSVar4 = (System_String_o *)0x0;
  uVar5 = 0;
  pSVar16 = (System_String_o *)0x0;
  pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b273;
  __this_01.fields._8_8_ = uVar5;
  __this_01.fields._group = pSVar4;
  __this_01.fields._SectionId_k__BackingField = (System_String_o *)uVar20;
  __this_01.fields._SectionTitle_k__BackingField = pSVar17;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_378;
  pGVar9 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_01,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_378,
                      (MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)pSVar2,pSVar6,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar9,(MethodInfo *)0x0);
    return;
  }
  pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_418 = pSVar2;
  pGVar14 = pGVar12;
  pGStack_428 = layout;
  pGStack_420 = pGVar8;
  pGStack_410 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_378;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "material-icons/edit",(MethodInfo *)0x0);
    pGVar14 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar11);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (pGVar10,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,pSVar17,
                 pSVar16,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_428;
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 0x20) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20,pSVar6);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar15 = 0;
  pSVar4 = (System_String_o *)0x0;
  uVar5 = 0;
  uVar20 = 0;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,42.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  __this_00.fields._8_8_ = uVar20;
  __this_00.fields._group = (System_String_o *)uVar5;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar15;
  __this_00.fields._SectionTitle_k__BackingField = pSVar4;
  pGVar9 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,(int32_t)pGVar13,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)pSVar2,pSVar6,"profile-emote-wheels",
               pGVar11,pGVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_10 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_11 = __this_10;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_10,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(pGVar13,__this_10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_11,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections (const MethodInfo* method);
// 0x452a020

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgProfileScreen__Sections(MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_01;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_02;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_03;
  undefined1 auVar2 [56];
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_04;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_05;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_06;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_07;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_Action_AottgUi__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar13;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_08;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *extraout_RAX;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *extraout_RAX_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar15;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_09;
  undefined8 uVar16;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_400;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_3f8;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_3f0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_3e8;
  System_String_o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_350;
  System_Action_AottgUi__o *pSStack_348;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_340;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_338;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *local_2a0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_298;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_290;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_288;
  System_String_o *pSVar18;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar20;
  undefined8 uVar21;
  undefined4 in_stack_fffffffffffffe08;
  undefined4 uVar22;
  bool_conflict bVar23;
  float fVar24;
  undefined4 in_stack_fffffffffffffe0c;
  undefined4 uVar25;
  bool_conflict bVar26;
  float fVar27;
  undefined4 in_stack_fffffffffffffe10;
  undefined4 uVar28;
  bool_conflict bVar29;
  undefined4 in_stack_fffffffffffffe14;
  undefined4 uVar30;
  bool_conflict in_stack_fffffffffffffe18;
  bool_conflict bVar31;
  undefined4 in_stack_fffffffffffffe20;
  undefined4 uVar32;
  undefined4 in_stack_fffffffffffffe24;
  undefined4 uVar33;
  undefined4 in_stack_fffffffffffffe28;
  undefined4 uVar34;
  undefined4 in_stack_fffffffffffffe2c;
  undefined4 uVar35;
  bool_conflict in_stack_fffffffffffffe30;
  bool_conflict bVar36;
  bool_conflict in_stack_fffffffffffffe38;
  bool_conflict hideHeader;
  undefined4 in_stack_fffffffffffffe40;
  undefined4 uVar37;
  undefined4 in_stack_fffffffffffffe44;
  undefined4 uVar38;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  System_String_o *local_168;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  System_String_o *local_118;
  Gisketch_Aottg2UI_Code_AottgUi_o local_108;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  System_String_o *local_c8;
  Gisketch_Aottg2UI_Code_AottgUi_o local_b8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  System_String_o *local_78;
  Gisketch_Aottg2UI_Code_AottgUi_o local_68;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (g_data_057aee78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccountHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacterHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfoHeaderActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStats);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&"singleplayer");
    il2cpp_runtime_helper_023445d0(&"home");
    il2cpp_runtime_helper_023445d0(&"STATS");
    il2cpp_runtime_helper_023445d0(&"ACCOUNT");
    il2cpp_runtime_helper_023445d0(&"Emotes");
    il2cpp_runtime_helper_023445d0(&"stats");
    il2cpp_runtime_helper_023445d0(&"EMOTES");
    il2cpp_runtime_helper_023445d0(&"Account");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"emotes");
    il2cpp_runtime_helper_023445d0(&"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear");
    il2cpp_runtime_helper_023445d0(&"Info");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"CHARACTER");
    il2cpp_runtime_helper_023445d0(&"info");
    il2cpp_runtime_helper_023445d0(&"account");
    il2cpp_runtime_helper_023445d0(&"trophy");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/EmotesIcon");
    il2cpp_runtime_helper_023445d0(&"INFO");
    il2cpp_runtime_helper_023445d0(&"character");
    g_data_057aee78 = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,5);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor();
  uVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
  uVar21 = 0x452a218;
  System_Action_object__AottgScreenSectionContext____ctor();
  local_38 = 0;
  uStack_30 = 0;
  local_68.fields._ownerId = (System_String_o *)0x0;
  uStack_40 = 0;
  local_68.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  local_68.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  local_68.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
  local_68.monitor = (void *)0x0;
  local_28 = 0;
  pGVar14 = &local_68;
  auVar2 = ZEXT3256(CONCAT824(uVar6,CONCAT816("Account",ZEXT816(0))));
  __this_03.fields.Keywords = (System_String_o *)uVar21;
  __this_03.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._0_8_;
  __this_03.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._8_8_;
  __this_03.fields.Id = (System_String_o *)auVar2._16_8_;
  __this_03.fields.Label = (System_String_o *)auVar2._24_8_;
  __this_03.fields.TextKey = (System_String_o *)auVar2._32_8_;
  __this_03.fields.Icon = (System_String_o *)auVar2._40_8_;
  __this_03.fields.SearchTitle = (System_String_o *)auVar2._48_8_;
  __this_03.fields.AutoAddKeywords = in_stack_fffffffffffffe08;
  __this_03.fields.HideSearch = in_stack_fffffffffffffe0c;
  __this_03.fields.HideHeader = in_stack_fffffffffffffe10;
  __this_03.fields._76_4_ = in_stack_fffffffffffffe14;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
            (__this_03,(System_String_o *)pGVar14,"account","ACCOUNT","singleplayer",pSVar5,
             (System_String_o *)0x0,in_stack_fffffffffffffe18,
             (System_String_o *)CONCAT44(in_stack_fffffffffffffe24,in_stack_fffffffffffffe20),
             (System_Action_AottgUi__AottgScreenSectionContext__o *)
             CONCAT44(in_stack_fffffffffffffe2c,in_stack_fffffffffffffe28),in_stack_fffffffffffffe30,
             in_stack_fffffffffffffe38,
             (MethodInfo *)CONCAT44(in_stack_fffffffffffffe44,in_stack_fffffffffffffe40));
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if ((int)pGVar4->max_length != 0) {
      pGVar4->m_Items[0].fields.AutoAddKeywords = (undefined4)local_28;
      pGVar4->m_Items[0].fields.HideSearch = local_28._4_4_;
      *(bool_conflict *)&pGVar4->m_Items[0].fields.SearchTitle = (bool_conflict)local_38;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.SearchTitle + 4) = local_38._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields.Keywords = (undefined4)uStack_30;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Keywords + 4) = uStack_30._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields.TextKey = local_68.fields._ownerId._0_4_;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.TextKey + 4) = local_68.fields._ownerId._4_4_;
      *(bool_conflict *)&pGVar4->m_Items[0].fields.Icon = (bool_conflict)uStack_40;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Icon + 4) = uStack_40._4_4_;
      *(bool_conflict *)&pGVar4->m_Items[0].fields.Id = (bool_conflict)local_68.fields._children;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Id + 4) = local_68.fields._children._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields.Label = local_68.fields._actions._0_4_;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Label + 4) = local_68.fields._actions._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields._buildContent = local_68.klass._0_4_;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields._buildContent + 4) = local_68.klass._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields._buildHeaderActions = local_68.monitor._0_4_;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields._buildHeaderActions + 4) = local_68.monitor._4_4_;
      uVar22 = local_68.klass._0_4_;
      uVar25 = local_68.klass._4_4_;
      uVar28 = local_68.monitor._0_4_;
      uVar30 = local_68.monitor._4_4_;
      bVar23 = (bool_conflict)local_68.fields._children;
      uVar32 = local_68.fields._actions._0_4_;
      uVar33 = local_68.fields._actions._4_4_;
      uVar34 = local_68.fields._ownerId._0_4_;
      uVar35 = local_68.fields._ownerId._4_4_;
      bVar26 = (bool_conflict)uStack_40;
      bVar29 = (bool_conflict)local_38;
      uVar37 = (undefined4)uStack_30;
      uVar38 = uStack_30._4_4_;
      il2cpp_runtime_helper_022b4080(pGVar4->m_Items,0);
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor();
      uVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      uVar21 = 0x452a366;
      System_Action_object__AottgScreenSectionContext____ctor();
      local_88 = 0;
      uStack_80 = 0;
      local_b8.fields._ownerId = (System_String_o *)0x0;
      uStack_90 = 0;
      local_b8.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
      local_b8.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
      local_b8.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
      local_b8.monitor = (void *)0x0;
      local_78 = (System_String_o *)0x0;
      pGVar14 = &local_b8;
      auVar2 = ZEXT3256(CONCAT824(uVar6,CONCAT816("Character",ZEXT816(0))));
      __this_04.fields.Keywords = (System_String_o *)uVar21;
      __this_04.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._0_8_;
      __this_04.fields._buildHeaderActions =
           (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._8_8_;
      __this_04.fields.Id = (System_String_o *)auVar2._16_8_;
      __this_04.fields.Label = (System_String_o *)auVar2._24_8_;
      __this_04.fields.TextKey = (System_String_o *)auVar2._32_8_;
      __this_04.fields.Icon = (System_String_o *)auVar2._40_8_;
      __this_04.fields.SearchTitle = (System_String_o *)auVar2._48_8_;
      __this_04.fields.AutoAddKeywords = uVar22;
      __this_04.fields.HideSearch = uVar25;
      __this_04.fields.HideHeader = uVar28;
      __this_04.fields._76_4_ = uVar30;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                (__this_04,(System_String_o *)pGVar14,"character","CHARACTER","home",pSVar5,
                 (System_String_o *)0x0,bVar23,(System_String_o *)CONCAT44(uVar33,uVar32),
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar35,uVar34),bVar26,bVar29,
                 (MethodInfo *)CONCAT44(uVar38,uVar37));
      if (1 < (uint)pGVar4->max_length) {
        pGVar4->m_Items[1].fields.Keywords = local_78;
        *(bool_conflict *)&pGVar4->m_Items[1].fields.Icon = (bool_conflict)local_88;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields.Icon + 4) = local_88._4_4_;
        *(undefined4 *)&pGVar4->m_Items[1].fields.SearchTitle = (undefined4)uStack_80;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields.SearchTitle + 4) = uStack_80._4_4_;
        *(undefined4 *)&pGVar4->m_Items[1].fields.Label = local_b8.fields._ownerId._0_4_;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields.Label + 4) = local_b8.fields._ownerId._4_4_;
        *(bool_conflict *)&pGVar4->m_Items[1].fields.TextKey = (bool_conflict)uStack_90;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields.TextKey + 4) = uStack_90._4_4_;
        *(bool_conflict *)&pGVar4->m_Items[1].fields._buildHeaderActions =
             (bool_conflict)local_b8.fields._children;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields._buildHeaderActions + 4) =
             local_b8.fields._children._4_4_;
        *(undefined4 *)&pGVar4->m_Items[1].fields.Id = local_b8.fields._actions._0_4_;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields.Id + 4) = local_b8.fields._actions._4_4_;
        pGVar4->m_Items[0].fields.HideHeader = (bool_conflict)local_b8.klass;
        *(undefined4 *)&pGVar4->m_Items[0].fields.field_0x4c = local_b8.klass._4_4_;
        *(undefined4 *)&pGVar4->m_Items[1].fields._buildContent = local_b8.monitor._0_4_;
        *(undefined4 *)((long)&pGVar4->m_Items[1].fields._buildContent + 4) = local_b8.monitor._4_4_;
        bVar23 = (bool_conflict)local_b8.klass;
        uVar22 = local_b8.klass._4_4_;
        uVar25 = local_b8.monitor._0_4_;
        uVar28 = local_b8.monitor._4_4_;
        bVar26 = (bool_conflict)local_b8.fields._children;
        uVar30 = local_b8.fields._actions._0_4_;
        uVar32 = local_b8.fields._actions._4_4_;
        uVar33 = local_b8.fields._ownerId._0_4_;
        uVar34 = local_b8.fields._ownerId._4_4_;
        bVar29 = (bool_conflict)uStack_90;
        bVar31 = (bool_conflict)local_88;
        uVar35 = (undefined4)uStack_80;
        uVar37 = uStack_80._4_4_;
        il2cpp_runtime_helper_022b4080(&pGVar4->m_Items[0].fields.HideHeader,0);
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor();
        uVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        uVar21 = 0x452a4b4;
        System_Action_object__AottgScreenSectionContext____ctor();
        local_d8 = 0;
        uStack_d0 = 0;
        local_108.fields._ownerId = (System_String_o *)0x0;
        uStack_e0 = 0;
        local_108.fields._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
        local_108.fields._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
        local_108.klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
        local_108.monitor = (void *)0x0;
        local_c8 = (System_String_o *)0x0;
        pGVar14 = &local_108;
        auVar2 = ZEXT3256(CONCAT824(uVar6,CONCAT816("Info",ZEXT816(1) << 0x40)));
        __this_05.fields.Keywords = (System_String_o *)uVar21;
        __this_05.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._0_8_;
        __this_05.fields._buildHeaderActions =
             (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._8_8_;
        __this_05.fields.Id = (System_String_o *)auVar2._16_8_;
        __this_05.fields.Label = (System_String_o *)auVar2._24_8_;
        __this_05.fields.TextKey = (System_String_o *)auVar2._32_8_;
        __this_05.fields.Icon = (System_String_o *)auVar2._40_8_;
        __this_05.fields.SearchTitle = (System_String_o *)auVar2._48_8_;
        __this_05.fields.AutoAddKeywords = bVar23;
        __this_05.fields.HideSearch = uVar22;
        __this_05.fields.HideHeader = uVar25;
        __this_05.fields._76_4_ = uVar28;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                  (__this_05,(System_String_o *)pGVar14,"info","INFO","question",pSVar5,
                   (System_String_o *)0x0,bVar26,(System_String_o *)CONCAT44(uVar32,uVar30),
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar34,uVar33),bVar29,
                   bVar31,(MethodInfo *)CONCAT44(uVar37,uVar35));
        if (2 < (uint)pGVar4->max_length) {
          pGVar4->m_Items[2].fields.SearchTitle = local_c8;
          *(bool_conflict *)&pGVar4->m_Items[2].fields.TextKey = (bool_conflict)local_d8;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields.TextKey + 4) = local_d8._4_4_;
          *(undefined4 *)&pGVar4->m_Items[2].fields.Icon = (undefined4)uStack_d0;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields.Icon + 4) = uStack_d0._4_4_;
          *(undefined4 *)&pGVar4->m_Items[2].fields.Id = local_108.fields._ownerId._0_4_;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields.Id + 4) = local_108.fields._ownerId._4_4_;
          *(bool_conflict *)&pGVar4->m_Items[2].fields.Label = (bool_conflict)uStack_e0;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields.Label + 4) = uStack_e0._4_4_;
          *(bool_conflict *)&pGVar4->m_Items[2].fields._buildContent =
               (bool_conflict)local_108.fields._children;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields._buildContent + 4) =
               local_108.fields._children._4_4_;
          *(undefined4 *)&pGVar4->m_Items[2].fields._buildHeaderActions = local_108.fields._actions._0_4_;
          *(undefined4 *)((long)&pGVar4->m_Items[2].fields._buildHeaderActions + 4) =
               local_108.fields._actions._4_4_;
          pGVar4->m_Items[1].fields.AutoAddKeywords = (bool_conflict)local_108.klass;
          pGVar4->m_Items[1].fields.HideSearch = local_108.klass._4_4_;
          pGVar4->m_Items[1].fields.HideHeader = (bool_conflict)local_108.monitor;
          *(undefined4 *)&pGVar4->m_Items[1].fields.field_0x4c = local_108.monitor._4_4_;
          bVar23 = (bool_conflict)local_108.klass;
          bVar26 = local_108.klass._4_4_;
          bVar29 = (bool_conflict)local_108.monitor;
          uVar22 = local_108.monitor._4_4_;
          bVar31 = (bool_conflict)local_108.fields._children;
          uVar25 = local_108.fields._actions._0_4_;
          uVar28 = local_108.fields._actions._4_4_;
          uVar30 = local_108.fields._ownerId._0_4_;
          uVar32 = local_108.fields._ownerId._4_4_;
          bVar36 = (bool_conflict)uStack_e0;
          hideHeader = (bool_conflict)local_d8;
          uVar33 = (undefined4)uStack_d0;
          uVar34 = uStack_d0._4_4_;
          il2cpp_runtime_helper_022b4080(&pGVar4->m_Items[1].fields.AutoAddKeywords,0);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
          uVar6 = 0x452a5e9;
          System_Action_object__AottgScreenSectionContext____ctor();
          local_128 = 0;
          uStack_120 = 0;
          local_138 = (System_String_o *)0x0;
          uStack_130 = 0;
          local_148 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
          uStack_140 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
          local_158 = (undefined1  [8])0x0;
          uStack_150 = (void *)0x0;
          local_118 = (System_String_o *)0x0;
          pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)local_158;
          auVar2 = ZEXT2456(CONCAT816("Emotes",ZEXT816(0)));
          __this_06.fields.Keywords = (System_String_o *)uVar6;
          __this_06.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._0_8_
          ;
          __this_06.fields._buildHeaderActions =
               (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._8_8_;
          __this_06.fields.Id = (System_String_o *)auVar2._16_8_;
          __this_06.fields.Label = (System_String_o *)auVar2._24_8_;
          __this_06.fields.TextKey = (System_String_o *)auVar2._32_8_;
          __this_06.fields.Icon = (System_String_o *)auVar2._40_8_;
          __this_06.fields.SearchTitle = (System_String_o *)auVar2._48_8_;
          __this_06.fields.AutoAddKeywords = bVar23;
          __this_06.fields.HideSearch = bVar26;
          __this_06.fields.HideHeader = bVar29;
          __this_06.fields._76_4_ = uVar22;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                    (__this_06,(System_String_o *)pGVar14,"emotes","EMOTES","UI/Icons/Profile/EmotesIcon",pSVar5,
                     (System_String_o *)0x0,bVar31,(System_String_o *)CONCAT44(uVar28,uVar25),
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar32,uVar30),bVar36,
                     hideHeader,(MethodInfo *)CONCAT44(uVar34,uVar33));
          if (3 < (uint)pGVar4->max_length) {
            pGVar4->m_Items[3].fields.Icon = local_118;
            *(bool_conflict *)&pGVar4->m_Items[3].fields.Label = (bool_conflict)local_128;
            *(undefined4 *)((long)&pGVar4->m_Items[3].fields.Label + 4) = local_128._4_4_;
            *(undefined4 *)&pGVar4->m_Items[3].fields.TextKey = (undefined4)uStack_120;
            *(undefined4 *)((long)&pGVar4->m_Items[3].fields.TextKey + 4) = uStack_120._4_4_;
            *(undefined4 *)&pGVar4->m_Items[3].fields._buildHeaderActions = (undefined4)local_138;
            *(undefined4 *)((long)&pGVar4->m_Items[3].fields._buildHeaderActions + 4) = local_138._4_4_;
            *(bool_conflict *)&pGVar4->m_Items[3].fields.Id = (bool_conflict)uStack_130;
            *(undefined4 *)((long)&pGVar4->m_Items[3].fields.Id + 4) = uStack_130._4_4_;
            pGVar4->m_Items[2].fields.HideHeader = (bool_conflict)local_148;
            *(undefined4 *)&pGVar4->m_Items[2].fields.field_0x4c = local_148._4_4_;
            *(undefined4 *)&pGVar4->m_Items[3].fields._buildContent = (undefined4)uStack_140;
            *(undefined4 *)((long)&pGVar4->m_Items[3].fields._buildContent + 4) = uStack_140._4_4_;
            *(undefined4 *)&pGVar4->m_Items[2].fields.Keywords = local_158._0_4_;
            *(undefined4 *)((long)&pGVar4->m_Items[2].fields.Keywords + 4) = local_158._4_4_;
            pGVar4->m_Items[2].fields.AutoAddKeywords = (bool_conflict)uStack_150;
            pGVar4->m_Items[2].fields.HideSearch = uStack_150._4_4_;
            fVar24 = (float)local_158._0_4_;
            fVar27 = (float)local_158._4_4_;
            bVar23 = (bool_conflict)uStack_150;
            bVar26 = uStack_150._4_4_;
            bVar29 = (bool_conflict)local_148;
            uVar22 = (undefined4)uStack_140;
            uVar25 = uStack_140._4_4_;
            uVar28 = (undefined4)local_138;
            uVar30 = local_138._4_4_;
            bVar31 = (bool_conflict)uStack_130;
            bVar36 = (bool_conflict)local_128;
            uVar32 = (undefined4)uStack_120;
            uVar33 = uStack_120._4_4_;
            il2cpp_runtime_helper_022b4080(&pGVar4->m_Items[2].fields.Keywords,0);
            pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
            uVar6 = 0x452a71e;
            System_Action_object__AottgScreenSectionContext____ctor();
            local_178._0_4_ = 0.0;
            local_178._4_4_ = 0.0;
            uStack_170._0_4_ = 0.0;
            uStack_170._4_4_ = 0.0;
            local_188 = (System_String_o *)0x0;
            uStack_180._0_4_ = 0.0;
            uStack_180._4_4_ = 0.0;
            local_1a8._16_8_ = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
            local_1a8._24_8_ = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
            local_1a8._0_8_ = (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0;
            local_1a8._8_8_ = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
            local_168 = (System_String_o *)0x0;
            pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)local_1a8;
            auVar2 = ZEXT2456(CONCAT816("Stats",CONCAT88(0,"general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear")));
            __this_07.fields.Keywords = (System_String_o *)uVar6;
            __this_07.fields._buildContent =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._0_8_;
            __this_07.fields._buildHeaderActions =
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)auVar2._8_8_;
            __this_07.fields.Id = (System_String_o *)auVar2._16_8_;
            __this_07.fields.Label = (System_String_o *)auVar2._24_8_;
            __this_07.fields.TextKey = (System_String_o *)auVar2._32_8_;
            __this_07.fields.Icon = (System_String_o *)auVar2._40_8_;
            __this_07.fields.SearchTitle = (System_String_o *)auVar2._48_8_;
            __this_07.fields.AutoAddKeywords = (bool_conflict)fVar24;
            __this_07.fields.HideSearch = (bool_conflict)fVar27;
            __this_07.fields.HideHeader = bVar23;
            __this_07.fields._76_4_ = bVar26;
            Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                      (__this_07,(System_String_o *)pGVar14,"stats","STATS","trophy",pSVar5,
                       (System_String_o *)0x0,bVar29,(System_String_o *)CONCAT44(uVar25,uVar22),
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)CONCAT44(uVar30,uVar28),bVar31,
                       bVar36,(MethodInfo *)CONCAT44(uVar33,uVar32));
            if (4 < (uint)pGVar4->max_length) {
              pGVar4->m_Items[4].fields.TextKey = local_168;
              *(float *)&pGVar4->m_Items[4].fields.Id = (float)local_178;
              *(float *)((long)&pGVar4->m_Items[4].fields.Id + 4) = local_178._4_4_;
              *(float *)&pGVar4->m_Items[4].fields.Label = (float)uStack_170;
              *(float *)((long)&pGVar4->m_Items[4].fields.Label + 4) = uStack_170._4_4_;
              *(float *)&pGVar4->m_Items[4].fields._buildContent = (float)local_188;
              *(float *)((long)&pGVar4->m_Items[4].fields._buildContent + 4) = local_188._4_4_;
              *(float *)&pGVar4->m_Items[4].fields._buildHeaderActions = (float)uStack_180;
              *(float *)((long)&pGVar4->m_Items[4].fields._buildHeaderActions + 4) = uStack_180._4_4_;
              pGVar4->m_Items[3].fields.AutoAddKeywords = local_1a8._16_4_;
              pGVar4->m_Items[3].fields.HideSearch = local_1a8._20_4_;
              pGVar4->m_Items[3].fields.HideHeader = local_1a8._24_4_;
              *(undefined4 *)&pGVar4->m_Items[3].fields.field_0x4c = local_1a8._28_4_;
              *(undefined4 *)&pGVar4->m_Items[3].fields.SearchTitle = local_1a8._0_4_;
              *(undefined4 *)((long)&pGVar4->m_Items[3].fields.SearchTitle + 4) = local_1a8._4_4_;
              *(undefined4 *)&pGVar4->m_Items[3].fields.Keywords = local_1a8._8_4_;
              *(undefined4 *)((long)&pGVar4->m_Items[3].fields.Keywords + 4) = local_1a8._12_4_;
              il2cpp_runtime_helper_022b4080(&pGVar4->m_Items[3].fields.SearchTitle,0);
              return pGVar4;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee79 == '\0') {
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a866;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a872;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccount_b__9_0);
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a87e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a88a;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a896;
    il2cpp_runtime_helper_023445d0(&"profile-account-card");
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8a2;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee79 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "default";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8f6;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a913;
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a92d;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar7;
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a948;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar7);
  }
  pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a957;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar17 = (System_String_o *)0x0;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar5 = (System_String_o *)0x0;
  pSVar18 = (System_String_o *)0x0;
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9d4;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9e3;
  __this_02.fields._8_8_ = pSVar18;
  __this_02.fields._group = pSVar5;
  __this_02.fields._SectionId_k__BackingField = pSVar17;
  __this_02.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar19;
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffe10;
  pGVar10 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                      (__this_02,
                       (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffe10,
                       (MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa0e;
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar14,(System_String_o *)pSVar3,pSVar7,"profile-account-card",
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar9,pGVar10,(MethodInfo *)0x0)
    ;
    return pGVar4;
  }
  pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa22;
  il2cpp_runtime_helper_022b2c90();
  pSStack_290 = pSVar3;
  pGVar15 = pGVar13;
  local_2a0 = pGVar9;
  pGStack_298 = pGVar14;
  pGStack_288 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xfffffffffffffe10;
  if (g_data_057aee7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_runtime_helper_023445d0(&"Refresh Account");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Refresh");
    il2cpp_runtime_helper_023445d0(&"account.refreshCta");
    il2cpp_runtime_helper_023445d0(&"account.loggedIn");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"profile-info-account-refresh");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Refresh";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7a = '\x01';
  }
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,1,"Refresh","account.refresh","profile-info-account-refresh",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "UI/Icons/Navigation/RefreshIcon",(MethodInfo *)0x0);
    pGVar15 = "Column";
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search,pGVar12);
      (pGVar11->fields).textKey = "MainMenu.Account.Refresh";
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).textKey);
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar15 = pGVar13;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar13,(MethodInfo *)0x0);
      if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar13->_1).name)->direction =
             "account.refreshCta";
        il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar13->_1).name);
        (pGVar13->_1).byval_arg.data = "account.loggedIn";
        il2cpp_runtime_helper_022b4080(&(pGVar13->_1).byval_arg);
        *(System_String_o **)&(pGVar13->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar13->_1).byval_arg.bits);
        (pGVar11->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar13;
        il2cpp_runtime_helper_022b4080(&(pGVar11->fields).contentLayout,pGVar13);
        pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
                 Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                           (pGVar11,"Refresh Account",(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                            (System_String_o *)pGVar19,(System_String_o *)pGVar20,0,(MethodInfo *)0x0);
        return pGVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7b == '\0') {
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ace2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo_b__11_0);
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acfa;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad06;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad12;
    il2cpp_runtime_helper_023445d0(&"default");
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad1e;
    il2cpp_runtime_helper_023445d0(&"profile-info-connections");
    g_data_057aee7b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad3e;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "default";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad72;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad8f;
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ada9;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar7;
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452adc4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar7);
  }
  pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452add3;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar17 = (System_String_o *)0x0;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar5 = (System_String_o *)0x0;
  pSVar18 = (System_String_o *)0x0;
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae5a;
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                       (System_String_o *)0x0,(System_String_o *)0x0,20.0,pGVar8,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae69;
  __this_01.fields._8_8_ = pSVar18;
  __this_01.fields._group = pSVar5;
  __this_01.fields._SectionId_k__BackingField = pSVar17;
  __this_01.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar19;
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&local_2a0;
  pGVar10 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                      (__this_01,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&local_2a0,
                       (MethodInfo *)0x0);
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae94;
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,(System_String_o *)pSVar3,pSVar7,
                        "profile-info-connections",pGVar12,pGVar10,(MethodInfo *)0x0);
    return pGVar4;
  }
  pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aea8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_340 = pSVar3;
  pGVar9 = pGVar13;
  pGStack_350 = pGVar15;
  pSStack_348 = pSVar7;
  pGStack_338 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&local_2a0;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,0,"Account Details","account.details","profile-info-account-details",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "information",(MethodInfo *)0x0);
    pGVar9 = "Column";
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search,pGVar12);
      (pGVar11->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).textKey);
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar9 = pGVar13;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar13,(MethodInfo *)0x0);
      if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        *(System_String_o **)&(pGVar13->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar13->_1).byval_arg.bits);
        (pGVar11->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar13;
        il2cpp_runtime_helper_022b4080(&(pGVar11->fields).contentLayout,pGVar13);
        pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
                 Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                           (pGVar11,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                            (System_String_o *)pGVar19,(System_String_o *)pGVar20,0,(MethodInfo *)0x0);
        return pGVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "default";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1a3;
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar7;
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar7);
  }
  pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1e7;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar21 = 0;
  pSVar18 = (System_String_o *)0x0;
  pSVar5 = (System_String_o *)0x0;
  uVar6 = 0;
  pSVar17 = (System_String_o *)0x0;
  pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b273;
  __this_00.fields._8_8_ = uVar6;
  __this_00.fields._group = pSVar5;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar21;
  __this_00.fields._SectionTitle_k__BackingField = pSVar18;
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_350;
  pGVar10 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                      (__this_00,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_350,
                       (MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b29e;
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,(System_String_o *)pSVar3,pSVar7,
                        "profile-character-layout",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar10,
                        (MethodInfo *)0x0);
    return pGVar4;
  }
  pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_3f0 = pSVar3;
  pGVar15 = pGVar13;
  pGStack_400 = layout;
  pGStack_3f8 = pGVar9;
  pGStack_3e8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&pGStack_350;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "material-icons/edit",(MethodInfo *)0x0);
    pGVar15 = "Column";
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search,pGVar12);
      pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
               Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                         (pGVar11,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                          pSVar18,pSVar17,0,(MethodInfo *)0x0);
      return pGVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "default";
  pGVar14 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_400;
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar7);
  }
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar16 = 0;
  pSVar5 = (System_String_o *)0x0;
  uVar6 = 0;
  uVar21 = 0;
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,42.0,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar21;
  __this.fields._group = (System_String_o *)uVar6;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar16;
  __this.fields._SectionTitle_k__BackingField = pSVar5;
  pGVar10 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                      (__this,(int32_t)pGVar14,(MethodInfo *)0x0);
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,(System_String_o *)pSVar3,pSVar7,
                        "profile-emote-wheels",pGVar12,pGVar10,(MethodInfo *)0x0);
    return pGVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_08 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_09 = __this_08;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_08,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(pGVar14,__this_08,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_09,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccount
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452a840

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccount
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_01;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_02;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_05;
  undefined8 uVar11;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_208;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_200;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_1f8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_1f0;
  undefined8 uVar12;
  undefined8 uVar13;
  System_String_o *pSVar14;
  undefined1 auStack_158 [32];
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_a8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_a0;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_98;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_90;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  
  if (g_data_057aee79 == '\0') {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a866;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a872;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildAccount_b__9_0);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a87e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a88a;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a896;
    il2cpp_runtime_helper_023445d0(&"profile-account-card");
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8a2;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee79 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a8f6;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a913;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a92d;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a948;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  }
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a957;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar14 = (System_String_o *)0x0;
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar15 = (System_String_o *)0x0;
  pSVar16 = (System_String_o *)0x0;
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9d4;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452a9e3;
  __this_02.fields._8_8_ = pSVar16;
  __this_02.fields._group = pSVar15;
  __this_02.fields._SectionId_k__BackingField = pSVar14;
  __this_02.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar17;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&context;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_02,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&context,
                      (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa0e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,(System_String_o *)pSVar2,pSVar3,"profile-account-card",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar5,pGVar6,(MethodInfo *)0x0);
    return;
  }
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aa22;
  il2cpp_runtime_helper_022b2c90();
  pSStack_98 = pSVar2;
  pGVar10 = pGVar9;
  pGStack_a8 = pGVar5;
  pGStack_a0 = content;
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&context;
  if (g_data_057aee7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_runtime_helper_023445d0(&"Refresh Account");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Refresh");
    il2cpp_runtime_helper_023445d0(&"account.refreshCta");
    il2cpp_runtime_helper_023445d0(&"account.loggedIn");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"profile-info-account-refresh");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Refresh";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7a = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,1,"Refresh","account.refresh","profile-info-account-refresh",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "UI/Icons/Navigation/RefreshIcon",(MethodInfo *)0x0);
    pGVar10 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      (pGVar7->fields).textKey = "MainMenu.Account.Refresh";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).textKey);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar10 = pGVar9;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar9->_1).name)->direction =
             "account.refreshCta";
        il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar9->_1).name);
        (pGVar9->_1).byval_arg.data = "account.loggedIn";
        il2cpp_runtime_helper_022b4080(&(pGVar9->_1).byval_arg);
        *(System_String_o **)&(pGVar9->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar9->_1).byval_arg.bits);
        (pGVar7->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar9);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar7,"Refresh Account",(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                   (System_String_o *)pGVar17,(System_String_o *)pGVar18,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7b == '\0') {
    auStack_158._24_8_ = (System_String_o *)0x452acd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    auStack_158._24_8_ = (System_String_o *)0x452ace2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo_b__11_0);
    auStack_158._24_8_ = (System_String_o *)0x452acee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    auStack_158._24_8_ = (System_String_o *)0x452acfa;
    il2cpp_runtime_helper_023445d0(&"Column");
    auStack_158._24_8_ = (System_String_o *)0x452ad06;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    auStack_158._24_8_ = (System_String_o *)0x452ad12;
    il2cpp_runtime_helper_023445d0(&"default");
    auStack_158._24_8_ = (System_String_o *)0x452ad1e;
    il2cpp_runtime_helper_023445d0(&"profile-info-connections");
    g_data_057aee7b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    auStack_158._24_8_ = (System_String_o *)0x452ad3e;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      auStack_158._24_8_ = (System_String_o *)0x452ad72;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_158._24_8_ = (System_String_o *)0x452ad8f;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    auStack_158._24_8_ = (System_String_o *)0x452ada9;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
    auStack_158._24_8_ = (System_String_o *)0x452adc4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  auStack_158._24_8_ = (System_String_o *)0x452add3;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar14 = (System_String_o *)0x0;
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar15 = (System_String_o *)0x0;
  pSVar16 = (System_String_o *)0x0;
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  auStack_158._24_8_ = (System_String_o *)0x452ae5a;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,20.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  auStack_158._24_8_ = (System_String_o *)0x452ae69;
  __this_01.fields._8_8_ = pSVar16;
  __this_01.fields._group = pSVar15;
  __this_01.fields._SectionId_k__BackingField = pSVar14;
  __this_01.fields._SectionTitle_k__BackingField = (System_String_o *)pGVar17;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff58;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_01,
                      (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff58,
                      (MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    auStack_158._24_8_ = (System_String_o *)0x452ae94;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)pSVar2,pSVar3,"profile-info-connections",
               pGVar8,pGVar6,(MethodInfo *)0x0);
    return;
  }
  auStack_158._24_8_ = (System_String_o *)0x452aea8;
  il2cpp_runtime_helper_022b2c90();
  auStack_158._16_8_ = pSVar2;
  pGVar5 = pGVar9;
  auStack_158._0_8_ = pGVar10;
  auStack_158._8_8_ = pSVar3;
  auStack_158._24_8_ = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff58;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,0,"Account Details","account.details","profile-info-account-details",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "information",(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      (pGVar7->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).textKey);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar5 = pGVar9;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        *(System_String_o **)&(pGVar9->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar9->_1).byval_arg.bits);
        (pGVar7->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar9);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar7,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   (System_String_o *)pGVar17,(System_String_o *)pGVar18,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1a3;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1e7;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar13 = 0;
  pSVar16 = (System_String_o *)0x0;
  pSVar15 = (System_String_o *)0x0;
  uVar12 = 0;
  pSVar14 = (System_String_o *)0x0;
  pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b273;
  __this_00.fields._8_8_ = uVar12;
  __this_00.fields._group = pSVar15;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar13;
  __this_00.fields._SectionTitle_k__BackingField = pSVar16;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)auStack_158;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)auStack_158,
                      (MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)pSVar2,pSVar3,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar6,(MethodInfo *)0x0);
    return;
  }
  pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1f8 = pSVar2;
  pGVar10 = pGVar9;
  pGStack_208 = layout;
  pGStack_200 = pGVar5;
  pGStack_1f0 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)auStack_158;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/edit",(MethodInfo *)0x0);
    pGVar10 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (pGVar7,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,pSVar16,
                 pSVar14,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_208;
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar11 = 0;
  pSVar15 = (System_String_o *)0x0;
  uVar12 = 0;
  uVar13 = 0;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar13;
  __this.fields._group = (System_String_o *)uVar12;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar11;
  __this.fields._SectionTitle_k__BackingField = pSVar15;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this,(int32_t)__this_04,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)pSVar2,pSVar3,"profile-emote-wheels",
               pGVar8,pGVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_05 = __this_03;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_04 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_04,__this_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccountHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452aa30

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildAccountHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *__this_03;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_05;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_180;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_178;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_170;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_168;
  undefined8 uVar11;
  undefined8 uVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_d0;
  System_Action_AottgUi__o *pSStack_c8;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_c0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_b8;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *sectionId;
  Gisketch_Aottg2UI_Data_GisketchLength_o *sectionTitle;
  
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)header;
  if (g_data_057aee7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Navigation/RefreshIcon");
    il2cpp_runtime_helper_023445d0(&"Refresh Account");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Refresh");
    il2cpp_runtime_helper_023445d0(&"account.refreshCta");
    il2cpp_runtime_helper_023445d0(&"account.loggedIn");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"profile-info-account-refresh");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Refresh";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7a = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (header,1,"Refresh","account.refresh","profile-info-account-refresh",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"UI/Icons/Navigation/RefreshIcon",
                        (MethodInfo *)0x0);
    pGVar9 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      (pGVar3->fields).textKey = "MainMenu.Account.Refresh";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar9 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar5->_1).name)->direction =
             "account.refreshCta";
        il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&(pGVar5->_1).name);
        (pGVar5->_1).byval_arg.data = "account.loggedIn";
        il2cpp_runtime_helper_022b4080(&(pGVar5->_1).byval_arg);
        *(System_String_o **)&(pGVar5->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar5->_1).byval_arg.bits);
        (pGVar3->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar5);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar3,"Refresh Account",(System_String_o *)0x0,"UI/Icons/Navigation/RefreshIcon",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7b == '\0') {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ace2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo_b__11_0);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452acfa;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad06;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad12;
    il2cpp_runtime_helper_023445d0(&"default");
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad1e;
    il2cpp_runtime_helper_023445d0(&"profile-info-connections");
    g_data_057aee7b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad3e;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad72;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ad8f;
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ada9;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar6;
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452adc4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar6);
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452add3;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar13 = (System_String_o *)0x0;
  sectionId = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar14 = (System_String_o *)0x0;
  pSVar15 = (System_String_o *)0x0;
  sectionTitle = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae5a;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,20.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae69;
  __this_01.fields._8_8_ = pSVar15;
  __this_01.fields._group = pSVar14;
  __this_01.fields._SectionId_k__BackingField = pSVar13;
  __this_01.fields._SectionTitle_k__BackingField = (System_String_o *)sectionId;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffffe0;
  pGVar8 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_01,
                      (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffffe0,
                      (MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452ae94;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,(System_String_o *)pSVar2,pSVar6,"profile-info-connections",pGVar4
               ,pGVar8,(MethodInfo *)0x0);
    return;
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452aea8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c0 = pSVar2;
  __this_03 = pGVar5;
  pGStack_d0 = pGVar9;
  pSStack_c8 = pSVar6;
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffffe0;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,0,"Account Details","account.details","profile-info-account-details",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "information",(MethodInfo *)0x0);
    __this_03 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      (pGVar3->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_03 = pGVar9;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
        *(System_String_o **)&(pGVar9->_1).byval_arg.bits = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar9->_1).byval_arg.bits);
        (pGVar3->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar9);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar3,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   (System_String_o *)sectionId,(System_String_o *)sectionTitle,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1a3;
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar6;
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar6);
  }
  pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b1e7;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar12 = 0;
  pSVar15 = (System_String_o *)0x0;
  pSVar14 = (System_String_o *)0x0;
  uVar11 = 0;
  pSVar13 = (System_String_o *)0x0;
  pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b273;
  __this_00.fields._8_8_ = uVar11;
  __this_00.fields._group = pSVar14;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar12;
  __this_00.fields._SectionTitle_k__BackingField = pSVar15;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff30;
  pGVar8 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,
                      (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff30,
                      (MethodInfo *)0x0);
  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)pSVar2,pSVar6,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar8,(MethodInfo *)0x0);
    return;
  }
  pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_170 = pSVar2;
  pGVar5 = pGVar9;
  pGStack_180 = layout;
  pGStack_178 = __this_03;
  pGStack_168 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&stack0xffffffffffffff30;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/edit",(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (pGVar3,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,pSVar15,
                 pSVar13,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_180;
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar6);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar10 = 0;
  pSVar14 = (System_String_o *)0x0;
  uVar11 = 0;
  uVar12 = 0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar12;
  __this.fields._group = (System_String_o *)uVar11;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar10;
  __this.fields._SectionTitle_k__BackingField = pSVar14;
  pGVar8 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this,(int32_t)__this_04,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)pSVar2,pSVar6,"profile-emote-wheels",pGVar4
               ,pGVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_05 = __this_02;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_04 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_04,__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452acb0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfo
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_03;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_05;
  undefined8 uVar9;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_158;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_150;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_148;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_140;
  undefined8 uVar10;
  undefined8 uVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGStack_a8;
  System_Action_AottgUi__o *pSStack_a0;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_98;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_90;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *sectionId;
  Gisketch_Aottg2UI_Data_GisketchLength_o *sectionTitle;
  
  if (g_data_057aee7b == '\0') {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452acd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ace2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildInfo_b__11_0);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452acee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452acfa;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad06;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad12;
    il2cpp_runtime_helper_023445d0(&"default");
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad1e;
    il2cpp_runtime_helper_023445d0(&"profile-info-connections");
    g_data_057aee7b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad3e;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad72;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ad8f;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ada9;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452adc4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452add3;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar12 = (System_String_o *)0x0;
  sectionId = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pSVar13 = (System_String_o *)0x0;
  pSVar14 = (System_String_o *)0x0;
  sectionTitle = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ae5a;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,20.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ae69;
  __this_01.fields._8_8_ = pSVar14;
  __this_01.fields._group = pSVar13;
  __this_01.fields._SectionId_k__BackingField = pSVar12;
  __this_01.fields._SectionTitle_k__BackingField = (System_String_o *)sectionId;
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&context;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_01,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&context,
                      (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452ae94;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,(System_String_o *)pSVar2,pSVar3,"profile-info-connections",pGVar5,pGVar6,(MethodInfo *)0x0);
    return;
  }
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452aea8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_98 = pSVar2;
  pGVar5 = pGVar8;
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *)content;
  pSStack_a0 = pSVar3;
  pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&context;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,0,"Account Details","account.details","profile-info-account-details",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "information",(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      (pGVar7->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).textKey);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).alignSelf = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignSelf);
        (pGVar7->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar8);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar7,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   (System_String_o *)sectionId,(System_String_o *)sectionTitle,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1a3;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1e7;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar11 = 0;
  pSVar14 = (System_String_o *)0x0;
  pSVar13 = (System_String_o *)0x0;
  uVar10 = 0;
  pSVar12 = (System_String_o *)0x0;
  pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b273;
  __this_00.fields._8_8_ = uVar10;
  __this_00.fields._group = pSVar13;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar11;
  __this_00.fields._SectionTitle_k__BackingField = pSVar14;
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&pGStack_a8;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,(int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&pGStack_a8,
                      (MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)pSVar2,pSVar3,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar6,(MethodInfo *)0x0);
    return;
  }
  pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_148 = pSVar2;
  __this_03 = pGVar8;
  pGStack_158 = layout;
  pGStack_150 = pGVar5;
  pGStack_140 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&pGStack_a8;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/edit",(MethodInfo *)0x0);
    __this_03 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (pGVar7,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,pSVar14,
                 pSVar12,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_158;
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar9 = 0;
  pSVar13 = (System_String_o *)0x0;
  uVar10 = 0;
  uVar11 = 0;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar11;
  __this.fields._group = (System_String_o *)uVar10;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar9;
  __this.fields._SectionTitle_k__BackingField = pSVar13;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this,(int32_t)__this_04,(MethodInfo *)0x0);
  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)pSVar2,pSVar3,"profile-emote-wheels",
               pGVar8,pGVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_05 = __this_02;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_04 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_04,__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfoHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452aeb0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildInfoHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_04;
  undefined8 uVar9;
  Gisketch_Aottg2UI_Code_AottgUi_c *local_d0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_c8;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_c0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_b8;
  System_String_o *pSVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  System_String_o *sectionId;
  System_String_o *sectionTitle;
  
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)header;
  if (g_data_057aee7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Account Details");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountDetails");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"information");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"profile-info-account-details";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7c = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (header,0,"Account Details","account.details","profile-info-account-details",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"information",
                        (MethodInfo *)0x0);
    pGVar8 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      (pGVar3->fields).textKey = "MainMenu.Account.AccountDetails";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar8 = pGVar4;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = "account.auth.idle";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                  (pGVar3,"Account Details",(System_String_o *)0x0,"information",(System_String_o *)0x0,
                   context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7d == '\0') {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1a3;
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar5;
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar5);
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b1e7;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar12 = 0;
  sectionId = (System_String_o *)0x0;
  pSVar10 = (System_String_o *)0x0;
  uVar11 = 0;
  sectionTitle = (System_String_o *)0x0;
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b273;
  __this_00.fields._8_8_ = uVar11;
  __this_00.fields._group = pSVar10;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar12;
  __this_00.fields._SectionTitle_k__BackingField = sectionId;
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&stack0xffffffffffffffe0;
  pGVar7 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,
                      (int32_t)(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&stack0xffffffffffffffe0,
                      (MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)pSVar2,pSVar5,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar7,(MethodInfo *)0x0);
    return;
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c0 = pSVar2;
  __this_02 = pGVar4;
  local_d0 = layout;
  pGStack_c8 = pGVar8;
  pGStack_b8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&stack0xffffffffffffffe0;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/edit",(MethodInfo *)0x0);
    __this_02 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar8);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (pGVar3,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,sectionId,
                 sectionTitle,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&local_d0;
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar5);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar9 = 0;
  pSVar10 = (System_String_o *)0x0;
  uVar11 = 0;
  uVar12 = 0;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar12;
  __this.fields._group = (System_String_o *)uVar11;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar9;
  __this.fields._SectionTitle_k__BackingField = pSVar10;
  pGVar7 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this,(int32_t)__this_03,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,(System_String_o *)pSVar2,pSVar5,"profile-emote-wheels",
               pGVar8,pGVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_04 = __this_01;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_03,__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452b0d0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacter
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Code_AottgUi_c *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_03;
  undefined8 uVar8;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGStack_a8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_a0;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSStack_98;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_90;
  System_String_o *pSVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  System_String_o *sectionId;
  System_String_o *sectionTitle;
  
  if (g_data_057aee7d == '\0') {
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCharacter_b__13_0);
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b10e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b11a;
    il2cpp_runtime_helper_023445d0(&"profile-character-layout");
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b126;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b132;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b152;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b186;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b1a3;
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b1bd;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b1d8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b1e7;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar11 = 0;
  sectionId = (System_String_o *)0x0;
  pSVar9 = (System_String_o *)0x0;
  uVar10 = 0;
  sectionTitle = (System_String_o *)0x0;
  pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b264;
  layout = (Gisketch_Aottg2UI_Code_AottgUi_c *)
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b273;
  __this_00.fields._8_8_ = uVar10;
  __this_00.fields._group = pSVar9;
  __this_00.fields._SectionId_k__BackingField = (System_String_o *)uVar11;
  __this_00.fields._SectionTitle_k__BackingField = sectionId;
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&context;
  pGVar5 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this_00,(int32_t)(Gisketch_Aottg2UI_Code_AottgUi_o *)&context,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b29e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,(System_String_o *)pSVar2,pSVar3,"profile-character-layout",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,pGVar5,(MethodInfo *)0x0);
    return;
  }
  pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x452b2b2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_98 = pSVar2;
  __this_02 = pGVar7;
  pGStack_a8 = layout;
  pGStack_a0 = content;
  pGStack_90 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&context;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (pGVar7,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",(MethodInfo *)0x0)
    ;
    __this_02 = "Column";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(node->fields).search,pGVar6);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,sectionId,
                 sectionTitle,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGStack_a8;
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar8 = 0;
  pSVar9 = (System_String_o *)0x0;
  uVar10 = 0;
  uVar11 = 0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar11;
  __this.fields._group = (System_String_o *)uVar10;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar8;
  __this.fields._SectionTitle_k__BackingField = pSVar9;
  pGVar5 = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                     (__this,(int32_t)pGVar7,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_02,(System_String_o *)pSVar2,pSVar3,"profile-emote-wheels",pGVar6,pGVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_03 = __this_01;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(pGVar7,__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacterHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions (Gisketch_Aottg2UI_Code_AottgUi_o* header, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452b2c0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildCharacterHeaderActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *header,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_03;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  
  __this_01 = header;
  if (g_data_057aee7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-edit");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"dialog.profile-edit-character");
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"Edit Character";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee7e = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (header,0,"Edit Character","dialog.profile-edit-character","profile-character-edit",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",(MethodInfo *)0x0)
    ;
    __this_01 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_helper_022b4080(&(node->fields).search,pGVar2);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,"Edit Character",(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                 context.fields._SectionId_k__BackingField,context.fields._SectionTitle_k__BackingField,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&stack0xffffffffffffffe0;
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar5 = 0;
  pSVar6 = (System_String_o *)0x0;
  uVar3 = 0;
  uVar4 = 0;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,42.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar4;
  __this.fields._group = (System_String_o *)uVar3;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar5;
  __this.fields._SectionTitle_k__BackingField = pSVar6;
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                    (__this,(int32_t)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel(__this_01,style,build,"profile-emote-wheels",pGVar2,enter,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_03 = __this_00;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_02,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildEmotes
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452b450

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildEmotes
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_02;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  
  if (g_data_057aee7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmotes_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheels");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee7f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&context;
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar4 = 0;
  pSVar5 = (System_String_o *)0x0;
  uVar2 = 0;
  uVar3 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      42.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar3;
  __this.fields._group = (System_String_o *)uVar2;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar4;
  __this.fields._SectionTitle_k__BackingField = pSVar5;
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                    (__this,(int32_t)__this_01,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel(content,style,build,"profile-emote-wheels",layout,enter,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_02 = __this_00;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_01,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildStats
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x452b650

void Gisketch_Aottg2UI_Game_AottgProfileScreen__BuildStats
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  
  if (g_data_057aee80 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileStatsPanel);
    g_data_057aee80 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileStatsPanel);
  __this_00 = __this;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(content,__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$ConnectionRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* label, System_String_o* statusKey, System_String_o* buttonVisibleKey, System_String_o* buttonText, System_String_o* actionId, int32_t buttonVariant, System_String_o* icon, const MethodInfo* method);
// 0x452b6c0

void Gisketch_Aottg2UI_Game_AottgProfileScreen__ConnectionRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *label,
               System_String_o *statusKey,System_String_o *buttonVisibleKey,System_String_o *buttonText,
               System_String_o *actionId,int32_t buttonVariant,System_String_o *icon,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_00;
  
  if (g_data_057aee81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectionRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"profile-info-");
    il2cpp_runtime_helper_023445d0(&"row");
    g_data_057aee81 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)label;
    il2cpp_runtime_helper_022b4080(__this + 1,label);
    __this[1].monitor = statusKey;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor,statusKey);
    *(int32_t *)&__this[2].klass = buttonVariant;
    __this[2].monitor = buttonText;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,buttonText);
    __this[3].klass = (Il2CppClass *)actionId;
    il2cpp_runtime_helper_022b4080(__this + 3,actionId);
    __this[3].monitor = id;
    il2cpp_runtime_helper_022b4080(&__this[3].monitor);
    __this[4].klass = (Il2CppClass *)icon;
    il2cpp_runtime_helper_022b4080(__this + 4);
    __this[4].monitor = buttonVisibleKey;
    il2cpp_runtime_helper_022b4080(&__this[4].monitor);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = System_String__Concat_3ae5ba0("profile-info-",__this[3].monitor,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,"Wrap",20.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_00 = (Il2CppObject *)0x0;
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"row",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor (Gisketch_Aottg2UI_Game_AottgProfileScreen_o* __this, const MethodInfo* method);
// 0x452b950

void Gisketch_Aottg2UI_Game_AottgProfileScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor (const MethodInfo* method);
// 0x452b960

void Gisketch_Aottg2UI_Game_AottgProfileScreen___cctor(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  System_String_Fields SVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int32_t local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (g_data_057aee82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileScreen);
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"screen.main-menu");
    il2cpp_runtime_helper_023445d0(&"BACK");
    g_data_057aee82 = '\x01';
  }
  lVar1 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
  uVar8 = 0;
  uVar9 = 0;
  SVar6._stringLength = 0;
  SVar6._firstChar = 0;
  SVar6._6_2_ = 0;
  uVar7 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xffffffffffffff98,"BACK","screen.main-menu","return");
  if (lVar1 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar1 + 0x18) != 0) {
    local_28 = SVar6._stringLength;
    uStack_24 = SVar6._4_4_;
    uStack_20 = (undefined4)uVar7;
    uStack_1c = (undefined4)((ulong)uVar7 >> 0x20);
    local_18 = (undefined4)uVar8;
    uStack_14 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_10 = (undefined4)uVar9;
    uStack_c = (undefined4)((ulong)uVar9 >> 0x20);
    *(undefined4 *)(lVar1 + 0x40) = local_18;
    *(undefined4 *)(lVar1 + 0x44) = uStack_14;
    *(undefined4 *)(lVar1 + 0x48) = uStack_10;
    *(undefined4 *)(lVar1 + 0x4c) = uStack_c;
    *(int32_t *)(lVar1 + 0x30) = local_28;
    *(undefined4 *)(lVar1 + 0x34) = uStack_24;
    *(undefined4 *)(lVar1 + 0x38) = uStack_20;
    *(undefined4 *)(lVar1 + 0x3c) = uStack_1c;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,0);
    **(long **)(TypeInfo_AottgProfileScreen + 0xb8) = lVar1;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgProfileScreen + 0xb8),lVar1);
    return;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aee83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee83 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}



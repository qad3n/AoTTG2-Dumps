// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor (const MethodInfo* method);
// 0x4501c10

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aed12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aed12 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x4501c80

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x4501c90

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_RuntimeTypeHandle_o SVar3;
  bool_conflict bVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_array **ppSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  System_Object_array *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  long *plVar12;
  System_String_o *pSVar13;
  System_String_array *pSVar14;
  System_String_array *ids;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  SimpleJSONFixed_JSONNode_o *effect;
  Il2CppObject *pIVar17;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar18;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar19;
  System_Action_string__o *pSVar20;
  UnityEngine_UI_Image_o *pUVar21;
  PatreonEffects_NameEffectLabel_o *pPVar22;
  System_Type_array *pSVar23;
  System_Type_o *pSVar24;
  long lVar25;
  UnityEngine_Transform_o *pUVar26;
  undefined8 uVar27;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar28;
  UnityEngine_Component_o *pUVar29;
  char cVar30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar31;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_06;
  MethodInfo *method_07;
  UnityEngine_Transform_o *x;
  uint uVar32;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  MethodInfo *pMVar33;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar34;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  UnityEngine_Color_o UVar38;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_fffffffffffffee8;
  System_String_o *pSStack_108;
  System_String_array *pSStack_100;
  System_String_o *pSStack_f8;
  
  if (g_data_057aed13 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profilePreviewTitle");
    il2cpp_runtime_helper_023445d0(&"Name Preview");
    g_data_057aed13 = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (title,"Name Preview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildPreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"CharacterNamePreview");
    g_data_057aed14 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8)
  ;
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  pGVar34 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"CharacterNamePreview",factory,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"CharacterNamePreview");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"live");
    g_data_057aed15 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar11 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "CharacterNamePreview";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)(pGVar34->fields).method_ptr;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
    if ((char)(pGVar34->fields).invoke_impl == '\0') {
      ppSVar7 = *(System_String_array ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      ppSVar7 = &"live";
    }
    (pGVar6->fields).value = (System_String_o *)*ppSVar7;
    il2cpp_runtime_helper_022b4080();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    in_R8 = (MethodInfo *)0x0;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).search;
    (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
    il2cpp_runtime_helper_022b4080();
    if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_02,pGVar6,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed16 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  __this_03 = pGVar11;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04501ff5:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = pGVar6;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0450207b;
    pMVar33 = (MethodInfo *)0x1;
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)pGVar6,1,MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    __this_03 = pGVar6;
    if (pSVar10 == (System_Object_array *)0x0) goto label_0450207b;
    uVar5 = (uint)pSVar10->max_length;
    if ((int)uVar5 < 1) {
      return;
    }
    uVar32 = 0;
    while (__this_03 = pGVar6, uVar32 < uVar5) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar10->m_Items[(int)uVar32];
      __this_03 = pGVar6;
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0450207b;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pGVar6,pMVar33);
      uVar32 = uVar32 + 1;
      uVar5 = (uint)pSVar10->max_length;
      if ((int)uVar5 <= (int)uVar32) {
        return;
      }
    }
  }
  else {
    if ((pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar11,(MethodInfo *)0x0),
       __this_03 = pGVar11, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
      goto label_04501ff5;
    }
label_0450207b:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  ppSVar7 = (System_String_array **)__this_03;
  if (g_data_057aed1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"profile-character-name");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    ppSVar7 = &"name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed1a = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)ppSVar7);
  pGVar31 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  pSStack_100 = (System_String_array *)0x0;
  pGVar11 = __this_03;
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSStack_100 = (System_String_array *)0x0;
    pUVar9 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    pGVar11 = __this_01;
    if (*(char *)&(__this_03->fields).icon != '\0') {
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                          (pUVar9,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_100 = (System_String_array *)0x0;
      uVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar31 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)(uVar5 & 0xff);
    }
    if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pSStack_100 = "name", pGVar11 = pGVar6,
       plVar12 = (long *)(*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                                   (pGVar6,"name",
                                    *(undefined8 *)
                                     &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.
                                      this_arg.bits), plVar12 != (long *)0x0)) {
      method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)*plVar12;
      pSStack_100 = method_00[1].fields.options;
      pSStack_f8 = (System_String_o *)(**(code **)&method_00[1].fields.maxVisibleItems)(plVar12);
      liveDialog = (int)pGVar31;
      if (liveDialog == 0) {
        pSVar14 = (System_String_array *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_100);
        pSStack_108 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                                ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_100);
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_03->fields).placeholder;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (pGVar28 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar28,(SimpleJSONFixed_JSONNode_o *)pGVar6,method_02);
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"nameFont",method_03);
        pSVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"guildFont",method_04);
        pSStack_100 = pSVar14;
      }
      else {
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                            (pUVar9,"profile-character-name",pSStack_f8,(MethodInfo *)method_00);
        pMVar33 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_00;
        }
        pSStack_f8 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar13,pMVar33);
        pSVar14 = (System_String_array *)
                  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                            (pUVar9,(SimpleJSONFixed_JSONNode_o *)pGVar6,method_01);
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aeda8 != '\0') goto label_04502277;
label_04502325:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aeda8 = '\x01';
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) != 0) goto label_0450228b;
label_0450234c:
          il2cpp_runtime_helper_02337ed0();
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) goto label_0450229c;
label_0450236c:
          plVar12 = (long *)&TypeInfo_AottgEditCharacterDialog;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            plVar12 = (long *)&TypeInfo_AottgEditCharacterDialog;
          }
        }
        else {
          if (g_data_057aeda8 == '\0') goto label_04502325;
label_04502277:
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_0450234c;
label_0450228b:
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) goto label_0450236c;
label_0450229c:
          plVar12 = &g_data_057b9c00;
        }
        pSStack_108 = *(System_String_o **)((MethodInfo *)*plVar12)[2].virtualMethodPointer;
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_03->fields).placeholder;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aedaa != '\0') goto label_045023b3;
label_045025cf:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aedaa = '\x01';
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        else {
          if (g_data_057aedaa == '\0') goto label_045025cf;
label_045023b3:
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                   (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer + 0x30);
        pSStack_100 = (System_String_array *)0x0;
        ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                        ((System_Collections_Generic_IEnumerable_string__o *)pGVar11,(MethodInfo *)0x0);
        if (pGVar28 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar28,(System_Collections_Generic_IEnumerable_string__o *)ids,method_05);
        pMVar33 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar33);
        pMVar33 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar33);
        pUVar16 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-name",pSVar13,(MethodInfo *)method_00);
        pUVar16 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-guild",pSVar15,(MethodInfo *)&"profile-character-guild");
        pSStack_100 = pSVar14;
      }
      pPVar22 = (PatreonEffects_NameEffectLabel_o *)(__this_03->fields).style;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                         (pGVar6,"nameEffect",
                          *(undefined8 *)
                           &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar22,pSStack_f8,liveDialog,1,effect,pSVar13,in_stack_fffffffffffffee8);
      in_R8 = (MethodInfo *)
              (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                        (pGVar6,"guildEffect",
                         *(undefined8 *)
                          &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      pGVar11 = __this_03;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_03,
                 (System_String_o *)pSStack_100,pSStack_108,liveDialog,(SimpleJSONFixed_JSONNode_o *)in_R8,
                 pSVar15,in_stack_fffffffffffffee8);
      pSVar13 = (__this_03->fields).placeholder;
      method_00 = pGVar31;
      if (pSVar13 != (System_String_o *)0x0) {
        bVar35 = *(char *)((long)&pSVar13[2].fields._stringLength + 3) != '\0';
        pSVar13 = (__this_03->fields).textKey;
        pSVar15 = (System_String_o *)0x0;
        if (!bVar35) {
          pSVar15 = pSVar13;
        }
        uVar5 = 1;
        method_00 = __this_03;
        if (bVar35) goto label_0450259c;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_03->fields).inputType;
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSStack_100 = (System_String_array *)0x0;
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0)
          ;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pSStack_100 = (System_String_array *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
            pGVar11 = pGVar6;
            if ((char)bVar4 == '\0') {
              pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_03->fields).action;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = 0;
              pSStack_100 = (System_String_array *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              pSVar13 = pSVar15;
              if ((char)bVar4 != '\0') {
                pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_03->fields).action;
                if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  pSStack_100 = (System_String_array *)0x0;
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    pSStack_100 = (System_String_array *)0x0;
                    uVar5 = UnityEngine_GameObject__get_activeSelf
                                      ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
                    pGVar11 = pGVar6;
                    goto label_0450259c;
                  }
                }
                goto label_045025ff;
              }
            }
label_0450259c:
            if (pSVar13 != (System_String_o *)0x0) {
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)pSVar13,uVar5 & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_045025ff:
  il2cpp_runtime_helper_022b2c90();
  pSVar14 = pSStack_100;
  ppSVar7 = (System_String_array **)pGVar11;
  if (g_data_057aed17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&"characterNamePreviewBg");
    ppSVar7 = &"live";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed17 = '\x01';
  }
  if (((pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
      (pSVar14 = MethodInfo_Image_AddComponent_Image, ppSVar7 = (System_String_array **)pGVar11,
      pIVar17 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)pGVar11,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image),
      extraout_RDX_01 != 0)) &&
     (ppSVar7 = *(System_String_array ***)(extraout_RDX_01 + 0x18),
     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7 !=
     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    UVar38.fields.b = 0.13;
    UVar38.fields.a = 1.0;
    UVar38.fields.r = 0.13;
    UVar38.fields.g = 0.13;
    pSVar14 = "characterNamePreviewBg";
    UVar38 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppSVar7,(System_String_o *)"characterNamePreviewBg",
                        UVar38,(MethodInfo *)0x0);
    if (pIVar17 != (Il2CppObject *)0x0) {
      (*pIVar17->klass->vtable[0x17].methodPtr)
                (UVar38.fields.r,UVar38.fields._8_8_,pIVar17,pIVar17->klass->vtable[0x17].method);
      (*pIVar17->klass->vtable[0x19].methodPtr)(pIVar17,0,pIVar17->klass->vtable[0x19].method);
      pUVar18 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pGVar11,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup)
      ;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
      pSVar14 = (System_String_array *)&g_data_0000000f;
      method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0xa;
      in_R8 = (MethodInfo *)0xa;
      ppSVar7 = (System_String_array **)pGVar6;
      UnityEngine_RectOffset___ctor_4dbeaf0
                ((UnityEngine_RectOffset_o *)pGVar6,0xf,0xf,10,10,(MethodInfo *)0x0);
      if (pUVar18 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_padding
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar18,(UnityEngine_RectOffset_o *)pGVar6,
                   (MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar18,2.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar18,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar18,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar18,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(pUVar18,0,(MethodInfo *)0x0)
        ;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (pUVar18,0,(MethodInfo *)0x0);
        pSVar14 = MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara;
        pGVar19 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pGVar11,(MethodInfo_255A020 *)MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
        ppSVar7 = (System_String_array **)pGVar11;
        if (pSStack_100 != (System_String_array *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppSVar7 = (System_String_array **)pSStack_100->m_Items[6];
          pSVar14 = "live";
          uVar5 = System_String__op_Equality
                            ((System_String_o *)ppSVar7,(System_String_o *)"live",(MethodInfo *)0x0);
          if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                      (pGVar19,pGVar2,uVar5 & 0xff,(MethodInfo *)method_00);
            return;
          }
        }
      }
    }
  }
  cVar30 = (char)method_00;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).text = (System_String_o *)pSVar14;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).text,pSVar14);
  *(undefined1 *)&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).icon = extraout_DL;
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
           (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).text;
  pMVar33 = extraout_RDX_02;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar20 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar30 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar20,(MethodInfo *)0x0);
    pMVar33 = extraout_RDX_03;
  }
  pUVar21 = (UnityEngine_UI_Image_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                      ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppSVar7,"AoTTG Preview Guild Row",20.0,
                       pMVar33);
  (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey = (System_String_o *)pUVar21;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey);
  pGVar19 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
            (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey;
  if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar19,(MethodInfo *)0x0);
    pUVar21 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                        (pGVar19,pUVar9,20.0,method_06);
    (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).placeholder =
         (System_String_o *)pUVar21;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).placeholder);
    pGVar19 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
              (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey;
    if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar19,(MethodInfo *)0x0);
      pUVar21 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                          (pGVar19,pUVar9,30.0,method_07);
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).action =
           (System_String_o *)pUVar21;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).action);
      pSVar13 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey;
      if (pSVar13 != (System_String_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar13,(MethodInfo *)0x0);
        pPVar22 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppSVar7,"AoTTG Preview Guild"
                             ,20.0,pUVar9,0,in_R8);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).inputType =
             (System_String_o *)pPVar22;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).inputType,
                           pPVar22);
        pPVar22 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppSVar7,"AoTTG Preview Name"
                             ,20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).style =
             (System_String_o *)pPVar22;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).style);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppSVar7,(MethodInfo *)pPVar22)
        ;
        return;
      }
    }
  }
  pUVar29 = (UnityEngine_Component_o *)0x0;
  fVar36 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar23 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar23 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar24 == (System_Type_o *)0x0) || (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 != 0)) {
    if ((int)pSVar23->max_length != 0) {
      pSVar23->m_Items[0] = pSVar24;
      il2cpp_runtime_helper_022b4080(pSVar23->m_Items);
      pSVar24 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar24 != (System_Type_o *)0x0) && (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 == 0))
      goto label_04502c5d;
      if (1 < (uint)pSVar23->max_length) {
        pSVar23->m_Items[1] = pSVar24;
        il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 1,pSVar24);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar30 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar16,(System_String_o *)pUVar21,pSVar23,(MethodInfo *)0x0);
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
          pUVar26 = UnityEngine_Component__get_transform(pUVar29,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            cVar30 = '\0';
            UnityEngine_Transform__SetParent_4e09e30(pUVar9,pUVar26,0,(MethodInfo *)0x0);
            pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar17 != (Il2CppObject *)0x0) {
              (*pIVar17->klass->vtable[0x26].methodPtr)
                        (fVar36 + 10.0,pIVar17,pIVar17->klass->vtable[0x26].method);
              (*pIVar17->klass->vtable[0x28].methodPtr)
                        (0x3f800000,pIVar17,pIVar17->klass->vtable[0x28].method);
              pUVar18 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar16,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
              if (pUVar18 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)pUVar18,4,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (pUVar18,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (pUVar18,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (pUVar18,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (pUVar18,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar18,5.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04502c53;
      }
    }
    goto label_04502c58;
  }
label_04502c5d:
  uVar27 = il2cpp_runtime_helper_0231b270();
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  fVar36 = (float)il2cpp_runtime_helper_022b2b10(uVar27);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar23 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar23 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar24 == (System_Type_o *)0x0) || (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 != 0)) {
    if ((int)pSVar23->max_length != 0) {
      pSVar23->m_Items[0] = pSVar24;
      il2cpp_runtime_helper_022b4080(pSVar23->m_Items);
      pSVar24 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar24 != (System_Type_o *)0x0) && (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 == 0))
      goto label_04502e58;
      if (1 < (uint)pSVar23->max_length) {
        pSVar23->m_Items[1] = pSVar24;
        il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 1,pSVar24);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar30 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar16,"AoTTG Preview Guild Badges",pSVar23,(MethodInfo *)0x0);
        if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar26 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
           pUVar26 != (UnityEngine_Transform_o *)0x0)) {
          cVar30 = '\0';
          UnityEngine_Transform__SetParent_4e09e30(pUVar26,pUVar9,0,(MethodInfo *)0x0);
          pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar16,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
          if (pGVar28 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (pGVar28,fVar36,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,1,in_R8);
            return;
          }
        }
        goto label_04502e4e;
      }
    }
    goto label_04502e53;
  }
label_04502e58:
  uVar27 = il2cpp_runtime_helper_0231b270();
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  fVar36 = (float)il2cpp_runtime_helper_022b2b10(uVar27);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar23 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar23 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar24 == (System_Type_o *)0x0) || (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 != 0)) {
    if ((int)pSVar23->max_length != 0) {
      pSVar23->m_Items[0] = pSVar24;
      il2cpp_runtime_helper_022b4080(pSVar23->m_Items);
      pSVar24 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar24 != (System_Type_o *)0x0) && (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 == 0))
      goto label_0450318d;
      if (1 < (uint)pSVar23->max_length) {
        pSVar23->m_Items[1] = pSVar24;
        il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 1);
        pSVar24 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar24 != (System_Type_o *)0x0) && (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 == 0))
        goto label_0450318d;
        if (2 < (uint)pSVar23->max_length) {
          pSVar23->m_Items[2] = pSVar24;
          il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 2);
          pSVar24 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar24 != (System_Type_o *)0x0) && (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24), lVar25 == 0))
          goto label_0450318d;
          if (3 < (uint)pSVar23->max_length) {
            pSVar23->m_Items[3] = pSVar24;
            il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 3,pSVar24);
            pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            cVar30 = '\0';
            UnityEngine_GameObject___ctor_4dfc440(pUVar16,"AoTTG Preview Guild Preset Image",pSVar23,(MethodInfo *)0x0);
            if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar26 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
               pUVar26 != (UnityEngine_Transform_o *)0x0)) {
              cVar30 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar26,pUVar9,0,(MethodInfo *)0x0);
              pUVar21 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Image_GetComponent_Image);
              if (pUVar21 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar21->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar21,0,(pUVar21->klass->vtable)._25_set_raycastTarget.method);
                UnityEngine_UI_Image__set_preserveAspect(pUVar21,1,(MethodInfo *)0x0);
                pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar17 != (Il2CppObject *)0x0) {
                  (*pIVar17->klass->vtable[0x24].methodPtr)
                            (fVar36 * 2.9,pIVar17,pIVar17->klass->vtable[0x24].method);
                  (*pIVar17->klass->vtable[0x26].methodPtr)(fVar36,pIVar17);
                  UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto label_04503183;
          }
        }
      }
    }
    goto label_04503188;
  }
label_0450318d:
  pUVar29 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  pSVar13 = (System_String_o *)0x0;
  fVar36 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar23 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar23 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar24 != (System_Type_o *)0x0) &&
       (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24,(((pSVar23->obj).klass)->_1).element_class), lVar25 == 0))
    goto label_0450345a;
    if ((int)pSVar23->max_length != 0) {
      pSVar23->m_Items[0] = pSVar24;
      il2cpp_runtime_helper_022b4080(pSVar23->m_Items);
      pSVar24 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar24 != (System_Type_o *)0x0) &&
         (lVar25 = il2cpp_runtime_helper_023051f0(pSVar24,(((pSVar23->obj).klass)->_1).element_class), lVar25 == 0))
      goto label_0450345a;
      if (1 < (uint)pSVar23->max_length) {
        pSVar23->m_Items[1] = pSVar24;
        il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 1,pSVar24);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar16,pSVar13,pSVar23,(MethodInfo *)0x0);
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar26 = x;
          if ((char)bVar4 == '\0') {
            pUVar26 = UnityEngine_Component__get_transform(pUVar29,(MethodInfo *)0x0);
          }
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar9,pUVar26,0,(MethodInfo *)0x0);
            pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar17 != (Il2CppObject *)0x0) {
              (*pIVar17->klass->vtable[0x26].methodPtr)
                        (fVar36 + 10.0,pIVar17,pIVar17->klass->vtable[0x26].method);
              if (cVar30 == '\0') {
                uVar37 = 0;
              }
              else {
                uVar37 = 0x3f800000;
              }
              (*pIVar17->klass->vtable[0x28].methodPtr)(uVar37,pIVar17,pIVar17->klass->vtable[0x28].method);
              pPVar22 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar16,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar22 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar22,fVar36,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar22,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar22,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar22,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar25 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar25,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar25 + 0x20);
  if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  pSVar20 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar20,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, System_String_o* id, float width, bool liveDialog, System_String_o* alignSelf, bool fullWidth, const MethodInfo* method);
// 0x45015d0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,System_String_o *id,
               float width,bool_conflict liveDialog,System_String_o *alignSelf,bool_conflict fullWidth,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._width = width;
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  (__this->fields)._alignSelf = alignSelf;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._alignSelf,alignSelf);
  *(char *)&(__this->fields)._fullWidth = (char)fullWidth;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4501640

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  undefined1 uVar1;
  long lVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *id;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar9;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  undefined1 extraout_DL;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  long lVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_03;
  float grow;
  float shrink;
  
  if (g_data_057aed0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aed0f = '\x01';
  }
  if ((char)(__this->fields)._fullWidth == '\0') {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._width,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._alignSelf;
    shrink = 0.0;
    grow = 0.0;
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._alignSelf;
    shrink = 1.0;
    grow = 1.0;
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,pSVar8,(System_String_o *)0x0
                      ,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  __this_01 = __this;
  System_Action_object____ctor();
  pSVar8 = (__this->fields)._id;
  lVar10 = 0;
  pGVar6 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_01 = "profilePreviewDialog";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,(System_String_o *)"profilePreviewDialog",pSVar5,pSVar8,pGVar4,pGVar6,(MethodInfo *)0x0);
    lVar10 = 0;
    pGVar6 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion((MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).enter = pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enter,pGVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewTitleBar");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-title-bar");
    il2cpp_runtime_helper_023445d0(&"-body");
    g_data_057aed10 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profilePreviewTitleBar";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  id = System_String__Concat_3ae5ba0(*(System_String_o **)(lVar10 + 0x10),"-title-bar",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar11 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,pSVar8,pSVar5,id,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar8 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)(lVar10 + 0x10),"-body",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar3,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,"default",pSVar5,pSVar8,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&"-nameplate");
    g_data_057aed11 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
           System_String__Concat_3ae5ba0((System_String_o *)pSVar11->fields,"-nameplate",(MethodInfo *)0x0);
  uVar1 = *(undefined1 *)((long)&pSVar11[1].klass + 4);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_03 = __this_00 + 1;
  __this_00[1].klass = pGVar9;
  il2cpp_runtime_helper_022b4080();
  *(undefined1 *)&__this_00[1].monitor = uVar1;
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_02,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_03,(MethodInfo *)0x0);
  __this_03[1].klass = pGVar9;
  il2cpp_runtime_helper_022b4080(__this_03 + 1,pGVar9);
  *(undefined1 *)&__this_03[1].monitor = extraout_DL;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x4501810

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  undefined1 uVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  undefined1 extraout_DL;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_02;
  
  if (g_data_057aed10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewTitleBar");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-title-bar");
    il2cpp_runtime_helper_023445d0(&"-body");
    g_data_057aed10 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = "profilePreviewTitleBar";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar3);
  }
  id = System_String__Concat_3ae5ba0((__this->fields)._id,"-title-bar",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar6,pSVar3,id,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar6 = System_String__Concat_3ae5ba0((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar4,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,"default",pSVar3,pSVar6,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&"-nameplate");
    g_data_057aed11 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
           System_String__Concat_3ae5ba0((System_String_o *)pSVar8->fields,"-nameplate",(MethodInfo *)0x0);
  uVar1 = *(undefined1 *)((long)&pSVar8[1].klass + 4);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_02 = __this_00 + 1;
  __this_00[1].klass = pGVar7;
  il2cpp_runtime_helper_022b4080();
  *(undefined1 *)&__this_00[1].monitor = uVar1;
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(__this_01,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_02,(MethodInfo *)0x0);
  __this_02[1].klass = pGVar7;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,pGVar7);
  *(undefined1 *)&__this_02[1].monitor = extraout_DL;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4501b30

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  undefined1 extraout_DL;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  
  if (g_data_057aed11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&"-nameplate");
    g_data_057aed11 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
           System_String__Concat_3ae5ba0((__this->fields)._id,"-nameplate",(MethodInfo *)0x0);
  bVar1 = (__this->fields)._liveDialog;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = __this_00 + 1;
  __this_00[1].klass = pGVar2;
  il2cpp_runtime_helper_022b4080();
  *(char *)&__this_00[1].monitor = (char)bVar1;
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = pGVar2;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,pGVar2);
  *(undefined1 *)&__this_01[1].monitor = extraout_DL;
  return;
}



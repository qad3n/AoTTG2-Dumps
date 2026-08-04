// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor (const MethodInfo* method);
// 0x4501d00

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
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
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
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
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  MethodInfo *pMVar33;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar34;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  UnityEngine_Color_o UVar38;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_ffffffffffffff00;
  System_String_o *pSStack_f0;
  System_String_array *pSStack_e8;
  System_String_o *pSStack_e0;
  
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
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  pGVar34 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"CharacterNamePreview",factory,(MethodInfo *)0x0);
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
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_01,pGVar6,(MethodInfo *)0x0);
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
  __this_02 = pGVar11;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04501ff5:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = pGVar6;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0450207b;
    pMVar33 = (MethodInfo *)0x1;
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)pGVar6,1,MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    __this_02 = pGVar6;
    if (pSVar10 == (System_Object_array *)0x0) goto label_0450207b;
    uVar5 = (uint)pSVar10->max_length;
    if ((int)uVar5 < 1) {
      return;
    }
    uVar32 = 0;
    while (__this_02 = pGVar6, uVar32 < uVar5) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar10->m_Items[(int)uVar32];
      __this_02 = pGVar6;
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
       __this_02 = pGVar11, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
      goto label_04501ff5;
    }
label_0450207b:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  ppSVar7 = (System_String_array **)__this_02;
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
  pSStack_e8 = (System_String_array *)0x0;
  pGVar11 = __this_02;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSStack_e8 = (System_String_array *)0x0;
    pUVar9 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    pGVar11 = __this_00;
    if (*(char *)&(__this_02->fields).icon != '\0') {
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                          (pUVar9,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_e8 = (System_String_array *)0x0;
      uVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar31 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)(uVar5 & 0xff);
    }
    if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pSStack_e8 = "name", pGVar11 = pGVar6,
       plVar12 = (long *)(*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                                   (pGVar6,"name",
                                    *(undefined8 *)
                                     &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.
                                      this_arg.bits), plVar12 != (long *)0x0)) {
      method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)*plVar12;
      pSStack_e8 = method_00[1].fields.options;
      pSStack_e0 = (System_String_o *)(**(code **)&method_00[1].fields.maxVisibleItems)(plVar12);
      liveDialog = (int)pGVar31;
      if (liveDialog == 0) {
        pSVar14 = (System_String_array *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_e8);
        pSStack_f0 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                               ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_e8);
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_02->fields).placeholder;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (pGVar28 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar28,(SimpleJSONFixed_JSONNode_o *)pGVar6,method_02);
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"nameFont",method_03);
        pSVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"guildFont",method_04);
        pSStack_e8 = pSVar14;
      }
      else {
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                            (pUVar9,"profile-character-name",pSStack_e0,(MethodInfo *)method_00);
        pMVar33 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_00;
        }
        pSStack_e0 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar13,pMVar33);
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
        pSStack_f0 = *(System_String_o **)((MethodInfo *)*plVar12)[2].virtualMethodPointer;
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_02->fields).placeholder;
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
        pSStack_e8 = (System_String_array *)0x0;
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
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-name",pSVar13,(MethodInfo *)method_00);
        pUVar16 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-guild",pSVar15,(MethodInfo *)&"profile-character-guild");
        pSStack_e8 = pSVar14;
      }
      pPVar22 = (PatreonEffects_NameEffectLabel_o *)(__this_02->fields).style;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                         (pGVar6,"nameEffect",
                          *(undefined8 *)
                           &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar22,pSStack_e0,liveDialog,1,effect,pSVar13,in_stack_ffffffffffffff00);
      in_R8 = (MethodInfo *)
              (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                        (pGVar6,"guildEffect",
                         *(undefined8 *)
                          &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      pGVar11 = __this_02;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_02,
                 (System_String_o *)pSStack_e8,pSStack_f0,liveDialog,(SimpleJSONFixed_JSONNode_o *)in_R8,
                 pSVar15,in_stack_ffffffffffffff00);
      pSVar13 = (__this_02->fields).placeholder;
      method_00 = pGVar31;
      if (pSVar13 != (System_String_o *)0x0) {
        bVar35 = *(char *)((long)&pSVar13[2].fields._stringLength + 3) != '\0';
        pSVar13 = (__this_02->fields).textKey;
        pSVar15 = (System_String_o *)0x0;
        if (!bVar35) {
          pSVar15 = pSVar13;
        }
        uVar5 = 1;
        method_00 = __this_02;
        if (bVar35) goto label_0450259c;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_02->fields).inputType;
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSStack_e8 = (System_String_array *)0x0;
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0)
          ;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pSStack_e8 = (System_String_array *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
            pGVar11 = pGVar6;
            if ((char)bVar4 == '\0') {
              pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_02->fields).action;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = 0;
              pSStack_e8 = (System_String_array *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              pSVar13 = pSVar15;
              if ((char)bVar4 != '\0') {
                pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_02->fields).action;
                if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  pSStack_e8 = (System_String_array *)0x0;
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    pSStack_e8 = (System_String_array *)0x0;
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
  pSVar14 = pSStack_e8;
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
        if (pSStack_e8 != (System_String_array *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppSVar7 = (System_String_array **)pSStack_e8->m_Items[6];
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


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, System_String_o* id, bool liveDialog, const MethodInfo* method);
// 0x4501be0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,System_String_o *id,
               bool_conflict liveDialog,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4501dc0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_RuntimeTypeHandle_o SVar3;
  bool_conflict bVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_array **ppSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  System_Object_array *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
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
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *in_RCX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar31;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Transform_o *x;
  uint uVar32;
  MethodInfo *pMVar33;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar34;
  float fVar35;
  undefined4 uVar36;
  UnityEngine_Color_o UVar37;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_ffffffffffffff18;
  System_String_o *pSStack_d8;
  System_String_array *pSStack_d0;
  System_String_o *pSStack_c8;
  
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
    (pGVar6->fields).id = (__this->fields)._id;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
    if ((char)(__this->fields)._liveDialog == '\0') {
      ppSVar7 = *(System_String_array ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      ppSVar7 = &"live";
    }
    (pGVar6->fields).value = (System_String_o *)*ppSVar7;
    il2cpp_runtime_helper_022b4080();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
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
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,pGVar6,(MethodInfo *)0x0);
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
  __this_01 = pGVar11;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04501ff5:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = pGVar6;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0450207b;
    pMVar33 = (MethodInfo *)0x1;
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)pGVar6,1,MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    __this_01 = pGVar6;
    if (pSVar10 == (System_Object_array *)0x0) goto label_0450207b;
    uVar5 = (uint)pSVar10->max_length;
    if ((int)uVar5 < 1) {
      return;
    }
    uVar32 = 0;
    while (__this_01 = pGVar6, uVar32 < uVar5) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar10->m_Items[(int)uVar32];
      __this_01 = pGVar6;
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
       __this_01 = pGVar11, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
      goto label_04501ff5;
    }
label_0450207b:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  ppSVar7 = (System_String_array **)__this_01;
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
  pSStack_d0 = (System_String_array *)0x0;
  pGVar11 = __this_01;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSStack_d0 = (System_String_array *)0x0;
    pUVar9 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    pGVar11 = __this_00;
    if (*(char *)&(__this_01->fields).icon != '\0') {
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                          (pUVar9,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_d0 = (System_String_array *)0x0;
      uVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar31 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)(uVar5 & 0xff);
    }
    if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pSStack_d0 = "name", pGVar11 = pGVar6,
       plVar12 = (long *)(*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                                   (pGVar6,"name",
                                    *(undefined8 *)
                                     &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.
                                      this_arg.bits), plVar12 != (long *)0x0)) {
      in_RCX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)*plVar12;
      pSStack_d0 = in_RCX[1].fields.options;
      pSStack_c8 = (System_String_o *)(**(code **)&in_RCX[1].fields.maxVisibleItems)(plVar12);
      liveDialog = (int)pGVar31;
      if (liveDialog == 0) {
        pSVar14 = (System_String_array *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_d0);
        pSStack_d8 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                               ((SimpleJSONFixed_JSONNode_o *)pGVar6,(MethodInfo *)pSStack_d0);
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_01->fields).placeholder;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (pGVar28 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar28,(SimpleJSONFixed_JSONNode_o *)pGVar6,method_01);
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"nameFont",method_02);
        pSVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pGVar6,"guildFont",method_03);
        pSStack_d0 = pSVar14;
      }
      else {
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                            (pUVar9,"profile-character-name",pSStack_c8,(MethodInfo *)in_RCX);
        pMVar33 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_00;
        }
        pSStack_c8 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar13,pMVar33);
        pSVar14 = (System_String_array *)
                  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                            (pUVar9,(SimpleJSONFixed_JSONNode_o *)pGVar6,method_00);
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
        pSStack_d8 = *(System_String_o **)((MethodInfo *)*plVar12)[2].virtualMethodPointer;
        pGVar28 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)(__this_01->fields).placeholder;
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
        pSStack_d0 = (System_String_array *)0x0;
        ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                        ((System_Collections_Generic_IEnumerable_string__o *)pGVar11,(MethodInfo *)0x0);
        if (pGVar28 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar28,(System_Collections_Generic_IEnumerable_string__o *)ids,method_04);
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
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-name",pSVar13,(MethodInfo *)in_RCX);
        pUVar16 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar16,"profile-character-guild",pSVar15,(MethodInfo *)&"profile-character-guild");
        pSStack_d0 = pSVar14;
      }
      pPVar22 = (PatreonEffects_NameEffectLabel_o *)(__this_01->fields).style;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                         (pGVar6,"nameEffect",
                          *(undefined8 *)
                           &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar22,pSStack_c8,liveDialog,1,effect,pSVar13,in_stack_ffffffffffffff18);
      in_R8 = (MethodInfo *)
              (*((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.data)
                        (pGVar6,"guildEffect",
                         *(undefined8 *)
                          &((Gisketch_Aottg2UI_Styling_GisketchTheme_c *)pGVar6->klass)[1]._1.this_arg.bits);
      pGVar11 = __this_01;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_01,
                 (System_String_o *)pSStack_d0,pSStack_d8,liveDialog,(SimpleJSONFixed_JSONNode_o *)in_R8,
                 pSVar15,in_stack_ffffffffffffff18);
      pSVar13 = (__this_01->fields).placeholder;
      in_RCX = pGVar31;
      if (pSVar13 != (System_String_o *)0x0) {
        bVar34 = *(char *)((long)&pSVar13[2].fields._stringLength + 3) != '\0';
        pSVar13 = (__this_01->fields).textKey;
        pSVar15 = (System_String_o *)0x0;
        if (!bVar34) {
          pSVar15 = pSVar13;
        }
        uVar5 = 1;
        in_RCX = __this_01;
        if (bVar34) goto label_0450259c;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_01->fields).inputType;
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSStack_d0 = (System_String_array *)0x0;
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0)
          ;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pSStack_d0 = (System_String_array *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
            pGVar11 = pGVar6;
            if ((char)bVar4 == '\0') {
              pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_01->fields).action;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = 0;
              pSStack_d0 = (System_String_array *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              pSVar13 = pSVar15;
              if ((char)bVar4 != '\0') {
                pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_01->fields).action;
                if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  pSStack_d0 = (System_String_array *)0x0;
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    pSStack_d0 = (System_String_array *)0x0;
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
  pSVar14 = pSStack_d0;
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
    UVar37.fields.b = 0.13;
    UVar37.fields.a = 1.0;
    UVar37.fields.r = 0.13;
    UVar37.fields.g = 0.13;
    pSVar14 = "characterNamePreviewBg";
    UVar37 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppSVar7,(System_String_o *)"characterNamePreviewBg",
                        UVar37,(MethodInfo *)0x0);
    if (pIVar17 != (Il2CppObject *)0x0) {
      (*pIVar17->klass->vtable[0x17].methodPtr)
                (UVar37.fields.r,UVar37.fields._8_8_,pIVar17,pIVar17->klass->vtable[0x17].method);
      (*pIVar17->klass->vtable[0x19].methodPtr)(pIVar17,0,pIVar17->klass->vtable[0x19].method);
      pUVar18 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pGVar11,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup)
      ;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
      pSVar14 = (System_String_array *)&g_data_0000000f;
      in_RCX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0xa;
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
        if (pSStack_d0 != (System_String_array *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppSVar7 = (System_String_array **)pSStack_d0->m_Items[6];
          pSVar14 = "live";
          uVar5 = System_String__op_Equality
                            ((System_String_o *)ppSVar7,(System_String_o *)"live",(MethodInfo *)0x0);
          if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                      (pGVar19,pGVar2,uVar5 & 0xff,(MethodInfo *)in_RCX);
            return;
          }
        }
      }
    }
  }
  cVar30 = (char)in_RCX;
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
                        (pGVar19,pUVar9,20.0,method_05);
    (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).placeholder =
         (System_String_o *)pUVar21;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).placeholder);
    pGVar19 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
              (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar7)->fields).textKey;
    if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar19,(MethodInfo *)0x0);
      pUVar21 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                          (pGVar19,pUVar9,30.0,method_06);
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
  fVar35 = (float)il2cpp_runtime_helper_022b2c90();
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
                        (fVar35 + 10.0,pIVar17,pIVar17->klass->vtable[0x26].method);
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
  fVar35 = (float)il2cpp_runtime_helper_022b2b10(uVar27);
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
                      (pGVar28,fVar35,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
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
  fVar35 = (float)il2cpp_runtime_helper_022b2b10(uVar27);
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
                            (fVar35 * 2.9,pIVar17,pIVar17->klass->vtable[0x24].method);
                  (*pIVar17->klass->vtable[0x26].methodPtr)(fVar35,pIVar17);
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
  fVar35 = (float)il2cpp_runtime_helper_022b2b10();
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
                        (fVar35 + 10.0,pIVar17,pIVar17->klass->vtable[0x26].method);
              if (cVar30 == '\0') {
                uVar36 = 0;
              }
              else {
                uVar36 = 0x3f800000;
              }
              (*pIVar17->klass->vtable[0x28].methodPtr)(uVar36,pIVar17,pIVar17->klass->vtable[0x28].method);
              pPVar22 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar16,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar22 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar22,fVar35,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4501f70

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_RuntimeTypeHandle_o SVar3;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_Transform_o *pUVar6;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  System_Object_array *pSVar8;
  PatreonEffects_NameEffectLabel_o *pPVar9;
  PatreonEffects_NameEffectLabel_o *__this;
  long *plVar10;
  System_String_o *pSVar11;
  System_String_array *ids;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar12;
  SimpleJSONFixed_JSONNode_o *effect;
  PatreonEffects_NameEffectLabel_o *pPVar13;
  Il2CppObject *pIVar14;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar15;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar16;
  System_Action_string__o *pSVar17;
  UnityEngine_UI_Image_o *pUVar18;
  System_Type_array *pSVar19;
  System_Type_o *pSVar20;
  long lVar21;
  UnityEngine_Transform_o *pUVar22;
  undefined8 uVar23;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar24;
  UnityEngine_Component_o *pUVar25;
  char cVar26;
  PatreonEffects_NameEffectLabel_o *in_RCX;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Transform_o *x;
  UnityEngine_GameObject_o *pUVar27;
  uint uVar28;
  MethodInfo *pMVar29;
  MethodInfo **ppMVar30;
  MethodInfo *pMVar31;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar32;
  float fVar33;
  UnityEngine_Color_o UVar34;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_ffffffffffffff80;
  System_String_o *pSStack_70;
  MethodInfo *pMStack_68;
  System_String_o *pSStack_60;
  
  if (g_data_057aed16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed16 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar7 = (PatreonEffects_NameEffectLabel_o *)0x0;
  pPVar13 = (PatreonEffects_NameEffectLabel_o *)source;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04501ff5:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar13 = pPVar7;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0450207b;
    pMVar29 = (MethodInfo *)0x1;
    pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pPVar7,1,MethodInfo_AottgCharacterNamePreviewRuntime_GetComponentsInChildren);
    pPVar13 = pPVar7;
    if (pSVar8 == (System_Object_array *)0x0) goto label_0450207b;
    uVar5 = (uint)pSVar8->max_length;
    if ((int)uVar5 < 1) {
      return;
    }
    uVar28 = 0;
    while (pPVar13 = pPVar7, uVar28 < uVar5) {
      pPVar7 = (PatreonEffects_NameEffectLabel_o *)pSVar8->m_Items[(int)uVar28];
      pPVar13 = pPVar7;
      if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0450207b;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pPVar7,pMVar29);
      uVar28 = uVar28 + 1;
      uVar5 = (uint)pSVar8->max_length;
      if ((int)uVar5 <= (int)uVar28) {
        return;
      }
    }
  }
  else {
    if ((source != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pPVar13 = (PatreonEffects_NameEffectLabel_o *)source, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      pPVar7 = (PatreonEffects_NameEffectLabel_o *)UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0);
      goto label_04501ff5;
    }
label_0450207b:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  ppMVar30 = (MethodInfo **)pPVar13;
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
    ppMVar30 = &"name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed1a = '\x01';
  }
  pPVar9 = (PatreonEffects_NameEffectLabel_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)ppMVar30);
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0;
  pMStack_68 = (MethodInfo *)0x0;
  pPVar7 = pPVar13;
  __this = (PatreonEffects_NameEffectLabel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar13,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    pMStack_68 = (MethodInfo *)0x0;
    pUVar6 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
    pPVar7 = __this;
    if ((char)((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->
              _liveDialog != '\0') {
      pPVar7 = (PatreonEffects_NameEffectLabel_o *)
               Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                         (pUVar6,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_68 = (MethodInfo *)0x0;
      uVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar16 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(ulong)(uVar5 & 0xff);
    }
    if ((pPVar9 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
       (pMStack_68 = "name", pPVar7 = pPVar9,
       plVar10 = (long *)(*(((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg)->_0_Equals).
                           methodPtr)(pPVar9,"name",
                                      (((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg.bits)->
                                      _0_Equals).methodPtr), plVar10 != (long *)0x0)) {
      in_RCX = (PatreonEffects_NameEffectLabel_o *)*plVar10;
      pMStack_68 = (MethodInfo *)
                   ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)
                   &(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)((long)in_RCX + 0x180))->
                    fields)._guildPresetEffect)->m_CachedPtr;
      pSStack_60 = (System_String_o *)
                   (*(code *)((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)
                             &(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                               ((long)in_RCX + 0x180))->fields)._guildPresetImage)->m_CachedPtr)(plVar10);
      liveDialog = (int)pGVar16;
      if (liveDialog == 0) {
        pMVar29 = (MethodInfo *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pPVar9,pMStack_68);
        pSStack_70 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                               ((SimpleJSONFixed_JSONNode_o *)pPVar9,pMStack_68);
        pGVar24 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->
                  _guildBadges;
        pPVar7 = (PatreonEffects_NameEffectLabel_o *)0x0;
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar24,(SimpleJSONFixed_JSONNode_o *)pPVar9,method_01);
        pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                            ((SimpleJSONFixed_JSONNode_o *)pPVar9,"nameFont",method_02);
        font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                         ((SimpleJSONFixed_JSONNode_o *)pPVar9,"guildFont",method_03);
        pMStack_68 = pMVar29;
      }
      else {
        pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                            (pUVar6,"profile-character-name",pSStack_60,(MethodInfo *)in_RCX);
        pMVar29 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar29 = extraout_RDX_00;
        }
        pSStack_60 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar11,pMVar29);
        pMVar29 = (MethodInfo *)
                  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                            (pUVar6,(SimpleJSONFixed_JSONNode_o *)pPVar9,method_00);
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
          ppMVar30 = &TypeInfo_AottgEditCharacterDialog;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            ppMVar30 = &TypeInfo_AottgEditCharacterDialog;
          }
        }
        else {
          if (g_data_057aeda8 == '\0') goto label_04502325;
label_04502277:
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_0450234c;
label_0450228b:
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) goto label_0450236c;
label_0450229c:
          ppMVar30 = (MethodInfo **)&g_data_057b9c00;
        }
        pSStack_70 = *(System_String_o **)(*ppMVar30)[2].virtualMethodPointer;
        pGVar24 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->
                  _guildBadges;
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
        pPVar7 = *(PatreonEffects_NameEffectLabel_o **)(TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer + 0x30);
        pMStack_68 = (MethodInfo *)0x0;
        ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                        ((System_Collections_Generic_IEnumerable_string__o *)pPVar7,(MethodInfo *)0x0);
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar24,(System_Collections_Generic_IEnumerable_string__o *)ids,method_04);
        pMVar31 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar31);
        pMVar31 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar31);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-name",pSVar11,(MethodInfo *)in_RCX);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar13,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-guild",font,(MethodInfo *)&"profile-character-guild");
        pMStack_68 = pMVar29;
      }
      pPVar7 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->_name;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*(((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg)->_0_Equals).methodPtr)
                         (pPVar9,"nameEffect",
                          (((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg.bits)->_0_Equals).
                          methodPtr);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar7,pSStack_60,liveDialog,1,effect,pSVar11,in_stack_ffffffffffffff80);
      in_R8 = (MethodInfo *)
              (*(((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg)->_0_Equals).methodPtr)
                        (pPVar9,"guildEffect",
                         (((UnityEngine_Component_VTable *)&pPVar9->klass[1]._1.this_arg.bits)->_0_Equals).
                         methodPtr);
      pPVar7 = pPVar13;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pPVar13,
                 (System_String_o *)pMStack_68,pSStack_70,liveDialog,(SimpleJSONFixed_JSONNode_o *)in_R8,font,
                 in_stack_ffffffffffffff80);
      pGVar24 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->
                _guildBadges;
      in_RCX = (PatreonEffects_NameEffectLabel_o *)pGVar16;
      if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        bVar32 = *(undefined1 *)((long)&(pGVar24->fields)._controlsActive + 3) != '\0';
        pUVar12 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->
                  _guildRow;
        pUVar27 = (UnityEngine_GameObject_o *)0x0;
        if (!bVar32) {
          pUVar27 = pUVar12;
        }
        uVar5 = 1;
        in_RCX = pPVar13;
        if (bVar32) goto label_0450259c;
        pPVar7 = ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Fields *)&pPVar13->fields)->_guild;
        if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          pMStack_68 = (MethodInfo *)0x0;
          pPVar9 = (PatreonEffects_NameEffectLabel_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar7,(MethodInfo *)0x0);
          if (pPVar9 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            pMStack_68 = (MethodInfo *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pPVar9,(MethodInfo *)0x0);
            pPVar7 = pPVar9;
            if ((char)bVar4 == '\0') {
              pPVar7 = *(PatreonEffects_NameEffectLabel_o **)&(pPVar13->fields)._color.fields.a;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = 0;
              pMStack_68 = (MethodInfo *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              pUVar12 = pUVar27;
              if ((char)bVar4 != '\0') {
                pPVar7 = *(PatreonEffects_NameEffectLabel_o **)&(pPVar13->fields)._color.fields.a;
                if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                  pMStack_68 = (MethodInfo *)0x0;
                  pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pPVar7,(MethodInfo *)0x0);
                  if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                    pMStack_68 = (MethodInfo *)0x0;
                    uVar5 = UnityEngine_GameObject__get_activeSelf
                                      ((UnityEngine_GameObject_o *)pPVar13,(MethodInfo *)0x0);
                    pPVar7 = pPVar13;
                    goto label_0450259c;
                  }
                }
                goto label_045025ff;
              }
            }
label_0450259c:
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar12,uVar5 & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_045025ff:
  il2cpp_runtime_helper_022b2c90();
  pMVar29 = pMStack_68;
  ppMVar30 = (MethodInfo **)pPVar7;
  if (g_data_057aed17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&"characterNamePreviewBg");
    ppMVar30 = &"live";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed17 = '\x01';
  }
  if (((pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
      (pMVar29 = MethodInfo_Image_AddComponent_Image, ppMVar30 = (MethodInfo **)pPVar7,
      pIVar14 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)pPVar7,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image),
      extraout_RDX_01 != 0)) &&
     (ppMVar30 = *(MethodInfo ***)(extraout_RDX_01 + 0x18),
     (PatreonEffects_NameEffectLabel_o *)ppMVar30 != (PatreonEffects_NameEffectLabel_o *)0x0)) {
    UVar34.fields.b = 0.13;
    UVar34.fields.a = 1.0;
    UVar34.fields.r = 0.13;
    UVar34.fields.g = 0.13;
    pMVar29 = "characterNamePreviewBg";
    UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppMVar30,(System_String_o *)"characterNamePreviewBg",
                        UVar34,(MethodInfo *)0x0);
    if (pIVar14 != (Il2CppObject *)0x0) {
      (*pIVar14->klass->vtable[0x17].methodPtr)
                (UVar34.fields._0_8_,UVar34.fields._8_8_,pIVar14,pIVar14->klass->vtable[0x17].method);
      (*pIVar14->klass->vtable[0x19].methodPtr)(pIVar14,0,pIVar14->klass->vtable[0x19].method);
      pUVar15 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar7,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
      pMVar29 = (MethodInfo *)&g_data_0000000f;
      in_RCX = (PatreonEffects_NameEffectLabel_o *)0xa;
      in_R8 = (MethodInfo *)0xa;
      ppMVar30 = (MethodInfo **)pPVar13;
      UnityEngine_RectOffset___ctor_4dbeaf0
                ((UnityEngine_RectOffset_o *)pPVar13,0xf,0xf,10,10,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_padding
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar15,(UnityEngine_RectOffset_o *)pPVar13,
                   (MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar15,2.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar15,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar15,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar15,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(pUVar15,0,(MethodInfo *)0x0)
        ;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (pUVar15,0,(MethodInfo *)0x0);
        pMVar29 = MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara;
        pGVar16 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pPVar7,(MethodInfo_255A020 *)MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
        ppMVar30 = (MethodInfo **)pPVar7;
        if (pMStack_68 != (MethodInfo *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppMVar30 = *(MethodInfo ***)&pMStack_68->slot;
          pMVar29 = "live";
          uVar5 = System_String__op_Equality
                            ((System_String_o *)ppMVar30,(System_String_o *)"live",(MethodInfo *)0x0);
          if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                      (pGVar16,pGVar2,uVar5 & 0xff,(MethodInfo *)in_RCX);
            return;
          }
        }
      }
    }
  }
  cVar26 = (char)in_RCX;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._prefix = (System_String_o *)pMVar29;
  il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._prefix,pMVar29);
  *(undefined1 *)&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._prefixTmp = extraout_DL;
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
           (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._prefix;
  pMVar29 = extraout_RDX_02;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar17 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar26 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar17,(MethodInfo *)0x0);
    pMVar29 = extraout_RDX_03;
  }
  pUVar18 = (UnityEngine_UI_Image_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                      ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppMVar30,"AoTTG Preview Guild Row",20.0
                       ,pMVar29);
  (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._name = (System_String_o *)pUVar18;
  il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._name);
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
            (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._name;
  if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar16,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                        (pGVar16,pUVar6,20.0,method_05);
    (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._suffix = (System_String_o *)pUVar18;
    il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._suffix);
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
              (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._name;
    if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar16,(MethodInfo *)0x0);
      pUVar18 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                          (pGVar16,pUVar6,30.0,method_06);
      *(UnityEngine_UI_Image_o **)&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._color.fields.a =
           pUVar18;
      il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._color.fields.a);
      pSVar11 = (((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._name;
      if (pSVar11 != (System_String_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar11,(MethodInfo *)0x0);
        pPVar7 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppMVar30,"AoTTG Preview Guild"
                            ,20.0,pUVar6,0,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)
         &(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._fontSize = pPVar7;
        il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._fontSize,pPVar7);
        pPVar7 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppMVar30,"AoTTG Preview Name"
                            ,20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)
         &(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._color.fields.g = pPVar7;
        il2cpp_runtime_helper_022b4080(&(((PatreonEffects_NameEffectLabel_o *)ppMVar30)->fields)._color.fields.g);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppMVar30,(MethodInfo *)pPVar7)
        ;
        return;
      }
    }
  }
  pUVar25 = (UnityEngine_Component_o *)0x0;
  fVar33 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502c5d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,(System_String_o *)pUVar18,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            cVar26 = '\0';
            UnityEngine_Transform__SetParent_4e09e30(pUVar6,pUVar22,0,(MethodInfo *)0x0);
            pIVar14 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar14 != (Il2CppObject *)0x0) {
              (*pIVar14->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar33 + 10.0),pIVar14,pIVar14->klass->vtable[0x26].method);
              (*pIVar14->klass->vtable[0x28].methodPtr)
                        (0x3f800000,pIVar14,pIVar14->klass->vtable[0x28].method);
              pUVar15 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
              if (pUVar15 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)pUVar15,4,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (pUVar15,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (pUVar15,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (pUVar15,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (pUVar15,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar15,5.0,(MethodInfo *)0x0);
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
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  fVar33 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502e58;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Badges",pSVar19,(MethodInfo *)0x0);
        if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
           pUVar22 != (UnityEngine_Transform_o *)0x0)) {
          cVar26 = '\0';
          UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar6,0,(MethodInfo *)0x0);
          pGVar24 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
          if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (pGVar24,fVar33,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
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
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  fVar33 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
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
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_0450318d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1);
        pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
        goto label_0450318d;
        if (2 < (uint)pSVar19->max_length) {
          pSVar19->m_Items[2] = pSVar20;
          il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 2);
          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
          goto label_0450318d;
          if (3 < (uint)pSVar19->max_length) {
            pSVar19->m_Items[3] = pSVar20;
            il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 3,pSVar20);
            pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            cVar26 = '\0';
            UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Preset Image",pSVar19,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
               pUVar22 != (UnityEngine_Transform_o *)0x0)) {
              cVar26 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar6,0,(MethodInfo *)0x0);
              pUVar18 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
              if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar18->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar18,0,(pUVar18->klass->vtable)._25_set_raycastTarget.method);
                UnityEngine_UI_Image__set_preserveAspect(pUVar18,1,(MethodInfo *)0x0);
                pIVar14 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar14 != (Il2CppObject *)0x0) {
                  (*pIVar14->klass->vtable[0x24].methodPtr)
                            ((ulong)(uint)(fVar33 * 2.9),pIVar14,pIVar14->klass->vtable[0x24].method);
                  (*pIVar14->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar33,pIVar14);
                  UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
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
  pUVar25 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  pSVar11 = (System_String_o *)0x0;
  fVar33 = (float)il2cpp_runtime_helper_022b2b10();
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
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar20 != (System_Type_o *)0x0) &&
       (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
    goto label_0450345a;
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) &&
         (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
      goto label_0450345a;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,pSVar11,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar22 = x;
          if ((char)bVar4 == '\0') {
            pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          }
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar6,pUVar22,0,(MethodInfo *)0x0);
            pIVar14 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar14 != (Il2CppObject *)0x0) {
              (*pIVar14->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar33 + 10.0),pIVar14,pIVar14->klass->vtable[0x26].method);
              if (cVar26 == '\0') {
                uVar5 = 0;
              }
              else {
                uVar5 = 0x3f800000;
              }
              (*pIVar14->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar5,pIVar14,pIVar14->klass->vtable[0x28].method);
              pPVar7 = (PatreonEffects_NameEffectLabel_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar7,fVar33,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar7,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar7,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar7,1,(MethodInfo *)0x0);
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
  lVar21 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar21,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar21 + 0x20);
  if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  pSVar17 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar17,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$BuildPreview
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4502610

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_RuntimeTypeHandle_o SVar2;
  uint uVar3;
  bool_conflict extraout_EAX;
  bool_conflict bVar4;
  bool_conflict extraout_EAX_00;
  Il2CppObject *pIVar5;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar7;
  undefined8 extraout_RAX;
  System_Action_string__o *pSVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  PatreonEffects_NameEffectLabel_o *pPVar11;
  System_Type_array *pSVar12;
  System_Type_o *pSVar13;
  long lVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  undefined8 uVar17;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this;
  UnityEngine_Component_o *pUVar18;
  char cVar19;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Transform_o *x;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar20;
  System_String_o *name;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **__this_00;
  float fVar21;
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_o value;
  
  pGVar20 = node;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)go;
  if (g_data_057aed17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&"characterNamePreviewBg");
    __this_00 = &"live";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed17 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar20 = MethodInfo_Image_AddComponent_Image;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)go;
    pIVar5 = UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (__this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(context->fields).Theme,
       (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00 !=
       (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0)) {
      UVar22.fields.b = 0.13;
      UVar22.fields.a = 1.0;
      UVar22.fields.r = 0.13;
      UVar22.fields.g = 0.13;
      pGVar20 = "characterNamePreviewBg";
      UVar22 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_00,
                          (System_String_o *)"characterNamePreviewBg",UVar22,(MethodInfo *)0x0);
      if (pIVar5 != (Il2CppObject *)0x0) {
        (*pIVar5->klass->vtable[0x17].methodPtr)
                  (UVar22.fields._0_8_,UVar22.fields._8_8_,pIVar5,pIVar5->klass->vtable[0x17].method);
        (*pIVar5->klass->vtable[0x19].methodPtr)(pIVar5,0,pIVar5->klass->vtable[0x19].method);
        pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                 UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
        pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset)
        ;
        pGVar20 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&g_data_0000000f;
        view = (Gisketch_Aottg2UI_Building_GisketchView_o *)0xa;
        method = (MethodInfo *)0xa;
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)pGVar7;
        UnityEngine_RectOffset___ctor_4dbeaf0
                  ((UnityEngine_RectOffset_o *)pGVar7,0xf,0xf,10,10,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_padding
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar6,(UnityEngine_RectOffset_o *)pGVar7,
                     (MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,2.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar6,1,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar6,1,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    (pUVar6,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    (pUVar6,0,(MethodInfo *)0x0);
          pGVar20 = MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara;
          pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                   UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
          __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)go;
          if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pGVar1 = (context->fields).State;
            __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(node->fields).value;
            pGVar20 = "live";
            uVar3 = System_String__op_Equality
                              ((System_String_o *)__this_00,(System_String_o *)"live",(MethodInfo *)0x0)
            ;
            if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                        (pGVar7,pGVar1,uVar3 & 0xff,(MethodInfo *)view);
              return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
            }
          }
        }
      }
    }
  }
  cVar19 = (char)view;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._state =
       (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar20;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields).
                      _state,pGVar20);
  *(undefined1 *)
   &(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._liveDialog =
       extraout_DL;
  pGVar1 = (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._state;
  method_00 = extraout_RDX;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar8 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar19 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar1,pSVar8,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar9 = (UnityEngine_UI_Image_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                     ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00,"AoTTG Preview Guild Row",20.0
                      ,method_00);
  (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildRow =
       (UnityEngine_GameObject_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields).
                      _guildRow);
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
           (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildRow;
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar7,(MethodInfo *)0x0);
    pUVar9 = (UnityEngine_UI_Image_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                       (pGVar7,pUVar10,20.0,method_01);
    (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildBadges =
         (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)pUVar9;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields).
                        _guildBadges);
    pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
             (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildRow;
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar7,(MethodInfo *)0x0);
      pUVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                         (pGVar7,pUVar10,30.0,method_02);
      (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildPresetImage =
           pUVar9;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields).
                          _guildPresetImage);
      pUVar15 = (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guildRow;
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        pUVar10 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
        pPVar11 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00,
                             "AoTTG Preview Guild",20.0,pUVar10,0,method);
        (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._guild = pPVar11;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)
                            ._guild,pPVar11);
        pPVar11 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00,
                             "AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,1,method);
        (((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)._name = pPVar11;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00)->fields)
                            ._name);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_00,
                   (MethodInfo *)pPVar11);
        return extraout_EAX;
      }
    }
  }
  pUVar18 = (UnityEngine_Component_o *)0x0;
  fVar21 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar12 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar13 == (System_Type_o *)0x0) {
label_04502ab2:
      if ((int)pSVar12->max_length != 0) {
        pSVar12->m_Items[0] = pSVar13;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
        pSVar13 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar13 != (System_Type_o *)0x0) {
          lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar14 == 0) goto label_04502c5d;
        }
        if (1 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[1] = pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1,pSVar13);
          pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          cVar19 = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar15,(System_String_o *)pUVar9,pSVar12,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            pUVar10 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
            pUVar16 = UnityEngine_Component__get_transform(pUVar18,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              cVar19 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar16,0,(MethodInfo *)0x0);
              pIVar5 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar5 != (Il2CppObject *)0x0) {
                (*pIVar5->klass->vtable[0x26].methodPtr)
                          ((ulong)(uint)(fVar21 + 10.0),pIVar5,pIVar5->klass->vtable[0x26].method);
                (*pIVar5->klass->vtable[0x28].methodPtr)(0x3f800000,pIVar5,pIVar5->klass->vtable[0x28].method)
                ;
                pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                         UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
                if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            (pUVar6,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            (pUVar6,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            (pUVar6,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            (pUVar6,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,5.0,(MethodInfo *)0x0);
                  return (bool_conflict)pUVar15;
                }
              }
            }
          }
          goto label_04502c53;
        }
      }
      goto label_04502c58;
    }
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
    if (lVar14 != 0) goto label_04502ab2;
  }
label_04502c5d:
  uVar17 = il2cpp_runtime_helper_0231b270();
  pUVar10 = (UnityEngine_Transform_o *)0x0;
  fVar21 = (float)il2cpp_runtime_helper_022b2b10(uVar17);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar12 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar13 == (System_Type_o *)0x0) {
label_04502d4a:
      if ((int)pSVar12->max_length != 0) {
        pSVar12->m_Items[0] = pSVar13;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
        pSVar13 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar13 != (System_Type_o *)0x0) {
          lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar14 == 0) goto label_04502e58;
        }
        if (1 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[1] = pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1,pSVar13);
          pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          cVar19 = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar15,"AoTTG Preview Guild Badges",pSVar12,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
              cVar19 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar16,pUVar10,0,(MethodInfo *)0x0);
              __this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
              if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                          (__this,fVar21,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                           (System_String_o *)0x0,1,method);
                return (bool_conflict)__this;
              }
            }
          }
          goto label_04502e4e;
        }
      }
      goto label_04502e53;
    }
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
    if (lVar14 != 0) goto label_04502d4a;
  }
label_04502e58:
  uVar17 = il2cpp_runtime_helper_0231b270();
  pUVar10 = (UnityEngine_Transform_o *)0x0;
  fVar21 = (float)il2cpp_runtime_helper_022b2b10(uVar17);
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
  pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar12 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar13 == (System_Type_o *)0x0) {
label_04502f6e:
      if ((int)pSVar12->max_length != 0) {
        pSVar12->m_Items[0] = pSVar13;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
        pSVar13 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar13 != (System_Type_o *)0x0) {
          lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar14 == 0) goto label_0450318d;
        }
        if (1 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[1] = pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
          pSVar13 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if (pSVar13 != (System_Type_o *)0x0) {
            lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
            if (lVar14 == 0) goto label_0450318d;
          }
          if (2 < (uint)pSVar12->max_length) {
            pSVar12->m_Items[2] = pSVar13;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2);
            pSVar13 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if (pSVar13 != (System_Type_o *)0x0) {
              lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
              if (lVar14 == 0) goto label_0450318d;
            }
            if (3 < (uint)pSVar12->max_length) {
              pSVar12->m_Items[3] = pSVar13;
              il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 3,pSVar13);
              pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              cVar19 = '\0';
              UnityEngine_GameObject___ctor_4dfc440(pUVar15,"AoTTG Preview Guild Preset Image",pSVar12,(MethodInfo *)0x0);
              if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  cVar19 = '\0';
                  UnityEngine_Transform__SetParent_4e09e30(pUVar16,pUVar10,0,(MethodInfo *)0x0);
                  pUVar9 = (UnityEngine_UI_Image_o *)
                           UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Image_GetComponent_Image);
                  if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar9,0,(pUVar9->klass->vtable)._25_set_raycastTarget.method);
                    UnityEngine_UI_Image__set_preserveAspect(pUVar9,1,(MethodInfo *)0x0);
                    pIVar5 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar5 != (Il2CppObject *)0x0) {
                      (*pIVar5->klass->vtable[0x24].methodPtr)
                                ((ulong)(uint)(fVar21 * 2.9),pIVar5,pIVar5->klass->vtable[0x24].method);
                      (*pIVar5->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar21,pIVar5);
                      UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
                      return (bool_conflict)pUVar9;
                    }
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
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
    if (lVar14 != 0) goto label_04502f6e;
  }
label_0450318d:
  pUVar18 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  name = (System_String_o *)0x0;
  fVar21 = (float)il2cpp_runtime_helper_022b2b10();
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
  pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar12 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar13 != (System_Type_o *)0x0) {
      lVar14 = il2cpp_runtime_helper_023051f0(pSVar13,(((pSVar12->obj).klass)->_1).element_class);
      if (lVar14 == 0) goto label_0450345a;
    }
    if ((int)pSVar12->max_length != 0) {
      pSVar12->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
      pSVar13 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar13 != (System_Type_o *)0x0) {
        lVar14 = il2cpp_runtime_helper_023051f0(pSVar13,(((pSVar12->obj).klass)->_1).element_class);
        if (lVar14 == 0) goto label_0450345a;
      }
      if (1 < (uint)pSVar12->max_length) {
        pSVar12->m_Items[1] = pSVar13;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1,pSVar13);
        pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar15,name,pSVar12,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar16 = x;
          if ((char)bVar4 == '\0') {
            pUVar16 = UnityEngine_Component__get_transform(pUVar18,(MethodInfo *)0x0);
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar16,0,(MethodInfo *)0x0);
            pIVar5 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar5 != (Il2CppObject *)0x0) {
              (*pIVar5->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar21 + 10.0),pIVar5,pIVar5->klass->vtable[0x26].method);
              if (cVar19 == '\0') {
                uVar3 = 0;
              }
              else {
                uVar3 = 0x3f800000;
              }
              (*pIVar5->klass->vtable[0x28].methodPtr)((ulong)uVar3,pIVar5,pIVar5->klass->vtable[0x28].method)
              ;
              pPVar11 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar11 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar11,fVar21,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar11,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar11,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar11,1,(MethodInfo *)0x0);
                return (bool_conflict)pPVar11;
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
  lVar14 = il2cpp_runtime_helper_0231b270();
  bVar4 = il2cpp_runtime_helper_022b2b10(lVar14,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    bVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar1 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar14 + 0x20);
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar8 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar1,pSVar8,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  return bVar4;
}


